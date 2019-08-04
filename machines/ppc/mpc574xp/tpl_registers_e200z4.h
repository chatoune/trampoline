/*
 * @file tpl_registers_e200z4.h
 *
 * @section desc File description
 *
 * Trampoline registers for the e200z4 core asm files
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005-2007
 * Autosar extension is copyright (c) IRCCyN and ESEO 2007
 * libpcl port is copyright (c) Jean-Francois Deverge 2006
 * ARM7 port is copyright (c) ESEO 2007
 * hcs12 port is copyright (c) Geensys 2007
 * Trampoline and its Autosar extension are protected by the
 * French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#ifndef TPL_REGISTERS_E200Z4_H
#define TPL_REGISTERS_E200Z4_H

/*=============================================================================
 * Register number for special purpose registers
 * 
 * extracted from MPC5744P Reference Manual, Rev. 6, chapter 15.2 - register model
 */
/* General Registers */
#define spr_CTR     9
#define spr_LR      8
#define spr_XER     1

/* Exception Handling / Control Registers */
/* SPR General */
#define spr_SPRG0       272
#define spr_SPRG1       273
#define spr_SPRG2       274
#define spr_SPRG3       275
/* User SPR General */
#define spr_USPRG0      256
/* Save and Restore */
#define spr_SRR0        26
#define spr_SRR1        27
#define spr_CSRR0       58
#define spr_CSRR1       59
#define spr_DSRR0       574
#define spr_DSRR1       575
#define spr_MCSRR0      570
#define spr_MCSRR1      571
/* Interrupt Vector Prefix */
#define spr_IVPR        63
/* Exception Syndrome */
#define spr_ESR         62
/* ESR bit definition */
#define ESR_PIL         0x08000000  /* Illegal Instruction exception */
#define ESR_PPR         0x04000000  /* Privileged Instruction exception */
#define ESR_PTR         0x02000000  /* Trap exception */
#define ESR_FP          0x01000000  /* Floating_point operation */
#define ESR_ST          0x00800000  /* Store operation */
#define ESR_BO          0x00020000  /* Byte Ordering exception */
#define ESR_SPV         0x00000080  /* EFPU APU Operation */
#define ESR_VLEMI       0x00000020  /* VLE Mode Instruction */
/* Data Exception Address */
#define spr_DEAR        61
/* Machine Check Syndrome Register */
#define spr_MCSR        572
/* Machine Check Address Register */
#define spr_MCAR        573

/* Processor Control Registers */
/* Processor Version */
#define spr_PVR         287
/* Processor ID */
#define spr_PIR         286
/* Thread ID */
#define spr_TIR         446
/* Hardware Implementation Dependent */
#define spr_HID0        1008
#define spr_HID1        1009
/* System Version */
#define spr_SVR         1023
/* System Information */
#define spr_SIR         992 /* Or 962 */
/* MSR - Machine State bit definition */
#define MSR_SPV         0x02000000  /* SP/Embedded FP/Vector available: ignored but cleared */
#define MSR_WE          0x00040000  /* Wait State enable: ignored but cleared */
#define MSR_CE          0x00020000  /*  Critical Interrupt Enable */
#define MSR_EE          0x8000      /* External Interrupt Enable */
#define MSR_PR          0x4000      /* Problem State: supervisor(0), user(1) mode */
#define MSR_FP          0x2000      /* Floating-Point Available: ignored but cleared */
#define MSR_ME          0x1000      /* Machine Check Enable */
#define MSR_FE0         0x0800      /* Floating-point exception mode 0: ignored but cleared */
#define MSR_DE          0x0200      /* Debug Interrupt Enable */
#define MSR_FE1         0x0100      /* Floating-point mode 1: ignored but cleared */
#define MSR_IS          0x0020      /* Instruction Address Space: ignored but cleared */
#define MSR_DS          0x0010      /* Data Address Space: ignored but cleared */
#define MSR_PMM         0x0004      /* PMM Performance monitor mark bit */
#define MSR_RI          0x0002      /* Recoverable Interrupt */

/* BTB Register */
/* BTB Control */
#define spr_BUCSR       1013

/* EPFU Registers */
/* EPFU APU Status and Control Register */
#define spr_SPEFSCR     512

