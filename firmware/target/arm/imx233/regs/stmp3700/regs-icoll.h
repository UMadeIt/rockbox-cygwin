/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: stmp3700:3.2.0
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
#ifndef __HEADERGEN__STMP3700__ICOLL__H__
#define __HEADERGEN__STMP3700__ICOLL__H__

#define REGS_ICOLL_BASE (0x80000000)

#define REGS_ICOLL_VERSION "3.2.0"

/**
 * Register: HW_ICOLL_VECTOR
 * Address: 0
 * SCT: yes
*/
#define HW_ICOLL_VECTOR                 (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x0))
#define HW_ICOLL_VECTOR_SET             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x4))
#define HW_ICOLL_VECTOR_CLR             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x8))
#define HW_ICOLL_VECTOR_TOG             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0xc))
#define BP_ICOLL_VECTOR_IRQVECTOR       2
#define BM_ICOLL_VECTOR_IRQVECTOR       0xfffffffc
#define BF_ICOLL_VECTOR_IRQVECTOR(v)    (((v) << 2) & 0xfffffffc)

/**
 * Register: HW_ICOLL_LEVELACK
 * Address: 0x10
 * SCT: no
*/
#define HW_ICOLL_LEVELACK                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x10))
#define BP_ICOLL_LEVELACK_IRQLEVELACK           0
#define BM_ICOLL_LEVELACK_IRQLEVELACK           0xf
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL0   0x1
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL1   0x2
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL2   0x4
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL3   0x8
#define BF_ICOLL_LEVELACK_IRQLEVELACK(v)        (((v) << 0) & 0xf)
#define BF_ICOLL_LEVELACK_IRQLEVELACK_V(v)      ((BV_ICOLL_LEVELACK_IRQLEVELACK__##v << 0) & 0xf)

