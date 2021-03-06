/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: imx233:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
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
#ifndef __HEADERGEN__IMX233__GPMI__H__
#define __HEADERGEN__IMX233__GPMI__H__

#define REGS_GPMI_BASE (0x8000c000)

#define REGS_GPMI_VERSION "3.2.0"

/**
 * Register: HW_GPMI_CTRL0
 * Address: 0
 * SCT: yes
*/
#define HW_GPMI_CTRL0                                   (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x0 + 0x0))
#define HW_GPMI_CTRL0_SET                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x0 + 0x4))
#define HW_GPMI_CTRL0_CLR                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x0 + 0x8))
#define HW_GPMI_CTRL0_TOG                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x0 + 0xc))
#define BP_GPMI_CTRL0_SFTRST                            31
#define BM_GPMI_CTRL0_SFTRST                            0x80000000
#define BV_GPMI_CTRL0_SFTRST__RUN                       0x0
#define BV_GPMI_CTRL0_SFTRST__RESET                     0x1
#define BF_GPMI_CTRL0_SFTRST(v)                         (((v) << 31) & 0x80000000)
#define BF_GPMI_CTRL0_SFTRST_V(v)                       ((BV_GPMI_CTRL0_SFTRST__##v << 31) & 0x80000000)
#define BP_GPMI_CTRL0_CLKGATE                           30
#define BM_GPMI_CTRL0_CLKGATE                           0x40000000
#define BV_GPMI_CTRL0_CLKGATE__RUN                      0x0
#define BV_GPMI_CTRL0_CLKGATE__NO_CLKS                  0x1
#define BF_GPMI_CTRL0_CLKGATE(v)                        (((v) << 30) & 0x40000000)
#define BF_GPMI_CTRL0_CLKGATE_V(v)                      ((BV_GPMI_CTRL0_CLKGATE__##v << 30) & 0x40000000)
#define BP_GPMI_CTRL0_RUN                               29
#define BM_GPMI_CTRL0_RUN                               0x20000000
#define BV_GPMI_CTRL0_RUN__IDLE                         0x0
#define BV_GPMI_CTRL0_RUN__BUSY                         0x1
#define BF_GPMI_CTRL0_RUN(v)                            (((v) << 29) & 0x20000000)
#define BF_GPMI_CTRL0_RUN_V(v)                          ((BV_GPMI_CTRL0_RUN__##v << 29) & 0x20000000)
#define BP_GPMI_CTRL0_DEV_IRQ_EN                        28
#define BM_GPMI_CTRL0_DEV_IRQ_EN                        0x10000000
#define BF_GPMI_CTRL0_DEV_IRQ_EN(v)                     (((v) << 28) & 0x10000000)
#define BP_GPMI_CTRL0_TIMEOUT_IRQ_EN                    27
#define BM_GPMI_CTRL0_TIMEOUT_IRQ_EN                    0x8000000
#define BF_GPMI_CTRL0_TIMEOUT_IRQ_EN(v)                 (((v) << 27) & 0x8000000)
#define BP_GPMI_CTRL0_UDMA                              26
#define BM_GPMI_CTRL0_UDMA                              0x4000000
#define BV_GPMI_CTRL0_UDMA__DISABLED                    0x0
#define BV_GPMI_CTRL0_UDMA__ENABLED                     0x1
#define BF_GPMI_CTRL0_UDMA(v)                           (((v) << 26) & 0x4000000)
#define BF_GPMI_CTRL0_UDMA_V(v)                         ((BV_GPMI_CTRL0_UDMA__##v << 26) & 0x4000000)
#define BP_GPMI_CTRL0_COMMAND_MODE                      24
#define BM_GPMI_CTRL0_COMMAND_MODE                      0x3000000
#define BV_GPMI_CTRL0_COMMAND_MODE__WRITE               0x0
#define BV_GPMI_CTRL0_COMMAND_MODE__READ                0x1
#define BV_GPMI_CTRL0_COMMAND_MODE__READ_AND_COMPARE    0x2
#define BV_GPMI_CTRL0_COMMAND_MODE__WAIT_FOR_READY      0x3
#define BF_GPMI_CTRL0_COMMAND_MODE(v)                   (((v) << 24) & 0x3000000)
#define BF_GPMI_CTRL0_COMMAND_MODE_V(v)                 ((BV_GPMI_CTRL0_COMMAND_MODE__##v << 24) & 0x3000000)
#define BP_GPMI_CTRL0_WORD_LENGTH                       23
#define BM_GPMI_CTRL0_WORD_LENGTH                       0x800000
#define BV_GPMI_CTRL0_WORD_LENGTH__16_BIT               0x0
#define BV_GPMI_CTRL0_WORD_LENGTH__8_BIT                0x1
#define BF_GPMI_CTRL0_WORD_LENGTH(v)                    (((v) << 23) & 0x800000)
#define BF_GPMI_CTRL0_WORD_LENGTH_V(v)                  ((BV_GPMI_CTRL0_WORD_LENGTH__##v << 23) & 0x800000)
#define BP_GPMI_CTRL0_LOCK_CS                           22
#define BM_GPMI_CTRL0_LOCK_CS                           0x400000
#define BV_GPMI_CTRL0_LOCK_CS__DISABLED                 0x0
#define BV_GPMI_CTRL0_LOCK_CS__ENABLED                  0x1
#define BF_GPMI_CTRL0_LOCK_CS(v)                        (((v) << 22) & 0x400000)
#define BF_GPMI_CTRL0_LOCK_CS_V(v)                      ((BV_GPMI_CTRL0_LOCK_CS__##v << 22) & 0x400000)
#define BP_GPMI_CTRL0_CS                                20
#define BM_GPMI_CTRL0_CS                                0x300000
#define BF_GPMI_CTRL0_CS(v)                             (((v) << 20) & 0x300000)
#define BP_GPMI_CTRL0_ADDRESS                           17
#define BM_GPMI_CTRL0_ADDRESS                           0xe0000
#define BV_GPMI_CTRL0_ADDRESS__NAND_DATA                0x0
#define BV_GPMI_CTRL0_ADDRESS__NAND_CLE                 0x1
#define BV_GPMI_CTRL0_ADDRESS__NAND_ALE                 0x2
#define BF_GPMI_CTRL0_ADDRESS(v)                        (((v) << 17) & 0xe0000)
#define BF_GPMI_CTRL0_ADDRESS_V(v)                      ((BV_GPMI_CTRL0_ADDRESS__##v << 17) & 0xe0000)
#define BP_GPMI_CTRL0_ADDRESS_INCREMENT                 16
#define BM_GPMI_CTRL0_ADDRESS_INCREMENT                 0x10000
#define BV_GPMI_CTRL0_ADDRESS_INCREMENT__DISABLED       0x0
#define BV_GPMI_CTRL0_ADDRESS_INCREMENT__ENABLED        0x1
#define BF_GPMI_CTRL0_ADDRESS_INCREMENT(v)              (((v) << 16) & 0x10000)
#define BF_GPMI_CTRL0_ADDRESS_INCREMENT_V(v)            ((BV_GPMI_CTRL0_ADDRESS_INCREMENT__##v << 16) & 0x10000)
#define BP_GPMI_CTRL0_XFER_COUNT                        0
#define BM_GPMI_CTRL0_XFER_COUNT                        0xffff
#define BF_GPMI_CTRL0_XFER_COUNT(v)                     (((v) << 0) & 0xffff)

