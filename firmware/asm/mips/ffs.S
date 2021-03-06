/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2009 by Maurus Cuelenaere
 * based on ffs-arm.S by Michael Sevakis
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

#include "config.h"
#include "mips.h"

/****************************************************************************
 * int find_first_set_bit(uint32_t val);
 *
 * Find the index of the least significant set bit in the 32-bit word.
 *
 * return values:
 *   0  - bit 0 is set
 *   1  - bit 1 is set
 *   ...
 *   31 - bit 31 is set
 *   32 - no bits set
 ****************************************************************************/
    .align  2
    .global find_first_set_bit
    .type   find_first_set_bit, %function
    .set    noreorder
    .set    noat
    
find_first_set_bit:
    beqz    a0, l                    # if(a0 == 0) goto l
    nop                              #
    negu    t0, a0                   # t0 = -a0
    and     t0, a0, t0               # t0 = a0 & t0
    clz     v0, t0                   # get lead 0's count
    li      t0, 31                   # t0 = 31
    jr      ra                       #
    subu    v0, t0, v0               # v0 = t0 - v0

l:
    jr      ra                       #
    li      v0, 32                   # v0 = 32
    
    .set    reorder
    .set    at