/**
 * Register: HW_ICOLL_CTRL
 * Address: 0x20
 * SCT: yes
*/
#define HW_ICOLL_CTRL                                   (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x0))
#define HW_ICOLL_CTRL_SET                               (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x4))
#define HW_ICOLL_CTRL_CLR                               (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x8))
#define HW_ICOLL_CTRL_TOG                               (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0xc))
#define BP_ICOLL_CTRL_SFTRST                            31
#define BM_ICOLL_CTRL_SFTRST                            0x80000000
#define BV_ICOLL_CTRL_SFTRST__RUN                       0x0
#define BV_ICOLL_CTRL_SFTRST__IN_RESET                  0x1
#define BF_ICOLL_CTRL_SFTRST(v)                         (((v) << 31) & 0x80000000)
#define BF_ICOLL_CTRL_SFTRST_V(v)                       ((BV_ICOLL_CTRL_SFTRST__##v << 31) & 0x80000000)
#define BP_ICOLL_CTRL_CLKGATE                           30
#define BM_ICOLL_CTRL_CLKGATE                           0x40000000
#define BV_ICOLL_CTRL_CLKGATE__RUN                      0x0
#define BV_ICOLL_CTRL_CLKGATE__NO_CLOCKS                0x1
#define BF_ICOLL_CTRL_CLKGATE(v)                        (((v) << 30) & 0x40000000)
#define BF_ICOLL_CTRL_CLKGATE_V(v)                      ((BV_ICOLL_CTRL_CLKGATE__##v << 30) & 0x40000000)
#define BP_ICOLL_CTRL_VECTOR_PITCH                      21
#define BM_ICOLL_CTRL_VECTOR_PITCH                      0xe00000
#define BV_ICOLL_CTRL_VECTOR_PITCH__DEFAULT_BY4         0x0
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY4                 0x1
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY8                 0x2
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY12                0x3
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY16                0x4
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY20                0x5
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY24                0x6
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY28                0x7
#define BF_ICOLL_CTRL_VECTOR_PITCH(v)                   (((v) << 21) & 0xe00000)
#define BF_ICOLL_CTRL_VECTOR_PITCH_V(v)                 ((BV_ICOLL_CTRL_VECTOR_PITCH__##v << 21) & 0xe00000)
#define BP_ICOLL_CTRL_BYPASS_FSM                        20
#define BM_ICOLL_CTRL_BYPASS_FSM                        0x100000
#define BV_ICOLL_CTRL_BYPASS_FSM__NORMAL                0x0
#define BV_ICOLL_CTRL_BYPASS_FSM__BYPASS                0x1
#define BF_ICOLL_CTRL_BYPASS_FSM(v)                     (((v) << 20) & 0x100000)
#define BF_ICOLL_CTRL_BYPASS_FSM_V(v)                   ((BV_ICOLL_CTRL_BYPASS_FSM__##v << 20) & 0x100000)
#define BP_ICOLL_CTRL_NO_NESTING                        19
#define BM_ICOLL_CTRL_NO_NESTING                        0x80000
#define BV_ICOLL_CTRL_NO_NESTING__NORMAL                0x0
#define BV_ICOLL_CTRL_NO_NESTING__NO_NEST               0x1
#define BF_ICOLL_CTRL_NO_NESTING(v)                     (((v) << 19) & 0x80000)
#define BF_ICOLL_CTRL_NO_NESTING_V(v)                   ((BV_ICOLL_CTRL_NO_NESTING__##v << 19) & 0x80000)
#define BP_ICOLL_CTRL_ARM_RSE_MODE                      18
#define BM_ICOLL_CTRL_ARM_RSE_MODE                      0x40000
#define BV_ICOLL_CTRL_ARM_RSE_MODE__MUST_WRITE          0x0
#define BV_ICOLL_CTRL_ARM_RSE_MODE__READ_SIDE_EFFECT    0x1
#define BF_ICOLL_CTRL_ARM_RSE_MODE(v)                   (((v) << 18) & 0x40000)
#define BF_ICOLL_CTRL_ARM_RSE_MODE_V(v)                 ((BV_ICOLL_CTRL_ARM_RSE_MODE__##v << 18) & 0x40000)
#define BP_ICOLL_CTRL_FIQ_FINAL_ENABLE                  17
#define BM_ICOLL_CTRL_FIQ_FINAL_ENABLE                  0x20000
#define BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__DISABLE         0x0
#define BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__ENABLE          0x1
#define BF_ICOLL_CTRL_FIQ_FINAL_ENABLE(v)               (((v) << 17) & 0x20000)
#define BF_ICOLL_CTRL_FIQ_FINAL_ENABLE_V(v)             ((BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__##v << 17) & 0x20000)
#define BP_ICOLL_CTRL_IRQ_FINAL_ENABLE                  16
#define BM_ICOLL_CTRL_IRQ_FINAL_ENABLE                  0x10000
#define BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__DISABLE         0x0
#define BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__ENABLE          0x1
#define BF_ICOLL_CTRL_IRQ_FINAL_ENABLE(v)               (((v) << 16) & 0x10000)
#define BF_ICOLL_CTRL_IRQ_FINAL_ENABLE_V(v)             ((BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__##v << 16) & 0x10000)
#define BP_ICOLL_CTRL_ENABLE2FIQ35                      7
#define BM_ICOLL_CTRL_ENABLE2FIQ35                      0x80
#define BV_ICOLL_CTRL_ENABLE2FIQ35__DISABLE             0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ35__ENABLE              0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ35(v)                   (((v) << 7) & 0x80)
#define BF_ICOLL_CTRL_ENABLE2FIQ35_V(v)                 ((BV_ICOLL_CTRL_ENABLE2FIQ35__##v << 7) & 0x80)
#define BP_ICOLL_CTRL_ENABLE2FIQ34                      6
#define BM_ICOLL_CTRL_ENABLE2FIQ34                      0x40
#define BV_ICOLL_CTRL_ENABLE2FIQ34__DISABLE             0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ34__ENABLE              0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ34(v)                   (((v) << 6) & 0x40)
#define BF_ICOLL_CTRL_ENABLE2FIQ34_V(v)                 ((BV_ICOLL_CTRL_ENABLE2FIQ34__##v << 6) & 0x40)
#define BP_ICOLL_CTRL_ENABLE2FIQ33                      5
#define BM_ICOLL_CTRL_ENABLE2FIQ33                      0x20
#define BV_ICOLL_CTRL_ENABLE2FIQ33__DISABLE             0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ33__ENABLE              0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ33(v)                   (((v) << 5) & 0x20)
#define BF_ICOLL_CTRL_ENABLE2FIQ33_V(v)                 ((BV_ICOLL_CTRL_ENABLE2FIQ33__##v << 5) & 0x20)
#define BP_ICOLL_CTRL_ENABLE2FIQ32                      4
#define BM_ICOLL_CTRL_ENABLE2FIQ32                      0x10
#define BV_ICOLL_CTRL_ENABLE2FIQ32__DISABLE             0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ32__ENABLE              0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ32(v)                   (((v) << 4) & 0x10)
#define BF_ICOLL_CTRL_ENABLE2FIQ32_V(v)                 ((BV_ICOLL_CTRL_ENABLE2FIQ32__##v << 4) & 0x10)
#define BP_ICOLL_CTRL_ENABLE2FIQ_T3                     3
#define BM_ICOLL_CTRL_ENABLE2FIQ_T3                     0x8
#define BV_ICOLL_CTRL_ENABLE2FIQ_T3__DISABLE            0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ_T3__ENABLE             0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ_T3(v)                  (((v) << 3) & 0x8)
#define BF_ICOLL_CTRL_ENABLE2FIQ_T3_V(v)                ((BV_ICOLL_CTRL_ENABLE2FIQ_T3__##v << 3) & 0x8)
#define BP_ICOLL_CTRL_ENABLE2FIQ_T2                     2
#define BM_ICOLL_CTRL_ENABLE2FIQ_T2                     0x4
#define BV_ICOLL_CTRL_ENABLE2FIQ_T2__DISABLE            0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ_T2__ENABLE             0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ_T2(v)                  (((v) << 2) & 0x4)
#define BF_ICOLL_CTRL_ENABLE2FIQ_T2_V(v)                ((BV_ICOLL_CTRL_ENABLE2FIQ_T2__##v << 2) & 0x4)
#define BP_ICOLL_CTRL_ENABLE2FIQ_T1                     1
#define BM_ICOLL_CTRL_ENABLE2FIQ_T1                     0x2
#define BV_ICOLL_CTRL_ENABLE2FIQ_T1__DISABLE            0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ_T1__ENABLE             0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ_T1(v)                  (((v) << 1) & 0x2)
#define BF_ICOLL_CTRL_ENABLE2FIQ_T1_V(v)                ((BV_ICOLL_CTRL_ENABLE2FIQ_T1__##v << 1) & 0x2)
#define BP_ICOLL_CTRL_ENABLE2FIQ_T0                     0
#define BM_ICOLL_CTRL_ENABLE2FIQ_T0                     0x1
#define BV_ICOLL_CTRL_ENABLE2FIQ_T0__DISABLE            0x0
#define BV_ICOLL_CTRL_ENABLE2FIQ_T0__ENABLE             0x1
#define BF_ICOLL_CTRL_ENABLE2FIQ_T0(v)                  (((v) << 0) & 0x1)
#define BF_ICOLL_CTRL_ENABLE2FIQ_T0_V(v)                ((BV_ICOLL_CTRL_ENABLE2FIQ_T0__##v << 0) & 0x1)