/**
 * Register: HW_GPMI_COMPARE
 * Address: 0x10
 * SCT: no
*/
#define HW_GPMI_COMPARE                 (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x10))
#define BP_GPMI_COMPARE_MASK            16
#define BM_GPMI_COMPARE_MASK            0xffff0000
#define BF_GPMI_COMPARE_MASK(v)         (((v) << 16) & 0xffff0000)
#define BP_GPMI_COMPARE_REFERENCE       0
#define BM_GPMI_COMPARE_REFERENCE       0xffff
#define BF_GPMI_COMPARE_REFERENCE(v)    (((v) << 0) & 0xffff)

/**
 * Register: HW_GPMI_ECCCTRL
 * Address: 0x20
 * SCT: yes
*/
#define HW_GPMI_ECCCTRL                             (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x20 + 0x0))
#define HW_GPMI_ECCCTRL_SET                         (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x20 + 0x4))
#define HW_GPMI_ECCCTRL_CLR                         (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x20 + 0x8))
#define HW_GPMI_ECCCTRL_TOG                         (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x20 + 0xc))
#define BP_GPMI_ECCCTRL_HANDLE                      16
#define BM_GPMI_ECCCTRL_HANDLE                      0xffff0000
#define BF_GPMI_ECCCTRL_HANDLE(v)                   (((v) << 16) & 0xffff0000)
#define BP_GPMI_ECCCTRL_RSVD2                       15
#define BM_GPMI_ECCCTRL_RSVD2                       0x8000
#define BF_GPMI_ECCCTRL_RSVD2(v)                    (((v) << 15) & 0x8000)
#define BP_GPMI_ECCCTRL_ECC_CMD                     13
#define BM_GPMI_ECCCTRL_ECC_CMD                     0x6000
#define BV_GPMI_ECCCTRL_ECC_CMD__DECODE_4_BIT       0x0
#define BV_GPMI_ECCCTRL_ECC_CMD__ENCODE_4_BIT       0x1
#define BV_GPMI_ECCCTRL_ECC_CMD__DECODE_8_BIT       0x2
#define BV_GPMI_ECCCTRL_ECC_CMD__ENCODE_8_BIT       0x3
#define BF_GPMI_ECCCTRL_ECC_CMD(v)                  (((v) << 13) & 0x6000)
#define BF_GPMI_ECCCTRL_ECC_CMD_V(v)                ((BV_GPMI_ECCCTRL_ECC_CMD__##v << 13) & 0x6000)
#define BP_GPMI_ECCCTRL_ENABLE_ECC                  12
#define BM_GPMI_ECCCTRL_ENABLE_ECC                  0x1000
#define BV_GPMI_ECCCTRL_ENABLE_ECC__ENABLE          0x1
#define BV_GPMI_ECCCTRL_ENABLE_ECC__DISABLE         0x0
#define BF_GPMI_ECCCTRL_ENABLE_ECC(v)               (((v) << 12) & 0x1000)
#define BF_GPMI_ECCCTRL_ENABLE_ECC_V(v)             ((BV_GPMI_ECCCTRL_ENABLE_ECC__##v << 12) & 0x1000)
#define BP_GPMI_ECCCTRL_RSVD1                       9
#define BM_GPMI_ECCCTRL_RSVD1                       0xe00
#define BF_GPMI_ECCCTRL_RSVD1(v)                    (((v) << 9) & 0xe00)
#define BP_GPMI_ECCCTRL_BUFFER_MASK                 0
#define BM_GPMI_ECCCTRL_BUFFER_MASK                 0x1ff
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BCH_AUXONLY    0x100
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BCH_PAGE       0x1ff
#define BV_GPMI_ECCCTRL_BUFFER_MASK__AUXILIARY      0x100
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER7        0x80
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER6        0x40
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER5        0x20
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER4        0x10
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER3        0x8
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER2        0x4
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER1        0x2
#define BV_GPMI_ECCCTRL_BUFFER_MASK__BUFFER0        0x1
#define BF_GPMI_ECCCTRL_BUFFER_MASK(v)              (((v) << 0) & 0x1ff)
#define BF_GPMI_ECCCTRL_BUFFER_MASK_V(v)            ((BV_GPMI_ECCCTRL_BUFFER_MASK__##v << 0) & 0x1ff)

