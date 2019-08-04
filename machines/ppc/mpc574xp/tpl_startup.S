/*
 * @file tpl_startup.S
 *
 * @section desc File description
 *
 * Trampoline MPC574xP Software Start Up
 *  (AN4339 Rev 0: MPC5744P Software Start Up and Optimization application note from NXP)
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

 #include "tpl_registers_e200z4.h"

; Because of the Lockstep mode of the MPC574xP family
; regsiters needs to be initisalized to avoid exceptions
; being triggered while operating
TPL_GLOBAL(tpl_reset_registers)
TPL_GLOBAL_REF(tpl_reset_registers):
    /* Initialize General-Purpose Registers 0-31 */
    e_li    r0,0
    e_li    r1,0
    e_li    r2,0
    e_li    r3,0
    e_li    r4,0
    e_li    r5,0
    e_li    r6,0
    e_li    r7,0
    e_li    r8,0
    e_li    r9,0
    e_li    r10,0
    e_li    r11,0
    e_li    r12,0
    e_li    r13,0
    e_li    r14,0
    e_li    r15,0
    e_li    r16,0
    e_li    r17,0
    e_li    r18,0
    e_li    r19,0
    e_li    r20,0
    e_li    r21,0
    e_li    r22,0
    e_li    r23,0
    e_li    r24,0
    e_li    r25,0
    e_li    r26,0
    e_li    r27,0
    e_li    r28,0
    e_li    r29,0
    e_li    r30,0
    e_li    r31,0

    /* Initialize other registers that might be stack before being used */
    mtspr   spr_XER,r1
    mtcrf   0xFF,r1
    mtspr   spr_CTR,r1
    mtspr   spr_SPRG0,r1
    mtspr   spr_SPRG1,r1
    mtspr   spr_SPRG2,r1
    mtspr   spr_SPRG3,r1
    mtspr   spr_SRR0,r1
    mtspr   spr_SRR1,r1
    mtspr   spr_CSRR0,r1
    mtspr   spr_CSRR1,r1
    mtspr   spr_MCSRR0,r1
    mtspr   spr_MCSRR0,r1
    mtspr   spr_DEAR,r1
    mtspr   spr_IVPR,r1
    mtspr   spr_USPRG0,r1
    mtspr   spr_ESR,r1
    mtspr   spr_LR,r1

    se_blr