/**
 * Register: HW_ICOLL_STAT
 * Address: 0x30
 * SCT: no
*/
#define HW_ICOLL_STAT                   (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x30))
#define BP_ICOLL_STAT_VECTOR_NUMBER     0
#define BM_ICOLL_STAT_VECTOR_NUMBER     0x3f
#define BF_ICOLL_STAT_VECTOR_NUMBER(v)  (((v) << 0) & 0x3f)

/**
 * Register: HW_ICOLL_RAWn
 * Address: 0x40+n*0x10
 * SCT: no
*/
#define HW_ICOLL_RAWn(n)            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x40+(n)*0x10))
#define BP_ICOLL_RAWn_RAW_IRQS      0
#define BM_ICOLL_RAWn_RAW_IRQS      0xffffffff
#define BF_ICOLL_RAWn_RAW_IRQS(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_PRIORITYn
 * Address: 0x60+n*0x10
 * SCT: yes
*/
#define HW_ICOLL_PRIORITYn(n)                           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x60+(n)*0x10 + 0x0))
#define HW_ICOLL_PRIORITYn_SET(n)                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x60+(n)*0x10 + 0x4))
#define HW_ICOLL_PRIORITYn_CLR(n)                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x60+(n)*0x10 + 0x8))
#define HW_ICOLL_PRIORITYn_TOG(n)                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x60+(n)*0x10 + 0xc))
#define BP_ICOLL_PRIORITYn_SOFTIRQ3                     27
#define BM_ICOLL_PRIORITYn_SOFTIRQ3                     0x8000000
#define BV_ICOLL_PRIORITYn_SOFTIRQ3__NO_INTERRUPT       0x0
#define BV_ICOLL_PRIORITYn_SOFTIRQ3__FORCE_INTERRUPT    0x1
#define BF_ICOLL_PRIORITYn_SOFTIRQ3(v)                  (((v) << 27) & 0x8000000)
#define BF_ICOLL_PRIORITYn_SOFTIRQ3_V(v)                ((BV_ICOLL_PRIORITYn_SOFTIRQ3__##v << 27) & 0x8000000)
#define BP_ICOLL_PRIORITYn_ENABLE3                      26
#define BM_ICOLL_PRIORITYn_ENABLE3                      0x4000000
#define BV_ICOLL_PRIORITYn_ENABLE3__DISABLE             0x0
#define BV_ICOLL_PRIORITYn_ENABLE3__ENABLE              0x1
#define BF_ICOLL_PRIORITYn_ENABLE3(v)                   (((v) << 26) & 0x4000000)
#define BF_ICOLL_PRIORITYn_ENABLE3_V(v)                 ((BV_ICOLL_PRIORITYn_ENABLE3__##v << 26) & 0x4000000)
#define BP_ICOLL_PRIORITYn_PRIORITY3                    24
#define BM_ICOLL_PRIORITYn_PRIORITY3                    0x3000000
#define BV_ICOLL_PRIORITYn_PRIORITY3__LEVEL0            0x0
#define BV_ICOLL_PRIORITYn_PRIORITY3__LEVEL1            0x1
#define BV_ICOLL_PRIORITYn_PRIORITY3__LEVEL2            0x2
#define BV_ICOLL_PRIORITYn_PRIORITY3__LEVEL3            0x3
#define BF_ICOLL_PRIORITYn_PRIORITY3(v)                 (((v) << 24) & 0x3000000)
#define BF_ICOLL_PRIORITYn_PRIORITY3_V(v)               ((BV_ICOLL_PRIORITYn_PRIORITY3__##v << 24) & 0x3000000)
#define BP_ICOLL_PRIORITYn_SOFTIRQ2                     19
#define BM_ICOLL_PRIORITYn_SOFTIRQ2                     0x80000
#define BV_ICOLL_PRIORITYn_SOFTIRQ2__NO_INTERRUPT       0x0
#define BV_ICOLL_PRIORITYn_SOFTIRQ2__FORCE_INTERRUPT    0x1
#define BF_ICOLL_PRIORITYn_SOFTIRQ2(v)                  (((v) << 19) & 0x80000)
#define BF_ICOLL_PRIORITYn_SOFTIRQ2_V(v)                ((BV_ICOLL_PRIORITYn_SOFTIRQ2__##v << 19) & 0x80000)
#define BP_ICOLL_PRIORITYn_ENABLE2                      18
#define BM_ICOLL_PRIORITYn_ENABLE2                      0x40000
#define BV_ICOLL_PRIORITYn_ENABLE2__DISABLE             0x0
#define BV_ICOLL_PRIORITYn_ENABLE2__ENABLE              0x1
#define BF_ICOLL_PRIORITYn_ENABLE2(v)                   (((v) << 18) & 0x40000)
#define BF_ICOLL_PRIORITYn_ENABLE2_V(v)                 ((BV_ICOLL_PRIORITYn_ENABLE2__##v << 18) & 0x40000)
#define BP_ICOLL_PRIORITYn_PRIORITY2                    16
#define BM_ICOLL_PRIORITYn_PRIORITY2                    0x30000
#define BV_ICOLL_PRIORITYn_PRIORITY2__LEVEL0            0x0
#define BV_ICOLL_PRIORITYn_PRIORITY2__LEVEL1            0x1
#define BV_ICOLL_PRIORITYn_PRIORITY2__LEVEL2            0x2
#define BV_ICOLL_PRIORITYn_PRIORITY2__LEVEL3            0x3
#define BF_ICOLL_PRIORITYn_PRIORITY2(v)                 (((v) << 16) & 0x30000)
#define BF_ICOLL_PRIORITYn_PRIORITY2_V(v)               ((BV_ICOLL_PRIORITYn_PRIORITY2__##v << 16) & 0x30000)
#define BP_ICOLL_PRIORITYn_SOFTIRQ1                     11
#define BM_ICOLL_PRIORITYn_SOFTIRQ1                     0x800
#define BV_ICOLL_PRIORITYn_SOFTIRQ1__NO_INTERRUPT       0x0
#define BV_ICOLL_PRIORITYn_SOFTIRQ1__FORCE_INTERRUPT    0x1
#define BF_ICOLL_PRIORITYn_SOFTIRQ1(v)                  (((v) << 11) & 0x800)
#define BF_ICOLL_PRIORITYn_SOFTIRQ1_V(v)                ((BV_ICOLL_PRIORITYn_SOFTIRQ1__##v << 11) & 0x800)
#define BP_ICOLL_PRIORITYn_ENABLE1                      10
#define BM_ICOLL_PRIORITYn_ENABLE1                      0x400
#define BV_ICOLL_PRIORITYn_ENABLE1__DISABLE             0x0
#define BV_ICOLL_PRIORITYn_ENABLE1__ENABLE              0x1
#define BF_ICOLL_PRIORITYn_ENABLE1(v)                   (((v) << 10) & 0x400)
#define BF_ICOLL_PRIORITYn_ENABLE1_V(v)                 ((BV_ICOLL_PRIORITYn_ENABLE1__##v << 10) & 0x400)
#define BP_ICOLL_PRIORITYn_PRIORITY1                    8
#define BM_ICOLL_PRIORITYn_PRIORITY1                    0x300
#define BV_ICOLL_PRIORITYn_PRIORITY1__LEVEL0            0x0
#define BV_ICOLL_PRIORITYn_PRIORITY1__LEVEL1            0x1
#define BV_ICOLL_PRIORITYn_PRIORITY1__LEVEL2            0x2
#define BV_ICOLL_PRIORITYn_PRIORITY1__LEVEL3            0x3
#define BF_ICOLL_PRIORITYn_PRIORITY1(v)                 (((v) << 8) & 0x300)
#define BF_ICOLL_PRIORITYn_PRIORITY1_V(v)               ((BV_ICOLL_PRIORITYn_PRIORITY1__##v << 8) & 0x300)
#define BP_ICOLL_PRIORITYn_SOFTIRQ0                     3
#define BM_ICOLL_PRIORITYn_SOFTIRQ0                     0x8
#define BV_ICOLL_PRIORITYn_SOFTIRQ0__NO_INTERRUPT       0x0
#define BV_ICOLL_PRIORITYn_SOFTIRQ0__FORCE_INTERRUPT    0x1
#define BF_ICOLL_PRIORITYn_SOFTIRQ0(v)                  (((v) << 3) & 0x8)
#define BF_ICOLL_PRIORITYn_SOFTIRQ0_V(v)                ((BV_ICOLL_PRIORITYn_SOFTIRQ0__##v << 3) & 0x8)
#define BP_ICOLL_PRIORITYn_ENABLE0                      2
#define BM_ICOLL_PRIORITYn_ENABLE0                      0x4
#define BV_ICOLL_PRIORITYn_ENABLE0__DISABLE             0x0
#define BV_ICOLL_PRIORITYn_ENABLE0__ENABLE              0x1
#define BF_ICOLL_PRIORITYn_ENABLE0(v)                   (((v) << 2) & 0x4)
#define BF_ICOLL_PRIORITYn_ENABLE0_V(v)                 ((BV_ICOLL_PRIORITYn_ENABLE0__##v << 2) & 0x4)
#define BP_ICOLL_PRIORITYn_PRIORITY0                    0
#define BM_ICOLL_PRIORITYn_PRIORITY0                    0x3
#define BV_ICOLL_PRIORITYn_PRIORITY0__LEVEL0            0x0
#define BV_ICOLL_PRIORITYn_PRIORITY0__LEVEL1            0x1
#define BV_ICOLL_PRIORITYn_PRIORITY0__LEVEL2            0x2
#define BV_ICOLL_PRIORITYn_PRIORITY0__LEVEL3            0x3
#define BF_ICOLL_PRIORITYn_PRIORITY0(v)                 (((v) << 0) & 0x3)
#define BF_ICOLL_PRIORITYn_PRIORITY0_V(v)               ((BV_ICOLL_PRIORITYn_PRIORITY0__##v << 0) & 0x3)