/**
 * Register: HW_GPMI_ECCCOUNT
 * Address: 0x30
 * SCT: no
*/
#define HW_GPMI_ECCCOUNT            (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x30))
#define BP_GPMI_ECCCOUNT_RSVD2      16
#define BM_GPMI_ECCCOUNT_RSVD2      0xffff0000
#define BF_GPMI_ECCCOUNT_RSVD2(v)   (((v) << 16) & 0xffff0000)
#define BP_GPMI_ECCCOUNT_COUNT      0
#define BM_GPMI_ECCCOUNT_COUNT      0xffff
#define BF_GPMI_ECCCOUNT_COUNT(v)   (((v) << 0) & 0xffff)

/**
 * Register: HW_GPMI_PAYLOAD
 * Address: 0x40
 * SCT: no
*/
#define HW_GPMI_PAYLOAD             (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x40))
#define BP_GPMI_PAYLOAD_ADDRESS     2
#define BM_GPMI_PAYLOAD_ADDRESS     0xfffffffc
#define BF_GPMI_PAYLOAD_ADDRESS(v)  (((v) << 2) & 0xfffffffc)
#define BP_GPMI_PAYLOAD_RSVD0       0
#define BM_GPMI_PAYLOAD_RSVD0       0x3
#define BF_GPMI_PAYLOAD_RSVD0(v)    (((v) << 0) & 0x3)

/**
 * Register: HW_GPMI_AUXILIARY
 * Address: 0x50
 * SCT: no
*/
#define HW_GPMI_AUXILIARY               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x50))
#define BP_GPMI_AUXILIARY_ADDRESS       2
#define BM_GPMI_AUXILIARY_ADDRESS       0xfffffffc
#define BF_GPMI_AUXILIARY_ADDRESS(v)    (((v) << 2) & 0xfffffffc)
#define BP_GPMI_AUXILIARY_RSVD0         0
#define BM_GPMI_AUXILIARY_RSVD0         0x3
#define BF_GPMI_AUXILIARY_RSVD0(v)      (((v) << 0) & 0x3)

