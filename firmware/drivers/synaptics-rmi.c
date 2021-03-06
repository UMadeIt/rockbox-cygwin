/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2011 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#include "system.h"
#include "synaptics-rmi.h"
#include "i2c.h"

static int rmi_cur_page;
static int rmi_i2c_addr;

static unsigned char dev_ctl_reg;

/* NOTE:
 * RMI over i2c supports some special aliases on page 0x2 but this driver don't
 * use them */

int rmi_init(int i2c_dev_addr)
{
    rmi_i2c_addr = i2c_dev_addr;
    rmi_cur_page = 0x4;
    dev_ctl_reg = rmi_read_single(RMI_DEVICE_CONTROL);
    return 0;
}

static int rmi_select_page(unsigned char page)
{
    /* Lazy page select */
    if(page != rmi_cur_page)
    {
        rmi_cur_page = page;
        return i2c_writemem(rmi_i2c_addr, RMI_PAGE_SELECT, &page, 1);
    }
    else
        return 0;
}

int rmi_read(int address, int byte_count, unsigned char *buffer)
{
    int ret;
    if((ret = rmi_select_page(address >> 8)) < 0)
        return ret;
    return i2c_readmem(rmi_i2c_addr, address & 0xff, buffer, byte_count);
}

int rmi_read_single(int address)
{
    unsigned char c;
    int ret = rmi_read(address, 1, &c);
    return ret < 0 ? ret : c;
}

int rmi_write(int address, int byte_count, const unsigned char *buffer)
{
    int ret;
    if((ret = rmi_select_page(address >> 8)) < 0)
        return ret;
    return i2c_writemem(rmi_i2c_addr, address & 0xff, buffer, byte_count);
}

int rmi_write_single(int address, unsigned char byte)
{
    return rmi_write(address, 1, &byte);
}

/* set the device to the given sleep mode */
void rmi_set_sleep_mode(unsigned char sleep_mode)
{
    /* valid value different from the actual one*/
    if((dev_ctl_reg & RMI_SLEEP_MODE_BM) != sleep_mode)
    {
        dev_ctl_reg &= ~RMI_SLEEP_MODE_BM;
        dev_ctl_reg |= sleep_mode;
        rmi_write_single(RMI_DEVICE_CONTROL, dev_ctl_reg);
    }
}

/* set the device's report rate to the given value */
void rmi_set_report_rate(unsigned char report_rate)
{
    /* valid value different from the actual one*/
    if((dev_ctl_reg & RMI_REPORT_RATE_BM) != report_rate)
    {
        dev_ctl_reg &= ~RMI_REPORT_RATE_BM;
        dev_ctl_reg |= report_rate;
        rmi_write_single(RMI_DEVICE_CONTROL, dev_ctl_reg);
    }
}