/**
 * Register: HW_ICOLL_VBASE
 * Address: 0x160
 * SCT: yes
*/
#define HW_ICOLL_VBASE                  (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x160 + 0x0))
#define HW_ICOLL_VBASE_SET              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x160 + 0x4))
#define HW_ICOLL_VBASE_CLR              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x160 + 0x8))
#define HW_ICOLL_VBASE_TOG              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x160 + 0xc))
#define BP_ICOLL_VBASE_TABLE_ADDRESS    2
#define BM_ICOLL_VBASE_TABLE_ADDRESS    0xfffffffc
#define BF_ICOLL_VBASE_TABLE_ADDRESS(v) (((v) << 2) & 0xfffffffc)

/**
 * Register: HW_ICOLL_DEBUG
 * Address: 0x170
 * SCT: no
*/
#define HW_ICOLL_DEBUG                              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x170))
#define BP_ICOLL_DEBUG_INSERVICE                    28
#define BM_ICOLL_DEBUG_INSERVICE                    0xf0000000
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL0            0x1
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL1            0x2
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL2            0x4
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL3            0x8
#define BF_ICOLL_DEBUG_INSERVICE(v)                 (((v) << 28) & 0xf0000000)
#define BF_ICOLL_DEBUG_INSERVICE_V(v)               ((BV_ICOLL_DEBUG_INSERVICE__##v << 28) & 0xf0000000)
#define BP_ICOLL_DEBUG_LEVEL_REQUESTS               24
#define BM_ICOLL_DEBUG_LEVEL_REQUESTS               0xf000000
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL0       0x1
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL1       0x2
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL2       0x4
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL3       0x8
#define BF_ICOLL_DEBUG_LEVEL_REQUESTS(v)            (((v) << 24) & 0xf000000)
#define BF_ICOLL_DEBUG_LEVEL_REQUESTS_V(v)          ((BV_ICOLL_DEBUG_LEVEL_REQUESTS__##v << 24) & 0xf000000)
#define BP_ICOLL_DEBUG_REQUESTS_BY_LEVEL            20
#define BM_ICOLL_DEBUG_REQUESTS_BY_LEVEL            0xf00000
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL0    0x1
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL1    0x2
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL2    0x4
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL3    0x8
#define BF_ICOLL_DEBUG_REQUESTS_BY_LEVEL(v)         (((v) << 20) & 0xf00000)
#define BF_ICOLL_DEBUG_REQUESTS_BY_LEVEL_V(v)       ((BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__##v << 20) & 0xf00000)
#define BP_ICOLL_DEBUG_FIQ                          17
#define BM_ICOLL_DEBUG_FIQ                          0x20000
#define BV_ICOLL_DEBUG_FIQ__NO_FIQ_REQUESTED        0x0
#define BV_ICOLL_DEBUG_FIQ__FIQ_REQUESTED           0x1
#define BF_ICOLL_DEBUG_FIQ(v)                       (((v) << 17) & 0x20000)
#define BF_ICOLL_DEBUG_FIQ_V(v)                     ((BV_ICOLL_DEBUG_FIQ__##v << 17) & 0x20000)
#define BP_ICOLL_DEBUG_IRQ                          16
#define BM_ICOLL_DEBUG_IRQ                          0x10000
#define BV_ICOLL_DEBUG_IRQ__NO_IRQ_REQUESTED        0x0
#define BV_ICOLL_DEBUG_IRQ__IRQ_REQUESTED           0x1
#define BF_ICOLL_DEBUG_IRQ(v)                       (((v) << 16) & 0x10000)
#define BF_ICOLL_DEBUG_IRQ_V(v)                     ((BV_ICOLL_DEBUG_IRQ__##v << 16) & 0x10000)
#define BP_ICOLL_DEBUG_VECTOR_FSM                   0
#define BM_ICOLL_DEBUG_VECTOR_FSM                   0x3ff
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_IDLE         0x0
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE1  0x1
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE2  0x2
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_PENDING      0x4
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE3  0x8
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE4  0x10
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING1 0x20
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING2 0x40
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING3 0x80
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE5  0x100
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE6  0x200
#define BF_ICOLL_DEBUG_VECTOR_FSM(v)                (((v) << 0) & 0x3ff)
#define BF_ICOLL_DEBUG_VECTOR_FSM_V(v)              ((BV_ICOLL_DEBUG_VECTOR_FSM__##v << 0) & 0x3ff)