/**
 * Register: HW_GPMI_CTRL1
 * Address: 0x60
 * SCT: yes
*/
#define HW_GPMI_CTRL1                                   (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x60 + 0x0))
#define HW_GPMI_CTRL1_SET                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x60 + 0x4))
#define HW_GPMI_CTRL1_CLR                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x60 + 0x8))
#define HW_GPMI_CTRL1_TOG                               (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x60 + 0xc))
#define BP_GPMI_CTRL1_RSVD2                             24
#define BM_GPMI_CTRL1_RSVD2                             0xff000000
#define BF_GPMI_CTRL1_RSVD2(v)                          (((v) << 24) & 0xff000000)
#define BP_GPMI_CTRL1_CE3_SEL                           23
#define BM_GPMI_CTRL1_CE3_SEL                           0x800000
#define BF_GPMI_CTRL1_CE3_SEL(v)                        (((v) << 23) & 0x800000)
#define BP_GPMI_CTRL1_CE2_SEL                           22
#define BM_GPMI_CTRL1_CE2_SEL                           0x400000
#define BF_GPMI_CTRL1_CE2_SEL(v)                        (((v) << 22) & 0x400000)
#define BP_GPMI_CTRL1_CE1_SEL                           21
#define BM_GPMI_CTRL1_CE1_SEL                           0x200000
#define BF_GPMI_CTRL1_CE1_SEL(v)                        (((v) << 21) & 0x200000)
#define BP_GPMI_CTRL1_CE0_SEL                           20
#define BM_GPMI_CTRL1_CE0_SEL                           0x100000
#define BF_GPMI_CTRL1_CE0_SEL(v)                        (((v) << 20) & 0x100000)
#define BP_GPMI_CTRL1_GANGED_RDYBUSY                    19
#define BM_GPMI_CTRL1_GANGED_RDYBUSY                    0x80000
#define BF_GPMI_CTRL1_GANGED_RDYBUSY(v)                 (((v) << 19) & 0x80000)
#define BP_GPMI_CTRL1_BCH_MODE                          18
#define BM_GPMI_CTRL1_BCH_MODE                          0x40000
#define BF_GPMI_CTRL1_BCH_MODE(v)                       (((v) << 18) & 0x40000)
#define BP_GPMI_CTRL1_DLL_ENABLE                        17
#define BM_GPMI_CTRL1_DLL_ENABLE                        0x20000
#define BF_GPMI_CTRL1_DLL_ENABLE(v)                     (((v) << 17) & 0x20000)
#define BP_GPMI_CTRL1_HALF_PERIOD                       16
#define BM_GPMI_CTRL1_HALF_PERIOD                       0x10000
#define BF_GPMI_CTRL1_HALF_PERIOD(v)                    (((v) << 16) & 0x10000)
#define BP_GPMI_CTRL1_RDN_DELAY                         12
#define BM_GPMI_CTRL1_RDN_DELAY                         0xf000
#define BF_GPMI_CTRL1_RDN_DELAY(v)                      (((v) << 12) & 0xf000)
#define BP_GPMI_CTRL1_DMA2ECC_MODE                      11
#define BM_GPMI_CTRL1_DMA2ECC_MODE                      0x800
#define BF_GPMI_CTRL1_DMA2ECC_MODE(v)                   (((v) << 11) & 0x800)
#define BP_GPMI_CTRL1_DEV_IRQ                           10
#define BM_GPMI_CTRL1_DEV_IRQ                           0x400
#define BF_GPMI_CTRL1_DEV_IRQ(v)                        (((v) << 10) & 0x400)
#define BP_GPMI_CTRL1_TIMEOUT_IRQ                       9
#define BM_GPMI_CTRL1_TIMEOUT_IRQ                       0x200
#define BF_GPMI_CTRL1_TIMEOUT_IRQ(v)                    (((v) << 9) & 0x200)
#define BP_GPMI_CTRL1_BURST_EN                          8
#define BM_GPMI_CTRL1_BURST_EN                          0x100
#define BF_GPMI_CTRL1_BURST_EN(v)                       (((v) << 8) & 0x100)
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY3             7
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3             0x80
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY3(v)          (((v) << 7) & 0x80)
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY2             6
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2             0x40
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY2(v)          (((v) << 6) & 0x40)
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY1             5
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1             0x20
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY1(v)          (((v) << 5) & 0x20)
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY0             4
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0             0x10
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY0(v)          (((v) << 4) & 0x10)
#define BP_GPMI_CTRL1_DEV_RESET                         3
#define BM_GPMI_CTRL1_DEV_RESET                         0x8
#define BV_GPMI_CTRL1_DEV_RESET__ENABLED                0x0
#define BV_GPMI_CTRL1_DEV_RESET__DISABLED               0x1
#define BF_GPMI_CTRL1_DEV_RESET(v)                      (((v) << 3) & 0x8)
#define BF_GPMI_CTRL1_DEV_RESET_V(v)                    ((BV_GPMI_CTRL1_DEV_RESET__##v << 3) & 0x8)
#define BP_GPMI_CTRL1_ATA_IRQRDY_POLARITY               2
#define BM_GPMI_CTRL1_ATA_IRQRDY_POLARITY               0x4
#define BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__ACTIVELOW    0x0
#define BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__ACTIVEHIGH   0x1
#define BF_GPMI_CTRL1_ATA_IRQRDY_POLARITY(v)            (((v) << 2) & 0x4)
#define BF_GPMI_CTRL1_ATA_IRQRDY_POLARITY_V(v)          ((BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__##v << 2) & 0x4)
#define BP_GPMI_CTRL1_CAMERA_MODE                       1
#define BM_GPMI_CTRL1_CAMERA_MODE                       0x2
#define BF_GPMI_CTRL1_CAMERA_MODE(v)                    (((v) << 1) & 0x2)
#define BP_GPMI_CTRL1_GPMI_MODE                         0
#define BM_GPMI_CTRL1_GPMI_MODE                         0x1
#define BV_GPMI_CTRL1_GPMI_MODE__NAND                   0x0
#define BV_GPMI_CTRL1_GPMI_MODE__ATA                    0x1
#define BF_GPMI_CTRL1_GPMI_MODE(v)                      (((v) << 0) & 0x1)
#define BF_GPMI_CTRL1_GPMI_MODE_V(v)                    ((BV_GPMI_CTRL1_GPMI_MODE__##v << 0) & 0x1)