/* Memory Management Registers */
/* Process ID */
#define spr_PID0        48
/* MPU Assist */
#define spr_MAS0        624
#define spr_MAS1        625
#define spr_MAS2        626
#define spr_MAS3        627
/* Control & Configuration */
#define spr_MPU0CSR0    1014
#define spr_MMUCFG      1015
#define spr_MPU0CFG     692

/* Debug Registers */
/* Debug Control */
#define spr_DBCR0       308
#define spr_DBCR1       309
#define spr_DBCR2       310
#define spr_DBCR3       561
#define spr_DBCR4       563
#define spr_DBCR5       564
#define spr_DBCR6       603
#define spr_DBCR7       596
#define spr_DBCR8       597
#define spr_EDBRAC0     638
#define spr_DEVENT      975
#define spr_DDAM        576
/* Instruction Address Compare */
#define spr_IAC1        312
#define spr_IAC2        313
#define spr_IAC3        314
#define spr_IAC4        315
#define spr_IAC5        565
#define spr_IAC6        566
#define spr_IAC7        567
#define spr_IAC8        568
/* Data Address Compare */
#define spr_DAC1        316
#define spr_DAC2        317
#define spr_DAC3        592
#define spr_DAC4        593
/* Debug Status */
#define spr_DBSR        304
#define spr_DDEAR       600
/* Data Value Compare */
#define spr_DVC1U       601
#define spr_DVC1        318
#define spr_DVC2U       602
#define spr_DVC2        318

/* Cache Registers */
/* Cache Configuration (Read-Only) */
#define spr_L1CFG0      515
#define spr_L1CFG1      516
/* Cache Control */
#define spr_L1CSR0      1010
#define spr_L1CSR1      1011
#define spr_L1FINV0     1016
#define spr_L1FINV1     959

/* NEXUS3 Register */
/* Nexu PID */
#define spr_NPIDR       517

/* Local Memory Configuration Registers (Read-only) */
#define spr_DMEMCFG0    694
#define spr_IMEMCFG0    695

/*=============================================================================
 * Register number for performance monitor registers
 * 
 * extracted from MPC5744P Reference Manual, Rev. 6, chapter 15.2 - register model
 */
/* Control */
#define pmr_PMGC0       400
#define pmr_PMLCa0      144
#define pmr_PMLCa1      145
#define pmr_PMLCa2      146
#define pmr_PMLCa3      147
#define pmr_PMLCb0      272
#define pmr_PMLCb1      273
#define pmr_PMLCb2      274
#define pmr_PMLCb3      275
/* User Control (read-only) */
#define pmr_UPMGC0      384
#define pmr_UPMLCa0     128
#define pmr_UPMLCa1     129
#define pmr_UPMLCa2     130
#define pmr_UPMLCa3     131
#define pmr_UPMLCb0     256
#define pmr_UPMLCb1     257
#define pmr_UPMLCb2     258
#define pmr_UPMLCb3     259
/* Counters */
#define pmr_PMC0        16
#define pmr_PMC1        17
#define pmr_PMC2        18
#define pmr_PMC3        19
/* User Counters (read-only) */
#define pmr_PMC0        0
#define pmr_PMC1        1
#define pmr_PMC2        2
#define pmr_PMC3        3

/*=============================================================================
 * Register number for debug control registers
 * 
 * extracted from MPC5744P Reference Manual, Rev. 6, chapter 15.2 - register model
 */
/* Nexus3 Debug Registers */
#define dcr_DC1         368
#define dcr_DC2         369
#define dcr_DC3         370
#define dcr_DC4         371
#define dcr_WT          375
#define dcr_DTC         376
#define dcr_DTSA1       377
#define dcr_DTSA2       378
#define dcr_DTSA3       379
#define dcr_DTSA4       380
#define dcr_DTEA1       381
#define dcr_DTEA2       382
#define dcr_DTEA3       383
#define dcr_DTEA4       408
#define dcr_DS          409
#define dcr_OVCR        410
#define dcr_WMSK        411
#define dcr_PTSTC       412
#define dcr_PTETC       413
#define dcr_DTSTC       414
#define dcr_DTETC       415

/* Local Memory Registers */
#define dcr_DMEMCTL0    496
#define dcr_DMEMCTL1    498

/* e2eECC Registers */
#define dcr_E2ECTL0     510
#define dcr_E2EECSR0    511

/*=============================================================================
 * Register number for thread management registers
 * 
 * extracted from MPC5744P Reference Manual, Rev. 6, chapter 15.2 - register model
 */
#define tmr_TMCFG0      16

#endif