/**
 * Register: HW_ICOLL_DBGREAD0
 * Address: 0x180
 * SCT: no
*/
#define HW_ICOLL_DBGREAD0           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x180))
#define BP_ICOLL_DBGREAD0_VALUE     0
#define BM_ICOLL_DBGREAD0_VALUE     0xffffffff
#define BF_ICOLL_DBGREAD0_VALUE(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_DBGREAD1
 * Address: 0x190
 * SCT: no
*/
#define HW_ICOLL_DBGREAD1           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x190))
#define BP_ICOLL_DBGREAD1_VALUE     0
#define BM_ICOLL_DBGREAD1_VALUE     0xffffffff
#define BF_ICOLL_DBGREAD1_VALUE(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_DBGFLAG
 * Address: 0x1a0
 * SCT: yes
*/
#define HW_ICOLL_DBGFLAG            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1a0 + 0x0))
#define HW_ICOLL_DBGFLAG_SET        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1a0 + 0x4))
#define HW_ICOLL_DBGFLAG_CLR        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1a0 + 0x8))
#define HW_ICOLL_DBGFLAG_TOG        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1a0 + 0xc))
#define BP_ICOLL_DBGFLAG_FLAG       0
#define BM_ICOLL_DBGFLAG_FLAG       0xffff
#define BF_ICOLL_DBGFLAG_FLAG(v)    (((v) << 0) & 0xffff)

/**
 * Register: HW_ICOLL_DBGREQUESTn
 * Address: 0x1b0+n*0x10
 * SCT: no
*/
#define HW_ICOLL_DBGREQUESTn(n)         (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1b0+(n)*0x10))
#define BP_ICOLL_DBGREQUESTn_BITS       0
#define BM_ICOLL_DBGREQUESTn_BITS       0xffffffff
#define BF_ICOLL_DBGREQUESTn_BITS(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_VERSION
 * Address: 0x1d0
 * SCT: no
*/
#define HW_ICOLL_VERSION            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1d0))
#define BP_ICOLL_VERSION_MAJOR      24
#define BM_ICOLL_VERSION_MAJOR      0xff000000
#define BF_ICOLL_VERSION_MAJOR(v)   (((v) << 24) & 0xff000000)
#define BP_ICOLL_VERSION_MINOR      16
#define BM_ICOLL_VERSION_MINOR      0xff0000
#define BF_ICOLL_VERSION_MINOR(v)   (((v) << 16) & 0xff0000)
#define BP_ICOLL_VERSION_STEP       0
#define BM_ICOLL_VERSION_STEP       0xffff
#define BF_ICOLL_VERSION_STEP(v)    (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__STMP3700__ICOLL__H__ */