/**
 * Register: HW_GPMI_TIMING0
 * Address: 0x70
 * SCT: no
*/
#define HW_GPMI_TIMING0                     (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x70))
#define BP_GPMI_TIMING0_RSVD1               24
#define BM_GPMI_TIMING0_RSVD1               0xff000000
#define BF_GPMI_TIMING0_RSVD1(v)            (((v) << 24) & 0xff000000)
#define BP_GPMI_TIMING0_ADDRESS_SETUP       16
#define BM_GPMI_TIMING0_ADDRESS_SETUP       0xff0000
#define BF_GPMI_TIMING0_ADDRESS_SETUP(v)    (((v) << 16) & 0xff0000)
#define BP_GPMI_TIMING0_DATA_HOLD           8
#define BM_GPMI_TIMING0_DATA_HOLD           0xff00
#define BF_GPMI_TIMING0_DATA_HOLD(v)        (((v) << 8) & 0xff00)
#define BP_GPMI_TIMING0_DATA_SETUP          0
#define BM_GPMI_TIMING0_DATA_SETUP          0xff
#define BF_GPMI_TIMING0_DATA_SETUP(v)       (((v) << 0) & 0xff)

/**
 * Register: HW_GPMI_TIMING1
 * Address: 0x80
 * SCT: no
*/
#define HW_GPMI_TIMING1                         (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x80))
#define BP_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT     16
#define BM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT     0xffff0000
#define BF_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT(v)  (((v) << 16) & 0xffff0000)
#define BP_GPMI_TIMING1_RSVD1                   0
#define BM_GPMI_TIMING1_RSVD1                   0xffff
#define BF_GPMI_TIMING1_RSVD1(v)                (((v) << 0) & 0xffff)

/**
 * Register: HW_GPMI_TIMING2
 * Address: 0x90
 * SCT: no
*/
#define HW_GPMI_TIMING2                 (*(volatile unsigned long *)(REGS_GPMI_BASE + 0x90))
#define BP_GPMI_TIMING2_UDMA_TRP        24
#define BM_GPMI_TIMING2_UDMA_TRP        0xff000000
#define BF_GPMI_TIMING2_UDMA_TRP(v)     (((v) << 24) & 0xff000000)
#define BP_GPMI_TIMING2_UDMA_ENV        16
#define BM_GPMI_TIMING2_UDMA_ENV        0xff0000
#define BF_GPMI_TIMING2_UDMA_ENV(v)     (((v) << 16) & 0xff0000)
#define BP_GPMI_TIMING2_UDMA_HOLD       8
#define BM_GPMI_TIMING2_UDMA_HOLD       0xff00
#define BF_GPMI_TIMING2_UDMA_HOLD(v)    (((v) << 8) & 0xff00)
#define BP_GPMI_TIMING2_UDMA_SETUP      0
#define BM_GPMI_TIMING2_UDMA_SETUP      0xff
#define BF_GPMI_TIMING2_UDMA_SETUP(v)   (((v) << 0) & 0xff)

/**
 * Register: HW_GPMI_DATA
 * Address: 0xa0
 * SCT: no
*/
#define HW_GPMI_DATA            (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xa0))
#define BP_GPMI_DATA_DATA       0
#define BM_GPMI_DATA_DATA       0xffffffff
#define BF_GPMI_DATA_DATA(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPMI_STAT
 * Address: 0xb0
 * SCT: no
*/
#define HW_GPMI_STAT                        (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xb0))
#define BP_GPMI_STAT_PRESENT                31
#define BM_GPMI_STAT_PRESENT                0x80000000
#define BV_GPMI_STAT_PRESENT__UNAVAILABLE   0x0
#define BV_GPMI_STAT_PRESENT__AVAILABLE     0x1
#define BF_GPMI_STAT_PRESENT(v)             (((v) << 31) & 0x80000000)
#define BF_GPMI_STAT_PRESENT_V(v)           ((BV_GPMI_STAT_PRESENT__##v << 31) & 0x80000000)
#define BP_GPMI_STAT_RSVD1                  12
#define BM_GPMI_STAT_RSVD1                  0x7ffff000
#define BF_GPMI_STAT_RSVD1(v)               (((v) << 12) & 0x7ffff000)
#define BP_GPMI_STAT_RDY_TIMEOUT            8
#define BM_GPMI_STAT_RDY_TIMEOUT            0xf00
#define BF_GPMI_STAT_RDY_TIMEOUT(v)         (((v) << 8) & 0xf00)
#define BP_GPMI_STAT_ATA_IRQ                7
#define BM_GPMI_STAT_ATA_IRQ                0x80
#define BF_GPMI_STAT_ATA_IRQ(v)             (((v) << 7) & 0x80)
#define BP_GPMI_STAT_INVALID_BUFFER_MASK    6
#define BM_GPMI_STAT_INVALID_BUFFER_MASK    0x40
#define BF_GPMI_STAT_INVALID_BUFFER_MASK(v) (((v) << 6) & 0x40)
#define BP_GPMI_STAT_FIFO_EMPTY             5
#define BM_GPMI_STAT_FIFO_EMPTY             0x20
#define BV_GPMI_STAT_FIFO_EMPTY__NOT_EMPTY  0x0
#define BV_GPMI_STAT_FIFO_EMPTY__EMPTY      0x1
#define BF_GPMI_STAT_FIFO_EMPTY(v)          (((v) << 5) & 0x20)
#define BF_GPMI_STAT_FIFO_EMPTY_V(v)        ((BV_GPMI_STAT_FIFO_EMPTY__##v << 5) & 0x20)
#define BP_GPMI_STAT_FIFO_FULL              4
#define BM_GPMI_STAT_FIFO_FULL              0x10
#define BV_GPMI_STAT_FIFO_FULL__NOT_FULL    0x0
#define BV_GPMI_STAT_FIFO_FULL__FULL        0x1
#define BF_GPMI_STAT_FIFO_FULL(v)           (((v) << 4) & 0x10)
#define BF_GPMI_STAT_FIFO_FULL_V(v)         ((BV_GPMI_STAT_FIFO_FULL__##v << 4) & 0x10)
#define BP_GPMI_STAT_DEV3_ERROR             3
#define BM_GPMI_STAT_DEV3_ERROR             0x8
#define BF_GPMI_STAT_DEV3_ERROR(v)          (((v) << 3) & 0x8)
#define BP_GPMI_STAT_DEV2_ERROR             2
#define BM_GPMI_STAT_DEV2_ERROR             0x4
#define BF_GPMI_STAT_DEV2_ERROR(v)          (((v) << 2) & 0x4)
#define BP_GPMI_STAT_DEV1_ERROR             1
#define BM_GPMI_STAT_DEV1_ERROR             0x2
#define BF_GPMI_STAT_DEV1_ERROR(v)          (((v) << 1) & 0x2)
#define BP_GPMI_STAT_DEV0_ERROR             0
#define BM_GPMI_STAT_DEV0_ERROR             0x1
#define BF_GPMI_STAT_DEV0_ERROR(v)          (((v) << 0) & 0x1)

/**
 * Register: HW_GPMI_DEBUG
 * Address: 0xc0
 * SCT: no
*/
#define HW_GPMI_DEBUG                           (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xc0))
#define BP_GPMI_DEBUG_READY3                    31
#define BM_GPMI_DEBUG_READY3                    0x80000000
#define BF_GPMI_DEBUG_READY3(v)                 (((v) << 31) & 0x80000000)
#define BP_GPMI_DEBUG_READY2                    30
#define BM_GPMI_DEBUG_READY2                    0x40000000
#define BF_GPMI_DEBUG_READY2(v)                 (((v) << 30) & 0x40000000)
#define BP_GPMI_DEBUG_READY1                    29
#define BM_GPMI_DEBUG_READY1                    0x20000000
#define BF_GPMI_DEBUG_READY1(v)                 (((v) << 29) & 0x20000000)
#define BP_GPMI_DEBUG_READY0                    28
#define BM_GPMI_DEBUG_READY0                    0x10000000
#define BF_GPMI_DEBUG_READY0(v)                 (((v) << 28) & 0x10000000)
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END3       27
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END3       0x8000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END3(v)    (((v) << 27) & 0x8000000)
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END2       26
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END2       0x4000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END2(v)    (((v) << 26) & 0x4000000)
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END1       25
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END1       0x2000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END1(v)    (((v) << 25) & 0x2000000)
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END0       24
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END0       0x1000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END0(v)    (((v) << 24) & 0x1000000)
#define BP_GPMI_DEBUG_SENSE3                    23
#define BM_GPMI_DEBUG_SENSE3                    0x800000
#define BF_GPMI_DEBUG_SENSE3(v)                 (((v) << 23) & 0x800000)
#define BP_GPMI_DEBUG_SENSE2                    22
#define BM_GPMI_DEBUG_SENSE2                    0x400000
#define BF_GPMI_DEBUG_SENSE2(v)                 (((v) << 22) & 0x400000)
#define BP_GPMI_DEBUG_SENSE1                    21
#define BM_GPMI_DEBUG_SENSE1                    0x200000
#define BF_GPMI_DEBUG_SENSE1(v)                 (((v) << 21) & 0x200000)
#define BP_GPMI_DEBUG_SENSE0                    20
#define BM_GPMI_DEBUG_SENSE0                    0x100000
#define BF_GPMI_DEBUG_SENSE0(v)                 (((v) << 20) & 0x100000)
#define BP_GPMI_DEBUG_DMAREQ3                   19
#define BM_GPMI_DEBUG_DMAREQ3                   0x80000
#define BF_GPMI_DEBUG_DMAREQ3(v)                (((v) << 19) & 0x80000)
#define BP_GPMI_DEBUG_DMAREQ2                   18
#define BM_GPMI_DEBUG_DMAREQ2                   0x40000
#define BF_GPMI_DEBUG_DMAREQ2(v)                (((v) << 18) & 0x40000)
#define BP_GPMI_DEBUG_DMAREQ1                   17
#define BM_GPMI_DEBUG_DMAREQ1                   0x20000
#define BF_GPMI_DEBUG_DMAREQ1(v)                (((v) << 17) & 0x20000)
#define BP_GPMI_DEBUG_DMAREQ0                   16
#define BM_GPMI_DEBUG_DMAREQ0                   0x10000
#define BF_GPMI_DEBUG_DMAREQ0(v)                (((v) << 16) & 0x10000)
#define BP_GPMI_DEBUG_CMD_END                   12
#define BM_GPMI_DEBUG_CMD_END                   0xf000
#define BF_GPMI_DEBUG_CMD_END(v)                (((v) << 12) & 0xf000)
#define BP_GPMI_DEBUG_UDMA_STATE                8
#define BM_GPMI_DEBUG_UDMA_STATE                0xf00
#define BF_GPMI_DEBUG_UDMA_STATE(v)             (((v) << 8) & 0xf00)
#define BP_GPMI_DEBUG_BUSY                      7
#define BM_GPMI_DEBUG_BUSY                      0x80
#define BV_GPMI_DEBUG_BUSY__DISABLED            0x0
#define BV_GPMI_DEBUG_BUSY__ENABLED             0x1
#define BF_GPMI_DEBUG_BUSY(v)                   (((v) << 7) & 0x80)
#define BF_GPMI_DEBUG_BUSY_V(v)                 ((BV_GPMI_DEBUG_BUSY__##v << 7) & 0x80)
#define BP_GPMI_DEBUG_PIN_STATE                 4
#define BM_GPMI_DEBUG_PIN_STATE                 0x70
#define BV_GPMI_DEBUG_PIN_STATE__PSM_IDLE       0x0
#define BV_GPMI_DEBUG_PIN_STATE__PSM_BYTCNT     0x1
#define BV_GPMI_DEBUG_PIN_STATE__PSM_ADDR       0x2
#define BV_GPMI_DEBUG_PIN_STATE__PSM_STALL      0x3
#define BV_GPMI_DEBUG_PIN_STATE__PSM_STROBE     0x4
#define BV_GPMI_DEBUG_PIN_STATE__PSM_ATARDY     0x5
#define BV_GPMI_DEBUG_PIN_STATE__PSM_DHOLD      0x6
#define BV_GPMI_DEBUG_PIN_STATE__PSM_DONE       0x7
#define BF_GPMI_DEBUG_PIN_STATE(v)              (((v) << 4) & 0x70)
#define BF_GPMI_DEBUG_PIN_STATE_V(v)            ((BV_GPMI_DEBUG_PIN_STATE__##v << 4) & 0x70)
#define BP_GPMI_DEBUG_MAIN_STATE                0
#define BM_GPMI_DEBUG_MAIN_STATE                0xf
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_IDLE      0x0
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_BYTCNT    0x1
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFE    0x2
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFR    0x3
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DMAREQ    0x4
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DMAACK    0x5
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFF    0x6
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_LDFIFO    0x7
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_LDDMAR    0x8
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_RDCMP     0x9
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DONE      0xa
#define BF_GPMI_DEBUG_MAIN_STATE(v)             (((v) << 0) & 0xf)
#define BF_GPMI_DEBUG_MAIN_STATE_V(v)           ((BV_GPMI_DEBUG_MAIN_STATE__##v << 0) & 0xf)

/**
 * Register: HW_GPMI_VERSION
 * Address: 0xd0
 * SCT: no
*/
#define HW_GPMI_VERSION             (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xd0))
#define BP_GPMI_VERSION_MAJOR       24
#define BM_GPMI_VERSION_MAJOR       0xff000000
#define BF_GPMI_VERSION_MAJOR(v)    (((v) << 24) & 0xff000000)
#define BP_GPMI_VERSION_MINOR       16
#define BM_GPMI_VERSION_MINOR       0xff0000
#define BF_GPMI_VERSION_MINOR(v)    (((v) << 16) & 0xff0000)
#define BP_GPMI_VERSION_STEP        0
#define BM_GPMI_VERSION_STEP        0xffff
#define BF_GPMI_VERSION_STEP(v)     (((v) << 0) & 0xffff)

/**
 * Register: HW_GPMI_DEBUG2
 * Address: 0xe0
 * SCT: no
*/
#define HW_GPMI_DEBUG2                      (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xe0))
#define BP_GPMI_DEBUG2_RSVD1                16
#define BM_GPMI_DEBUG2_RSVD1                0xffff0000
#define BF_GPMI_DEBUG2_RSVD1(v)             (((v) << 16) & 0xffff0000)
#define BP_GPMI_DEBUG2_SYND2GPMI_BE         12
#define BM_GPMI_DEBUG2_SYND2GPMI_BE         0xf000
#define BF_GPMI_DEBUG2_SYND2GPMI_BE(v)      (((v) << 12) & 0xf000)
#define BP_GPMI_DEBUG2_GPMI2SYND_VALID      11
#define BM_GPMI_DEBUG2_GPMI2SYND_VALID      0x800
#define BF_GPMI_DEBUG2_GPMI2SYND_VALID(v)   (((v) << 11) & 0x800)
#define BP_GPMI_DEBUG2_GPMI2SYND_READY      10
#define BM_GPMI_DEBUG2_GPMI2SYND_READY      0x400
#define BF_GPMI_DEBUG2_GPMI2SYND_READY(v)   (((v) << 10) & 0x400)
#define BP_GPMI_DEBUG2_SYND2GPMI_VALID      9
#define BM_GPMI_DEBUG2_SYND2GPMI_VALID      0x200
#define BF_GPMI_DEBUG2_SYND2GPMI_VALID(v)   (((v) << 9) & 0x200)
#define BP_GPMI_DEBUG2_SYND2GPMI_READY      8
#define BM_GPMI_DEBUG2_SYND2GPMI_READY      0x100
#define BF_GPMI_DEBUG2_SYND2GPMI_READY(v)   (((v) << 8) & 0x100)
#define BP_GPMI_DEBUG2_VIEW_DELAYED_RDN     7
#define BM_GPMI_DEBUG2_VIEW_DELAYED_RDN     0x80
#define BF_GPMI_DEBUG2_VIEW_DELAYED_RDN(v)  (((v) << 7) & 0x80)
#define BP_GPMI_DEBUG2_UPDATE_WINDOW        6
#define BM_GPMI_DEBUG2_UPDATE_WINDOW        0x40
#define BF_GPMI_DEBUG2_UPDATE_WINDOW(v)     (((v) << 6) & 0x40)
#define BP_GPMI_DEBUG2_RDN_TAP              0
#define BM_GPMI_DEBUG2_RDN_TAP              0x3f
#define BF_GPMI_DEBUG2_RDN_TAP(v)           (((v) << 0) & 0x3f)

/**
 * Register: HW_GPMI_DEBUG3
 * Address: 0xf0
 * SCT: no
*/
#define HW_GPMI_DEBUG3                  (*(volatile unsigned long *)(REGS_GPMI_BASE + 0xf0))
#define BP_GPMI_DEBUG3_APB_WORD_CNTR    16
#define BM_GPMI_DEBUG3_APB_WORD_CNTR    0xffff0000
#define BF_GPMI_DEBUG3_APB_WORD_CNTR(v) (((v) << 16) & 0xffff0000)
#define BP_GPMI_DEBUG3_DEV_WORD_CNTR    0
#define BM_GPMI_DEBUG3_DEV_WORD_CNTR    0xffff
#define BF_GPMI_DEBUG3_DEV_WORD_CNTR(v) (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__IMX233__GPMI__H__ */
