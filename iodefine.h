/******************************************************************************/
/* DISCLAIMER                                                                 */
/* This software is supplied by Renesas Electronics Corporation and is only   */
/* intended for use with Renesas products. No other uses are authorized.This  */
/* software is owned by Renesas Electronics Corporation and is protected      */
/* under all applicable laws, including copyright laws.                       */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES          */
/* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING  */
/* BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR */
/* PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY           */
/* DISCLAIMED.                                                                */
/* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS     */
/* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE       */
/* LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL      */
/* DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS    */
/* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.           */
/* Renesas reserves the right, without notice, to make changes to this        */
/* software and to discontinue the availability of this software.             */
/* By using this software, you agree to the additional terms and conditions   */
/* found by accessing the following link:                                     */
/* http://www.renesas.com/disclaimer                                          */
/*                                                                            */
/* Device     : RH/RH850G3KH/R7F701562                                        */
/* File Name  : iodefine.h                                                    */
/* Abstract   : Definition of I/O Register                                    */
/* History    : V1.20  [Device File version]                                  */
/* Options    : -df=C:\Program Files (x86)\Renesas Electronics\CS+\CC\Device\ */
/*              RH850\Devicefile\DR7F701562.DVF -o=D:\??????\code\iodefine.h  */
/*              -def=off -f                                                   */
/* Date       : 2021/12/14                                                    */
/* Version    : V1.09.00.04  [df2iodef.exe version]                           */
/* This is a typical example.                                                 */
/*                                                                            */
/******************************************************************************/
#ifndef __R7F701562IODEFINE_HEADER__
#define __R7F701562IODEFINE_HEADER__

typedef struct
{
    unsigned char bit00:1;
    unsigned char bit01:1;
    unsigned char bit02:1;
    unsigned char bit03:1;
    unsigned char bit04:1;
    unsigned char bit05:1;
    unsigned char bit06:1;
    unsigned char bit07:1;
} __bitf_T;

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3

struct __tag0
{                                                          /* Bit Access       */
    unsigned char  ATAUD0IENH0:1;                          /* ATAUD0IENH0      */
    unsigned char  ATAUD0IENH1:1;                          /* ATAUD0IENH1      */
    unsigned char  ATAUD0IENH2:1;                          /* ATAUD0IENH2      */
    unsigned char  ATAUD0IENH3:1;                          /* ATAUD0IENH3      */
    unsigned char  ATAUD0IENH4:1;                          /* ATAUD0IENH4      */
    unsigned char  ATAUD0IENH5:1;                          /* ATAUD0IENH5      */
    unsigned char  ATAUD0IENH6:1;                          /* ATAUD0IENH6      */
    unsigned char  ATAUD0IENH7:1;                          /* ATAUD0IENH7      */
};
struct __tag1
{                                                          /* Bit Access       */
    unsigned char  ATAUD0IENL0:1;                          /* ATAUD0IENL0      */
    unsigned char  ATAUD0IENL1:1;                          /* ATAUD0IENL1      */
    unsigned char  ATAUD0IENL2:1;                          /* ATAUD0IENL2      */
    unsigned char  ATAUD0IENL3:1;                          /* ATAUD0IENL3      */
    unsigned char  ATAUD0IENL4:1;                          /* ATAUD0IENL4      */
    unsigned char  ATAUD0IENL5:1;                          /* ATAUD0IENL5      */
    unsigned char  ATAUD0IENL6:1;                          /* ATAUD0IENL6      */
    unsigned char  ATAUD0IENL7:1;                          /* ATAUD0IENL7      */
};
struct __tag2
{                                                          /* Bit Access       */
    unsigned char  ATAUB0IENH0:1;                          /* ATAUB0IENH0      */
    unsigned char  ATAUB0IENH1:1;                          /* ATAUB0IENH1      */
    unsigned char  ATAUB0IENH2:1;                          /* ATAUB0IENH2      */
    unsigned char  ATAUB0IENH3:1;                          /* ATAUB0IENH3      */
    unsigned char  ATAUB0IENH4:1;                          /* ATAUB0IENH4      */
    unsigned char  ATAUB0IENH5:1;                          /* ATAUB0IENH5      */
    unsigned char  ATAUB0IENH6:1;                          /* ATAUB0IENH6      */
    unsigned char  ATAUB0IENH7:1;                          /* ATAUB0IENH7      */
};
struct __tag3
{                                                          /* Bit Access       */
    unsigned char  ATAUB0IENL0:1;                          /* ATAUB0IENL0      */
    unsigned char  ATAUB0IENL1:1;                          /* ATAUB0IENL1      */
    unsigned char  ATAUB0IENL2:1;                          /* ATAUB0IENL2      */
    unsigned char  ATAUB0IENL3:1;                          /* ATAUB0IENL3      */
    unsigned char  ATAUB0IENL4:1;                          /* ATAUB0IENL4      */
    unsigned char  ATAUB0IENL5:1;                          /* ATAUB0IENL5      */
    unsigned char  ATAUB0IENL6:1;                          /* ATAUB0IENL6      */
    unsigned char  ATAUB0IENL7:1;                          /* ATAUB0IENL7      */
};
struct __tag4
{                                                          /* Bit Access       */
    unsigned char  AENCA0IENL0:1;                          /* AENCA0IENL0      */
    unsigned char  AENCA0IENL1:1;                          /* AENCA0IENL1      */
    unsigned char  AENCA0IENL2:1;                          /* AENCA0IENL2      */
    unsigned char  AENCA0IENL3:1;                          /* AENCA0IENL3      */
    unsigned char  AENCA0IENL4:1;                          /* AENCA0IENL4      */
    unsigned char  :3;                                     /* Reserved Bits    */
};
struct __tag5
{                                                          /* Bit Access       */
    unsigned char  AADCTL0ENL0:1;                          /* AADCTL0ENL0      */
    unsigned char  AADCTL0ENL1:1;                          /* AADCTL0ENL1      */
    unsigned char  AADCTL0ENL2:1;                          /* AADCTL0ENL2      */
    unsigned char  :5;                                     /* Reserved Bits    */
};
struct __tag6
{                                                          /* Bit Access       */
    unsigned char  AADCTL1ENL0:1;                          /* AADCTL1ENL0      */
    unsigned char  AADCTL1ENL1:1;                          /* AADCTL1ENL1      */
    unsigned char  AADCTL1ENL2:1;                          /* AADCTL1ENL2      */
    unsigned char  :5;                                     /* Reserved Bits    */
};
struct __tag7
{                                                          /* Bit Access       */
    unsigned char  :7;                                     /* Reserved Bits    */
    unsigned char  SVSDIS:1;                               /* SVSDIS           */
};
struct __tag8
{                                                          /* Bit Access       */
    unsigned char  SCE:1;                                  /* SCE              */
    unsigned char  :7;                                     /* Reserved Bits    */
};
struct __tag9
{                                                          /* Bit Access       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  SLSB:1;                                 /* SLSB             */
    unsigned char  AMPM:1;                                 /* AMPM             */
    unsigned char  CEST:1;                                 /* CEST             */
    unsigned char  CE:1;                                   /* CE               */
};
struct __tag10
{                                                          /* Bit Access       */
    unsigned char  CT0:1;                                  /* CT0              */
    unsigned char  CT1:1;                                  /* CT1              */
    unsigned char  CT2:1;                                  /* CT2              */
    unsigned char  EN1S:1;                                 /* EN1S             */
    unsigned char  ENALM:1;                                /* ENALM            */
    unsigned char  EN1HZ:1;                                /* EN1HZ            */
    unsigned char  :2;                                     /* Reserved Bits    */
};
struct __tag11
{                                                          /* Bit Access       */
    unsigned char  WAIT:1;                                 /* WAIT             */
    unsigned char  WST:1;                                  /* WST              */
    unsigned char  RSUB:1;                                 /* RSUB             */
    unsigned char  RSST:1;                                 /* RSST             */
    unsigned char  WSST:1;                                 /* WSST             */
    unsigned char  WUST:1;                                 /* WUST             */
    unsigned char  :2;                                     /* Reserved Bits    */
};
struct __tag12
{                                                          /* Bit Access       */
    unsigned char  KRM0:1;                                 /* KRM0             */
    unsigned char  KRM1:1;                                 /* KRM1             */
    unsigned char  KRM2:1;                                 /* KRM2             */
    unsigned char  KRM3:1;                                 /* KRM3             */
    unsigned char  KRM4:1;                                 /* KRM4             */
    unsigned char  KRM5:1;                                 /* KRM5             */
    unsigned char  KRM6:1;                                 /* KRM6             */
    unsigned char  KRM7:1;                                 /* KRM7             */
};
struct __tag13
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IC_1:1;                          /* P0CSIH2IC_1      */
    unsigned char  P1CSIH2IC_1:1;                          /* P1CSIH2IC_1      */
    unsigned char  P2CSIH2IC_1:1;                          /* P2CSIH2IC_1      */
    unsigned char  P3CSIH2IC_1:1;                          /* P3CSIH2IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IC_1:1;                          /* TBCSIH2IC_1      */
    unsigned char  MKCSIH2IC_1:1;                          /* MKCSIH2IC_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IC_1:1;                          /* RFCSIH2IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IC_1:1;                          /* CTCSIH2IC_1      */
};
struct __tag14
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IC_1:1;                          /* P0CSIH3IC_1      */
    unsigned char  P1CSIH3IC_1:1;                          /* P1CSIH3IC_1      */
    unsigned char  P2CSIH3IC_1:1;                          /* P2CSIH3IC_1      */
    unsigned char  P3CSIH3IC_1:1;                          /* P3CSIH3IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IC_1:1;                          /* TBCSIH3IC_1      */
    unsigned char  MKCSIH3IC_1:1;                          /* MKCSIH3IC_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IC_1:1;                          /* RFCSIH3IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IC_1:1;                          /* CTCSIH3IC_1      */
};
struct __tag15
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IR_1:1;                          /* P0CSIH2IR_1      */
    unsigned char  P1CSIH2IR_1:1;                          /* P1CSIH2IR_1      */
    unsigned char  P2CSIH2IR_1:1;                          /* P2CSIH2IR_1      */
    unsigned char  P3CSIH2IR_1:1;                          /* P3CSIH2IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IR_1:1;                          /* TBCSIH2IR_1      */
    unsigned char  MKCSIH2IR_1:1;                          /* MKCSIH2IR_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IR_1:1;                          /* RFCSIH2IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IR_1:1;                          /* CTCSIH2IR_1      */
};
struct __tag16
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IRE_1:1;                         /* P0CSIH2IRE_1     */
    unsigned char  P1CSIH2IRE_1:1;                         /* P1CSIH2IRE_1     */
    unsigned char  P2CSIH2IRE_1:1;                         /* P2CSIH2IRE_1     */
    unsigned char  P3CSIH2IRE_1:1;                         /* P3CSIH2IRE_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IRE_1:1;                         /* TBCSIH2IRE_1     */
    unsigned char  MKCSIH2IRE_1:1;                         /* MKCSIH2IRE_1     */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IRE_1:1;                         /* RFCSIH2IRE_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IRE_1:1;                         /* CTCSIH2IRE_1     */
};
struct __tag17
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IJC_1:1;                         /* P0CSIH2IJC_1     */
    unsigned char  P1CSIH2IJC_1:1;                         /* P1CSIH2IJC_1     */
    unsigned char  P2CSIH2IJC_1:1;                         /* P2CSIH2IJC_1     */
    unsigned char  P3CSIH2IJC_1:1;                         /* P3CSIH2IJC_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IJC_1:1;                         /* TBCSIH2IJC_1     */
    unsigned char  MKCSIH2IJC_1:1;                         /* MKCSIH2IJC_1     */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IJC_1:1;                         /* RFCSIH2IJC_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IJC_1:1;                         /* CTCSIH2IJC_1     */
};
struct __tag18
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IR_1:1;                          /* P0CSIH3IR_1      */
    unsigned char  P1CSIH3IR_1:1;                          /* P1CSIH3IR_1      */
    unsigned char  P2CSIH3IR_1:1;                          /* P2CSIH3IR_1      */
    unsigned char  P3CSIH3IR_1:1;                          /* P3CSIH3IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IR_1:1;                          /* TBCSIH3IR_1      */
    unsigned char  MKCSIH3IR_1:1;                          /* MKCSIH3IR_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IR_1:1;                          /* RFCSIH3IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IR_1:1;                          /* CTCSIH3IR_1      */
};
struct __tag19
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IRE_1:1;                         /* P0CSIH3IRE_1     */
    unsigned char  P1CSIH3IRE_1:1;                         /* P1CSIH3IRE_1     */
    unsigned char  P2CSIH3IRE_1:1;                         /* P2CSIH3IRE_1     */
    unsigned char  P3CSIH3IRE_1:1;                         /* P3CSIH3IRE_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IRE_1:1;                         /* TBCSIH3IRE_1     */
    unsigned char  MKCSIH3IRE_1:1;                         /* MKCSIH3IRE_1     */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IRE_1:1;                         /* RFCSIH3IRE_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IRE_1:1;                         /* CTCSIH3IRE_1     */
};
struct __tag20
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IJC_1:1;                         /* P0CSIH3IJC_1     */
    unsigned char  P1CSIH3IJC_1:1;                         /* P1CSIH3IJC_1     */
    unsigned char  P2CSIH3IJC_1:1;                         /* P2CSIH3IJC_1     */
    unsigned char  P3CSIH3IJC_1:1;                         /* P3CSIH3IJC_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IJC_1:1;                         /* TBCSIH3IJC_1     */
    unsigned char  MKCSIH3IJC_1:1;                         /* MKCSIH3IJC_1     */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IJC_1:1;                         /* RFCSIH3IJC_1     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IJC_1:1;                         /* CTCSIH3IJC_1     */
};
struct __tag21
{                                                          /* Bit Access       */
    unsigned char  P0CSIH1IC_1:1;                          /* P0CSIH1IC_1      */
    unsigned char  P1CSIH1IC_1:1;                          /* P1CSIH1IC_1      */
    unsigned char  P2CSIH1IC_1:1;                          /* P2CSIH1IC_1      */
    unsigned char  P3CSIH1IC_1:1;                          /* P3CSIH1IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH1IC_1:1;                          /* TBCSIH1IC_1      */
    unsigned char  MKCSIH1IC_1:1;                          /* MKCSIH1IC_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH1IC_1:1;                          /* RFCSIH1IC_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH1IC_1:1;                          /* CTCSIH1IC_1      */
};
struct __tag22
{                                                          /* Bit Access       */
    unsigned char  P0CSIH1IR_1:1;                          /* P0CSIH1IR_1      */
    unsigned char  P1CSIH1IR_1:1;                          /* P1CSIH1IR_1      */
    unsigned char  P2CSIH1IR_1:1;                          /* P2CSIH1IR_1      */
    unsigned char  P3CSIH1IR_1:1;                          /* P3CSIH1IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH1IR_1:1;                          /* TBCSIH1IR_1      */
    unsigned char  MKCSIH1IR_1:1;                          /* MKCSIH1IR_1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH1IR_1:1;                          /* RFCSIH1IR_1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH1IR_1:1;                          /* CTCSIH1IR_1      */
};
struct __tag23
{                                                          /* Bit Access       */
    unsigned char  P0ADCA0I0:1;                            /* P0ADCA0I0        */
    unsigned char  P1ADCA0I0:1;                            /* P1ADCA0I0        */
    unsigned char  P2ADCA0I0:1;                            /* P2ADCA0I0        */
    unsigned char  P3ADCA0I0:1;                            /* P3ADCA0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA0I0:1;                            /* TBADCA0I0        */
    unsigned char  MKADCA0I0:1;                            /* MKADCA0I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA0I0:1;                            /* RFADCA0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA0I0:1;                            /* CTADCA0I0        */
};
struct __tag24
{                                                          /* Bit Access       */
    unsigned char  P0ADCA0I1:1;                            /* P0ADCA0I1        */
    unsigned char  P1ADCA0I1:1;                            /* P1ADCA0I1        */
    unsigned char  P2ADCA0I1:1;                            /* P2ADCA0I1        */
    unsigned char  P3ADCA0I1:1;                            /* P3ADCA0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA0I1:1;                            /* TBADCA0I1        */
    unsigned char  MKADCA0I1:1;                            /* MKADCA0I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA0I1:1;                            /* RFADCA0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA0I1:1;                            /* CTADCA0I1        */
};
struct __tag25
{                                                          /* Bit Access       */
    unsigned char  P0ADCA0I2:1;                            /* P0ADCA0I2        */
    unsigned char  P1ADCA0I2:1;                            /* P1ADCA0I2        */
    unsigned char  P2ADCA0I2:1;                            /* P2ADCA0I2        */
    unsigned char  P3ADCA0I2:1;                            /* P3ADCA0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA0I2:1;                            /* TBADCA0I2        */
    unsigned char  MKADCA0I2:1;                            /* MKADCA0I2        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA0I2:1;                            /* RFADCA0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA0I2:1;                            /* CTADCA0I2        */
};
struct __tag26
{                                                          /* Bit Access       */
    unsigned char  P0DCUTDI:1;                             /* P0DCUTDI         */
    unsigned char  P1DCUTDI:1;                             /* P1DCUTDI         */
    unsigned char  P2DCUTDI:1;                             /* P2DCUTDI         */
    unsigned char  P3DCUTDI:1;                             /* P3DCUTDI         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDCUTDI:1;                             /* TBDCUTDI         */
    unsigned char  MKDCUTDI:1;                             /* MKDCUTDI         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDCUTDI:1;                             /* RFDCUTDI         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDCUTDI:1;                             /* CTDCUTDI         */
};
struct __tag27
{                                                          /* Bit Access       */
    unsigned char  P0RCANGERR0:1;                          /* P0RCANGERR0      */
    unsigned char  P1RCANGERR0:1;                          /* P1RCANGERR0      */
    unsigned char  P2RCANGERR0:1;                          /* P2RCANGERR0      */
    unsigned char  P3RCANGERR0:1;                          /* P3RCANGERR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCANGERR0:1;                          /* TBRCANGERR0      */
    unsigned char  MKRCANGERR0:1;                          /* MKRCANGERR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCANGERR0:1;                          /* RFRCANGERR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCANGERR0:1;                          /* CTRCANGERR0      */
};
struct __tag28
{                                                          /* Bit Access       */
    unsigned char  P0RCANGRECC0:1;                         /* P0RCANGRECC0     */
    unsigned char  P1RCANGRECC0:1;                         /* P1RCANGRECC0     */
    unsigned char  P2RCANGRECC0:1;                         /* P2RCANGRECC0     */
    unsigned char  P3RCANGRECC0:1;                         /* P3RCANGRECC0     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCANGRECC0:1;                         /* TBRCANGRECC0     */
    unsigned char  MKRCANGRECC0:1;                         /* MKRCANGRECC0     */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCANGRECC0:1;                         /* RFRCANGRECC0     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCANGRECC0:1;                         /* CTRCANGRECC0     */
};
struct __tag29
{                                                          /* Bit Access       */
    unsigned char  P0RCAN0ERR:1;                           /* P0RCAN0ERR       */
    unsigned char  P1RCAN0ERR:1;                           /* P1RCAN0ERR       */
    unsigned char  P2RCAN0ERR:1;                           /* P2RCAN0ERR       */
    unsigned char  P3RCAN0ERR:1;                           /* P3RCAN0ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN0ERR:1;                           /* TBRCAN0ERR       */
    unsigned char  MKRCAN0ERR:1;                           /* MKRCAN0ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN0ERR:1;                           /* RFRCAN0ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN0ERR:1;                           /* CTRCAN0ERR       */
};
struct __tag30
{                                                          /* Bit Access       */
    unsigned char  P0RCAN0REC:1;                           /* P0RCAN0REC       */
    unsigned char  P1RCAN0REC:1;                           /* P1RCAN0REC       */
    unsigned char  P2RCAN0REC:1;                           /* P2RCAN0REC       */
    unsigned char  P3RCAN0REC:1;                           /* P3RCAN0REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN0REC:1;                           /* TBRCAN0REC       */
    unsigned char  MKRCAN0REC:1;                           /* MKRCAN0REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN0REC:1;                           /* RFRCAN0REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN0REC:1;                           /* CTRCAN0REC       */
};
struct __tag31
{                                                          /* Bit Access       */
    unsigned char  P0RCAN0TRX:1;                           /* P0RCAN0TRX       */
    unsigned char  P1RCAN0TRX:1;                           /* P1RCAN0TRX       */
    unsigned char  P2RCAN0TRX:1;                           /* P2RCAN0TRX       */
    unsigned char  P3RCAN0TRX:1;                           /* P3RCAN0TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN0TRX:1;                           /* TBRCAN0TRX       */
    unsigned char  MKRCAN0TRX:1;                           /* MKRCAN0TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN0TRX:1;                           /* RFRCAN0TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN0TRX:1;                           /* CTRCAN0TRX       */
};
struct __tag32
{                                                          /* Bit Access       */
    unsigned char  P0CSIG0IC:1;                            /* P0CSIG0IC        */
    unsigned char  P1CSIG0IC:1;                            /* P1CSIG0IC        */
    unsigned char  P2CSIG0IC:1;                            /* P2CSIG0IC        */
    unsigned char  P3CSIG0IC:1;                            /* P3CSIG0IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG0IC:1;                            /* TBCSIG0IC        */
    unsigned char  MKCSIG0IC:1;                            /* MKCSIG0IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG0IC:1;                            /* RFCSIG0IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG0IC:1;                            /* CTCSIG0IC        */
};
struct __tag33
{                                                          /* Bit Access       */
    unsigned char  P0CSIG0IR:1;                            /* P0CSIG0IR        */
    unsigned char  P1CSIG0IR:1;                            /* P1CSIG0IR        */
    unsigned char  P2CSIG0IR:1;                            /* P2CSIG0IR        */
    unsigned char  P3CSIG0IR:1;                            /* P3CSIG0IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG0IR:1;                            /* TBCSIG0IR        */
    unsigned char  MKCSIG0IR:1;                            /* MKCSIG0IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG0IR:1;                            /* RFCSIG0IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG0IR:1;                            /* CTCSIG0IR        */
};
struct __tag34
{                                                          /* Bit Access       */
    unsigned char  P0CSIH0IC:1;                            /* P0CSIH0IC        */
    unsigned char  P1CSIH0IC:1;                            /* P1CSIH0IC        */
    unsigned char  P2CSIH0IC:1;                            /* P2CSIH0IC        */
    unsigned char  P3CSIH0IC:1;                            /* P3CSIH0IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH0IC:1;                            /* TBCSIH0IC        */
    unsigned char  MKCSIH0IC:1;                            /* MKCSIH0IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH0IC:1;                            /* RFCSIH0IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH0IC:1;                            /* CTCSIH0IC        */
};
struct __tag35
{                                                          /* Bit Access       */
    unsigned char  P0CSIH0IR:1;                            /* P0CSIH0IR        */
    unsigned char  P1CSIH0IR:1;                            /* P1CSIH0IR        */
    unsigned char  P2CSIH0IR:1;                            /* P2CSIH0IR        */
    unsigned char  P3CSIH0IR:1;                            /* P3CSIH0IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH0IR:1;                            /* TBCSIH0IR        */
    unsigned char  MKCSIH0IR:1;                            /* MKCSIH0IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH0IR:1;                            /* RFCSIH0IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH0IR:1;                            /* CTCSIH0IR        */
};
struct __tag36
{                                                          /* Bit Access       */
    unsigned char  P0CSIH0IRE:1;                           /* P0CSIH0IRE       */
    unsigned char  P1CSIH0IRE:1;                           /* P1CSIH0IRE       */
    unsigned char  P2CSIH0IRE:1;                           /* P2CSIH0IRE       */
    unsigned char  P3CSIH0IRE:1;                           /* P3CSIH0IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH0IRE:1;                           /* TBCSIH0IRE       */
    unsigned char  MKCSIH0IRE:1;                           /* MKCSIH0IRE       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH0IRE:1;                           /* RFCSIH0IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH0IRE:1;                           /* CTCSIH0IRE       */
};
struct __tag37
{                                                          /* Bit Access       */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  FNRF:1;                                 /* FNRF             */
    unsigned char  :3;                                     /* Reserved Bits    */
};
struct __tag38
{                                                          /* Bit Access       */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  FIRF:1;                                 /* FIRF             */
    unsigned char  :3;                                     /* Reserved Bits    */
};
struct __tag39
{                                                          /* Bit Access       */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  IMR0EIMK8:1;                            /* IMR0EIMK8        */
    unsigned char  IMR0EIMK9:1;                            /* IMR0EIMK9        */
    unsigned char  IMR0EIMK10:1;                           /* IMR0EIMK10       */
    unsigned char  IMR0EIMK11:1;                           /* IMR0EIMK11       */
    unsigned char  IMR0EIMK12:1;                           /* IMR0EIMK12       */
    unsigned char  IMR0EIMK13:1;                           /* IMR0EIMK13       */
    unsigned char  IMR0EIMK14:1;                           /* IMR0EIMK14       */
    unsigned char  IMR0EIMK15:1;                           /* IMR0EIMK15       */
    unsigned char  IMR0EIMK16:1;                           /* IMR0EIMK16       */
    unsigned char  IMR0EIMK17:1;                           /* IMR0EIMK17       */
    unsigned char  IMR0EIMK18:1;                           /* IMR0EIMK18       */
    unsigned char  IMR0EIMK19:1;                           /* IMR0EIMK19       */
    unsigned char  IMR0EIMK20:1;                           /* IMR0EIMK20       */
    unsigned char  IMR0EIMK21:1;                           /* IMR0EIMK21       */
    unsigned char  IMR0EIMK22:1;                           /* IMR0EIMK22       */
    unsigned char  IMR0EIMK23:1;                           /* IMR0EIMK23       */
    unsigned char  IMR0EIMK24:1;                           /* IMR0EIMK24       */
    unsigned char  IMR0EIMK25:1;                           /* IMR0EIMK25       */
    unsigned char  IMR0EIMK26:1;                           /* IMR0EIMK26       */
    unsigned char  IMR0EIMK27:1;                           /* IMR0EIMK27       */
    unsigned char  IMR0EIMK28:1;                           /* IMR0EIMK28       */
    unsigned char  IMR0EIMK29:1;                           /* IMR0EIMK29       */
    unsigned char  IMR0EIMK30:1;                           /* IMR0EIMK30       */
    unsigned char  IMR0EIMK31:1;                           /* IMR0EIMK31       */
};
struct __tag40
{                                                          /* Bit Access       */
    unsigned char  P0ADCA0I2_2:1;                          /* P0ADCA0I2_2      */
    unsigned char  P1ADCA0I2_2:1;                          /* P1ADCA0I2_2      */
    unsigned char  P2ADCA0I2_2:1;                          /* P2ADCA0I2_2      */
    unsigned char  P3ADCA0I2_2:1;                          /* P3ADCA0I2_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA0I2_2:1;                          /* TBADCA0I2_2      */
    unsigned char  MKADCA0I2_2:1;                          /* MKADCA0I2_2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA0I2_2:1;                          /* RFADCA0I2_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA0I2_2:1;                          /* CTADCA0I2_2      */
};
struct __tag41
{                                                          /* Bit Access       */
    unsigned char  P0RLIN30:1;                             /* P0RLIN30         */
    unsigned char  P1RLIN30:1;                             /* P1RLIN30         */
    unsigned char  P2RLIN30:1;                             /* P2RLIN30         */
    unsigned char  P3RLIN30:1;                             /* P3RLIN30         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN30:1;                             /* TBRLIN30         */
    unsigned char  MKRLIN30:1;                             /* MKRLIN30         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN30:1;                             /* RFRLIN30         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN30:1;                             /* CTRLIN30         */
};
struct __tag42
{                                                          /* Bit Access       */
    unsigned char  P0RLIN30UR0:1;                          /* P0RLIN30UR0      */
    unsigned char  P1RLIN30UR0:1;                          /* P1RLIN30UR0      */
    unsigned char  P2RLIN30UR0:1;                          /* P2RLIN30UR0      */
    unsigned char  P3RLIN30UR0:1;                          /* P3RLIN30UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN30UR0:1;                          /* TBRLIN30UR0      */
    unsigned char  MKRLIN30UR0:1;                          /* MKRLIN30UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN30UR0:1;                          /* RFRLIN30UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN30UR0:1;                          /* CTRLIN30UR0      */
};
struct __tag43
{                                                          /* Bit Access       */
    unsigned char  P0RLIN30UR1:1;                          /* P0RLIN30UR1      */
    unsigned char  P1RLIN30UR1:1;                          /* P1RLIN30UR1      */
    unsigned char  P2RLIN30UR1:1;                          /* P2RLIN30UR1      */
    unsigned char  P3RLIN30UR1:1;                          /* P3RLIN30UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN30UR1:1;                          /* TBRLIN30UR1      */
    unsigned char  MKRLIN30UR1:1;                          /* MKRLIN30UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN30UR1:1;                          /* RFRLIN30UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN30UR1:1;                          /* CTRLIN30UR1      */
};
struct __tag44
{                                                          /* Bit Access       */
    unsigned char  P0RLIN30UR2:1;                          /* P0RLIN30UR2      */
    unsigned char  P1RLIN30UR2:1;                          /* P1RLIN30UR2      */
    unsigned char  P2RLIN30UR2:1;                          /* P2RLIN30UR2      */
    unsigned char  P3RLIN30UR2:1;                          /* P3RLIN30UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN30UR2:1;                          /* TBRLIN30UR2      */
    unsigned char  MKRLIN30UR2:1;                          /* MKRLIN30UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN30UR2:1;                          /* RFRLIN30UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN30UR2:1;                          /* CTRLIN30UR2      */
};
struct __tag45
{                                                          /* Bit Access       */
    unsigned char  P0P0:1;                                 /* P0P0             */
    unsigned char  P1P0:1;                                 /* P1P0             */
    unsigned char  P2P0:1;                                 /* P2P0             */
    unsigned char  P3P0:1;                                 /* P3P0             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP0:1;                                 /* TBP0             */
    unsigned char  MKP0:1;                                 /* MKP0             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP0:1;                                 /* RFP0             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP0:1;                                 /* CTP0             */
};
struct __tag46
{                                                          /* Bit Access       */
    unsigned char  P0P1:1;                                 /* P0P1             */
    unsigned char  P1P1:1;                                 /* P1P1             */
    unsigned char  P2P1:1;                                 /* P2P1             */
    unsigned char  P3P1:1;                                 /* P3P1             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP1:1;                                 /* TBP1             */
    unsigned char  MKP1:1;                                 /* MKP1             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP1:1;                                 /* RFP1             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP1:1;                                 /* CTP1             */
};
struct __tag47
{                                                          /* Bit Access       */
    unsigned char  P0P2:1;                                 /* P0P2             */
    unsigned char  P1P2:1;                                 /* P1P2             */
    unsigned char  P2P2:1;                                 /* P2P2             */
    unsigned char  P3P2:1;                                 /* P3P2             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP2:1;                                 /* TBP2             */
    unsigned char  MKP2:1;                                 /* MKP2             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP2:1;                                 /* RFP2             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP2:1;                                 /* CTP2             */
};
struct __tag48
{                                                          /* Bit Access       */
    unsigned char  P0WDTA0:1;                              /* P0WDTA0          */
    unsigned char  P1WDTA0:1;                              /* P1WDTA0          */
    unsigned char  P2WDTA0:1;                              /* P2WDTA0          */
    unsigned char  P3WDTA0:1;                              /* P3WDTA0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBWDTA0:1;                              /* TBWDTA0          */
    unsigned char  MKWDTA0:1;                              /* MKWDTA0          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFWDTA0:1;                              /* RFWDTA0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTWDTA0:1;                              /* CTWDTA0          */
};
struct __tag49
{                                                          /* Bit Access       */
    unsigned char  P0WDTA1:1;                              /* P0WDTA1          */
    unsigned char  P1WDTA1:1;                              /* P1WDTA1          */
    unsigned char  P2WDTA1:1;                              /* P2WDTA1          */
    unsigned char  P3WDTA1:1;                              /* P3WDTA1          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBWDTA1:1;                              /* TBWDTA1          */
    unsigned char  MKWDTA1:1;                              /* MKWDTA1          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFWDTA1:1;                              /* RFWDTA1          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTWDTA1:1;                              /* CTWDTA1          */
};
struct __tag50
{                                                          /* Bit Access       */
    unsigned char  P0P3:1;                                 /* P0P3             */
    unsigned char  P1P3:1;                                 /* P1P3             */
    unsigned char  P2P3:1;                                 /* P2P3             */
    unsigned char  P3P3:1;                                 /* P3P3             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP3:1;                                 /* TBP3             */
    unsigned char  MKP3:1;                                 /* MKP3             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP3:1;                                 /* RFP3             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP3:1;                                 /* CTP3             */
};
struct __tag51
{                                                          /* Bit Access       */
    unsigned char  P0P4:1;                                 /* P0P4             */
    unsigned char  P1P4:1;                                 /* P1P4             */
    unsigned char  P2P4:1;                                 /* P2P4             */
    unsigned char  P3P4:1;                                 /* P3P4             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP4:1;                                 /* TBP4             */
    unsigned char  MKP4:1;                                 /* MKP4             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP4:1;                                 /* RFP4             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP4:1;                                 /* CTP4             */
};
struct __tag52
{                                                          /* Bit Access       */
    unsigned char  P0P5:1;                                 /* P0P5             */
    unsigned char  P1P5:1;                                 /* P1P5             */
    unsigned char  P2P5:1;                                 /* P2P5             */
    unsigned char  P3P5:1;                                 /* P3P5             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP5:1;                                 /* TBP5             */
    unsigned char  MKP5:1;                                 /* MKP5             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP5:1;                                 /* RFP5             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP5:1;                                 /* CTP5             */
};
struct __tag53
{                                                          /* Bit Access       */
    unsigned char  P0P10:1;                                /* P0P10            */
    unsigned char  P1P10:1;                                /* P1P10            */
    unsigned char  P2P10:1;                                /* P2P10            */
    unsigned char  P3P10:1;                                /* P3P10            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP10:1;                                /* TBP10            */
    unsigned char  MKP10:1;                                /* MKP10            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP10:1;                                /* RFP10            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP10:1;                                /* CTP10            */
};
struct __tag54
{                                                          /* Bit Access       */
    unsigned char  P0P11:1;                                /* P0P11            */
    unsigned char  P1P11:1;                                /* P1P11            */
    unsigned char  P2P11:1;                                /* P2P11            */
    unsigned char  P3P11:1;                                /* P3P11            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP11:1;                                /* TBP11            */
    unsigned char  MKP11:1;                                /* MKP11            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP11:1;                                /* RFP11            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP11:1;                                /* CTP11            */
};
struct __tag55
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I1:1;                            /* P0TAUD0I1        */
    unsigned char  P1TAUD0I1:1;                            /* P1TAUD0I1        */
    unsigned char  P2TAUD0I1:1;                            /* P2TAUD0I1        */
    unsigned char  P3TAUD0I1:1;                            /* P3TAUD0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I1:1;                            /* TBTAUD0I1        */
    unsigned char  MKTAUD0I1:1;                            /* MKTAUD0I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I1:1;                            /* RFTAUD0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I1:1;                            /* CTTAUD0I1        */
};
struct __tag56
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I3:1;                            /* P0TAUD0I3        */
    unsigned char  P1TAUD0I3:1;                            /* P1TAUD0I3        */
    unsigned char  P2TAUD0I3:1;                            /* P2TAUD0I3        */
    unsigned char  P3TAUD0I3:1;                            /* P3TAUD0I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I3:1;                            /* TBTAUD0I3        */
    unsigned char  MKTAUD0I3:1;                            /* MKTAUD0I3        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I3:1;                            /* RFTAUD0I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I3:1;                            /* CTTAUD0I3        */
};
struct __tag57
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I5:1;                            /* P0TAUD0I5        */
    unsigned char  P1TAUD0I5:1;                            /* P1TAUD0I5        */
    unsigned char  P2TAUD0I5:1;                            /* P2TAUD0I5        */
    unsigned char  P3TAUD0I5:1;                            /* P3TAUD0I5        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I5:1;                            /* TBTAUD0I5        */
    unsigned char  MKTAUD0I5:1;                            /* MKTAUD0I5        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I5:1;                            /* RFTAUD0I5        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I5:1;                            /* CTTAUD0I5        */
};
struct __tag58
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I7:1;                            /* P0TAUD0I7        */
    unsigned char  P1TAUD0I7:1;                            /* P1TAUD0I7        */
    unsigned char  P2TAUD0I7:1;                            /* P2TAUD0I7        */
    unsigned char  P3TAUD0I7:1;                            /* P3TAUD0I7        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I7:1;                            /* TBTAUD0I7        */
    unsigned char  MKTAUD0I7:1;                            /* MKTAUD0I7        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I7:1;                            /* RFTAUD0I7        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I7:1;                            /* CTTAUD0I7        */
};
struct __tag59
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I9:1;                            /* P0TAUD0I9        */
    unsigned char  P1TAUD0I9:1;                            /* P1TAUD0I9        */
    unsigned char  P2TAUD0I9:1;                            /* P2TAUD0I9        */
    unsigned char  P3TAUD0I9:1;                            /* P3TAUD0I9        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I9:1;                            /* TBTAUD0I9        */
    unsigned char  MKTAUD0I9:1;                            /* MKTAUD0I9        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I9:1;                            /* RFTAUD0I9        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I9:1;                            /* CTTAUD0I9        */
};
struct __tag60
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I11:1;                           /* P0TAUD0I11       */
    unsigned char  P1TAUD0I11:1;                           /* P1TAUD0I11       */
    unsigned char  P2TAUD0I11:1;                           /* P2TAUD0I11       */
    unsigned char  P3TAUD0I11:1;                           /* P3TAUD0I11       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I11:1;                           /* TBTAUD0I11       */
    unsigned char  MKTAUD0I11:1;                           /* MKTAUD0I11       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I11:1;                           /* RFTAUD0I11       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I11:1;                           /* CTTAUD0I11       */
};
struct __tag61
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I13:1;                           /* P0TAUD0I13       */
    unsigned char  P1TAUD0I13:1;                           /* P1TAUD0I13       */
    unsigned char  P2TAUD0I13:1;                           /* P2TAUD0I13       */
    unsigned char  P3TAUD0I13:1;                           /* P3TAUD0I13       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I13:1;                           /* TBTAUD0I13       */
    unsigned char  MKTAUD0I13:1;                           /* MKTAUD0I13       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I13:1;                           /* RFTAUD0I13       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I13:1;                           /* CTTAUD0I13       */
};
struct __tag62
{                                                          /* Bit Access       */
    unsigned char  P0TAUD0I15:1;                           /* P0TAUD0I15       */
    unsigned char  P1TAUD0I15:1;                           /* P1TAUD0I15       */
    unsigned char  P2TAUD0I15:1;                           /* P2TAUD0I15       */
    unsigned char  P3TAUD0I15:1;                           /* P3TAUD0I15       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUD0I15:1;                           /* TBTAUD0I15       */
    unsigned char  MKTAUD0I15:1;                           /* MKTAUD0I15       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUD0I15:1;                           /* RFTAUD0I15       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUD0I15:1;                           /* CTTAUD0I15       */
};
struct __tag63
{                                                          /* Bit Access       */
    unsigned char  P0ADCA0ERR:1;                           /* P0ADCA0ERR       */
    unsigned char  P1ADCA0ERR:1;                           /* P1ADCA0ERR       */
    unsigned char  P2ADCA0ERR:1;                           /* P2ADCA0ERR       */
    unsigned char  P3ADCA0ERR:1;                           /* P3ADCA0ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA0ERR:1;                           /* TBADCA0ERR       */
    unsigned char  MKADCA0ERR:1;                           /* MKADCA0ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA0ERR:1;                           /* RFADCA0ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA0ERR:1;                           /* CTADCA0ERR       */
};
struct __tag64
{                                                          /* Bit Access       */
    unsigned char  P0CSIG0IRE:1;                           /* P0CSIG0IRE       */
    unsigned char  P1CSIG0IRE:1;                           /* P1CSIG0IRE       */
    unsigned char  P2CSIG0IRE:1;                           /* P2CSIG0IRE       */
    unsigned char  P3CSIG0IRE:1;                           /* P3CSIG0IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG0IRE:1;                           /* TBCSIG0IRE       */
    unsigned char  MKCSIG0IRE:1;                           /* MKCSIG0IRE       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG0IRE:1;                           /* RFCSIG0IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG0IRE:1;                           /* CTCSIG0IRE       */
};
struct __tag65
{                                                          /* Bit Access       */
    unsigned char  P0RLIN20:1;                             /* P0RLIN20         */
    unsigned char  P1RLIN20:1;                             /* P1RLIN20         */
    unsigned char  P2RLIN20:1;                             /* P2RLIN20         */
    unsigned char  P3RLIN20:1;                             /* P3RLIN20         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN20:1;                             /* TBRLIN20         */
    unsigned char  MKRLIN20:1;                             /* MKRLIN20         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN20:1;                             /* RFRLIN20         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN20:1;                             /* CTRLIN20         */
};
struct __tag66
{                                                          /* Bit Access       */
    unsigned char  P0RLIN21:1;                             /* P0RLIN21         */
    unsigned char  P1RLIN21:1;                             /* P1RLIN21         */
    unsigned char  P2RLIN21:1;                             /* P2RLIN21         */
    unsigned char  P3RLIN21:1;                             /* P3RLIN21         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN21:1;                             /* TBRLIN21         */
    unsigned char  MKRLIN21:1;                             /* MKRLIN21         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN21:1;                             /* RFRLIN21         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN21:1;                             /* CTRLIN21         */
};
struct __tag67
{                                                          /* Bit Access       */
    unsigned char  P0DMA0:1;                               /* P0DMA0           */
    unsigned char  P1DMA0:1;                               /* P1DMA0           */
    unsigned char  P2DMA0:1;                               /* P2DMA0           */
    unsigned char  P3DMA0:1;                               /* P3DMA0           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA0:1;                               /* TBDMA0           */
    unsigned char  MKDMA0:1;                               /* MKDMA0           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA0:1;                               /* RFDMA0           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA0:1;                               /* CTDMA0           */
};
struct __tag68
{                                                          /* Bit Access       */
    unsigned char  P0DMA1:1;                               /* P0DMA1           */
    unsigned char  P1DMA1:1;                               /* P1DMA1           */
    unsigned char  P2DMA1:1;                               /* P2DMA1           */
    unsigned char  P3DMA1:1;                               /* P3DMA1           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA1:1;                               /* TBDMA1           */
    unsigned char  MKDMA1:1;                               /* MKDMA1           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA1:1;                               /* RFDMA1           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA1:1;                               /* CTDMA1           */
};
struct __tag69
{                                                          /* Bit Access       */
    unsigned char  P0DMA2:1;                               /* P0DMA2           */
    unsigned char  P1DMA2:1;                               /* P1DMA2           */
    unsigned char  P2DMA2:1;                               /* P2DMA2           */
    unsigned char  P3DMA2:1;                               /* P3DMA2           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA2:1;                               /* TBDMA2           */
    unsigned char  MKDMA2:1;                               /* MKDMA2           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA2:1;                               /* RFDMA2           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA2:1;                               /* CTDMA2           */
};
struct __tag70
{                                                          /* Bit Access       */
    unsigned char  P0DMA3:1;                               /* P0DMA3           */
    unsigned char  P1DMA3:1;                               /* P1DMA3           */
    unsigned char  P2DMA3:1;                               /* P2DMA3           */
    unsigned char  P3DMA3:1;                               /* P3DMA3           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA3:1;                               /* TBDMA3           */
    unsigned char  MKDMA3:1;                               /* MKDMA3           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA3:1;                               /* RFDMA3           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA3:1;                               /* CTDMA3           */
};
struct __tag71
{                                                          /* Bit Access       */
    unsigned char  P0DMA4:1;                               /* P0DMA4           */
    unsigned char  P1DMA4:1;                               /* P1DMA4           */
    unsigned char  P2DMA4:1;                               /* P2DMA4           */
    unsigned char  P3DMA4:1;                               /* P3DMA4           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA4:1;                               /* TBDMA4           */
    unsigned char  MKDMA4:1;                               /* MKDMA4           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA4:1;                               /* RFDMA4           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA4:1;                               /* CTDMA4           */
};
struct __tag72
{                                                          /* Bit Access       */
    unsigned char  P0DMA5:1;                               /* P0DMA5           */
    unsigned char  P1DMA5:1;                               /* P1DMA5           */
    unsigned char  P2DMA5:1;                               /* P2DMA5           */
    unsigned char  P3DMA5:1;                               /* P3DMA5           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA5:1;                               /* TBDMA5           */
    unsigned char  MKDMA5:1;                               /* MKDMA5           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA5:1;                               /* RFDMA5           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA5:1;                               /* CTDMA5           */
};
struct __tag73
{                                                          /* Bit Access       */
    unsigned char  P0DMA6:1;                               /* P0DMA6           */
    unsigned char  P1DMA6:1;                               /* P1DMA6           */
    unsigned char  P2DMA6:1;                               /* P2DMA6           */
    unsigned char  P3DMA6:1;                               /* P3DMA6           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA6:1;                               /* TBDMA6           */
    unsigned char  MKDMA6:1;                               /* MKDMA6           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA6:1;                               /* RFDMA6           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA6:1;                               /* CTDMA6           */
};
struct __tag74
{                                                          /* Bit Access       */
    unsigned char  P0DMA7:1;                               /* P0DMA7           */
    unsigned char  P1DMA7:1;                               /* P1DMA7           */
    unsigned char  P2DMA7:1;                               /* P2DMA7           */
    unsigned char  P3DMA7:1;                               /* P3DMA7           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA7:1;                               /* TBDMA7           */
    unsigned char  MKDMA7:1;                               /* MKDMA7           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA7:1;                               /* RFDMA7           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA7:1;                               /* CTDMA7           */
};
struct __tag75
{                                                          /* Bit Access       */
    unsigned char  P0DMA8:1;                               /* P0DMA8           */
    unsigned char  P1DMA8:1;                               /* P1DMA8           */
    unsigned char  P2DMA8:1;                               /* P2DMA8           */
    unsigned char  P3DMA8:1;                               /* P3DMA8           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA8:1;                               /* TBDMA8           */
    unsigned char  MKDMA8:1;                               /* MKDMA8           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA8:1;                               /* RFDMA8           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA8:1;                               /* CTDMA8           */
};
struct __tag76
{                                                          /* Bit Access       */
    unsigned char  P0DMA9:1;                               /* P0DMA9           */
    unsigned char  P1DMA9:1;                               /* P1DMA9           */
    unsigned char  P2DMA9:1;                               /* P2DMA9           */
    unsigned char  P3DMA9:1;                               /* P3DMA9           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA9:1;                               /* TBDMA9           */
    unsigned char  MKDMA9:1;                               /* MKDMA9           */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA9:1;                               /* RFDMA9           */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA9:1;                               /* CTDMA9           */
};
struct __tag77
{                                                          /* Bit Access       */
    unsigned char  P0DMA10:1;                              /* P0DMA10          */
    unsigned char  P1DMA10:1;                              /* P1DMA10          */
    unsigned char  P2DMA10:1;                              /* P2DMA10          */
    unsigned char  P3DMA10:1;                              /* P3DMA10          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA10:1;                              /* TBDMA10          */
    unsigned char  MKDMA10:1;                              /* MKDMA10          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA10:1;                              /* RFDMA10          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA10:1;                              /* CTDMA10          */
};
struct __tag78
{                                                          /* Bit Access       */
    unsigned char  P0DMA11:1;                              /* P0DMA11          */
    unsigned char  P1DMA11:1;                              /* P1DMA11          */
    unsigned char  P2DMA11:1;                              /* P2DMA11          */
    unsigned char  P3DMA11:1;                              /* P3DMA11          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA11:1;                              /* TBDMA11          */
    unsigned char  MKDMA11:1;                              /* MKDMA11          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA11:1;                              /* RFDMA11          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA11:1;                              /* CTDMA11          */
};
struct __tag79
{                                                          /* Bit Access       */
    unsigned char  P0DMA12:1;                              /* P0DMA12          */
    unsigned char  P1DMA12:1;                              /* P1DMA12          */
    unsigned char  P2DMA12:1;                              /* P2DMA12          */
    unsigned char  P3DMA12:1;                              /* P3DMA12          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA12:1;                              /* TBDMA12          */
    unsigned char  MKDMA12:1;                              /* MKDMA12          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA12:1;                              /* RFDMA12          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA12:1;                              /* CTDMA12          */
};
struct __tag80
{                                                          /* Bit Access       */
    unsigned char  P0DMA13:1;                              /* P0DMA13          */
    unsigned char  P1DMA13:1;                              /* P1DMA13          */
    unsigned char  P2DMA13:1;                              /* P2DMA13          */
    unsigned char  P3DMA13:1;                              /* P3DMA13          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA13:1;                              /* TBDMA13          */
    unsigned char  MKDMA13:1;                              /* MKDMA13          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA13:1;                              /* RFDMA13          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA13:1;                              /* CTDMA13          */
};
struct __tag81
{                                                          /* Bit Access       */
    unsigned char  P0DMA14:1;                              /* P0DMA14          */
    unsigned char  P1DMA14:1;                              /* P1DMA14          */
    unsigned char  P2DMA14:1;                              /* P2DMA14          */
    unsigned char  P3DMA14:1;                              /* P3DMA14          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA14:1;                              /* TBDMA14          */
    unsigned char  MKDMA14:1;                              /* MKDMA14          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA14:1;                              /* RFDMA14          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA14:1;                              /* CTDMA14          */
};
struct __tag82
{                                                          /* Bit Access       */
    unsigned char  P0DMA15:1;                              /* P0DMA15          */
    unsigned char  P1DMA15:1;                              /* P1DMA15          */
    unsigned char  P2DMA15:1;                              /* P2DMA15          */
    unsigned char  P3DMA15:1;                              /* P3DMA15          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDMA15:1;                              /* TBDMA15          */
    unsigned char  MKDMA15:1;                              /* MKDMA15          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDMA15:1;                              /* RFDMA15          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDMA15:1;                              /* CTDMA15          */
};
struct __tag83
{                                                          /* Bit Access       */
    unsigned char  P0RIIC0TI:1;                            /* P0RIIC0TI        */
    unsigned char  P1RIIC0TI:1;                            /* P1RIIC0TI        */
    unsigned char  P2RIIC0TI:1;                            /* P2RIIC0TI        */
    unsigned char  P3RIIC0TI:1;                            /* P3RIIC0TI        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRIIC0TI:1;                            /* TBRIIC0TI        */
    unsigned char  MKRIIC0TI:1;                            /* MKRIIC0TI        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRIIC0TI:1;                            /* RFRIIC0TI        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRIIC0TI:1;                            /* CTRIIC0TI        */
};
struct __tag84
{                                                          /* Bit Access       */
    unsigned char  P0RIIC0EE:1;                            /* P0RIIC0EE        */
    unsigned char  P1RIIC0EE:1;                            /* P1RIIC0EE        */
    unsigned char  P2RIIC0EE:1;                            /* P2RIIC0EE        */
    unsigned char  P3RIIC0EE:1;                            /* P3RIIC0EE        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRIIC0EE:1;                            /* TBRIIC0EE        */
    unsigned char  MKRIIC0EE:1;                            /* MKRIIC0EE        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRIIC0EE:1;                            /* RFRIIC0EE        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRIIC0EE:1;                            /* CTRIIC0EE        */
};
struct __tag85
{                                                          /* Bit Access       */
    unsigned char  P0RIIC0RI:1;                            /* P0RIIC0RI        */
    unsigned char  P1RIIC0RI:1;                            /* P1RIIC0RI        */
    unsigned char  P2RIIC0RI:1;                            /* P2RIIC0RI        */
    unsigned char  P3RIIC0RI:1;                            /* P3RIIC0RI        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRIIC0RI:1;                            /* TBRIIC0RI        */
    unsigned char  MKRIIC0RI:1;                            /* MKRIIC0RI        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRIIC0RI:1;                            /* RFRIIC0RI        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRIIC0RI:1;                            /* CTRIIC0RI        */
};
struct __tag86
{                                                          /* Bit Access       */
    unsigned char  P0RIIC0TEI:1;                           /* P0RIIC0TEI       */
    unsigned char  P1RIIC0TEI:1;                           /* P1RIIC0TEI       */
    unsigned char  P2RIIC0TEI:1;                           /* P2RIIC0TEI       */
    unsigned char  P3RIIC0TEI:1;                           /* P3RIIC0TEI       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRIIC0TEI:1;                           /* TBRIIC0TEI       */
    unsigned char  MKRIIC0TEI:1;                           /* MKRIIC0TEI       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRIIC0TEI:1;                           /* RFRIIC0TEI       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRIIC0TEI:1;                           /* CTRIIC0TEI       */
};
struct __tag87
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ0I0:1;                            /* P0TAUJ0I0        */
    unsigned char  P1TAUJ0I0:1;                            /* P1TAUJ0I0        */
    unsigned char  P2TAUJ0I0:1;                            /* P2TAUJ0I0        */
    unsigned char  P3TAUJ0I0:1;                            /* P3TAUJ0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ0I0:1;                            /* TBTAUJ0I0        */
    unsigned char  MKTAUJ0I0:1;                            /* MKTAUJ0I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ0I0:1;                            /* RFTAUJ0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ0I0:1;                            /* CTTAUJ0I0        */
};
struct __tag88
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ0I1:1;                            /* P0TAUJ0I1        */
    unsigned char  P1TAUJ0I1:1;                            /* P1TAUJ0I1        */
    unsigned char  P2TAUJ0I1:1;                            /* P2TAUJ0I1        */
    unsigned char  P3TAUJ0I1:1;                            /* P3TAUJ0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ0I1:1;                            /* TBTAUJ0I1        */
    unsigned char  MKTAUJ0I1:1;                            /* MKTAUJ0I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ0I1:1;                            /* RFTAUJ0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ0I1:1;                            /* CTTAUJ0I1        */
};
struct __tag89
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ0I2:1;                            /* P0TAUJ0I2        */
    unsigned char  P1TAUJ0I2:1;                            /* P1TAUJ0I2        */
    unsigned char  P2TAUJ0I2:1;                            /* P2TAUJ0I2        */
    unsigned char  P3TAUJ0I2:1;                            /* P3TAUJ0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ0I2:1;                            /* TBTAUJ0I2        */
    unsigned char  MKTAUJ0I2:1;                            /* MKTAUJ0I2        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ0I2:1;                            /* RFTAUJ0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ0I2:1;                            /* CTTAUJ0I2        */
};
struct __tag90
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ0I3:1;                            /* P0TAUJ0I3        */
    unsigned char  P1TAUJ0I3:1;                            /* P1TAUJ0I3        */
    unsigned char  P2TAUJ0I3:1;                            /* P2TAUJ0I3        */
    unsigned char  P3TAUJ0I3:1;                            /* P3TAUJ0I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ0I3:1;                            /* TBTAUJ0I3        */
    unsigned char  MKTAUJ0I3:1;                            /* MKTAUJ0I3        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ0I3:1;                            /* RFTAUJ0I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ0I3:1;                            /* CTTAUJ0I3        */
};
struct __tag91
{                                                          /* Bit Access       */
    unsigned char  P0OSTM0:1;                              /* P0OSTM0          */
    unsigned char  P1OSTM0:1;                              /* P1OSTM0          */
    unsigned char  P2OSTM0:1;                              /* P2OSTM0          */
    unsigned char  P3OSTM0:1;                              /* P3OSTM0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBOSTM0:1;                              /* TBOSTM0          */
    unsigned char  MKOSTM0:1;                              /* MKOSTM0          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFOSTM0:1;                              /* RFOSTM0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTOSTM0:1;                              /* CTOSTM0          */
};
struct __tag92
{                                                          /* Bit Access       */
    unsigned char  P0ENCA0IOV:1;                           /* P0ENCA0IOV       */
    unsigned char  P1ENCA0IOV:1;                           /* P1ENCA0IOV       */
    unsigned char  P2ENCA0IOV:1;                           /* P2ENCA0IOV       */
    unsigned char  P3ENCA0IOV:1;                           /* P3ENCA0IOV       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBENCA0IOV:1;                           /* TBENCA0IOV       */
    unsigned char  MKENCA0IOV:1;                           /* MKENCA0IOV       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFENCA0IOV:1;                           /* RFENCA0IOV       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTENCA0IOV:1;                           /* CTENCA0IOV       */
};
struct __tag93
{                                                          /* Bit Access       */
    unsigned char  P0ENCA0IUD:1;                           /* P0ENCA0IUD       */
    unsigned char  P1ENCA0IUD:1;                           /* P1ENCA0IUD       */
    unsigned char  P2ENCA0IUD:1;                           /* P2ENCA0IUD       */
    unsigned char  P3ENCA0IUD:1;                           /* P3ENCA0IUD       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBENCA0IUD:1;                           /* TBENCA0IUD       */
    unsigned char  MKENCA0IUD:1;                           /* MKENCA0IUD       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFENCA0IUD:1;                           /* RFENCA0IUD       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTENCA0IUD:1;                           /* CTENCA0IUD       */
};
struct __tag94
{                                                          /* Bit Access       */
    unsigned char  P0ENCA0I0:1;                            /* P0ENCA0I0        */
    unsigned char  P1ENCA0I0:1;                            /* P1ENCA0I0        */
    unsigned char  P2ENCA0I0:1;                            /* P2ENCA0I0        */
    unsigned char  P3ENCA0I0:1;                            /* P3ENCA0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBENCA0I0:1;                            /* TBENCA0I0        */
    unsigned char  MKENCA0I0:1;                            /* MKENCA0I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFENCA0I0:1;                            /* RFENCA0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTENCA0I0:1;                            /* CTENCA0I0        */
};
struct __tag95
{                                                          /* Bit Access       */
    unsigned char  P0ENCA0I1:1;                            /* P0ENCA0I1        */
    unsigned char  P1ENCA0I1:1;                            /* P1ENCA0I1        */
    unsigned char  P2ENCA0I1:1;                            /* P2ENCA0I1        */
    unsigned char  P3ENCA0I1:1;                            /* P3ENCA0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBENCA0I1:1;                            /* TBENCA0I1        */
    unsigned char  MKENCA0I1:1;                            /* MKENCA0I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFENCA0I1:1;                            /* RFENCA0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTENCA0I1:1;                            /* CTENCA0I1        */
};
struct __tag96
{                                                          /* Bit Access       */
    unsigned char  P0ENCA0IEC:1;                           /* P0ENCA0IEC       */
    unsigned char  P1ENCA0IEC:1;                           /* P1ENCA0IEC       */
    unsigned char  P2ENCA0IEC:1;                           /* P2ENCA0IEC       */
    unsigned char  P3ENCA0IEC:1;                           /* P3ENCA0IEC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBENCA0IEC:1;                           /* TBENCA0IEC       */
    unsigned char  MKENCA0IEC:1;                           /* MKENCA0IEC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFENCA0IEC:1;                           /* RFENCA0IEC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTENCA0IEC:1;                           /* CTENCA0IEC       */
};
struct __tag97
{                                                          /* Bit Access       */
    unsigned char  P0KR0:1;                                /* P0KR0            */
    unsigned char  P1KR0:1;                                /* P1KR0            */
    unsigned char  P2KR0:1;                                /* P2KR0            */
    unsigned char  P3KR0:1;                                /* P3KR0            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBKR0:1;                                /* TBKR0            */
    unsigned char  MKKR0:1;                                /* MKKR0            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFKR0:1;                                /* RFKR0            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTKR0:1;                                /* CTKR0            */
};
struct __tag98
{                                                          /* Bit Access       */
    unsigned char  P0QFULL:1;                              /* P0QFULL          */
    unsigned char  P1QFULL:1;                              /* P1QFULL          */
    unsigned char  P2QFULL:1;                              /* P2QFULL          */
    unsigned char  P3QFULL:1;                              /* P3QFULL          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBQFULL:1;                              /* TBQFULL          */
    unsigned char  MKQFULL:1;                              /* MKQFULL          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFQFULL:1;                              /* RFQFULL          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTQFULL:1;                              /* CTQFULL          */
};
struct __tag99
{                                                          /* Bit Access       */
    unsigned char  P0PWGA0:1;                              /* P0PWGA0          */
    unsigned char  P1PWGA0:1;                              /* P1PWGA0          */
    unsigned char  P2PWGA0:1;                              /* P2PWGA0          */
    unsigned char  P3PWGA0:1;                              /* P3PWGA0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA0:1;                              /* TBPWGA0          */
    unsigned char  MKPWGA0:1;                              /* MKPWGA0          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA0:1;                              /* RFPWGA0          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA0:1;                              /* CTPWGA0          */
};
struct __tag100
{                                                          /* Bit Access       */
    unsigned char  P0PWGA1:1;                              /* P0PWGA1          */
    unsigned char  P1PWGA1:1;                              /* P1PWGA1          */
    unsigned char  P2PWGA1:1;                              /* P2PWGA1          */
    unsigned char  P3PWGA1:1;                              /* P3PWGA1          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA1:1;                              /* TBPWGA1          */
    unsigned char  MKPWGA1:1;                              /* MKPWGA1          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA1:1;                              /* RFPWGA1          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA1:1;                              /* CTPWGA1          */
};
struct __tag101
{                                                          /* Bit Access       */
    unsigned char  P0PWGA2:1;                              /* P0PWGA2          */
    unsigned char  P1PWGA2:1;                              /* P1PWGA2          */
    unsigned char  P2PWGA2:1;                              /* P2PWGA2          */
    unsigned char  P3PWGA2:1;                              /* P3PWGA2          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA2:1;                              /* TBPWGA2          */
    unsigned char  MKPWGA2:1;                              /* MKPWGA2          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA2:1;                              /* RFPWGA2          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA2:1;                              /* CTPWGA2          */
};
struct __tag102
{                                                          /* Bit Access       */
    unsigned char  P0PWGA3:1;                              /* P0PWGA3          */
    unsigned char  P1PWGA3:1;                              /* P1PWGA3          */
    unsigned char  P2PWGA3:1;                              /* P2PWGA3          */
    unsigned char  P3PWGA3:1;                              /* P3PWGA3          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA3:1;                              /* TBPWGA3          */
    unsigned char  MKPWGA3:1;                              /* MKPWGA3          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA3:1;                              /* RFPWGA3          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA3:1;                              /* CTPWGA3          */
};
struct __tag103
{                                                          /* Bit Access       */
    unsigned char  P0PWGA8:1;                              /* P0PWGA8          */
    unsigned char  P1PWGA8:1;                              /* P1PWGA8          */
    unsigned char  P2PWGA8:1;                              /* P2PWGA8          */
    unsigned char  P3PWGA8:1;                              /* P3PWGA8          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA8:1;                              /* TBPWGA8          */
    unsigned char  MKPWGA8:1;                              /* MKPWGA8          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA8:1;                              /* RFPWGA8          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA8:1;                              /* CTPWGA8          */
};
struct __tag104
{                                                          /* Bit Access       */
    unsigned char  P0PWGA9:1;                              /* P0PWGA9          */
    unsigned char  P1PWGA9:1;                              /* P1PWGA9          */
    unsigned char  P2PWGA9:1;                              /* P2PWGA9          */
    unsigned char  P3PWGA9:1;                              /* P3PWGA9          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA9:1;                              /* TBPWGA9          */
    unsigned char  MKPWGA9:1;                              /* MKPWGA9          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA9:1;                              /* RFPWGA9          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA9:1;                              /* CTPWGA9          */
};
struct __tag105
{                                                          /* Bit Access       */
    unsigned char  P0PWGA10:1;                             /* P0PWGA10         */
    unsigned char  P1PWGA10:1;                             /* P1PWGA10         */
    unsigned char  P2PWGA10:1;                             /* P2PWGA10         */
    unsigned char  P3PWGA10:1;                             /* P3PWGA10         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA10:1;                             /* TBPWGA10         */
    unsigned char  MKPWGA10:1;                             /* MKPWGA10         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA10:1;                             /* RFPWGA10         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA10:1;                             /* CTPWGA10         */
};
struct __tag106
{                                                          /* Bit Access       */
    unsigned char  P0PWGA11:1;                             /* P0PWGA11         */
    unsigned char  P1PWGA11:1;                             /* P1PWGA11         */
    unsigned char  P2PWGA11:1;                             /* P2PWGA11         */
    unsigned char  P3PWGA11:1;                             /* P3PWGA11         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA11:1;                             /* TBPWGA11         */
    unsigned char  MKPWGA11:1;                             /* MKPWGA11         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA11:1;                             /* RFPWGA11         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA11:1;                             /* CTPWGA11         */
};
struct __tag107
{                                                          /* Bit Access       */
    unsigned char  P0PWGA12:1;                             /* P0PWGA12         */
    unsigned char  P1PWGA12:1;                             /* P1PWGA12         */
    unsigned char  P2PWGA12:1;                             /* P2PWGA12         */
    unsigned char  P3PWGA12:1;                             /* P3PWGA12         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA12:1;                             /* TBPWGA12         */
    unsigned char  MKPWGA12:1;                             /* MKPWGA12         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA12:1;                             /* RFPWGA12         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA12:1;                             /* CTPWGA12         */
};
struct __tag108
{                                                          /* Bit Access       */
    unsigned char  P0PWGA13:1;                             /* P0PWGA13         */
    unsigned char  P1PWGA13:1;                             /* P1PWGA13         */
    unsigned char  P2PWGA13:1;                             /* P2PWGA13         */
    unsigned char  P3PWGA13:1;                             /* P3PWGA13         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA13:1;                             /* TBPWGA13         */
    unsigned char  MKPWGA13:1;                             /* MKPWGA13         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA13:1;                             /* RFPWGA13         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA13:1;                             /* CTPWGA13         */
};
struct __tag109
{                                                          /* Bit Access       */
    unsigned char  P0PWGA14:1;                             /* P0PWGA14         */
    unsigned char  P1PWGA14:1;                             /* P1PWGA14         */
    unsigned char  P2PWGA14:1;                             /* P2PWGA14         */
    unsigned char  P3PWGA14:1;                             /* P3PWGA14         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA14:1;                             /* TBPWGA14         */
    unsigned char  MKPWGA14:1;                             /* MKPWGA14         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA14:1;                             /* RFPWGA14         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA14:1;                             /* CTPWGA14         */
};
struct __tag110
{                                                          /* Bit Access       */
    unsigned char  P0PWGA15:1;                             /* P0PWGA15         */
    unsigned char  P1PWGA15:1;                             /* P1PWGA15         */
    unsigned char  P2PWGA15:1;                             /* P2PWGA15         */
    unsigned char  P3PWGA15:1;                             /* P3PWGA15         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA15:1;                             /* TBPWGA15         */
    unsigned char  MKPWGA15:1;                             /* MKPWGA15         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA15:1;                             /* RFPWGA15         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA15:1;                             /* CTPWGA15         */
};
struct __tag111
{                                                          /* Bit Access       */
    unsigned char  P0FLERR:1;                              /* P0FLERR          */
    unsigned char  P1FLERR:1;                              /* P1FLERR          */
    unsigned char  P2FLERR:1;                              /* P2FLERR          */
    unsigned char  P3FLERR:1;                              /* P3FLERR          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBFLERR:1;                              /* TBFLERR          */
    unsigned char  MKFLERR:1;                              /* MKFLERR          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFFLERR:1;                              /* RFFLERR          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTFLERR:1;                              /* CTFLERR          */
};
struct __tag112
{                                                          /* Bit Access       */
    unsigned char  P0FLENDNM:1;                            /* P0FLENDNM        */
    unsigned char  P1FLENDNM:1;                            /* P1FLENDNM        */
    unsigned char  P2FLENDNM:1;                            /* P2FLENDNM        */
    unsigned char  P3FLENDNM:1;                            /* P3FLENDNM        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBFLENDNM:1;                            /* TBFLENDNM        */
    unsigned char  MKFLENDNM:1;                            /* MKFLENDNM        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFFLENDNM:1;                            /* RFFLENDNM        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTFLENDNM:1;                            /* CTFLENDNM        */
};
struct __tag113
{                                                          /* Bit Access       */
    unsigned char  P0CWEND:1;                              /* P0CWEND          */
    unsigned char  P1CWEND:1;                              /* P1CWEND          */
    unsigned char  P2CWEND:1;                              /* P2CWEND          */
    unsigned char  P3CWEND:1;                              /* P3CWEND          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCWEND:1;                              /* TBCWEND          */
    unsigned char  MKCWEND:1;                              /* MKCWEND          */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCWEND:1;                              /* RFCWEND          */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCWEND:1;                              /* CTCWEND          */
};
struct __tag114
{                                                          /* Bit Access       */
    unsigned char  P0RCAN1ERR:1;                           /* P0RCAN1ERR       */
    unsigned char  P1RCAN1ERR:1;                           /* P1RCAN1ERR       */
    unsigned char  P2RCAN1ERR:1;                           /* P2RCAN1ERR       */
    unsigned char  P3RCAN1ERR:1;                           /* P3RCAN1ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN1ERR:1;                           /* TBRCAN1ERR       */
    unsigned char  MKRCAN1ERR:1;                           /* MKRCAN1ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN1ERR:1;                           /* RFRCAN1ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN1ERR:1;                           /* CTRCAN1ERR       */
};
struct __tag115
{                                                          /* Bit Access       */
    unsigned char  P0RCAN1REC:1;                           /* P0RCAN1REC       */
    unsigned char  P1RCAN1REC:1;                           /* P1RCAN1REC       */
    unsigned char  P2RCAN1REC:1;                           /* P2RCAN1REC       */
    unsigned char  P3RCAN1REC:1;                           /* P3RCAN1REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN1REC:1;                           /* TBRCAN1REC       */
    unsigned char  MKRCAN1REC:1;                           /* MKRCAN1REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN1REC:1;                           /* RFRCAN1REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN1REC:1;                           /* CTRCAN1REC       */
};
struct __tag116
{                                                          /* Bit Access       */
    unsigned char  P0RCAN1TRX:1;                           /* P0RCAN1TRX       */
    unsigned char  P1RCAN1TRX:1;                           /* P1RCAN1TRX       */
    unsigned char  P2RCAN1TRX:1;                           /* P2RCAN1TRX       */
    unsigned char  P3RCAN1TRX:1;                           /* P3RCAN1TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN1TRX:1;                           /* TBRCAN1TRX       */
    unsigned char  MKRCAN1TRX:1;                           /* MKRCAN1TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN1TRX:1;                           /* RFRCAN1TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN1TRX:1;                           /* CTRCAN1TRX       */
};
struct __tag117
{                                                          /* Bit Access       */
    unsigned char  P0CSIH1IC:1;                            /* P0CSIH1IC        */
    unsigned char  P1CSIH1IC:1;                            /* P1CSIH1IC        */
    unsigned char  P2CSIH1IC:1;                            /* P2CSIH1IC        */
    unsigned char  P3CSIH1IC:1;                            /* P3CSIH1IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH1IC:1;                            /* TBCSIH1IC        */
    unsigned char  MKCSIH1IC:1;                            /* MKCSIH1IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH1IC:1;                            /* RFCSIH1IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH1IC:1;                            /* CTCSIH1IC        */
};
struct __tag118
{                                                          /* Bit Access       */
    unsigned char  P0CSIH1IR:1;                            /* P0CSIH1IR        */
    unsigned char  P1CSIH1IR:1;                            /* P1CSIH1IR        */
    unsigned char  P2CSIH1IR:1;                            /* P2CSIH1IR        */
    unsigned char  P3CSIH1IR:1;                            /* P3CSIH1IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH1IR:1;                            /* TBCSIH1IR        */
    unsigned char  MKCSIH1IR:1;                            /* MKCSIH1IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH1IR:1;                            /* RFCSIH1IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH1IR:1;                            /* CTCSIH1IR        */
};
struct __tag119
{                                                          /* Bit Access       */
    unsigned char  P0CSIG0IC_2:1;                          /* P0CSIG0IC_2      */
    unsigned char  P1CSIG0IC_2:1;                          /* P1CSIG0IC_2      */
    unsigned char  P2CSIG0IC_2:1;                          /* P2CSIG0IC_2      */
    unsigned char  P3CSIG0IC_2:1;                          /* P3CSIG0IC_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG0IC_2:1;                          /* TBCSIG0IC_2      */
    unsigned char  MKCSIG0IC_2:1;                          /* MKCSIG0IC_2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG0IC_2:1;                          /* RFCSIG0IC_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG0IC_2:1;                          /* CTCSIG0IC_2      */
};
struct __tag120
{                                                          /* Bit Access       */
    unsigned char  P0CSIG0IR_2:1;                          /* P0CSIG0IR_2      */
    unsigned char  P1CSIG0IR_2:1;                          /* P1CSIG0IR_2      */
    unsigned char  P2CSIG0IR_2:1;                          /* P2CSIG0IR_2      */
    unsigned char  P3CSIG0IR_2:1;                          /* P3CSIG0IR_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG0IR_2:1;                          /* TBCSIG0IR_2      */
    unsigned char  MKCSIG0IR_2:1;                          /* MKCSIG0IR_2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG0IR_2:1;                          /* RFCSIG0IR_2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG0IR_2:1;                          /* CTCSIG0IR_2      */
};
struct __tag121
{                                                          /* Bit Access       */
    unsigned char  P0RLIN31:1;                             /* P0RLIN31         */
    unsigned char  P1RLIN31:1;                             /* P1RLIN31         */
    unsigned char  P2RLIN31:1;                             /* P2RLIN31         */
    unsigned char  P3RLIN31:1;                             /* P3RLIN31         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN31:1;                             /* TBRLIN31         */
    unsigned char  MKRLIN31:1;                             /* MKRLIN31         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN31:1;                             /* RFRLIN31         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN31:1;                             /* CTRLIN31         */
};
struct __tag122
{                                                          /* Bit Access       */
    unsigned char  P0RLIN31UR0:1;                          /* P0RLIN31UR0      */
    unsigned char  P1RLIN31UR0:1;                          /* P1RLIN31UR0      */
    unsigned char  P2RLIN31UR0:1;                          /* P2RLIN31UR0      */
    unsigned char  P3RLIN31UR0:1;                          /* P3RLIN31UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN31UR0:1;                          /* TBRLIN31UR0      */
    unsigned char  MKRLIN31UR0:1;                          /* MKRLIN31UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN31UR0:1;                          /* RFRLIN31UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN31UR0:1;                          /* CTRLIN31UR0      */
};
struct __tag123
{                                                          /* Bit Access       */
    unsigned char  P0RLIN31UR1:1;                          /* P0RLIN31UR1      */
    unsigned char  P1RLIN31UR1:1;                          /* P1RLIN31UR1      */
    unsigned char  P2RLIN31UR1:1;                          /* P2RLIN31UR1      */
    unsigned char  P3RLIN31UR1:1;                          /* P3RLIN31UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN31UR1:1;                          /* TBRLIN31UR1      */
    unsigned char  MKRLIN31UR1:1;                          /* MKRLIN31UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN31UR1:1;                          /* RFRLIN31UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN31UR1:1;                          /* CTRLIN31UR1      */
};
struct __tag124
{                                                          /* Bit Access       */
    unsigned char  P0RLIN31UR2:1;                          /* P0RLIN31UR2      */
    unsigned char  P1RLIN31UR2:1;                          /* P1RLIN31UR2      */
    unsigned char  P2RLIN31UR2:1;                          /* P2RLIN31UR2      */
    unsigned char  P3RLIN31UR2:1;                          /* P3RLIN31UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN31UR2:1;                          /* TBRLIN31UR2      */
    unsigned char  MKRLIN31UR2:1;                          /* MKRLIN31UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN31UR2:1;                          /* RFRLIN31UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN31UR2:1;                          /* CTRLIN31UR2      */
};
struct __tag125
{                                                          /* Bit Access       */
    unsigned char  P0PWGA20:1;                             /* P0PWGA20         */
    unsigned char  P1PWGA20:1;                             /* P1PWGA20         */
    unsigned char  P2PWGA20:1;                             /* P2PWGA20         */
    unsigned char  P3PWGA20:1;                             /* P3PWGA20         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA20:1;                             /* TBPWGA20         */
    unsigned char  MKPWGA20:1;                             /* MKPWGA20         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA20:1;                             /* RFPWGA20         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA20:1;                             /* CTPWGA20         */
};
struct __tag126
{                                                          /* Bit Access       */
    unsigned char  P0PWGA21:1;                             /* P0PWGA21         */
    unsigned char  P1PWGA21:1;                             /* P1PWGA21         */
    unsigned char  P2PWGA21:1;                             /* P2PWGA21         */
    unsigned char  P3PWGA21:1;                             /* P3PWGA21         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA21:1;                             /* TBPWGA21         */
    unsigned char  MKPWGA21:1;                             /* MKPWGA21         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA21:1;                             /* RFPWGA21         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA21:1;                             /* CTPWGA21         */
};
struct __tag127
{                                                          /* Bit Access       */
    unsigned char  P0PWGA22:1;                             /* P0PWGA22         */
    unsigned char  P1PWGA22:1;                             /* P1PWGA22         */
    unsigned char  P2PWGA22:1;                             /* P2PWGA22         */
    unsigned char  P3PWGA22:1;                             /* P3PWGA22         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA22:1;                             /* TBPWGA22         */
    unsigned char  MKPWGA22:1;                             /* MKPWGA22         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA22:1;                             /* RFPWGA22         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA22:1;                             /* CTPWGA22         */
};
struct __tag128
{                                                          /* Bit Access       */
    unsigned char  P0PWGA23:1;                             /* P0PWGA23         */
    unsigned char  P1PWGA23:1;                             /* P1PWGA23         */
    unsigned char  P2PWGA23:1;                             /* P2PWGA23         */
    unsigned char  P3PWGA23:1;                             /* P3PWGA23         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA23:1;                             /* TBPWGA23         */
    unsigned char  MKPWGA23:1;                             /* MKPWGA23         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA23:1;                             /* RFPWGA23         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA23:1;                             /* CTPWGA23         */
};
struct __tag129
{                                                          /* Bit Access       */
    unsigned char  P0P6:1;                                 /* P0P6             */
    unsigned char  P1P6:1;                                 /* P1P6             */
    unsigned char  P2P6:1;                                 /* P2P6             */
    unsigned char  P3P6:1;                                 /* P3P6             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP6:1;                                 /* TBP6             */
    unsigned char  MKP6:1;                                 /* MKP6             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP6:1;                                 /* RFP6             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP6:1;                                 /* CTP6             */
};
struct __tag130
{                                                          /* Bit Access       */
    unsigned char  P0P7:1;                                 /* P0P7             */
    unsigned char  P1P7:1;                                 /* P1P7             */
    unsigned char  P2P7:1;                                 /* P2P7             */
    unsigned char  P3P7:1;                                 /* P3P7             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP7:1;                                 /* TBP7             */
    unsigned char  MKP7:1;                                 /* MKP7             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP7:1;                                 /* RFP7             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP7:1;                                 /* CTP7             */
};
struct __tag131
{                                                          /* Bit Access       */
    unsigned char  P0P8:1;                                 /* P0P8             */
    unsigned char  P1P8:1;                                 /* P1P8             */
    unsigned char  P2P8:1;                                 /* P2P8             */
    unsigned char  P3P8:1;                                 /* P3P8             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP8:1;                                 /* TBP8             */
    unsigned char  MKP8:1;                                 /* MKP8             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP8:1;                                 /* RFP8             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP8:1;                                 /* CTP8             */
};
struct __tag132
{                                                          /* Bit Access       */
    unsigned char  P0P12:1;                                /* P0P12            */
    unsigned char  P1P12:1;                                /* P1P12            */
    unsigned char  P2P12:1;                                /* P2P12            */
    unsigned char  P3P12:1;                                /* P3P12            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP12:1;                                /* TBP12            */
    unsigned char  MKP12:1;                                /* MKP12            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP12:1;                                /* RFP12            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP12:1;                                /* CTP12            */
};
struct __tag133
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IC:1;                            /* P0CSIH2IC        */
    unsigned char  P1CSIH2IC:1;                            /* P1CSIH2IC        */
    unsigned char  P2CSIH2IC:1;                            /* P2CSIH2IC        */
    unsigned char  P3CSIH2IC:1;                            /* P3CSIH2IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IC:1;                            /* TBCSIH2IC        */
    unsigned char  MKCSIH2IC:1;                            /* MKCSIH2IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IC:1;                            /* RFCSIH2IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IC:1;                            /* CTCSIH2IC        */
};
struct __tag134
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IR:1;                            /* P0CSIH2IR        */
    unsigned char  P1CSIH2IR:1;                            /* P1CSIH2IR        */
    unsigned char  P2CSIH2IR:1;                            /* P2CSIH2IR        */
    unsigned char  P3CSIH2IR:1;                            /* P3CSIH2IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IR:1;                            /* TBCSIH2IR        */
    unsigned char  MKCSIH2IR:1;                            /* MKCSIH2IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IR:1;                            /* RFCSIH2IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IR:1;                            /* CTCSIH2IR        */
};
struct __tag135
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IRE:1;                           /* P0CSIH2IRE       */
    unsigned char  P1CSIH2IRE:1;                           /* P1CSIH2IRE       */
    unsigned char  P2CSIH2IRE:1;                           /* P2CSIH2IRE       */
    unsigned char  P3CSIH2IRE:1;                           /* P3CSIH2IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IRE:1;                           /* TBCSIH2IRE       */
    unsigned char  MKCSIH2IRE:1;                           /* MKCSIH2IRE       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IRE:1;                           /* RFCSIH2IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IRE:1;                           /* CTCSIH2IRE       */
};
struct __tag136
{                                                          /* Bit Access       */
    unsigned char  P0CSIH2IJC:1;                           /* P0CSIH2IJC       */
    unsigned char  P1CSIH2IJC:1;                           /* P1CSIH2IJC       */
    unsigned char  P2CSIH2IJC:1;                           /* P2CSIH2IJC       */
    unsigned char  P3CSIH2IJC:1;                           /* P3CSIH2IJC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH2IJC:1;                           /* TBCSIH2IJC       */
    unsigned char  MKCSIH2IJC:1;                           /* MKCSIH2IJC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH2IJC:1;                           /* RFCSIH2IJC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH2IJC:1;                           /* CTCSIH2IJC       */
};
struct __tag137
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I0:1;                            /* P0TAUB0I0        */
    unsigned char  P1TAUB0I0:1;                            /* P1TAUB0I0        */
    unsigned char  P2TAUB0I0:1;                            /* P2TAUB0I0        */
    unsigned char  P3TAUB0I0:1;                            /* P3TAUB0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I0:1;                            /* TBTAUB0I0        */
    unsigned char  MKTAUB0I0:1;                            /* MKTAUB0I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I0:1;                            /* RFTAUB0I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I0:1;                            /* CTTAUB0I0        */
};
struct __tag138
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I1:1;                            /* P0TAUB0I1        */
    unsigned char  P1TAUB0I1:1;                            /* P1TAUB0I1        */
    unsigned char  P2TAUB0I1:1;                            /* P2TAUB0I1        */
    unsigned char  P3TAUB0I1:1;                            /* P3TAUB0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I1:1;                            /* TBTAUB0I1        */
    unsigned char  MKTAUB0I1:1;                            /* MKTAUB0I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I1:1;                            /* RFTAUB0I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I1:1;                            /* CTTAUB0I1        */
};
struct __tag139
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I2:1;                            /* P0TAUB0I2        */
    unsigned char  P1TAUB0I2:1;                            /* P1TAUB0I2        */
    unsigned char  P2TAUB0I2:1;                            /* P2TAUB0I2        */
    unsigned char  P3TAUB0I2:1;                            /* P3TAUB0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I2:1;                            /* TBTAUB0I2        */
    unsigned char  MKTAUB0I2:1;                            /* MKTAUB0I2        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I2:1;                            /* RFTAUB0I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I2:1;                            /* CTTAUB0I2        */
};
struct __tag140
{                                                          /* Bit Access       */
    unsigned char  P0PWGA16:1;                             /* P0PWGA16         */
    unsigned char  P1PWGA16:1;                             /* P1PWGA16         */
    unsigned char  P2PWGA16:1;                             /* P2PWGA16         */
    unsigned char  P3PWGA16:1;                             /* P3PWGA16         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA16:1;                             /* TBPWGA16         */
    unsigned char  MKPWGA16:1;                             /* MKPWGA16         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA16:1;                             /* RFPWGA16         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA16:1;                             /* CTPWGA16         */
};
struct __tag141
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I4:1;                            /* P0TAUB0I4        */
    unsigned char  P1TAUB0I4:1;                            /* P1TAUB0I4        */
    unsigned char  P2TAUB0I4:1;                            /* P2TAUB0I4        */
    unsigned char  P3TAUB0I4:1;                            /* P3TAUB0I4        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I4:1;                            /* TBTAUB0I4        */
    unsigned char  MKTAUB0I4:1;                            /* MKTAUB0I4        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I4:1;                            /* RFTAUB0I4        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I4:1;                            /* CTTAUB0I4        */
};
struct __tag142
{                                                          /* Bit Access       */
    unsigned char  P0PWGA17:1;                             /* P0PWGA17         */
    unsigned char  P1PWGA17:1;                             /* P1PWGA17         */
    unsigned char  P2PWGA17:1;                             /* P2PWGA17         */
    unsigned char  P3PWGA17:1;                             /* P3PWGA17         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA17:1;                             /* TBPWGA17         */
    unsigned char  MKPWGA17:1;                             /* MKPWGA17         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA17:1;                             /* RFPWGA17         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA17:1;                             /* CTPWGA17         */
};
struct __tag143
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I6:1;                            /* P0TAUB0I6        */
    unsigned char  P1TAUB0I6:1;                            /* P1TAUB0I6        */
    unsigned char  P2TAUB0I6:1;                            /* P2TAUB0I6        */
    unsigned char  P3TAUB0I6:1;                            /* P3TAUB0I6        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I6:1;                            /* TBTAUB0I6        */
    unsigned char  MKTAUB0I6:1;                            /* MKTAUB0I6        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I6:1;                            /* RFTAUB0I6        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I6:1;                            /* CTTAUB0I6        */
};
struct __tag144
{                                                          /* Bit Access       */
    unsigned char  P0PWGA18:1;                             /* P0PWGA18         */
    unsigned char  P1PWGA18:1;                             /* P1PWGA18         */
    unsigned char  P2PWGA18:1;                             /* P2PWGA18         */
    unsigned char  P3PWGA18:1;                             /* P3PWGA18         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA18:1;                             /* TBPWGA18         */
    unsigned char  MKPWGA18:1;                             /* MKPWGA18         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA18:1;                             /* RFPWGA18         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA18:1;                             /* CTPWGA18         */
};
struct __tag145
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I8:1;                            /* P0TAUB0I8        */
    unsigned char  P1TAUB0I8:1;                            /* P1TAUB0I8        */
    unsigned char  P2TAUB0I8:1;                            /* P2TAUB0I8        */
    unsigned char  P3TAUB0I8:1;                            /* P3TAUB0I8        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I8:1;                            /* TBTAUB0I8        */
    unsigned char  MKTAUB0I8:1;                            /* MKTAUB0I8        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I8:1;                            /* RFTAUB0I8        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I8:1;                            /* CTTAUB0I8        */
};
struct __tag146
{                                                          /* Bit Access       */
    unsigned char  P0PWGA19:1;                             /* P0PWGA19         */
    unsigned char  P1PWGA19:1;                             /* P1PWGA19         */
    unsigned char  P2PWGA19:1;                             /* P2PWGA19         */
    unsigned char  P3PWGA19:1;                             /* P3PWGA19         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA19:1;                             /* TBPWGA19         */
    unsigned char  MKPWGA19:1;                             /* MKPWGA19         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA19:1;                             /* RFPWGA19         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA19:1;                             /* CTPWGA19         */
};
struct __tag147
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I10:1;                           /* P0TAUB0I10       */
    unsigned char  P1TAUB0I10:1;                           /* P1TAUB0I10       */
    unsigned char  P2TAUB0I10:1;                           /* P2TAUB0I10       */
    unsigned char  P3TAUB0I10:1;                           /* P3TAUB0I10       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I10:1;                           /* TBTAUB0I10       */
    unsigned char  MKTAUB0I10:1;                           /* MKTAUB0I10       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I10:1;                           /* RFTAUB0I10       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I10:1;                           /* CTTAUB0I10       */
};
struct __tag148
{                                                          /* Bit Access       */
    unsigned char  P0PWGA26:1;                             /* P0PWGA26         */
    unsigned char  P1PWGA26:1;                             /* P1PWGA26         */
    unsigned char  P2PWGA26:1;                             /* P2PWGA26         */
    unsigned char  P3PWGA26:1;                             /* P3PWGA26         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA26:1;                             /* TBPWGA26         */
    unsigned char  MKPWGA26:1;                             /* MKPWGA26         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA26:1;                             /* RFPWGA26         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA26:1;                             /* CTPWGA26         */
};
struct __tag149
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I12:1;                           /* P0TAUB0I12       */
    unsigned char  P1TAUB0I12:1;                           /* P1TAUB0I12       */
    unsigned char  P2TAUB0I12:1;                           /* P2TAUB0I12       */
    unsigned char  P3TAUB0I12:1;                           /* P3TAUB0I12       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I12:1;                           /* TBTAUB0I12       */
    unsigned char  MKTAUB0I12:1;                           /* MKTAUB0I12       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I12:1;                           /* RFTAUB0I12       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I12:1;                           /* CTTAUB0I12       */
};
struct __tag150
{                                                          /* Bit Access       */
    unsigned char  P0PWGA30:1;                             /* P0PWGA30         */
    unsigned char  P1PWGA30:1;                             /* P1PWGA30         */
    unsigned char  P2PWGA30:1;                             /* P2PWGA30         */
    unsigned char  P3PWGA30:1;                             /* P3PWGA30         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA30:1;                             /* TBPWGA30         */
    unsigned char  MKPWGA30:1;                             /* MKPWGA30         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA30:1;                             /* RFPWGA30         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA30:1;                             /* CTPWGA30         */
};
struct __tag151
{                                                          /* Bit Access       */
    unsigned char  P0TAUB0I14:1;                           /* P0TAUB0I14       */
    unsigned char  P1TAUB0I14:1;                           /* P1TAUB0I14       */
    unsigned char  P2TAUB0I14:1;                           /* P2TAUB0I14       */
    unsigned char  P3TAUB0I14:1;                           /* P3TAUB0I14       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUB0I14:1;                           /* TBTAUB0I14       */
    unsigned char  MKTAUB0I14:1;                           /* MKTAUB0I14       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUB0I14:1;                           /* RFTAUB0I14       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUB0I14:1;                           /* CTTAUB0I14       */
};
struct __tag152
{                                                          /* Bit Access       */
    unsigned char  P0PWGA31:1;                             /* P0PWGA31         */
    unsigned char  P1PWGA31:1;                             /* P1PWGA31         */
    unsigned char  P2PWGA31:1;                             /* P2PWGA31         */
    unsigned char  P3PWGA31:1;                             /* P3PWGA31         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA31:1;                             /* TBPWGA31         */
    unsigned char  MKPWGA31:1;                             /* MKPWGA31         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA31:1;                             /* RFPWGA31         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA31:1;                             /* CTPWGA31         */
};
struct __tag153
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IC:1;                            /* P0CSIH3IC        */
    unsigned char  P1CSIH3IC:1;                            /* P1CSIH3IC        */
    unsigned char  P2CSIH3IC:1;                            /* P2CSIH3IC        */
    unsigned char  P3CSIH3IC:1;                            /* P3CSIH3IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IC:1;                            /* TBCSIH3IC        */
    unsigned char  MKCSIH3IC:1;                            /* MKCSIH3IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IC:1;                            /* RFCSIH3IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IC:1;                            /* CTCSIH3IC        */
};
struct __tag154
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IR:1;                            /* P0CSIH3IR        */
    unsigned char  P1CSIH3IR:1;                            /* P1CSIH3IR        */
    unsigned char  P2CSIH3IR:1;                            /* P2CSIH3IR        */
    unsigned char  P3CSIH3IR:1;                            /* P3CSIH3IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IR:1;                            /* TBCSIH3IR        */
    unsigned char  MKCSIH3IR:1;                            /* MKCSIH3IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IR:1;                            /* RFCSIH3IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IR:1;                            /* CTCSIH3IR        */
};
struct __tag155
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IRE:1;                           /* P0CSIH3IRE       */
    unsigned char  P1CSIH3IRE:1;                           /* P1CSIH3IRE       */
    unsigned char  P2CSIH3IRE:1;                           /* P2CSIH3IRE       */
    unsigned char  P3CSIH3IRE:1;                           /* P3CSIH3IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IRE:1;                           /* TBCSIH3IRE       */
    unsigned char  MKCSIH3IRE:1;                           /* MKCSIH3IRE       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IRE:1;                           /* RFCSIH3IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IRE:1;                           /* CTCSIH3IRE       */
};
struct __tag156
{                                                          /* Bit Access       */
    unsigned char  P0CSIH3IJC:1;                           /* P0CSIH3IJC       */
    unsigned char  P1CSIH3IJC:1;                           /* P1CSIH3IJC       */
    unsigned char  P2CSIH3IJC:1;                           /* P2CSIH3IJC       */
    unsigned char  P3CSIH3IJC:1;                           /* P3CSIH3IJC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIH3IJC:1;                           /* TBCSIH3IJC       */
    unsigned char  MKCSIH3IJC:1;                           /* MKCSIH3IJC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIH3IJC:1;                           /* RFCSIH3IJC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIH3IJC:1;                           /* CTCSIH3IJC       */
};
struct __tag157
{                                                          /* Bit Access       */
    unsigned char  P0RLIN22:1;                             /* P0RLIN22         */
    unsigned char  P1RLIN22:1;                             /* P1RLIN22         */
    unsigned char  P2RLIN22:1;                             /* P2RLIN22         */
    unsigned char  P3RLIN22:1;                             /* P3RLIN22         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN22:1;                             /* TBRLIN22         */
    unsigned char  MKRLIN22:1;                             /* MKRLIN22         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN22:1;                             /* RFRLIN22         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN22:1;                             /* CTRLIN22         */
};
struct __tag158
{                                                          /* Bit Access       */
    unsigned char  P0RLIN23:1;                             /* P0RLIN23         */
    unsigned char  P1RLIN23:1;                             /* P1RLIN23         */
    unsigned char  P2RLIN23:1;                             /* P2RLIN23         */
    unsigned char  P3RLIN23:1;                             /* P3RLIN23         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN23:1;                             /* TBRLIN23         */
    unsigned char  MKRLIN23:1;                             /* MKRLIN23         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN23:1;                             /* RFRLIN23         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN23:1;                             /* CTRLIN23         */
};
struct __tag159
{                                                          /* Bit Access       */
    unsigned char  P0RLIN32:1;                             /* P0RLIN32         */
    unsigned char  P1RLIN32:1;                             /* P1RLIN32         */
    unsigned char  P2RLIN32:1;                             /* P2RLIN32         */
    unsigned char  P3RLIN32:1;                             /* P3RLIN32         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN32:1;                             /* TBRLIN32         */
    unsigned char  MKRLIN32:1;                             /* MKRLIN32         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN32:1;                             /* RFRLIN32         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN32:1;                             /* CTRLIN32         */
};
struct __tag160
{                                                          /* Bit Access       */
    unsigned char  P0RLIN32UR0:1;                          /* P0RLIN32UR0      */
    unsigned char  P1RLIN32UR0:1;                          /* P1RLIN32UR0      */
    unsigned char  P2RLIN32UR0:1;                          /* P2RLIN32UR0      */
    unsigned char  P3RLIN32UR0:1;                          /* P3RLIN32UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN32UR0:1;                          /* TBRLIN32UR0      */
    unsigned char  MKRLIN32UR0:1;                          /* MKRLIN32UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN32UR0:1;                          /* RFRLIN32UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN32UR0:1;                          /* CTRLIN32UR0      */
};
struct __tag161
{                                                          /* Bit Access       */
    unsigned char  P0RLIN32UR1:1;                          /* P0RLIN32UR1      */
    unsigned char  P1RLIN32UR1:1;                          /* P1RLIN32UR1      */
    unsigned char  P2RLIN32UR1:1;                          /* P2RLIN32UR1      */
    unsigned char  P3RLIN32UR1:1;                          /* P3RLIN32UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN32UR1:1;                          /* TBRLIN32UR1      */
    unsigned char  MKRLIN32UR1:1;                          /* MKRLIN32UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN32UR1:1;                          /* RFRLIN32UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN32UR1:1;                          /* CTRLIN32UR1      */
};
struct __tag162
{                                                          /* Bit Access       */
    unsigned char  P0RLIN32UR2:1;                          /* P0RLIN32UR2      */
    unsigned char  P1RLIN32UR2:1;                          /* P1RLIN32UR2      */
    unsigned char  P2RLIN32UR2:1;                          /* P2RLIN32UR2      */
    unsigned char  P3RLIN32UR2:1;                          /* P3RLIN32UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN32UR2:1;                          /* TBRLIN32UR2      */
    unsigned char  MKRLIN32UR2:1;                          /* MKRLIN32UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN32UR2:1;                          /* RFRLIN32UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN32UR2:1;                          /* CTRLIN32UR2      */
};
struct __tag163
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ1I0:1;                            /* P0TAUJ1I0        */
    unsigned char  P1TAUJ1I0:1;                            /* P1TAUJ1I0        */
    unsigned char  P2TAUJ1I0:1;                            /* P2TAUJ1I0        */
    unsigned char  P3TAUJ1I0:1;                            /* P3TAUJ1I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ1I0:1;                            /* TBTAUJ1I0        */
    unsigned char  MKTAUJ1I0:1;                            /* MKTAUJ1I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ1I0:1;                            /* RFTAUJ1I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ1I0:1;                            /* CTTAUJ1I0        */
};
struct __tag164
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ1I1:1;                            /* P0TAUJ1I1        */
    unsigned char  P1TAUJ1I1:1;                            /* P1TAUJ1I1        */
    unsigned char  P2TAUJ1I1:1;                            /* P2TAUJ1I1        */
    unsigned char  P3TAUJ1I1:1;                            /* P3TAUJ1I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ1I1:1;                            /* TBTAUJ1I1        */
    unsigned char  MKTAUJ1I1:1;                            /* MKTAUJ1I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ1I1:1;                            /* RFTAUJ1I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ1I1:1;                            /* CTTAUJ1I1        */
};
struct __tag165
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ1I2:1;                            /* P0TAUJ1I2        */
    unsigned char  P1TAUJ1I2:1;                            /* P1TAUJ1I2        */
    unsigned char  P2TAUJ1I2:1;                            /* P2TAUJ1I2        */
    unsigned char  P3TAUJ1I2:1;                            /* P3TAUJ1I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ1I2:1;                            /* TBTAUJ1I2        */
    unsigned char  MKTAUJ1I2:1;                            /* MKTAUJ1I2        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ1I2:1;                            /* RFTAUJ1I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ1I2:1;                            /* CTTAUJ1I2        */
};
struct __tag166
{                                                          /* Bit Access       */
    unsigned char  P0TAUJ1I3:1;                            /* P0TAUJ1I3        */
    unsigned char  P1TAUJ1I3:1;                            /* P1TAUJ1I3        */
    unsigned char  P2TAUJ1I3:1;                            /* P2TAUJ1I3        */
    unsigned char  P3TAUJ1I3:1;                            /* P3TAUJ1I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBTAUJ1I3:1;                            /* TBTAUJ1I3        */
    unsigned char  MKTAUJ1I3:1;                            /* MKTAUJ1I3        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFTAUJ1I3:1;                            /* RFTAUJ1I3        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTTAUJ1I3:1;                            /* CTTAUJ1I3        */
};
struct __tag167
{                                                          /* Bit Access       */
    unsigned char  P0PWGA24:1;                             /* P0PWGA24         */
    unsigned char  P1PWGA24:1;                             /* P1PWGA24         */
    unsigned char  P2PWGA24:1;                             /* P2PWGA24         */
    unsigned char  P3PWGA24:1;                             /* P3PWGA24         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA24:1;                             /* TBPWGA24         */
    unsigned char  MKPWGA24:1;                             /* MKPWGA24         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA24:1;                             /* RFPWGA24         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA24:1;                             /* CTPWGA24         */
};
struct __tag168
{                                                          /* Bit Access       */
    unsigned char  P0PWGA25:1;                             /* P0PWGA25         */
    unsigned char  P1PWGA25:1;                             /* P1PWGA25         */
    unsigned char  P2PWGA25:1;                             /* P2PWGA25         */
    unsigned char  P3PWGA25:1;                             /* P3PWGA25         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA25:1;                             /* TBPWGA25         */
    unsigned char  MKPWGA25:1;                             /* MKPWGA25         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA25:1;                             /* RFPWGA25         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA25:1;                             /* CTPWGA25         */
};
struct __tag169
{                                                          /* Bit Access       */
    unsigned char  P0PWGA27:1;                             /* P0PWGA27         */
    unsigned char  P1PWGA27:1;                             /* P1PWGA27         */
    unsigned char  P2PWGA27:1;                             /* P2PWGA27         */
    unsigned char  P3PWGA27:1;                             /* P3PWGA27         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA27:1;                             /* TBPWGA27         */
    unsigned char  MKPWGA27:1;                             /* MKPWGA27         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA27:1;                             /* RFPWGA27         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA27:1;                             /* CTPWGA27         */
};
struct __tag170
{                                                          /* Bit Access       */
    unsigned char  P0PWGA28:1;                             /* P0PWGA28         */
    unsigned char  P1PWGA28:1;                             /* P1PWGA28         */
    unsigned char  P2PWGA28:1;                             /* P2PWGA28         */
    unsigned char  P3PWGA28:1;                             /* P3PWGA28         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA28:1;                             /* TBPWGA28         */
    unsigned char  MKPWGA28:1;                             /* MKPWGA28         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA28:1;                             /* RFPWGA28         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA28:1;                             /* CTPWGA28         */
};
struct __tag171
{                                                          /* Bit Access       */
    unsigned char  P0PWGA29:1;                             /* P0PWGA29         */
    unsigned char  P1PWGA29:1;                             /* P1PWGA29         */
    unsigned char  P2PWGA29:1;                             /* P2PWGA29         */
    unsigned char  P3PWGA29:1;                             /* P3PWGA29         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA29:1;                             /* TBPWGA29         */
    unsigned char  MKPWGA29:1;                             /* MKPWGA29         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA29:1;                             /* RFPWGA29         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA29:1;                             /* CTPWGA29         */
};
struct __tag172
{                                                          /* Bit Access       */
    unsigned char  P0PWGA32:1;                             /* P0PWGA32         */
    unsigned char  P1PWGA32:1;                             /* P1PWGA32         */
    unsigned char  P2PWGA32:1;                             /* P2PWGA32         */
    unsigned char  P3PWGA32:1;                             /* P3PWGA32         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA32:1;                             /* TBPWGA32         */
    unsigned char  MKPWGA32:1;                             /* MKPWGA32         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA32:1;                             /* RFPWGA32         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA32:1;                             /* CTPWGA32         */
};
struct __tag173
{                                                          /* Bit Access       */
    unsigned char  P0PWGA33:1;                             /* P0PWGA33         */
    unsigned char  P1PWGA33:1;                             /* P1PWGA33         */
    unsigned char  P2PWGA33:1;                             /* P2PWGA33         */
    unsigned char  P3PWGA33:1;                             /* P3PWGA33         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA33:1;                             /* TBPWGA33         */
    unsigned char  MKPWGA33:1;                             /* MKPWGA33         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA33:1;                             /* RFPWGA33         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA33:1;                             /* CTPWGA33         */
};
struct __tag174
{                                                          /* Bit Access       */
    unsigned char  P0PWGA34:1;                             /* P0PWGA34         */
    unsigned char  P1PWGA34:1;                             /* P1PWGA34         */
    unsigned char  P2PWGA34:1;                             /* P2PWGA34         */
    unsigned char  P3PWGA34:1;                             /* P3PWGA34         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA34:1;                             /* TBPWGA34         */
    unsigned char  MKPWGA34:1;                             /* MKPWGA34         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA34:1;                             /* RFPWGA34         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA34:1;                             /* CTPWGA34         */
};
struct __tag175
{                                                          /* Bit Access       */
    unsigned char  P0PWGA35:1;                             /* P0PWGA35         */
    unsigned char  P1PWGA35:1;                             /* P1PWGA35         */
    unsigned char  P2PWGA35:1;                             /* P2PWGA35         */
    unsigned char  P3PWGA35:1;                             /* P3PWGA35         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA35:1;                             /* TBPWGA35         */
    unsigned char  MKPWGA35:1;                             /* MKPWGA35         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA35:1;                             /* RFPWGA35         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA35:1;                             /* CTPWGA35         */
};
struct __tag176
{                                                          /* Bit Access       */
    unsigned char  P0PWGA36:1;                             /* P0PWGA36         */
    unsigned char  P1PWGA36:1;                             /* P1PWGA36         */
    unsigned char  P2PWGA36:1;                             /* P2PWGA36         */
    unsigned char  P3PWGA36:1;                             /* P3PWGA36         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA36:1;                             /* TBPWGA36         */
    unsigned char  MKPWGA36:1;                             /* MKPWGA36         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA36:1;                             /* RFPWGA36         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA36:1;                             /* CTPWGA36         */
};
struct __tag177
{                                                          /* Bit Access       */
    unsigned char  P0PWGA37:1;                             /* P0PWGA37         */
    unsigned char  P1PWGA37:1;                             /* P1PWGA37         */
    unsigned char  P2PWGA37:1;                             /* P2PWGA37         */
    unsigned char  P3PWGA37:1;                             /* P3PWGA37         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA37:1;                             /* TBPWGA37         */
    unsigned char  MKPWGA37:1;                             /* MKPWGA37         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA37:1;                             /* RFPWGA37         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA37:1;                             /* CTPWGA37         */
};
struct __tag178
{                                                          /* Bit Access       */
    unsigned char  P0PWGA38:1;                             /* P0PWGA38         */
    unsigned char  P1PWGA38:1;                             /* P1PWGA38         */
    unsigned char  P2PWGA38:1;                             /* P2PWGA38         */
    unsigned char  P3PWGA38:1;                             /* P3PWGA38         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA38:1;                             /* TBPWGA38         */
    unsigned char  MKPWGA38:1;                             /* MKPWGA38         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA38:1;                             /* RFPWGA38         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA38:1;                             /* CTPWGA38         */
};
struct __tag179
{                                                          /* Bit Access       */
    unsigned char  P0PWGA39:1;                             /* P0PWGA39         */
    unsigned char  P1PWGA39:1;                             /* P1PWGA39         */
    unsigned char  P2PWGA39:1;                             /* P2PWGA39         */
    unsigned char  P3PWGA39:1;                             /* P3PWGA39         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA39:1;                             /* TBPWGA39         */
    unsigned char  MKPWGA39:1;                             /* MKPWGA39         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA39:1;                             /* RFPWGA39         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA39:1;                             /* CTPWGA39         */
};
struct __tag180
{                                                          /* Bit Access       */
    unsigned char  P0PWGA40:1;                             /* P0PWGA40         */
    unsigned char  P1PWGA40:1;                             /* P1PWGA40         */
    unsigned char  P2PWGA40:1;                             /* P2PWGA40         */
    unsigned char  P3PWGA40:1;                             /* P3PWGA40         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA40:1;                             /* TBPWGA40         */
    unsigned char  MKPWGA40:1;                             /* MKPWGA40         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA40:1;                             /* RFPWGA40         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA40:1;                             /* CTPWGA40         */
};
struct __tag181
{                                                          /* Bit Access       */
    unsigned char  P0PWGA41:1;                             /* P0PWGA41         */
    unsigned char  P1PWGA41:1;                             /* P1PWGA41         */
    unsigned char  P2PWGA41:1;                             /* P2PWGA41         */
    unsigned char  P3PWGA41:1;                             /* P3PWGA41         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA41:1;                             /* TBPWGA41         */
    unsigned char  MKPWGA41:1;                             /* MKPWGA41         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA41:1;                             /* RFPWGA41         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA41:1;                             /* CTPWGA41         */
};
struct __tag182
{                                                          /* Bit Access       */
    unsigned char  P0PWGA42:1;                             /* P0PWGA42         */
    unsigned char  P1PWGA42:1;                             /* P1PWGA42         */
    unsigned char  P2PWGA42:1;                             /* P2PWGA42         */
    unsigned char  P3PWGA42:1;                             /* P3PWGA42         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA42:1;                             /* TBPWGA42         */
    unsigned char  MKPWGA42:1;                             /* MKPWGA42         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA42:1;                             /* RFPWGA42         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA42:1;                             /* CTPWGA42         */
};
struct __tag183
{                                                          /* Bit Access       */
    unsigned char  P0PWGA43:1;                             /* P0PWGA43         */
    unsigned char  P1PWGA43:1;                             /* P1PWGA43         */
    unsigned char  P2PWGA43:1;                             /* P2PWGA43         */
    unsigned char  P3PWGA43:1;                             /* P3PWGA43         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA43:1;                             /* TBPWGA43         */
    unsigned char  MKPWGA43:1;                             /* MKPWGA43         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA43:1;                             /* RFPWGA43         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA43:1;                             /* CTPWGA43         */
};
struct __tag184
{                                                          /* Bit Access       */
    unsigned char  P0PWGA44:1;                             /* P0PWGA44         */
    unsigned char  P1PWGA44:1;                             /* P1PWGA44         */
    unsigned char  P2PWGA44:1;                             /* P2PWGA44         */
    unsigned char  P3PWGA44:1;                             /* P3PWGA44         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA44:1;                             /* TBPWGA44         */
    unsigned char  MKPWGA44:1;                             /* MKPWGA44         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA44:1;                             /* RFPWGA44         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA44:1;                             /* CTPWGA44         */
};
struct __tag185
{                                                          /* Bit Access       */
    unsigned char  P0PWGA45:1;                             /* P0PWGA45         */
    unsigned char  P1PWGA45:1;                             /* P1PWGA45         */
    unsigned char  P2PWGA45:1;                             /* P2PWGA45         */
    unsigned char  P3PWGA45:1;                             /* P3PWGA45         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA45:1;                             /* TBPWGA45         */
    unsigned char  MKPWGA45:1;                             /* MKPWGA45         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA45:1;                             /* RFPWGA45         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA45:1;                             /* CTPWGA45         */
};
struct __tag186
{                                                          /* Bit Access       */
    unsigned char  P0PWGA46:1;                             /* P0PWGA46         */
    unsigned char  P1PWGA46:1;                             /* P1PWGA46         */
    unsigned char  P2PWGA46:1;                             /* P2PWGA46         */
    unsigned char  P3PWGA46:1;                             /* P3PWGA46         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA46:1;                             /* TBPWGA46         */
    unsigned char  MKPWGA46:1;                             /* MKPWGA46         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA46:1;                             /* RFPWGA46         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA46:1;                             /* CTPWGA46         */
};
struct __tag187
{                                                          /* Bit Access       */
    unsigned char  P0PWGA47:1;                             /* P0PWGA47         */
    unsigned char  P1PWGA47:1;                             /* P1PWGA47         */
    unsigned char  P2PWGA47:1;                             /* P2PWGA47         */
    unsigned char  P3PWGA47:1;                             /* P3PWGA47         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA47:1;                             /* TBPWGA47         */
    unsigned char  MKPWGA47:1;                             /* MKPWGA47         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA47:1;                             /* RFPWGA47         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA47:1;                             /* CTPWGA47         */
};
struct __tag188
{                                                          /* Bit Access       */
    unsigned char  P0P9:1;                                 /* P0P9             */
    unsigned char  P1P9:1;                                 /* P1P9             */
    unsigned char  P2P9:1;                                 /* P2P9             */
    unsigned char  P3P9:1;                                 /* P3P9             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP9:1;                                 /* TBP9             */
    unsigned char  MKP9:1;                                 /* MKP9             */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP9:1;                                 /* RFP9             */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP9:1;                                 /* CTP9             */
};
struct __tag189
{                                                          /* Bit Access       */
    unsigned char  P0P13:1;                                /* P0P13            */
    unsigned char  P1P13:1;                                /* P1P13            */
    unsigned char  P2P13:1;                                /* P2P13            */
    unsigned char  P3P13:1;                                /* P3P13            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP13:1;                                /* TBP13            */
    unsigned char  MKP13:1;                                /* MKP13            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP13:1;                                /* RFP13            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP13:1;                                /* CTP13            */
};
struct __tag190
{                                                          /* Bit Access       */
    unsigned char  P0P14:1;                                /* P0P14            */
    unsigned char  P1P14:1;                                /* P1P14            */
    unsigned char  P2P14:1;                                /* P2P14            */
    unsigned char  P3P14:1;                                /* P3P14            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP14:1;                                /* TBP14            */
    unsigned char  MKP14:1;                                /* MKP14            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP14:1;                                /* RFP14            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP14:1;                                /* CTP14            */
};
struct __tag191
{                                                          /* Bit Access       */
    unsigned char  P0P15:1;                                /* P0P15            */
    unsigned char  P1P15:1;                                /* P1P15            */
    unsigned char  P2P15:1;                                /* P2P15            */
    unsigned char  P3P15:1;                                /* P3P15            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBP15:1;                                /* TBP15            */
    unsigned char  MKP15:1;                                /* MKP15            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFP15:1;                                /* RFP15            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTP15:1;                                /* CTP15            */
};
struct __tag192
{                                                          /* Bit Access       */
    unsigned char  P0RTCA01S:1;                            /* P0RTCA01S        */
    unsigned char  P1RTCA01S:1;                            /* P1RTCA01S        */
    unsigned char  P2RTCA01S:1;                            /* P2RTCA01S        */
    unsigned char  P3RTCA01S:1;                            /* P3RTCA01S        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRTCA01S:1;                            /* TBRTCA01S        */
    unsigned char  MKRTCA01S:1;                            /* MKRTCA01S        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRTCA01S:1;                            /* RFRTCA01S        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRTCA01S:1;                            /* CTRTCA01S        */
};
struct __tag193
{                                                          /* Bit Access       */
    unsigned char  P0RTCA0AL:1;                            /* P0RTCA0AL        */
    unsigned char  P1RTCA0AL:1;                            /* P1RTCA0AL        */
    unsigned char  P2RTCA0AL:1;                            /* P2RTCA0AL        */
    unsigned char  P3RTCA0AL:1;                            /* P3RTCA0AL        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRTCA0AL:1;                            /* TBRTCA0AL        */
    unsigned char  MKRTCA0AL:1;                            /* MKRTCA0AL        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRTCA0AL:1;                            /* RFRTCA0AL        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRTCA0AL:1;                            /* CTRTCA0AL        */
};
struct __tag194
{                                                          /* Bit Access       */
    unsigned char  P0RTCA0R:1;                             /* P0RTCA0R         */
    unsigned char  P1RTCA0R:1;                             /* P1RTCA0R         */
    unsigned char  P2RTCA0R:1;                             /* P2RTCA0R         */
    unsigned char  P3RTCA0R:1;                             /* P3RTCA0R         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRTCA0R:1;                             /* TBRTCA0R         */
    unsigned char  MKRTCA0R:1;                             /* MKRTCA0R         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRTCA0R:1;                             /* RFRTCA0R         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRTCA0R:1;                             /* CTRTCA0R         */
};
struct __tag195
{                                                          /* Bit Access       */
    unsigned char  P0ADCA1ERR:1;                           /* P0ADCA1ERR       */
    unsigned char  P1ADCA1ERR:1;                           /* P1ADCA1ERR       */
    unsigned char  P2ADCA1ERR:1;                           /* P2ADCA1ERR       */
    unsigned char  P3ADCA1ERR:1;                           /* P3ADCA1ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA1ERR:1;                           /* TBADCA1ERR       */
    unsigned char  MKADCA1ERR:1;                           /* MKADCA1ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA1ERR:1;                           /* RFADCA1ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA1ERR:1;                           /* CTADCA1ERR       */
};
struct __tag196
{                                                          /* Bit Access       */
    unsigned char  P0ADCA1I0:1;                            /* P0ADCA1I0        */
    unsigned char  P1ADCA1I0:1;                            /* P1ADCA1I0        */
    unsigned char  P2ADCA1I0:1;                            /* P2ADCA1I0        */
    unsigned char  P3ADCA1I0:1;                            /* P3ADCA1I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA1I0:1;                            /* TBADCA1I0        */
    unsigned char  MKADCA1I0:1;                            /* MKADCA1I0        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA1I0:1;                            /* RFADCA1I0        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA1I0:1;                            /* CTADCA1I0        */
};
struct __tag197
{                                                          /* Bit Access       */
    unsigned char  P0ADCA1I1:1;                            /* P0ADCA1I1        */
    unsigned char  P1ADCA1I1:1;                            /* P1ADCA1I1        */
    unsigned char  P2ADCA1I1:1;                            /* P2ADCA1I1        */
    unsigned char  P3ADCA1I1:1;                            /* P3ADCA1I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA1I1:1;                            /* TBADCA1I1        */
    unsigned char  MKADCA1I1:1;                            /* MKADCA1I1        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA1I1:1;                            /* RFADCA1I1        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA1I1:1;                            /* CTADCA1I1        */
};
struct __tag198
{                                                          /* Bit Access       */
    unsigned char  P0ADCA1I2:1;                            /* P0ADCA1I2        */
    unsigned char  P1ADCA1I2:1;                            /* P1ADCA1I2        */
    unsigned char  P2ADCA1I2:1;                            /* P2ADCA1I2        */
    unsigned char  P3ADCA1I2:1;                            /* P3ADCA1I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBADCA1I2:1;                            /* TBADCA1I2        */
    unsigned char  MKADCA1I2:1;                            /* MKADCA1I2        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFADCA1I2:1;                            /* RFADCA1I2        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTADCA1I2:1;                            /* CTADCA1I2        */
};
struct __tag199
{                                                          /* Bit Access       */
    unsigned char  P0RCAN2ERR:1;                           /* P0RCAN2ERR       */
    unsigned char  P1RCAN2ERR:1;                           /* P1RCAN2ERR       */
    unsigned char  P2RCAN2ERR:1;                           /* P2RCAN2ERR       */
    unsigned char  P3RCAN2ERR:1;                           /* P3RCAN2ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN2ERR:1;                           /* TBRCAN2ERR       */
    unsigned char  MKRCAN2ERR:1;                           /* MKRCAN2ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN2ERR:1;                           /* RFRCAN2ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN2ERR:1;                           /* CTRCAN2ERR       */
};
struct __tag200
{                                                          /* Bit Access       */
    unsigned char  P0RCAN2REC:1;                           /* P0RCAN2REC       */
    unsigned char  P1RCAN2REC:1;                           /* P1RCAN2REC       */
    unsigned char  P2RCAN2REC:1;                           /* P2RCAN2REC       */
    unsigned char  P3RCAN2REC:1;                           /* P3RCAN2REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN2REC:1;                           /* TBRCAN2REC       */
    unsigned char  MKRCAN2REC:1;                           /* MKRCAN2REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN2REC:1;                           /* RFRCAN2REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN2REC:1;                           /* CTRCAN2REC       */
};
struct __tag201
{                                                          /* Bit Access       */
    unsigned char  P0RCAN2TRX:1;                           /* P0RCAN2TRX       */
    unsigned char  P1RCAN2TRX:1;                           /* P1RCAN2TRX       */
    unsigned char  P2RCAN2TRX:1;                           /* P2RCAN2TRX       */
    unsigned char  P3RCAN2TRX:1;                           /* P3RCAN2TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN2TRX:1;                           /* TBRCAN2TRX       */
    unsigned char  MKRCAN2TRX:1;                           /* MKRCAN2TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN2TRX:1;                           /* RFRCAN2TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN2TRX:1;                           /* CTRCAN2TRX       */
};
struct __tag202
{                                                          /* Bit Access       */
    unsigned char  P0RCAN3ERR:1;                           /* P0RCAN3ERR       */
    unsigned char  P1RCAN3ERR:1;                           /* P1RCAN3ERR       */
    unsigned char  P2RCAN3ERR:1;                           /* P2RCAN3ERR       */
    unsigned char  P3RCAN3ERR:1;                           /* P3RCAN3ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN3ERR:1;                           /* TBRCAN3ERR       */
    unsigned char  MKRCAN3ERR:1;                           /* MKRCAN3ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN3ERR:1;                           /* RFRCAN3ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN3ERR:1;                           /* CTRCAN3ERR       */
};
struct __tag203
{                                                          /* Bit Access       */
    unsigned char  P0RCAN3REC:1;                           /* P0RCAN3REC       */
    unsigned char  P1RCAN3REC:1;                           /* P1RCAN3REC       */
    unsigned char  P2RCAN3REC:1;                           /* P2RCAN3REC       */
    unsigned char  P3RCAN3REC:1;                           /* P3RCAN3REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN3REC:1;                           /* TBRCAN3REC       */
    unsigned char  MKRCAN3REC:1;                           /* MKRCAN3REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN3REC:1;                           /* RFRCAN3REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN3REC:1;                           /* CTRCAN3REC       */
};
struct __tag204
{                                                          /* Bit Access       */
    unsigned char  P0RCAN3TRX:1;                           /* P0RCAN3TRX       */
    unsigned char  P1RCAN3TRX:1;                           /* P1RCAN3TRX       */
    unsigned char  P2RCAN3TRX:1;                           /* P2RCAN3TRX       */
    unsigned char  P3RCAN3TRX:1;                           /* P3RCAN3TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN3TRX:1;                           /* TBRCAN3TRX       */
    unsigned char  MKRCAN3TRX:1;                           /* MKRCAN3TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN3TRX:1;                           /* RFRCAN3TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN3TRX:1;                           /* CTRCAN3TRX       */
};
struct __tag205
{                                                          /* Bit Access       */
    unsigned char  P0CSIG1IC:1;                            /* P0CSIG1IC        */
    unsigned char  P1CSIG1IC:1;                            /* P1CSIG1IC        */
    unsigned char  P2CSIG1IC:1;                            /* P2CSIG1IC        */
    unsigned char  P3CSIG1IC:1;                            /* P3CSIG1IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG1IC:1;                            /* TBCSIG1IC        */
    unsigned char  MKCSIG1IC:1;                            /* MKCSIG1IC        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG1IC:1;                            /* RFCSIG1IC        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG1IC:1;                            /* CTCSIG1IC        */
};
struct __tag206
{                                                          /* Bit Access       */
    unsigned char  P0CSIG1IR:1;                            /* P0CSIG1IR        */
    unsigned char  P1CSIG1IR:1;                            /* P1CSIG1IR        */
    unsigned char  P2CSIG1IR:1;                            /* P2CSIG1IR        */
    unsigned char  P3CSIG1IR:1;                            /* P3CSIG1IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG1IR:1;                            /* TBCSIG1IR        */
    unsigned char  MKCSIG1IR:1;                            /* MKCSIG1IR        */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG1IR:1;                            /* RFCSIG1IR        */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG1IR:1;                            /* CTCSIG1IR        */
};
struct __tag207
{                                                          /* Bit Access       */
    unsigned char  P0CSIG1IRE:1;                           /* P0CSIG1IRE       */
    unsigned char  P1CSIG1IRE:1;                           /* P1CSIG1IRE       */
    unsigned char  P2CSIG1IRE:1;                           /* P2CSIG1IRE       */
    unsigned char  P3CSIG1IRE:1;                           /* P3CSIG1IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBCSIG1IRE:1;                           /* TBCSIG1IRE       */
    unsigned char  MKCSIG1IRE:1;                           /* MKCSIG1IRE       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFCSIG1IRE:1;                           /* RFCSIG1IRE       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTCSIG1IRE:1;                           /* CTCSIG1IRE       */
};
struct __tag208
{                                                          /* Bit Access       */
    unsigned char  P0RLIN24:1;                             /* P0RLIN24         */
    unsigned char  P1RLIN24:1;                             /* P1RLIN24         */
    unsigned char  P2RLIN24:1;                             /* P2RLIN24         */
    unsigned char  P3RLIN24:1;                             /* P3RLIN24         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN24:1;                             /* TBRLIN24         */
    unsigned char  MKRLIN24:1;                             /* MKRLIN24         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN24:1;                             /* RFRLIN24         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN24:1;                             /* CTRLIN24         */
};
struct __tag209
{                                                          /* Bit Access       */
    unsigned char  P0RLIN25:1;                             /* P0RLIN25         */
    unsigned char  P1RLIN25:1;                             /* P1RLIN25         */
    unsigned char  P2RLIN25:1;                             /* P2RLIN25         */
    unsigned char  P3RLIN25:1;                             /* P3RLIN25         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN25:1;                             /* TBRLIN25         */
    unsigned char  MKRLIN25:1;                             /* MKRLIN25         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN25:1;                             /* RFRLIN25         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN25:1;                             /* CTRLIN25         */
};
struct __tag210
{                                                          /* Bit Access       */
    unsigned char  P0RLIN33:1;                             /* P0RLIN33         */
    unsigned char  P1RLIN33:1;                             /* P1RLIN33         */
    unsigned char  P2RLIN33:1;                             /* P2RLIN33         */
    unsigned char  P3RLIN33:1;                             /* P3RLIN33         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN33:1;                             /* TBRLIN33         */
    unsigned char  MKRLIN33:1;                             /* MKRLIN33         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN33:1;                             /* RFRLIN33         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN33:1;                             /* CTRLIN33         */
};
struct __tag211
{                                                          /* Bit Access       */
    unsigned char  P0RLIN33UR0:1;                          /* P0RLIN33UR0      */
    unsigned char  P1RLIN33UR0:1;                          /* P1RLIN33UR0      */
    unsigned char  P2RLIN33UR0:1;                          /* P2RLIN33UR0      */
    unsigned char  P3RLIN33UR0:1;                          /* P3RLIN33UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN33UR0:1;                          /* TBRLIN33UR0      */
    unsigned char  MKRLIN33UR0:1;                          /* MKRLIN33UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN33UR0:1;                          /* RFRLIN33UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN33UR0:1;                          /* CTRLIN33UR0      */
};
struct __tag212
{                                                          /* Bit Access       */
    unsigned char  P0RLIN33UR1:1;                          /* P0RLIN33UR1      */
    unsigned char  P1RLIN33UR1:1;                          /* P1RLIN33UR1      */
    unsigned char  P2RLIN33UR1:1;                          /* P2RLIN33UR1      */
    unsigned char  P3RLIN33UR1:1;                          /* P3RLIN33UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN33UR1:1;                          /* TBRLIN33UR1      */
    unsigned char  MKRLIN33UR1:1;                          /* MKRLIN33UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN33UR1:1;                          /* RFRLIN33UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN33UR1:1;                          /* CTRLIN33UR1      */
};
struct __tag213
{                                                          /* Bit Access       */
    unsigned char  P0RLIN33UR2:1;                          /* P0RLIN33UR2      */
    unsigned char  P1RLIN33UR2:1;                          /* P1RLIN33UR2      */
    unsigned char  P2RLIN33UR2:1;                          /* P2RLIN33UR2      */
    unsigned char  P3RLIN33UR2:1;                          /* P3RLIN33UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN33UR2:1;                          /* TBRLIN33UR2      */
    unsigned char  MKRLIN33UR2:1;                          /* MKRLIN33UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN33UR2:1;                          /* RFRLIN33UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN33UR2:1;                          /* CTRLIN33UR2      */
};
struct __tag214
{                                                          /* Bit Access       */
    unsigned char  P0RLIN34:1;                             /* P0RLIN34         */
    unsigned char  P1RLIN34:1;                             /* P1RLIN34         */
    unsigned char  P2RLIN34:1;                             /* P2RLIN34         */
    unsigned char  P3RLIN34:1;                             /* P3RLIN34         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN34:1;                             /* TBRLIN34         */
    unsigned char  MKRLIN34:1;                             /* MKRLIN34         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN34:1;                             /* RFRLIN34         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN34:1;                             /* CTRLIN34         */
};
struct __tag215
{                                                          /* Bit Access       */
    unsigned char  P0RLIN34UR0:1;                          /* P0RLIN34UR0      */
    unsigned char  P1RLIN34UR0:1;                          /* P1RLIN34UR0      */
    unsigned char  P2RLIN34UR0:1;                          /* P2RLIN34UR0      */
    unsigned char  P3RLIN34UR0:1;                          /* P3RLIN34UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN34UR0:1;                          /* TBRLIN34UR0      */
    unsigned char  MKRLIN34UR0:1;                          /* MKRLIN34UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN34UR0:1;                          /* RFRLIN34UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN34UR0:1;                          /* CTRLIN34UR0      */
};
struct __tag216
{                                                          /* Bit Access       */
    unsigned char  P0RLIN34UR1:1;                          /* P0RLIN34UR1      */
    unsigned char  P1RLIN34UR1:1;                          /* P1RLIN34UR1      */
    unsigned char  P2RLIN34UR1:1;                          /* P2RLIN34UR1      */
    unsigned char  P3RLIN34UR1:1;                          /* P3RLIN34UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN34UR1:1;                          /* TBRLIN34UR1      */
    unsigned char  MKRLIN34UR1:1;                          /* MKRLIN34UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN34UR1:1;                          /* RFRLIN34UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN34UR1:1;                          /* CTRLIN34UR1      */
};
struct __tag217
{                                                          /* Bit Access       */
    unsigned char  P0RLIN34UR2:1;                          /* P0RLIN34UR2      */
    unsigned char  P1RLIN34UR2:1;                          /* P1RLIN34UR2      */
    unsigned char  P2RLIN34UR2:1;                          /* P2RLIN34UR2      */
    unsigned char  P3RLIN34UR2:1;                          /* P3RLIN34UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN34UR2:1;                          /* TBRLIN34UR2      */
    unsigned char  MKRLIN34UR2:1;                          /* MKRLIN34UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN34UR2:1;                          /* RFRLIN34UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN34UR2:1;                          /* CTRLIN34UR2      */
};
struct __tag218
{                                                          /* Bit Access       */
    unsigned char  P0RLIN35:1;                             /* P0RLIN35         */
    unsigned char  P1RLIN35:1;                             /* P1RLIN35         */
    unsigned char  P2RLIN35:1;                             /* P2RLIN35         */
    unsigned char  P3RLIN35:1;                             /* P3RLIN35         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN35:1;                             /* TBRLIN35         */
    unsigned char  MKRLIN35:1;                             /* MKRLIN35         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN35:1;                             /* RFRLIN35         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN35:1;                             /* CTRLIN35         */
};
struct __tag219
{                                                          /* Bit Access       */
    unsigned char  P0RLIN35UR0:1;                          /* P0RLIN35UR0      */
    unsigned char  P1RLIN35UR0:1;                          /* P1RLIN35UR0      */
    unsigned char  P2RLIN35UR0:1;                          /* P2RLIN35UR0      */
    unsigned char  P3RLIN35UR0:1;                          /* P3RLIN35UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN35UR0:1;                          /* TBRLIN35UR0      */
    unsigned char  MKRLIN35UR0:1;                          /* MKRLIN35UR0      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN35UR0:1;                          /* RFRLIN35UR0      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN35UR0:1;                          /* CTRLIN35UR0      */
};
struct __tag220
{                                                          /* Bit Access       */
    unsigned char  P0RLIN35UR1:1;                          /* P0RLIN35UR1      */
    unsigned char  P1RLIN35UR1:1;                          /* P1RLIN35UR1      */
    unsigned char  P2RLIN35UR1:1;                          /* P2RLIN35UR1      */
    unsigned char  P3RLIN35UR1:1;                          /* P3RLIN35UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN35UR1:1;                          /* TBRLIN35UR1      */
    unsigned char  MKRLIN35UR1:1;                          /* MKRLIN35UR1      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN35UR1:1;                          /* RFRLIN35UR1      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN35UR1:1;                          /* CTRLIN35UR1      */
};
struct __tag221
{                                                          /* Bit Access       */
    unsigned char  P0RLIN35UR2:1;                          /* P0RLIN35UR2      */
    unsigned char  P1RLIN35UR2:1;                          /* P1RLIN35UR2      */
    unsigned char  P2RLIN35UR2:1;                          /* P2RLIN35UR2      */
    unsigned char  P3RLIN35UR2:1;                          /* P3RLIN35UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRLIN35UR2:1;                          /* TBRLIN35UR2      */
    unsigned char  MKRLIN35UR2:1;                          /* MKRLIN35UR2      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRLIN35UR2:1;                          /* RFRLIN35UR2      */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRLIN35UR2:1;                          /* CTRLIN35UR2      */
};
struct __tag222
{                                                          /* Bit Access       */
    unsigned char  P0PWGA48:1;                             /* P0PWGA48         */
    unsigned char  P1PWGA48:1;                             /* P1PWGA48         */
    unsigned char  P2PWGA48:1;                             /* P2PWGA48         */
    unsigned char  P3PWGA48:1;                             /* P3PWGA48         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA48:1;                             /* TBPWGA48         */
    unsigned char  MKPWGA48:1;                             /* MKPWGA48         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA48:1;                             /* RFPWGA48         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA48:1;                             /* CTPWGA48         */
};
struct __tag223
{                                                          /* Bit Access       */
    unsigned char  P0PWGA49:1;                             /* P0PWGA49         */
    unsigned char  P1PWGA49:1;                             /* P1PWGA49         */
    unsigned char  P2PWGA49:1;                             /* P2PWGA49         */
    unsigned char  P3PWGA49:1;                             /* P3PWGA49         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA49:1;                             /* TBPWGA49         */
    unsigned char  MKPWGA49:1;                             /* MKPWGA49         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA49:1;                             /* RFPWGA49         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA49:1;                             /* CTPWGA49         */
};
struct __tag224
{                                                          /* Bit Access       */
    unsigned char  P0PWGA50:1;                             /* P0PWGA50         */
    unsigned char  P1PWGA50:1;                             /* P1PWGA50         */
    unsigned char  P2PWGA50:1;                             /* P2PWGA50         */
    unsigned char  P3PWGA50:1;                             /* P3PWGA50         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA50:1;                             /* TBPWGA50         */
    unsigned char  MKPWGA50:1;                             /* MKPWGA50         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA50:1;                             /* RFPWGA50         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA50:1;                             /* CTPWGA50         */
};
struct __tag225
{                                                          /* Bit Access       */
    unsigned char  P0PWGA51:1;                             /* P0PWGA51         */
    unsigned char  P1PWGA51:1;                             /* P1PWGA51         */
    unsigned char  P2PWGA51:1;                             /* P2PWGA51         */
    unsigned char  P3PWGA51:1;                             /* P3PWGA51         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA51:1;                             /* TBPWGA51         */
    unsigned char  MKPWGA51:1;                             /* MKPWGA51         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA51:1;                             /* RFPWGA51         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA51:1;                             /* CTPWGA51         */
};
struct __tag226
{                                                          /* Bit Access       */
    unsigned char  P0PWGA52:1;                             /* P0PWGA52         */
    unsigned char  P1PWGA52:1;                             /* P1PWGA52         */
    unsigned char  P2PWGA52:1;                             /* P2PWGA52         */
    unsigned char  P3PWGA52:1;                             /* P3PWGA52         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA52:1;                             /* TBPWGA52         */
    unsigned char  MKPWGA52:1;                             /* MKPWGA52         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA52:1;                             /* RFPWGA52         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA52:1;                             /* CTPWGA52         */
};
struct __tag227
{                                                          /* Bit Access       */
    unsigned char  P0PWGA53:1;                             /* P0PWGA53         */
    unsigned char  P1PWGA53:1;                             /* P1PWGA53         */
    unsigned char  P2PWGA53:1;                             /* P2PWGA53         */
    unsigned char  P3PWGA53:1;                             /* P3PWGA53         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA53:1;                             /* TBPWGA53         */
    unsigned char  MKPWGA53:1;                             /* MKPWGA53         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA53:1;                             /* RFPWGA53         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA53:1;                             /* CTPWGA53         */
};
struct __tag228
{                                                          /* Bit Access       */
    unsigned char  P0PWGA54:1;                             /* P0PWGA54         */
    unsigned char  P1PWGA54:1;                             /* P1PWGA54         */
    unsigned char  P2PWGA54:1;                             /* P2PWGA54         */
    unsigned char  P3PWGA54:1;                             /* P3PWGA54         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA54:1;                             /* TBPWGA54         */
    unsigned char  MKPWGA54:1;                             /* MKPWGA54         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA54:1;                             /* RFPWGA54         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA54:1;                             /* CTPWGA54         */
};
struct __tag229
{                                                          /* Bit Access       */
    unsigned char  P0PWGA55:1;                             /* P0PWGA55         */
    unsigned char  P1PWGA55:1;                             /* P1PWGA55         */
    unsigned char  P2PWGA55:1;                             /* P2PWGA55         */
    unsigned char  P3PWGA55:1;                             /* P3PWGA55         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA55:1;                             /* TBPWGA55         */
    unsigned char  MKPWGA55:1;                             /* MKPWGA55         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA55:1;                             /* RFPWGA55         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA55:1;                             /* CTPWGA55         */
};
struct __tag230
{                                                          /* Bit Access       */
    unsigned char  P0PWGA56:1;                             /* P0PWGA56         */
    unsigned char  P1PWGA56:1;                             /* P1PWGA56         */
    unsigned char  P2PWGA56:1;                             /* P2PWGA56         */
    unsigned char  P3PWGA56:1;                             /* P3PWGA56         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA56:1;                             /* TBPWGA56         */
    unsigned char  MKPWGA56:1;                             /* MKPWGA56         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA56:1;                             /* RFPWGA56         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA56:1;                             /* CTPWGA56         */
};
struct __tag231
{                                                          /* Bit Access       */
    unsigned char  P0PWGA57:1;                             /* P0PWGA57         */
    unsigned char  P1PWGA57:1;                             /* P1PWGA57         */
    unsigned char  P2PWGA57:1;                             /* P2PWGA57         */
    unsigned char  P3PWGA57:1;                             /* P3PWGA57         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA57:1;                             /* TBPWGA57         */
    unsigned char  MKPWGA57:1;                             /* MKPWGA57         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA57:1;                             /* RFPWGA57         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA57:1;                             /* CTPWGA57         */
};
struct __tag232
{                                                          /* Bit Access       */
    unsigned char  P0PWGA58:1;                             /* P0PWGA58         */
    unsigned char  P1PWGA58:1;                             /* P1PWGA58         */
    unsigned char  P2PWGA58:1;                             /* P2PWGA58         */
    unsigned char  P3PWGA58:1;                             /* P3PWGA58         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA58:1;                             /* TBPWGA58         */
    unsigned char  MKPWGA58:1;                             /* MKPWGA58         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA58:1;                             /* RFPWGA58         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA58:1;                             /* CTPWGA58         */
};
struct __tag233
{                                                          /* Bit Access       */
    unsigned char  P0PWGA59:1;                             /* P0PWGA59         */
    unsigned char  P1PWGA59:1;                             /* P1PWGA59         */
    unsigned char  P2PWGA59:1;                             /* P2PWGA59         */
    unsigned char  P3PWGA59:1;                             /* P3PWGA59         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA59:1;                             /* TBPWGA59         */
    unsigned char  MKPWGA59:1;                             /* MKPWGA59         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA59:1;                             /* RFPWGA59         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA59:1;                             /* CTPWGA59         */
};
struct __tag234
{                                                          /* Bit Access       */
    unsigned char  P0PWGA60:1;                             /* P0PWGA60         */
    unsigned char  P1PWGA60:1;                             /* P1PWGA60         */
    unsigned char  P2PWGA60:1;                             /* P2PWGA60         */
    unsigned char  P3PWGA60:1;                             /* P3PWGA60         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA60:1;                             /* TBPWGA60         */
    unsigned char  MKPWGA60:1;                             /* MKPWGA60         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA60:1;                             /* RFPWGA60         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA60:1;                             /* CTPWGA60         */
};
struct __tag235
{                                                          /* Bit Access       */
    unsigned char  P0PWGA61:1;                             /* P0PWGA61         */
    unsigned char  P1PWGA61:1;                             /* P1PWGA61         */
    unsigned char  P2PWGA61:1;                             /* P2PWGA61         */
    unsigned char  P3PWGA61:1;                             /* P3PWGA61         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA61:1;                             /* TBPWGA61         */
    unsigned char  MKPWGA61:1;                             /* MKPWGA61         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA61:1;                             /* RFPWGA61         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA61:1;                             /* CTPWGA61         */
};
struct __tag236
{                                                          /* Bit Access       */
    unsigned char  P0PWGA62:1;                             /* P0PWGA62         */
    unsigned char  P1PWGA62:1;                             /* P1PWGA62         */
    unsigned char  P2PWGA62:1;                             /* P2PWGA62         */
    unsigned char  P3PWGA62:1;                             /* P3PWGA62         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA62:1;                             /* TBPWGA62         */
    unsigned char  MKPWGA62:1;                             /* MKPWGA62         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA62:1;                             /* RFPWGA62         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA62:1;                             /* CTPWGA62         */
};
struct __tag237
{                                                          /* Bit Access       */
    unsigned char  P0PWGA63:1;                             /* P0PWGA63         */
    unsigned char  P1PWGA63:1;                             /* P1PWGA63         */
    unsigned char  P2PWGA63:1;                             /* P2PWGA63         */
    unsigned char  P3PWGA63:1;                             /* P3PWGA63         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBPWGA63:1;                             /* TBPWGA63         */
    unsigned char  MKPWGA63:1;                             /* MKPWGA63         */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFPWGA63:1;                             /* RFPWGA63         */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTPWGA63:1;                             /* CTPWGA63         */
};
struct __tag238
{                                                          /* Bit Access       */
    unsigned char  P0RCAN4ERR:1;                           /* P0RCAN4ERR       */
    unsigned char  P1RCAN4ERR:1;                           /* P1RCAN4ERR       */
    unsigned char  P2RCAN4ERR:1;                           /* P2RCAN4ERR       */
    unsigned char  P3RCAN4ERR:1;                           /* P3RCAN4ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN4ERR:1;                           /* TBRCAN4ERR       */
    unsigned char  MKRCAN4ERR:1;                           /* MKRCAN4ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN4ERR:1;                           /* RFRCAN4ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN4ERR:1;                           /* CTRCAN4ERR       */
};
struct __tag239
{                                                          /* Bit Access       */
    unsigned char  P0RCAN4REC:1;                           /* P0RCAN4REC       */
    unsigned char  P1RCAN4REC:1;                           /* P1RCAN4REC       */
    unsigned char  P2RCAN4REC:1;                           /* P2RCAN4REC       */
    unsigned char  P3RCAN4REC:1;                           /* P3RCAN4REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN4REC:1;                           /* TBRCAN4REC       */
    unsigned char  MKRCAN4REC:1;                           /* MKRCAN4REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN4REC:1;                           /* RFRCAN4REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN4REC:1;                           /* CTRCAN4REC       */
};
struct __tag240
{                                                          /* Bit Access       */
    unsigned char  P0RCAN4TRX:1;                           /* P0RCAN4TRX       */
    unsigned char  P1RCAN4TRX:1;                           /* P1RCAN4TRX       */
    unsigned char  P2RCAN4TRX:1;                           /* P2RCAN4TRX       */
    unsigned char  P3RCAN4TRX:1;                           /* P3RCAN4TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN4TRX:1;                           /* TBRCAN4TRX       */
    unsigned char  MKRCAN4TRX:1;                           /* MKRCAN4TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN4TRX:1;                           /* RFRCAN4TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN4TRX:1;                           /* CTRCAN4TRX       */
};
struct __tag241
{                                                          /* Bit Access       */
    unsigned char  P0RCAN5ERR:1;                           /* P0RCAN5ERR       */
    unsigned char  P1RCAN5ERR:1;                           /* P1RCAN5ERR       */
    unsigned char  P2RCAN5ERR:1;                           /* P2RCAN5ERR       */
    unsigned char  P3RCAN5ERR:1;                           /* P3RCAN5ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN5ERR:1;                           /* TBRCAN5ERR       */
    unsigned char  MKRCAN5ERR:1;                           /* MKRCAN5ERR       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN5ERR:1;                           /* RFRCAN5ERR       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN5ERR:1;                           /* CTRCAN5ERR       */
};
struct __tag242
{                                                          /* Bit Access       */
    unsigned char  P0RCAN5REC:1;                           /* P0RCAN5REC       */
    unsigned char  P1RCAN5REC:1;                           /* P1RCAN5REC       */
    unsigned char  P2RCAN5REC:1;                           /* P2RCAN5REC       */
    unsigned char  P3RCAN5REC:1;                           /* P3RCAN5REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN5REC:1;                           /* TBRCAN5REC       */
    unsigned char  MKRCAN5REC:1;                           /* MKRCAN5REC       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN5REC:1;                           /* RFRCAN5REC       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN5REC:1;                           /* CTRCAN5REC       */
};
struct __tag243
{                                                          /* Bit Access       */
    unsigned char  P0RCAN5TRX:1;                           /* P0RCAN5TRX       */
    unsigned char  P1RCAN5TRX:1;                           /* P1RCAN5TRX       */
    unsigned char  P2RCAN5TRX:1;                           /* P2RCAN5TRX       */
    unsigned char  P3RCAN5TRX:1;                           /* P3RCAN5TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBRCAN5TRX:1;                           /* TBRCAN5TRX       */
    unsigned char  MKRCAN5TRX:1;                           /* MKRCAN5TRX       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFRCAN5TRX:1;                           /* RFRCAN5TRX       */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTRCAN5TRX:1;                           /* CTRCAN5TRX       */
};
struct __tag244
{                                                          /* Bit Access       */
    unsigned char  P0DPE:1;                                /* P0DPE            */
    unsigned char  P1DPE:1;                                /* P1DPE            */
    unsigned char  P2DPE:1;                                /* P2DPE            */
    unsigned char  P3DPE:1;                                /* P3DPE            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBDPE:1;                                /* TBDPE            */
    unsigned char  MKDPE:1;                                /* MKDPE            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFDPE:1;                                /* RFDPE            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTDPE:1;                                /* CTDPE            */
};
struct __tag245
{                                                          /* Bit Access       */
    unsigned char  P0APE:1;                                /* P0APE            */
    unsigned char  P1APE:1;                                /* P1APE            */
    unsigned char  P2APE:1;                                /* P2APE            */
    unsigned char  P3APE:1;                                /* P3APE            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  TBAPE:1;                                /* TBAPE            */
    unsigned char  MKAPE:1;                                /* MKAPE            */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  RFAPE:1;                                /* RFAPE            */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  CTAPE:1;                                /* CTAPE            */
};
struct __tag246
{                                                          /* Bit Access       */
    unsigned char  IMR1EIMK32:1;                           /* IMR1EIMK32       */
    unsigned char  IMR1EIMK33:1;                           /* IMR1EIMK33       */
    unsigned char  IMR1EIMK34:1;                           /* IMR1EIMK34       */
    unsigned char  IMR1EIMK35:1;                           /* IMR1EIMK35       */
    unsigned char  IMR1EIMK36:1;                           /* IMR1EIMK36       */
    unsigned char  IMR1EIMK37:1;                           /* IMR1EIMK37       */
    unsigned char  IMR1EIMK38:1;                           /* IMR1EIMK38       */
    unsigned char  IMR1EIMK39:1;                           /* IMR1EIMK39       */
    unsigned char  IMR1EIMK40:1;                           /* IMR1EIMK40       */
    unsigned char  IMR1EIMK41:1;                           /* IMR1EIMK41       */
    unsigned char  :1;                                     /* Reserved Bits    */
    unsigned char  IMR1EIMK43:1;                           /* IMR1EIMK43       */
    unsigned char  IMR1EIMK44:1;                           /* IMR1EIMK44       */
    unsigned char  IMR1EIMK45:1;                           /* IMR1EIMK45       */
    unsigned char  IMR1EIMK46:1;                           /* IMR1EIMK46       */
    unsigned char  IMR1EIMK47:1;                           /* IMR1EIMK47       */
    unsigned char  IMR1EIMK48:1;                           /* IMR1EIMK48       */
    unsigned char  IMR1EIMK49:1;                           /* IMR1EIMK49       */
    unsigned char  IMR1EIMK50:1;                           /* IMR1EIMK50       */
    unsigned char  IMR1EIMK51:1;                           /* IMR1EIMK51       */
    unsigned char  IMR1EIMK52:1;                           /* IMR1EIMK52       */
    unsigned char  IMR1EIMK53:1;                           /* IMR1EIMK53       */
    unsigned char  IMR1EIMK54:1;                           /* IMR1EIMK54       */
    unsigned char  IMR1EIMK55:1;                           /* IMR1EIMK55       */
    unsigned char  IMR1EIMK56:1;                           /* IMR1EIMK56       */
    unsigned char  IMR1EIMK57:1;                           /* IMR1EIMK57       */
    unsigned char  IMR1EIMK58:1;                           /* IMR1EIMK58       */
    unsigned char  IMR1EIMK59:1;                           /* IMR1EIMK59       */
    unsigned char  IMR1EIMK60:1;                           /* IMR1EIMK60       */
    unsigned char  IMR1EIMK61:1;                           /* IMR1EIMK61       */
    unsigned char  IMR1EIMK62:1;                           /* IMR1EIMK62       */
    unsigned char  IMR1EIMK63:1;                           /* IMR1EIMK63       */
};
struct __tag247
{                                                          /* Bit Access       */
    unsigned char  IMR2EIMK64:1;                           /* IMR2EIMK64       */
    unsigned char  IMR2EIMK65:1;                           /* IMR2EIMK65       */
    unsigned char  IMR2EIMK66:1;                           /* IMR2EIMK66       */
    unsigned char  IMR2EIMK67:1;                           /* IMR2EIMK67       */
    unsigned char  IMR2EIMK68:1;                           /* IMR2EIMK68       */
    unsigned char  IMR2EIMK69:1;                           /* IMR2EIMK69       */
    unsigned char  IMR2EIMK70:1;                           /* IMR2EIMK70       */
    unsigned char  IMR2EIMK71:1;                           /* IMR2EIMK71       */
    unsigned char  IMR2EIMK72:1;                           /* IMR2EIMK72       */
    unsigned char  IMR2EIMK73:1;                           /* IMR2EIMK73       */
    unsigned char  IMR2EIMK74:1;                           /* IMR2EIMK74       */
    unsigned char  IMR2EIMK75:1;                           /* IMR2EIMK75       */
    unsigned char  IMR2EIMK76:1;                           /* IMR2EIMK76       */
    unsigned char  IMR2EIMK77:1;                           /* IMR2EIMK77       */
    unsigned char  IMR2EIMK78:1;                           /* IMR2EIMK78       */
    unsigned char  IMR2EIMK79:1;                           /* IMR2EIMK79       */
    unsigned char  IMR2EIMK80:1;                           /* IMR2EIMK80       */
    unsigned char  IMR2EIMK81:1;                           /* IMR2EIMK81       */
    unsigned char  IMR2EIMK82:1;                           /* IMR2EIMK82       */
    unsigned char  IMR2EIMK83:1;                           /* IMR2EIMK83       */
    unsigned char  IMR2EIMK84:1;                           /* IMR2EIMK84       */
    unsigned char  IMR2EIMK85:1;                           /* IMR2EIMK85       */
    unsigned char  IMR2EIMK86:1;                           /* IMR2EIMK86       */
    unsigned char  IMR2EIMK87:1;                           /* IMR2EIMK87       */
    unsigned char  IMR2EIMK88:1;                           /* IMR2EIMK88       */
    unsigned char  IMR2EIMK89:1;                           /* IMR2EIMK89       */
    unsigned char  IMR2EIMK90:1;                           /* IMR2EIMK90       */
    unsigned char  IMR2EIMK91:1;                           /* IMR2EIMK91       */
    unsigned char  IMR2EIMK92:1;                           /* IMR2EIMK92       */
    unsigned char  IMR2EIMK93:1;                           /* IMR2EIMK93       */
    unsigned char  IMR2EIMK94:1;                           /* IMR2EIMK94       */
    unsigned char  IMR2EIMK95:1;                           /* IMR2EIMK95       */
};
struct __tag248
{                                                          /* Bit Access       */
    unsigned char  IMR3EIMK96:1;                           /* IMR3EIMK96       */
    unsigned char  IMR3EIMK97:1;                           /* IMR3EIMK97       */
    unsigned char  IMR3EIMK98:1;                           /* IMR3EIMK98       */
    unsigned char  IMR3EIMK99:1;                           /* IMR3EIMK99       */
    unsigned char  IMR3EIMK100:1;                          /* IMR3EIMK100      */
    unsigned char  IMR3EIMK101:1;                          /* IMR3EIMK101      */
    unsigned char  IMR3EIMK102:1;                          /* IMR3EIMK102      */
    unsigned char  IMR3EIMK103:1;                          /* IMR3EIMK103      */
    unsigned char  :6;                                     /* Reserved Bits    */
    unsigned char  IMR3EIMK110:1;                          /* IMR3EIMK110      */
    unsigned char  IMR3EIMK111:1;                          /* IMR3EIMK111      */
    unsigned char  IMR3EIMK112:1;                          /* IMR3EIMK112      */
    unsigned char  IMR3EIMK113:1;                          /* IMR3EIMK113      */
    unsigned char  IMR3EIMK114:1;                          /* IMR3EIMK114      */
    unsigned char  IMR3EIMK115:1;                          /* IMR3EIMK115      */
    unsigned char  IMR3EIMK116:1;                          /* IMR3EIMK116      */
    unsigned char  IMR3EIMK117:1;                          /* IMR3EIMK117      */
    unsigned char  IMR3EIMK118:1;                          /* IMR3EIMK118      */
    unsigned char  IMR3EIMK119:1;                          /* IMR3EIMK119      */
    unsigned char  IMR3EIMK120:1;                          /* IMR3EIMK120      */
    unsigned char  IMR3EIMK121:1;                          /* IMR3EIMK121      */
    unsigned char  IMR3EIMK122:1;                          /* IMR3EIMK122      */
    unsigned char  IMR3EIMK123:1;                          /* IMR3EIMK123      */
    unsigned char  IMR3EIMK124:1;                          /* IMR3EIMK124      */
    unsigned char  IMR3EIMK125:1;                          /* IMR3EIMK125      */
    unsigned char  IMR3EIMK126:1;                          /* IMR3EIMK126      */
    unsigned char  IMR3EIMK127:1;                          /* IMR3EIMK127      */
};
struct __tag249
{                                                          /* Bit Access       */
    unsigned char  IMR4EIMK128:1;                          /* IMR4EIMK128      */
    unsigned char  IMR4EIMK129:1;                          /* IMR4EIMK129      */
    unsigned char  IMR4EIMK130:1;                          /* IMR4EIMK130      */
    unsigned char  IMR4EIMK131:1;                          /* IMR4EIMK131      */
    unsigned char  IMR4EIMK132:1;                          /* IMR4EIMK132      */
    unsigned char  IMR4EIMK133:1;                          /* IMR4EIMK133      */
    unsigned char  IMR4EIMK134:1;                          /* IMR4EIMK134      */
    unsigned char  IMR4EIMK135:1;                          /* IMR4EIMK135      */
    unsigned char  :6;                                     /* Reserved Bits    */
    unsigned char  IMR4EIMK142:1;                          /* IMR4EIMK142      */
    unsigned char  IMR4EIMK143:1;                          /* IMR4EIMK143      */
    unsigned char  IMR4EIMK144:1;                          /* IMR4EIMK144      */
    unsigned char  IMR4EIMK145:1;                          /* IMR4EIMK145      */
    unsigned char  IMR4EIMK146:1;                          /* IMR4EIMK146      */
    unsigned char  IMR4EIMK147:1;                          /* IMR4EIMK147      */
    unsigned char  IMR4EIMK148:1;                          /* IMR4EIMK148      */
    unsigned char  IMR4EIMK149:1;                          /* IMR4EIMK149      */
    unsigned char  IMR4EIMK150:1;                          /* IMR4EIMK150      */
    unsigned char  IMR4EIMK151:1;                          /* IMR4EIMK151      */
    unsigned char  IMR4EIMK152:1;                          /* IMR4EIMK152      */
    unsigned char  IMR4EIMK153:1;                          /* IMR4EIMK153      */
    unsigned char  IMR4EIMK154:1;                          /* IMR4EIMK154      */
    unsigned char  IMR4EIMK155:1;                          /* IMR4EIMK155      */
    unsigned char  IMR4EIMK156:1;                          /* IMR4EIMK156      */
    unsigned char  IMR4EIMK157:1;                          /* IMR4EIMK157      */
    unsigned char  IMR4EIMK158:1;                          /* IMR4EIMK158      */
    unsigned char  IMR4EIMK159:1;                          /* IMR4EIMK159      */
};
struct __tag250
{                                                          /* Bit Access       */
    unsigned char  IMR5EIMK160:1;                          /* IMR5EIMK160      */
    unsigned char  IMR5EIMK161:1;                          /* IMR5EIMK161      */
    unsigned char  IMR5EIMK162:1;                          /* IMR5EIMK162      */
    unsigned char  IMR5EIMK163:1;                          /* IMR5EIMK163      */
    unsigned char  IMR5EIMK164:1;                          /* IMR5EIMK164      */
    unsigned char  IMR5EIMK165:1;                          /* IMR5EIMK165      */
    unsigned char  IMR5EIMK166:1;                          /* IMR5EIMK166      */
    unsigned char  IMR5EIMK167:1;                          /* IMR5EIMK167      */
    unsigned char  IMR5EIMK168:1;                          /* IMR5EIMK168      */
    unsigned char  IMR5EIMK169:1;                          /* IMR5EIMK169      */
    unsigned char  IMR5EIMK170:1;                          /* IMR5EIMK170      */
    unsigned char  IMR5EIMK171:1;                          /* IMR5EIMK171      */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  IMR5EIMK184:1;                          /* IMR5EIMK184      */
    unsigned char  IMR5EIMK185:1;                          /* IMR5EIMK185      */
    unsigned char  IMR5EIMK186:1;                          /* IMR5EIMK186      */
    unsigned char  IMR5EIMK187:1;                          /* IMR5EIMK187      */
    unsigned char  IMR5EIMK188:1;                          /* IMR5EIMK188      */
    unsigned char  IMR5EIMK189:1;                          /* IMR5EIMK189      */
    unsigned char  IMR5EIMK190:1;                          /* IMR5EIMK190      */
    unsigned char  IMR5EIMK191:1;                          /* IMR5EIMK191      */
};
struct __tag251
{                                                          /* Bit Access       */
    unsigned char  IMR6EIMK192:1;                          /* IMR6EIMK192      */
    unsigned char  IMR6EIMK193:1;                          /* IMR6EIMK193      */
    unsigned char  IMR6EIMK194:1;                          /* IMR6EIMK194      */
    unsigned char  IMR6EIMK195:1;                          /* IMR6EIMK195      */
    unsigned char  IMR6EIMK196:1;                          /* IMR6EIMK196      */
    unsigned char  IMR6EIMK197:1;                          /* IMR6EIMK197      */
    unsigned char  IMR6EIMK198:1;                          /* IMR6EIMK198      */
    unsigned char  IMR6EIMK199:1;                          /* IMR6EIMK199      */
    unsigned char  IMR6EIMK200:1;                          /* IMR6EIMK200      */
    unsigned char  IMR6EIMK201:1;                          /* IMR6EIMK201      */
    unsigned char  IMR6EIMK202:1;                          /* IMR6EIMK202      */
    unsigned char  IMR6EIMK203:1;                          /* IMR6EIMK203      */
    unsigned char  IMR6EIMK204:1;                          /* IMR6EIMK204      */
    unsigned char  IMR6EIMK205:1;                          /* IMR6EIMK205      */
    unsigned char  IMR6EIMK206:1;                          /* IMR6EIMK206      */
    unsigned char  IMR6EIMK207:1;                          /* IMR6EIMK207      */
    unsigned char  IMR6EIMK208:1;                          /* IMR6EIMK208      */
    unsigned char  IMR6EIMK209:1;                          /* IMR6EIMK209      */
    unsigned char  IMR6EIMK210:1;                          /* IMR6EIMK210      */
    unsigned char  IMR6EIMK211:1;                          /* IMR6EIMK211      */
    unsigned char  IMR6EIMK212:1;                          /* IMR6EIMK212      */
    unsigned char  IMR6EIMK213:1;                          /* IMR6EIMK213      */
    unsigned char  IMR6EIMK214:1;                          /* IMR6EIMK214      */
    unsigned char  IMR6EIMK215:1;                          /* IMR6EIMK215      */
    unsigned char  :1;                                     /* Reserved Bits    */
    unsigned char  IMR6EIMK217:1;                          /* IMR6EIMK217      */
    unsigned char  IMR6EIMK218:1;                          /* IMR6EIMK218      */
    unsigned char  IMR6EIMK219:1;                          /* IMR6EIMK219      */
    unsigned char  IMR6EIMK220:1;                          /* IMR6EIMK220      */
    unsigned char  IMR6EIMK221:1;                          /* IMR6EIMK221      */
    unsigned char  IMR6EIMK222:1;                          /* IMR6EIMK222      */
    unsigned char  IMR6EIMK223:1;                          /* IMR6EIMK223      */
};
struct __tag252
{                                                          /* Bit Access       */
    unsigned char  IMR7EIMK224:1;                          /* IMR7EIMK224      */
    unsigned char  IMR7EIMK225:1;                          /* IMR7EIMK225      */
    unsigned char  IMR7EIMK226:1;                          /* IMR7EIMK226      */
    unsigned char  IMR7EIMK227:1;                          /* IMR7EIMK227      */
    unsigned char  IMR7EIMK228:1;                          /* IMR7EIMK228      */
    unsigned char  IMR7EIMK229:1;                          /* IMR7EIMK229      */
    unsigned char  IMR7EIMK230:1;                          /* IMR7EIMK230      */
    unsigned char  IMR7EIMK231:1;                          /* IMR7EIMK231      */
    unsigned char  IMR7EIMK232:1;                          /* IMR7EIMK232      */
    unsigned char  IMR7EIMK233:1;                          /* IMR7EIMK233      */
    unsigned char  IMR7EIMK234:1;                          /* IMR7EIMK234      */
    unsigned char  IMR7EIMK235:1;                          /* IMR7EIMK235      */
    unsigned char  IMR7EIMK236:1;                          /* IMR7EIMK236      */
    unsigned char  IMR7EIMK237:1;                          /* IMR7EIMK237      */
    unsigned char  IMR7EIMK238:1;                          /* IMR7EIMK238      */
    unsigned char  IMR7EIMK239:1;                          /* IMR7EIMK239      */
    unsigned char  IMR7EIMK240:1;                          /* IMR7EIMK240      */
    unsigned char  IMR7EIMK241:1;                          /* IMR7EIMK241      */
    unsigned char  IMR7EIMK242:1;                          /* IMR7EIMK242      */
    unsigned char  IMR7EIMK243:1;                          /* IMR7EIMK243      */
    unsigned char  IMR7EIMK244:1;                          /* IMR7EIMK244      */
    unsigned char  IMR7EIMK245:1;                          /* IMR7EIMK245      */
    unsigned char  IMR7EIMK246:1;                          /* IMR7EIMK246      */
    unsigned char  IMR7EIMK247:1;                          /* IMR7EIMK247      */
    unsigned char  IMR7EIMK248:1;                          /* IMR7EIMK248      */
    unsigned char  IMR7EIMK249:1;                          /* IMR7EIMK249      */
    unsigned char  IMR7EIMK250:1;                          /* IMR7EIMK250      */
    unsigned char  IMR7EIMK251:1;                          /* IMR7EIMK251      */
    unsigned char  IMR7EIMK252:1;                          /* IMR7EIMK252      */
    unsigned char  IMR7EIMK253:1;                          /* IMR7EIMK253      */
    unsigned char  IMR7EIMK254:1;                          /* IMR7EIMK254      */
    unsigned char  IMR7EIMK255:1;                          /* IMR7EIMK255      */
};
struct __tag253
{                                                          /* Bit Access       */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  IMR8EIMK272:1;                          /* IMR8EIMK272      */
    unsigned char  IMR8EIMK273:1;                          /* IMR8EIMK273      */
    unsigned char  IMR8EIMK274:1;                          /* IMR8EIMK274      */
    unsigned char  :5;                                     /* Reserved Bits    */
    unsigned char  :7;                                     /* Reserved Bits    */
    unsigned char  IMR8EIMK287:1;                          /* IMR8EIMK287      */
};
struct __tag254
{                                                          /* Bit Access       */
    unsigned char  IMR9EIMK288:1;                          /* IMR9EIMK288      */
    unsigned char  IMR9EIMK289:1;                          /* IMR9EIMK289      */
    unsigned char  :6;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
};
struct __tag255
{                                                          /* Bit Access       */
    unsigned char  :4;                                     /* Reserved Bits    */
    unsigned char  IMR11EIMK356:1;                         /* IMR11EIMK356     */
    unsigned char  IMR11EIMK357:1;                         /* IMR11EIMK357     */
    unsigned char  :2;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
    unsigned char  :8;                                     /* Reserved Bits    */
};
union __tag256
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
};
union __tag257
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag0 BIT;                                     /* Bit Access       */
};
union __tag258
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag1 BIT;                                     /* Bit Access       */
};
union __tag259
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag2 BIT;                                     /* Bit Access       */
};
union __tag260
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag3 BIT;                                     /* Bit Access       */
};
union __tag261
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag4 BIT;                                     /* Bit Access       */
};
union __tag262
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag5 BIT;                                     /* Bit Access       */
};
union __tag263
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag6 BIT;                                     /* Bit Access       */
};
union __tag264
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
};
union __tag265
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ERDB;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECRD;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } HORD;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } SYND;
    } REGS8;
};
union __tag266
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCAN0ERDB_PHY1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCAN0ECRD_PHY1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCAN0HORD_PHY1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCAN0SYND_PHY1;
    } REGS8;
};
union __tag267
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCANFD0ERDB_PHY2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCANFD0ECRD_PHY2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCANFD0HORD_PHY2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } ECCRCANFD0SYND_PHY2;
    } REGS8;
};
union __tag268
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } LBRP0;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } LBRP1;
    } REGS8;
};
union __tag269
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
};
union __tag270
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag7 BIT;                                     /* Bit Access       */
};
union __tag271
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag8 BIT;                                     /* Bit Access       */
};
union __tag272
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag9 BIT;                                     /* Bit Access       */
};
union __tag273
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag10 BIT;                                    /* Bit Access       */
};
union __tag274
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag11 BIT;                                    /* Bit Access       */
};
union __tag275
{                                                          /* IOR              */
    unsigned char  UINT8;                                  /* 8-bit Access     */
    struct __tag12 BIT;                                    /* Bit Access       */
};
union __tag276
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR3;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR4;
    } REGS8;
};
union __tag277
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR5;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR6;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPSELR7;
        unsigned char  dummy0[1];                          /* Reserved         */
    } REGS8;
};
union __tag278
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR3;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR4;
    } REGS8;
};
union __tag279
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR5;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR6;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /* 8-bit Access     */
        } DPDSR7;
        unsigned char  dummy1[1];                          /* Reserved         */
    } REGS8;
};
union __tag280
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2ICL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2ICH_1;
    } REGS8;
    struct __tag13 BIT;                                    /* Bit Access       */
};
union __tag281
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3ICL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3ICH_1;
    } REGS8;
    struct __tag14 BIT;                                    /* Bit Access       */
};
union __tag282
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IRL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IRH_1;
    } REGS8;
    struct __tag15 BIT;                                    /* Bit Access       */
};
union __tag283
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IREL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IREH_1;
    } REGS8;
    struct __tag16 BIT;                                    /* Bit Access       */
};
union __tag284
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IJCL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH2IJCH_1;
    } REGS8;
    struct __tag17 BIT;                                    /* Bit Access       */
};
union __tag285
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IRL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IRH_1;
    } REGS8;
    struct __tag18 BIT;                                    /* Bit Access       */
};
union __tag286
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IREL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IREH_1;
    } REGS8;
    struct __tag19 BIT;                                    /* Bit Access       */
};
union __tag287
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IJCL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH3IJCH_1;
    } REGS8;
    struct __tag20 BIT;                                    /* Bit Access       */
};
union __tag288
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1ICL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1ICH_1;
    } REGS8;
    struct __tag21 BIT;                                    /* Bit Access       */
};
union __tag289
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IRL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IRH_1;
    } REGS8;
    struct __tag22 BIT;                                    /* Bit Access       */
};
union __tag290
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag23 BIT;                                    /* Bit Access       */
};
union __tag291
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag24 BIT;                                    /* Bit Access       */
};
union __tag292
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH0IJCL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH0IJCH_1;
    } REGS8;
    struct __tag25 BIT;                                    /* Bit Access       */
};
union __tag293
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag26 BIT;                                    /* Bit Access       */
};
union __tag294
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag27 BIT;                                    /* Bit Access       */
};
union __tag295
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag28 BIT;                                    /* Bit Access       */
};
union __tag296
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag29 BIT;                                    /* Bit Access       */
};
union __tag297
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag30 BIT;                                    /* Bit Access       */
};
union __tag298
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag31 BIT;                                    /* Bit Access       */
};
union __tag299
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IREL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IREH_1;
    } REGS8;
    struct __tag32 BIT;                                    /* Bit Access       */
};
union __tag300
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IJCL_1;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIH1IJCH_1;
    } REGS8;
    struct __tag33 BIT;                                    /* Bit Access       */
};
union __tag301
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag34 BIT;                                    /* Bit Access       */
};
union __tag302
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag35 BIT;                                    /* Bit Access       */
};
union __tag303
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag36 BIT;                                    /* Bit Access       */
};
union __tag304
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag37 BIT;                                    /* Bit Access       */
};
union __tag305
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag38 BIT;                                    /* Bit Access       */
};
union __tag306
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag39 BIT;                                    /* Bit Access       */
};
union __tag307
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICADCA0I2L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICADCA0I2H_2;
    } REGS8;
    struct __tag40 BIT;                                    /* Bit Access       */
};
union __tag308
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag41 BIT;                                    /* Bit Access       */
};
union __tag309
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag42 BIT;                                    /* Bit Access       */
};
union __tag310
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag43 BIT;                                    /* Bit Access       */
};
union __tag311
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag44 BIT;                                    /* Bit Access       */
};
union __tag312
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag45 BIT;                                    /* Bit Access       */
};
union __tag313
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag46 BIT;                                    /* Bit Access       */
};
union __tag314
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag47 BIT;                                    /* Bit Access       */
};
union __tag315
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag48 BIT;                                    /* Bit Access       */
};
union __tag316
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag49 BIT;                                    /* Bit Access       */
};
union __tag317
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag50 BIT;                                    /* Bit Access       */
};
union __tag318
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag51 BIT;                                    /* Bit Access       */
};
union __tag319
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag52 BIT;                                    /* Bit Access       */
};
union __tag320
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag53 BIT;                                    /* Bit Access       */
};
union __tag321
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag54 BIT;                                    /* Bit Access       */
};
union __tag322
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag55 BIT;                                    /* Bit Access       */
};
union __tag323
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag56 BIT;                                    /* Bit Access       */
};
union __tag324
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag57 BIT;                                    /* Bit Access       */
};
union __tag325
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag58 BIT;                                    /* Bit Access       */
};
union __tag326
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag59 BIT;                                    /* Bit Access       */
};
union __tag327
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag60 BIT;                                    /* Bit Access       */
};
union __tag328
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag61 BIT;                                    /* Bit Access       */
};
union __tag329
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag62 BIT;                                    /* Bit Access       */
};
union __tag330
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag63 BIT;                                    /* Bit Access       */
};
union __tag331
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag64 BIT;                                    /* Bit Access       */
};
union __tag332
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag65 BIT;                                    /* Bit Access       */
};
union __tag333
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag66 BIT;                                    /* Bit Access       */
};
union __tag334
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag67 BIT;                                    /* Bit Access       */
};
union __tag335
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag68 BIT;                                    /* Bit Access       */
};
union __tag336
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag69 BIT;                                    /* Bit Access       */
};
union __tag337
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag70 BIT;                                    /* Bit Access       */
};
union __tag338
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag71 BIT;                                    /* Bit Access       */
};
union __tag339
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag72 BIT;                                    /* Bit Access       */
};
union __tag340
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag73 BIT;                                    /* Bit Access       */
};
union __tag341
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag74 BIT;                                    /* Bit Access       */
};
union __tag342
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag75 BIT;                                    /* Bit Access       */
};
union __tag343
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag76 BIT;                                    /* Bit Access       */
};
union __tag344
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag77 BIT;                                    /* Bit Access       */
};
union __tag345
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag78 BIT;                                    /* Bit Access       */
};
union __tag346
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag79 BIT;                                    /* Bit Access       */
};
union __tag347
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag80 BIT;                                    /* Bit Access       */
};
union __tag348
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag81 BIT;                                    /* Bit Access       */
};
union __tag349
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag82 BIT;                                    /* Bit Access       */
};
union __tag350
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag83 BIT;                                    /* Bit Access       */
};
union __tag351
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag84 BIT;                                    /* Bit Access       */
};
union __tag352
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag85 BIT;                                    /* Bit Access       */
};
union __tag353
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag86 BIT;                                    /* Bit Access       */
};
union __tag354
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag87 BIT;                                    /* Bit Access       */
};
union __tag355
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag88 BIT;                                    /* Bit Access       */
};
union __tag356
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag89 BIT;                                    /* Bit Access       */
};
union __tag357
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag90 BIT;                                    /* Bit Access       */
};
union __tag358
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag91 BIT;                                    /* Bit Access       */
};
union __tag359
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA4L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA4H;
    } REGS8;
    struct __tag92 BIT;                                    /* Bit Access       */
};
union __tag360
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA5L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA5H;
    } REGS8;
    struct __tag93 BIT;                                    /* Bit Access       */
};
union __tag361
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA6L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA6H;
    } REGS8;
    struct __tag94 BIT;                                    /* Bit Access       */
};
union __tag362
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA7L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICPWGA7H;
    } REGS8;
    struct __tag95 BIT;                                    /* Bit Access       */
};
union __tag363
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag96 BIT;                                    /* Bit Access       */
};
union __tag364
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag97 BIT;                                    /* Bit Access       */
};
union __tag365
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag98 BIT;                                    /* Bit Access       */
};
union __tag366
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag99 BIT;                                    /* Bit Access       */
};
union __tag367
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag100 BIT;                                   /* Bit Access       */
};
union __tag368
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag101 BIT;                                   /* Bit Access       */
};
union __tag369
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag102 BIT;                                   /* Bit Access       */
};
union __tag370
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag103 BIT;                                   /* Bit Access       */
};
union __tag371
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag104 BIT;                                   /* Bit Access       */
};
union __tag372
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag105 BIT;                                   /* Bit Access       */
};
union __tag373
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag106 BIT;                                   /* Bit Access       */
};
union __tag374
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag107 BIT;                                   /* Bit Access       */
};
union __tag375
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag108 BIT;                                   /* Bit Access       */
};
union __tag376
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag109 BIT;                                   /* Bit Access       */
};
union __tag377
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag110 BIT;                                   /* Bit Access       */
};
union __tag378
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag111 BIT;                                   /* Bit Access       */
};
union __tag379
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag112 BIT;                                   /* Bit Access       */
};
union __tag380
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag113 BIT;                                   /* Bit Access       */
};
union __tag381
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag114 BIT;                                   /* Bit Access       */
};
union __tag382
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag115 BIT;                                   /* Bit Access       */
};
union __tag383
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag116 BIT;                                   /* Bit Access       */
};
union __tag384
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAPA0IPEK0L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAPA0IPEK0H_2;
    } REGS8;
    struct __tag117 BIT;                                   /* Bit Access       */
};
union __tag385
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAPA0IVLY0L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAPA0IVLY0H_2;
    } REGS8;
    struct __tag118 BIT;                                   /* Bit Access       */
};
union __tag386
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIG0ICL_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIG0ICH_2;
    } REGS8;
    struct __tag119 BIT;                                   /* Bit Access       */
};
union __tag387
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIG0IRL_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICCSIG0IRH_2;
    } REGS8;
    struct __tag120 BIT;                                   /* Bit Access       */
};
union __tag388
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag121 BIT;                                   /* Bit Access       */
};
union __tag389
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag122 BIT;                                   /* Bit Access       */
};
union __tag390
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag123 BIT;                                   /* Bit Access       */
};
union __tag391
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag124 BIT;                                   /* Bit Access       */
};
union __tag392
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag125 BIT;                                   /* Bit Access       */
};
union __tag393
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag126 BIT;                                   /* Bit Access       */
};
union __tag394
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag127 BIT;                                   /* Bit Access       */
};
union __tag395
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag128 BIT;                                   /* Bit Access       */
};
union __tag396
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag129 BIT;                                   /* Bit Access       */
};
union __tag397
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag130 BIT;                                   /* Bit Access       */
};
union __tag398
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag131 BIT;                                   /* Bit Access       */
};
union __tag399
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag132 BIT;                                   /* Bit Access       */
};
union __tag400
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I0L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I0H_2;
    } REGS8;
    struct __tag133 BIT;                                   /* Bit Access       */
};
union __tag401
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I4L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I4H_2;
    } REGS8;
    struct __tag134 BIT;                                   /* Bit Access       */
};
union __tag402
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I6L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I6H_2;
    } REGS8;
    struct __tag135 BIT;                                   /* Bit Access       */
};
union __tag403
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I8L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I8H_2;
    } REGS8;
    struct __tag136 BIT;                                   /* Bit Access       */
};
union __tag404
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag137 BIT;                                   /* Bit Access       */
};
union __tag405
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag138 BIT;                                   /* Bit Access       */
};
union __tag406
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag139 BIT;                                   /* Bit Access       */
};
union __tag407
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I3L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I3H;
    } REGS8;
    struct __tag140 BIT;                                   /* Bit Access       */
};
union __tag408
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag141 BIT;                                   /* Bit Access       */
};
union __tag409
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I5L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I5H;
    } REGS8;
    struct __tag142 BIT;                                   /* Bit Access       */
};
union __tag410
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag143 BIT;                                   /* Bit Access       */
};
union __tag411
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I7L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I7H;
    } REGS8;
    struct __tag144 BIT;                                   /* Bit Access       */
};
union __tag412
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag145 BIT;                                   /* Bit Access       */
};
union __tag413
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I9L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I9H;
    } REGS8;
    struct __tag146 BIT;                                   /* Bit Access       */
};
union __tag414
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag147 BIT;                                   /* Bit Access       */
};
union __tag415
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I11L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I11H;
    } REGS8;
    struct __tag148 BIT;                                   /* Bit Access       */
};
union __tag416
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag149 BIT;                                   /* Bit Access       */
};
union __tag417
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I13L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I13H;
    } REGS8;
    struct __tag150 BIT;                                   /* Bit Access       */
};
union __tag418
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag151 BIT;                                   /* Bit Access       */
};
union __tag419
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I15L;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUB0I15H;
    } REGS8;
    struct __tag152 BIT;                                   /* Bit Access       */
};
union __tag420
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I2L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I2H_2;
    } REGS8;
    struct __tag153 BIT;                                   /* Bit Access       */
};
union __tag421
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I10L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I10H_2;
    } REGS8;
    struct __tag154 BIT;                                   /* Bit Access       */
};
union __tag422
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I12L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I12H_2;
    } REGS8;
    struct __tag155 BIT;                                   /* Bit Access       */
};
union __tag423
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I14L_2;
        union
        {                                                  /* IOR              */
            unsigned char  UINT8;                          /*  8-bit Access    */
        } ICTAUD0I14H_2;
    } REGS8;
    struct __tag156 BIT;                                   /* Bit Access       */
};
union __tag424
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag157 BIT;                                   /* Bit Access       */
};
union __tag425
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag158 BIT;                                   /* Bit Access       */
};
union __tag426
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag159 BIT;                                   /* Bit Access       */
};
union __tag427
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag160 BIT;                                   /* Bit Access       */
};
union __tag428
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag161 BIT;                                   /* Bit Access       */
};
union __tag429
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag162 BIT;                                   /* Bit Access       */
};
union __tag430
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag163 BIT;                                   /* Bit Access       */
};
union __tag431
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag164 BIT;                                   /* Bit Access       */
};
union __tag432
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag165 BIT;                                   /* Bit Access       */
};
union __tag433
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag166 BIT;                                   /* Bit Access       */
};
union __tag434
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag167 BIT;                                   /* Bit Access       */
};
union __tag435
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag168 BIT;                                   /* Bit Access       */
};
union __tag436
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag169 BIT;                                   /* Bit Access       */
};
union __tag437
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag170 BIT;                                   /* Bit Access       */
};
union __tag438
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag171 BIT;                                   /* Bit Access       */
};
union __tag439
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag172 BIT;                                   /* Bit Access       */
};
union __tag440
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag173 BIT;                                   /* Bit Access       */
};
union __tag441
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag174 BIT;                                   /* Bit Access       */
};
union __tag442
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag175 BIT;                                   /* Bit Access       */
};
union __tag443
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag176 BIT;                                   /* Bit Access       */
};
union __tag444
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag177 BIT;                                   /* Bit Access       */
};
union __tag445
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag178 BIT;                                   /* Bit Access       */
};
union __tag446
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag179 BIT;                                   /* Bit Access       */
};
union __tag447
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag180 BIT;                                   /* Bit Access       */
};
union __tag448
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag181 BIT;                                   /* Bit Access       */
};
union __tag449
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag182 BIT;                                   /* Bit Access       */
};
union __tag450
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag183 BIT;                                   /* Bit Access       */
};
union __tag451
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag184 BIT;                                   /* Bit Access       */
};
union __tag452
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag185 BIT;                                   /* Bit Access       */
};
union __tag453
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag186 BIT;                                   /* Bit Access       */
};
union __tag454
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag187 BIT;                                   /* Bit Access       */
};
union __tag455
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag188 BIT;                                   /* Bit Access       */
};
union __tag456
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag189 BIT;                                   /* Bit Access       */
};
union __tag457
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag190 BIT;                                   /* Bit Access       */
};
union __tag458
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag191 BIT;                                   /* Bit Access       */
};
union __tag459
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag192 BIT;                                   /* Bit Access       */
};
union __tag460
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag193 BIT;                                   /* Bit Access       */
};
union __tag461
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag194 BIT;                                   /* Bit Access       */
};
union __tag462
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag195 BIT;                                   /* Bit Access       */
};
union __tag463
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag196 BIT;                                   /* Bit Access       */
};
union __tag464
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag197 BIT;                                   /* Bit Access       */
};
union __tag465
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag198 BIT;                                   /* Bit Access       */
};
union __tag466
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag199 BIT;                                   /* Bit Access       */
};
union __tag467
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag200 BIT;                                   /* Bit Access       */
};
union __tag468
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag201 BIT;                                   /* Bit Access       */
};
union __tag469
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag202 BIT;                                   /* Bit Access       */
};
union __tag470
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag203 BIT;                                   /* Bit Access       */
};
union __tag471
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag204 BIT;                                   /* Bit Access       */
};
union __tag472
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag205 BIT;                                   /* Bit Access       */
};
union __tag473
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag206 BIT;                                   /* Bit Access       */
};
union __tag474
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag207 BIT;                                   /* Bit Access       */
};
union __tag475
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag208 BIT;                                   /* Bit Access       */
};
union __tag476
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag209 BIT;                                   /* Bit Access       */
};
union __tag477
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag210 BIT;                                   /* Bit Access       */
};
union __tag478
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag211 BIT;                                   /* Bit Access       */
};
union __tag479
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag212 BIT;                                   /* Bit Access       */
};
union __tag480
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag213 BIT;                                   /* Bit Access       */
};
union __tag481
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag214 BIT;                                   /* Bit Access       */
};
union __tag482
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag215 BIT;                                   /* Bit Access       */
};
union __tag483
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag216 BIT;                                   /* Bit Access       */
};
union __tag484
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag217 BIT;                                   /* Bit Access       */
};
union __tag485
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag218 BIT;                                   /* Bit Access       */
};
union __tag486
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag219 BIT;                                   /* Bit Access       */
};
union __tag487
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag220 BIT;                                   /* Bit Access       */
};
union __tag488
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag221 BIT;                                   /* Bit Access       */
};
union __tag489
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag222 BIT;                                   /* Bit Access       */
};
union __tag490
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag223 BIT;                                   /* Bit Access       */
};
union __tag491
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag224 BIT;                                   /* Bit Access       */
};
union __tag492
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag225 BIT;                                   /* Bit Access       */
};
union __tag493
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag226 BIT;                                   /* Bit Access       */
};
union __tag494
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag227 BIT;                                   /* Bit Access       */
};
union __tag495
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag228 BIT;                                   /* Bit Access       */
};
union __tag496
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag229 BIT;                                   /* Bit Access       */
};
union __tag497
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag230 BIT;                                   /* Bit Access       */
};
union __tag498
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag231 BIT;                                   /* Bit Access       */
};
union __tag499
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag232 BIT;                                   /* Bit Access       */
};
union __tag500
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag233 BIT;                                   /* Bit Access       */
};
union __tag501
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag234 BIT;                                   /* Bit Access       */
};
union __tag502
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag235 BIT;                                   /* Bit Access       */
};
union __tag503
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag236 BIT;                                   /* Bit Access       */
};
union __tag504
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag237 BIT;                                   /* Bit Access       */
};
union __tag505
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag238 BIT;                                   /* Bit Access       */
};
union __tag506
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag239 BIT;                                   /* Bit Access       */
};
union __tag507
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag240 BIT;                                   /* Bit Access       */
};
union __tag508
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag241 BIT;                                   /* Bit Access       */
};
union __tag509
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag242 BIT;                                   /* Bit Access       */
};
union __tag510
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag243 BIT;                                   /* Bit Access       */
};
union __tag511
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag244 BIT;                                   /* Bit Access       */
};
union __tag512
{                                                          /* IOR              */
    unsigned short UINT16;                                 /* 16-bit Access    */
    unsigned char  UINT8[2];                               /* 8-bit Access     */
    struct __tag245 BIT;                                   /* Bit Access       */
};
union __tag513
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag246 BIT;                                   /* Bit Access       */
};
union __tag514
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag247 BIT;                                   /* Bit Access       */
};
union __tag515
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag248 BIT;                                   /* Bit Access       */
};
union __tag516
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag249 BIT;                                   /* Bit Access       */
};
union __tag517
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag250 BIT;                                   /* Bit Access       */
};
union __tag518
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag251 BIT;                                   /* Bit Access       */
};
union __tag519
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag252 BIT;                                   /* Bit Access       */
};
union __tag520
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag253 BIT;                                   /* Bit Access       */
};
union __tag521
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag254 BIT;                                   /* Bit Access       */
};
union __tag522
{                                                          /* IOR              */
    unsigned long  UINT32;                                 /* 32-bit Access    */
    unsigned short UINT16[2];                              /* 16-bit Access    */
    unsigned char  UINT8[4];                               /* 8-bit Access     */
    struct __tag255 BIT;                                   /* Bit Access       */
};

struct __tag523
{                                                          /* Module           */
    unsigned long  CNT;                                    /* CNT              */
    unsigned long  PCMD;                                   /* PCMD             */
    unsigned long  PS;                                     /* PS               */
};
struct __tag524
{                                                          /* Module           */
    unsigned long  ID0;                                    /* ID0              */
    unsigned long  ID1;                                    /* ID1              */
    unsigned long  ID2;                                    /* ID2              */
    unsigned long  ID3;                                    /* ID3              */
    union __tag256 IDST;                                   /* IDST             */
};
struct __tag525
{                                                          /* Module           */
    unsigned char  FPMON;                                  /* FPMON            */
    unsigned char  dummy0[15];                             /* Reserved         */
    unsigned char  FASTAT;                                 /* FASTAT           */
    unsigned char  dummy1[3];                              /* Reserved         */
    unsigned char  FAEINT;                                 /* FAEINT           */
    unsigned char  dummy2[11];                             /* Reserved         */
    unsigned short FAREASELC;                              /* FAREASELC        */
    unsigned char  dummy3[14];                             /* Reserved         */
    unsigned long  FSADDR;                                 /* FSADDR           */
    unsigned long  FEADDR;                                 /* FEADDR           */
    unsigned char  dummy4[72];                             /* Reserved         */
    union __tag256 FSTATR;                                 /* FSTATR           */
    unsigned short FENTRYR;                                /* FENTRYR          */
    unsigned char  dummy5[2];                              /* Reserved         */
    unsigned short FPROTR;                                 /* FPROTR           */
    unsigned char  dummy6[2];                              /* Reserved         */
    unsigned short FSUINITR;                               /* FSUINITR         */
    unsigned char  dummy7[2];                              /* Reserved         */
    unsigned char  FLKSTAT;                                /* FLKSTAT          */
    unsigned char  dummy8[7];                              /* Reserved         */
    unsigned char  FRTSTAT;                                /* FRTSTAT          */
    unsigned char  dummy9[7];                              /* Reserved         */
    unsigned short FCMDR;                                  /* FCMDR            */
    unsigned char  dummy10[30];                            /* Reserved         */
    unsigned short FPESTAT;                                /* FPESTAT          */
    unsigned char  dummy11[14];                            /* Reserved         */
    unsigned char  FBCCNT;                                 /* FBCCNT           */
    unsigned char  dummy12[3];                             /* Reserved         */
    unsigned char  FBCSTAT;                                /* FBCSTAT          */
    unsigned char  dummy13[3];                             /* Reserved         */
    unsigned long  FPSADDR;                                /* FPSADDR          */
    unsigned char  dummy14[4];                             /* Reserved         */
    unsigned short FCPSR;                                  /* FCPSR            */
    unsigned char  dummy15[2];                             /* Reserved         */
    unsigned short FPCKAR;                                 /* FPCKAR           */
    unsigned char  dummy16[26];                            /* Reserved         */
    unsigned short FECCEMON;                               /* FECCEMON         */
    unsigned char  dummy17[2];                             /* Reserved         */
    unsigned short FECCTMD;                                /* FECCTMD          */
    unsigned char  dummy18[2];                             /* Reserved         */
    unsigned short FDMYECC;                                /* FDMYECC          */
    unsigned char  dummy19[2395902];                       /* Reserved         */
    unsigned char  BFASELR;                                /* BFASELR          */
};
struct __tag526
{                                                          /* Module           */
    unsigned long  WDTNMIF;                                /* WDTNMIF          */
    unsigned char  dummy20[4];                             /* Reserved         */
    unsigned long  WDTNMIFC;                               /* WDTNMIFC         */
};
struct __tag527
{                                                          /* Module           */
    unsigned long  FEINTF;                                 /* FEINTF           */
    unsigned long  FEINTFMSK;                              /* FEINTFMSK        */
    unsigned long  FEINTFC;                                /* FEINTFC          */
};
struct __tag528
{                                                          /* Module           */
    unsigned short SELB_INTC1;                             /* SELB_INTC1       */
    unsigned char  dummy21[2];                             /* Reserved         */
    unsigned short SELB_INTC2;                             /* SELB_INTC2       */
};
struct __tag529
{                                                          /* Module           */
    unsigned short P0;                                     /* P0               */
    unsigned char  dummy22[2];                             /* Reserved         */
    unsigned short P1;                                     /* P1               */
    unsigned char  dummy23[26];                            /* Reserved         */
    unsigned short P8;                                     /* P8               */
    unsigned char  dummy24[2];                             /* Reserved         */
    unsigned short P9;                                     /* P9               */
    unsigned char  dummy25[2];                             /* Reserved         */
    unsigned short P10;                                    /* P10              */
    unsigned char  dummy26[2];                             /* Reserved         */
    unsigned short P11;                                    /* P11              */
    unsigned char  dummy27[2];                             /* Reserved         */
    unsigned short P12;                                    /* P12              */
    unsigned char  dummy28[22];                            /* Reserved         */
    unsigned short P18;                                    /* P18              */
    unsigned char  dummy29[6];                             /* Reserved         */
    unsigned short P20;                                    /* P20              */
    unsigned char  dummy30[118];                           /* Reserved         */
    unsigned short AP0;                                    /* AP0              */
    unsigned char  dummy31[2];                             /* Reserved         */
    unsigned short AP1;                                    /* AP1              */
    unsigned char  dummy32[50];                            /* Reserved         */
    unsigned long  PSR0;                                   /* PSR0             */
    unsigned long  PSR1;                                   /* PSR1             */
    unsigned char  dummy33[24];                            /* Reserved         */
    unsigned long  PSR8;                                   /* PSR8             */
    unsigned long  PSR9;                                   /* PSR9             */
    unsigned long  PSR10;                                  /* PSR10            */
    unsigned long  PSR11;                                  /* PSR11            */
    unsigned long  PSR12;                                  /* PSR12            */
    unsigned char  dummy34[20];                            /* Reserved         */
    unsigned long  PSR18;                                  /* PSR18            */
    unsigned char  dummy35[4];                             /* Reserved         */
    unsigned long  PSR20;                                  /* PSR20            */
    unsigned char  dummy36[116];                           /* Reserved         */
    unsigned long  APSR0;                                  /* APSR0            */
    unsigned long  APSR1;                                  /* APSR1            */
    unsigned char  dummy37[48];                            /* Reserved         */
    unsigned short PPR0;                                   /* PPR0             */
    unsigned char  dummy38[2];                             /* Reserved         */
    unsigned short PPR1;                                   /* PPR1             */
    unsigned char  dummy39[26];                            /* Reserved         */
    unsigned short PPR8;                                   /* PPR8             */
    unsigned char  dummy40[2];                             /* Reserved         */
    unsigned short PPR9;                                   /* PPR9             */
    unsigned char  dummy41[2];                             /* Reserved         */
    unsigned short PPR10;                                  /* PPR10            */
    unsigned char  dummy42[2];                             /* Reserved         */
    unsigned short PPR11;                                  /* PPR11            */
    unsigned char  dummy43[2];                             /* Reserved         */
    unsigned short PPR12;                                  /* PPR12            */
    unsigned char  dummy44[22];                            /* Reserved         */
    unsigned short PPR18;                                  /* PPR18            */
    unsigned char  dummy45[6];                             /* Reserved         */
    unsigned short PPR20;                                  /* PPR20            */
    unsigned char  dummy46[118];                           /* Reserved         */
    unsigned short APPR0;                                  /* APPR0            */
    unsigned char  dummy47[2];                             /* Reserved         */
    unsigned short APPR1;                                  /* APPR1            */
    unsigned char  dummy48[34];                            /* Reserved         */
    unsigned short IPPR0;                                  /* IPPR0            */
    unsigned char  dummy49[14];                            /* Reserved         */
    unsigned short PM0;                                    /* PM0              */
    unsigned char  dummy50[2];                             /* Reserved         */
    unsigned short PM1;                                    /* PM1              */
    unsigned char  dummy51[26];                            /* Reserved         */
    unsigned short PM8;                                    /* PM8              */
    unsigned char  dummy52[2];                             /* Reserved         */
    unsigned short PM9;                                    /* PM9              */
    unsigned char  dummy53[2];                             /* Reserved         */
    unsigned short PM10;                                   /* PM10             */
    unsigned char  dummy54[2];                             /* Reserved         */
    unsigned short PM11;                                   /* PM11             */
    unsigned char  dummy55[2];                             /* Reserved         */
    unsigned short PM12;                                   /* PM12             */
    unsigned char  dummy56[22];                            /* Reserved         */
    unsigned short PM18;                                   /* PM18             */
    unsigned char  dummy57[6];                             /* Reserved         */
    unsigned short PM20;                                   /* PM20             */
    unsigned char  dummy58[118];                           /* Reserved         */
    unsigned short APM0;                                   /* APM0             */
    unsigned char  dummy59[2];                             /* Reserved         */
    unsigned short APM1;                                   /* APM1             */
    unsigned char  dummy60[50];                            /* Reserved         */
    unsigned short PMC0;                                   /* PMC0             */
    unsigned char  dummy61[2];                             /* Reserved         */
    unsigned short PMC1;                                   /* PMC1             */
    unsigned char  dummy62[26];                            /* Reserved         */
    unsigned short PMC8;                                   /* PMC8             */
    unsigned char  dummy63[2];                             /* Reserved         */
    unsigned short PMC9;                                   /* PMC9             */
    unsigned char  dummy64[2];                             /* Reserved         */
    unsigned short PMC10;                                  /* PMC10            */
    unsigned char  dummy65[2];                             /* Reserved         */
    unsigned short PMC11;                                  /* PMC11            */
    unsigned char  dummy66[2];                             /* Reserved         */
    unsigned short PMC12;                                  /* PMC12            */
    unsigned char  dummy67[22];                            /* Reserved         */
    unsigned short PMC18;                                  /* PMC18            */
    unsigned char  dummy68[6];                             /* Reserved         */
    unsigned short PMC20;                                  /* PMC20            */
    unsigned char  dummy69[174];                           /* Reserved         */
    unsigned short PFC0;                                   /* PFC0             */
    unsigned char  dummy70[2];                             /* Reserved         */
    unsigned short PFC1;                                   /* PFC1             */
    unsigned char  dummy71[26];                            /* Reserved         */
    unsigned short PFC8;                                   /* PFC8             */
    unsigned char  dummy72[2];                             /* Reserved         */
    unsigned short PFC9;                                   /* PFC9             */
    unsigned char  dummy73[2];                             /* Reserved         */
    unsigned short PFC10;                                  /* PFC10            */
    unsigned char  dummy74[2];                             /* Reserved         */
    unsigned short PFC11;                                  /* PFC11            */
    unsigned char  dummy75[2];                             /* Reserved         */
    unsigned short PFC12;                                  /* PFC12            */
    unsigned char  dummy76[22];                            /* Reserved         */
    unsigned short PFC18;                                  /* PFC18            */
    unsigned char  dummy77[6];                             /* Reserved         */
    unsigned short PFC20;                                  /* PFC20            */
    unsigned char  dummy78[174];                           /* Reserved         */
    unsigned short PFCE0;                                  /* PFCE0            */
    unsigned char  dummy79[2];                             /* Reserved         */
    unsigned short PFCE1;                                  /* PFCE1            */
    unsigned char  dummy80[26];                            /* Reserved         */
    unsigned short PFCE8;                                  /* PFCE8            */
    unsigned char  dummy81[2];                             /* Reserved         */
    unsigned short PFCE9;                                  /* PFCE9            */
    unsigned char  dummy82[2];                             /* Reserved         */
    unsigned short PFCE10;                                 /* PFCE10           */
    unsigned char  dummy83[2];                             /* Reserved         */
    unsigned short PFCE11;                                 /* PFCE11           */
    unsigned char  dummy84[2];                             /* Reserved         */
    unsigned short PFCE12;                                 /* PFCE12           */
    unsigned char  dummy85[206];                           /* Reserved         */
    unsigned short PNOT0;                                  /* PNOT0            */
    unsigned char  dummy86[2];                             /* Reserved         */
    unsigned short PNOT1;                                  /* PNOT1            */
    unsigned char  dummy87[26];                            /* Reserved         */
    unsigned short PNOT8;                                  /* PNOT8            */
    unsigned char  dummy88[2];                             /* Reserved         */
    unsigned short PNOT9;                                  /* PNOT9            */
    unsigned char  dummy89[2];                             /* Reserved         */
    unsigned short PNOT10;                                 /* PNOT10           */
    unsigned char  dummy90[2];                             /* Reserved         */
    unsigned short PNOT11;                                 /* PNOT11           */
    unsigned char  dummy91[2];                             /* Reserved         */
    unsigned short PNOT12;                                 /* PNOT12           */
    unsigned char  dummy92[22];                            /* Reserved         */
    unsigned short PNOT18;                                 /* PNOT18           */
    unsigned char  dummy93[6];                             /* Reserved         */
    unsigned short PNOT20;                                 /* PNOT20           */
    unsigned char  dummy94[118];                           /* Reserved         */
    unsigned short APNOT0;                                 /* APNOT0           */
    unsigned char  dummy95[2];                             /* Reserved         */
    unsigned short APNOT1;                                 /* APNOT1           */
    unsigned char  dummy96[50];                            /* Reserved         */
    unsigned long  PMSR0;                                  /* PMSR0            */
    unsigned long  PMSR1;                                  /* PMSR1            */
    unsigned char  dummy97[24];                            /* Reserved         */
    unsigned long  PMSR8;                                  /* PMSR8            */
    unsigned long  PMSR9;                                  /* PMSR9            */
    unsigned long  PMSR10;                                 /* PMSR10           */
    unsigned long  PMSR11;                                 /* PMSR11           */
    unsigned long  PMSR12;                                 /* PMSR12           */
    unsigned char  dummy98[20];                            /* Reserved         */
    unsigned long  PMSR18;                                 /* PMSR18           */
    unsigned char  dummy99[4];                             /* Reserved         */
    unsigned long  PMSR20;                                 /* PMSR20           */
    unsigned char  dummy100[116];                          /* Reserved         */
    unsigned long  APMSR0;                                 /* APMSR0           */
    unsigned long  APMSR1;                                 /* APMSR1           */
    unsigned char  dummy101[48];                           /* Reserved         */
    unsigned long  PMCSR0;                                 /* PMCSR0           */
    unsigned long  PMCSR1;                                 /* PMCSR1           */
    unsigned char  dummy102[24];                           /* Reserved         */
    unsigned long  PMCSR8;                                 /* PMCSR8           */
    unsigned long  PMCSR9;                                 /* PMCSR9           */
    unsigned long  PMCSR10;                                /* PMCSR10          */
    unsigned long  PMCSR11;                                /* PMCSR11          */
    unsigned long  PMCSR12;                                /* PMCSR12          */
    unsigned char  dummy103[20];                           /* Reserved         */
    unsigned long  PMCSR18;                                /* PMCSR18          */
    unsigned char  dummy104[4];                            /* Reserved         */
    unsigned long  PMCSR20;                                /* PMCSR20          */
    unsigned char  dummy105[172];                          /* Reserved         */
    unsigned short PFCAE0;                                 /* PFCAE0           */
    unsigned char  dummy106[2];                            /* Reserved         */
    unsigned short PFCAE1;                                 /* PFCAE1           */
    unsigned char  dummy107[34];                           /* Reserved         */
    unsigned short PFCAE10;                                /* PFCAE10          */
    unsigned char  dummy108[2];                            /* Reserved         */
    unsigned short PFCAE11;                                /* PFCAE11          */
    unsigned char  dummy109[2];                            /* Reserved         */
    unsigned short PFCAE12;                                /* PFCAE12          */
    unsigned char  dummy110[13774];                        /* Reserved         */
    unsigned short PIBC0;                                  /* PIBC0            */
    unsigned char  dummy111[2];                            /* Reserved         */
    unsigned short PIBC1;                                  /* PIBC1            */
    unsigned char  dummy112[26];                           /* Reserved         */
    unsigned short PIBC8;                                  /* PIBC8            */
    unsigned char  dummy113[2];                            /* Reserved         */
    unsigned short PIBC9;                                  /* PIBC9            */
    unsigned char  dummy114[2];                            /* Reserved         */
    unsigned short PIBC10;                                 /* PIBC10           */
    unsigned char  dummy115[2];                            /* Reserved         */
    unsigned short PIBC11;                                 /* PIBC11           */
    unsigned char  dummy116[2];                            /* Reserved         */
    unsigned short PIBC12;                                 /* PIBC12           */
    unsigned char  dummy117[22];                           /* Reserved         */
    unsigned short PIBC18;                                 /* PIBC18           */
    unsigned char  dummy118[6];                            /* Reserved         */
    unsigned short PIBC20;                                 /* PIBC20           */
    unsigned char  dummy119[118];                          /* Reserved         */
    unsigned short APIBC0;                                 /* APIBC0           */
    unsigned char  dummy120[2];                            /* Reserved         */
    unsigned short APIBC1;                                 /* APIBC1           */
    unsigned char  dummy121[34];                           /* Reserved         */
    unsigned short IPIBC0;                                 /* IPIBC0           */
    unsigned char  dummy122[14];                           /* Reserved         */
    unsigned short PBDC0;                                  /* PBDC0            */
    unsigned char  dummy123[2];                            /* Reserved         */
    unsigned short PBDC1;                                  /* PBDC1            */
    unsigned char  dummy124[26];                           /* Reserved         */
    unsigned short PBDC8;                                  /* PBDC8            */
    unsigned char  dummy125[2];                            /* Reserved         */
    unsigned short PBDC9;                                  /* PBDC9            */
    unsigned char  dummy126[2];                            /* Reserved         */
    unsigned short PBDC10;                                 /* PBDC10           */
    unsigned char  dummy127[2];                            /* Reserved         */
    unsigned short PBDC11;                                 /* PBDC11           */
    unsigned char  dummy128[2];                            /* Reserved         */
    unsigned short PBDC12;                                 /* PBDC12           */
    unsigned char  dummy129[22];                           /* Reserved         */
    unsigned short PBDC18;                                 /* PBDC18           */
    unsigned char  dummy130[6];                            /* Reserved         */
    unsigned short PBDC20;                                 /* PBDC20           */
    unsigned char  dummy131[118];                          /* Reserved         */
    unsigned short APBDC0;                                 /* APBDC0           */
    unsigned char  dummy132[2];                            /* Reserved         */
    unsigned short APBDC1;                                 /* APBDC1           */
    unsigned char  dummy133[50];                           /* Reserved         */
    unsigned short PIPC0;                                  /* PIPC0            */
    unsigned char  dummy134[38];                           /* Reserved         */
    unsigned short PIPC10;                                 /* PIPC10           */
    unsigned char  dummy135[2];                            /* Reserved         */
    unsigned short PIPC11;                                 /* PIPC11           */
    unsigned char  dummy136[210];                          /* Reserved         */
    unsigned short PU0;                                    /* PU0              */
    unsigned char  dummy137[2];                            /* Reserved         */
    unsigned short PU1;                                    /* PU1              */
    unsigned char  dummy138[26];                           /* Reserved         */
    unsigned short PU8;                                    /* PU8              */
    unsigned char  dummy139[2];                            /* Reserved         */
    unsigned short PU9;                                    /* PU9              */
    unsigned char  dummy140[2];                            /* Reserved         */
    unsigned short PU10;                                   /* PU10             */
    unsigned char  dummy141[2];                            /* Reserved         */
    unsigned short PU11;                                   /* PU11             */
    unsigned char  dummy142[2];                            /* Reserved         */
    unsigned short PU12;                                   /* PU12             */
    unsigned char  dummy143[22];                           /* Reserved         */
    unsigned short PU18;                                   /* PU18             */
    unsigned char  dummy144[6];                            /* Reserved         */
    unsigned short PU20;                                   /* PU20             */
    unsigned char  dummy145[174];                          /* Reserved         */
    unsigned short PD0;                                    /* PD0              */
    unsigned char  dummy146[2];                            /* Reserved         */
    unsigned short PD1;                                    /* PD1              */
    unsigned char  dummy147[26];                           /* Reserved         */
    unsigned short PD8;                                    /* PD8              */
    unsigned char  dummy148[2];                            /* Reserved         */
    unsigned short PD9;                                    /* PD9              */
    unsigned char  dummy149[2];                            /* Reserved         */
    unsigned short PD10;                                   /* PD10             */
    unsigned char  dummy150[2];                            /* Reserved         */
    unsigned short PD11;                                   /* PD11             */
    unsigned char  dummy151[2];                            /* Reserved         */
    unsigned short PD12;                                   /* PD12             */
    unsigned char  dummy152[22];                           /* Reserved         */
    unsigned short PD18;                                   /* PD18             */
    unsigned char  dummy153[6];                            /* Reserved         */
    unsigned short PD20;                                   /* PD20             */
    unsigned char  dummy154[174];                          /* Reserved         */
    unsigned long  PODC0;                                  /* PODC0            */
    unsigned long  PODC1;                                  /* PODC1            */
    unsigned char  dummy155[24];                           /* Reserved         */
    unsigned long  PODC8;                                  /* PODC8            */
    unsigned long  PODC9;                                  /* PODC9            */
    unsigned long  PODC10;                                 /* PODC10           */
    unsigned long  PODC11;                                 /* PODC11           */
    unsigned long  PODC12;                                 /* PODC12           */
    unsigned char  dummy156[20];                           /* Reserved         */
    unsigned long  PODC18;                                 /* PODC18           */
    unsigned char  dummy157[4];                            /* Reserved         */
    unsigned long  PODC20;                                 /* PODC20           */
    unsigned char  dummy158[172];                          /* Reserved         */
    unsigned long  PDSC0;                                  /* PDSC0            */
    unsigned long  PDSC1;                                  /* PDSC1            */
    unsigned char  dummy159[32];                           /* Reserved         */
    unsigned long  PDSC10;                                 /* PDSC10           */
    unsigned long  PDSC11;                                 /* PDSC11           */
    unsigned long  PDSC12;                                 /* PDSC12           */
    unsigned char  dummy160[20];                           /* Reserved         */
    unsigned long  PDSC18;                                 /* PDSC18           */
    unsigned char  dummy161[4];                            /* Reserved         */
    unsigned long  PDSC20;                                 /* PDSC20           */
    unsigned char  dummy162[172];                          /* Reserved         */
    unsigned short PIS0;                                   /* PIS0             */
    unsigned char  dummy163[2];                            /* Reserved         */
    unsigned short PIS1;                                   /* PIS1             */
    unsigned char  dummy164[26];                           /* Reserved         */
    unsigned short PIS8;                                   /* PIS8             */
    unsigned char  dummy165[2];                            /* Reserved         */
    unsigned short PIS9;                                   /* PIS9             */
    unsigned char  dummy166[2];                            /* Reserved         */
    unsigned short PIS10;                                  /* PIS10            */
    unsigned char  dummy167[2];                            /* Reserved         */
    unsigned short PIS11;                                  /* PIS11            */
    unsigned char  dummy168[2];                            /* Reserved         */
    unsigned short PIS12;                                  /* PIS12            */
    unsigned char  dummy169[22];                           /* Reserved         */
    unsigned short PIS18;                                  /* PIS18            */
    unsigned char  dummy170[6];                            /* Reserved         */
    unsigned short PIS20;                                  /* PIS20            */
    unsigned char  dummy171[942];                          /* Reserved         */
    unsigned long  PPROTS0;                                /* PPROTS0          */
    unsigned long  PPROTS1;                                /* PPROTS1          */
    unsigned char  dummy172[24];                           /* Reserved         */
    unsigned long  PPROTS8;                                /* PPROTS8          */
    unsigned long  PPROTS9;                                /* PPROTS9          */
    unsigned long  PPROTS10;                               /* PPROTS10         */
    unsigned long  PPROTS11;                               /* PPROTS11         */
    unsigned long  PPROTS12;                               /* PPROTS12         */
    unsigned char  dummy173[20];                           /* Reserved         */
    unsigned long  PPROTS18;                               /* PPROTS18         */
    unsigned char  dummy174[4];                            /* Reserved         */
    unsigned long  PPROTS20;                               /* PPROTS20         */
    unsigned char  dummy175[172];                          /* Reserved         */
    unsigned long  PPCMD0;                                 /* PPCMD0           */
    unsigned long  PPCMD1;                                 /* PPCMD1           */
    unsigned char  dummy176[24];                           /* Reserved         */
    unsigned long  PPCMD8;                                 /* PPCMD8           */
    unsigned long  PPCMD9;                                 /* PPCMD9           */
    unsigned long  PPCMD10;                                /* PPCMD10          */
    unsigned long  PPCMD11;                                /* PPCMD11          */
    unsigned long  PPCMD12;                                /* PPCMD12          */
    unsigned char  dummy177[20];                           /* Reserved         */
    unsigned long  PPCMD18;                                /* PPCMD18          */
    unsigned char  dummy178[4];                            /* Reserved         */
    unsigned long  PPCMD20;                                /* PPCMD20          */
};
struct __tag530
{                                                          /* Module           */
    unsigned char  JP0;                                    /* JP0              */
    unsigned char  dummy179[15];                           /* Reserved         */
    unsigned long  JPSR0;                                  /* JPSR0            */
    unsigned char  dummy180[12];                           /* Reserved         */
    unsigned char  JPPR0;                                  /* JPPR0            */
    unsigned char  dummy181[15];                           /* Reserved         */
    unsigned char  JPM0;                                   /* JPM0             */
    unsigned char  dummy182[15];                           /* Reserved         */
    unsigned char  JPMC0;                                  /* JPMC0            */
    unsigned char  dummy183[15];                           /* Reserved         */
    unsigned char  JPFC0;                                  /* JPFC0            */
    unsigned char  dummy184[15];                           /* Reserved         */
    unsigned char  JPFCE0;                                 /* JPFCE0           */
    unsigned char  dummy185[15];                           /* Reserved         */
    unsigned char  JPNOT0;                                 /* JPNOT0           */
    unsigned char  dummy186[15];                           /* Reserved         */
    unsigned long  JPMSR0;                                 /* JPMSR0           */
    unsigned char  dummy187[12];                           /* Reserved         */
    unsigned long  JPMCSR0;                                /* JPMCSR0          */
    unsigned char  dummy188[876];                          /* Reserved         */
    unsigned char  JPIBC0;                                 /* JPIBC0           */
    unsigned char  dummy189[15];                           /* Reserved         */
    unsigned char  JPBDC0;                                 /* JPBDC0           */
    unsigned char  dummy190[31];                           /* Reserved         */
    unsigned char  JPU0;                                   /* JPU0             */
    unsigned char  dummy191[15];                           /* Reserved         */
    unsigned char  JPD0;                                   /* JPD0             */
    unsigned char  dummy192[15];                           /* Reserved         */
    unsigned long  JPODC0;                                 /* JPODC0           */
    unsigned char  dummy193[12];                           /* Reserved         */
    unsigned long  JPDSC0;                                 /* JPDSC0           */
    unsigned char  dummy194[12];                           /* Reserved         */
    unsigned char  JPIS0;                                  /* JPIS0            */
    unsigned char  dummy195[47];                           /* Reserved         */
    unsigned char  JPISA0;                                 /* JPISA0           */
    unsigned char  dummy196[15];                           /* Reserved         */
    unsigned long  JPPROTS0;                               /* JPPROTS0         */
    unsigned char  dummy197[12];                           /* Reserved         */
    unsigned long  JPPCMD0;                                /* JPPCMD0          */
};
struct __tag531
{                                                          /* Module           */
    unsigned char  ATAUD0ICTL;                             /* ATAUD0ICTL       */
    unsigned char  dummy198[3];                            /* Reserved         */
    unsigned short ATAUD0IEN;                              /* ATAUD0IEN        */
    unsigned char  dummy199[2];                            /* Reserved         */
    union __tag257 ATAUD0IENH;                             /* ATAUD0IENH       */
    unsigned char  dummy200[3];                            /* Reserved         */
    union __tag258 ATAUD0IENL;                             /* ATAUD0IENL       */
    unsigned char  dummy201[19];                           /* Reserved         */
    unsigned char  ATAUB0ICTL;                             /* ATAUB0ICTL       */
    unsigned char  dummy202[3];                            /* Reserved         */
    unsigned short ATAUB0IEN;                              /* ATAUB0IEN        */
    unsigned char  dummy203[2];                            /* Reserved         */
    union __tag259 ATAUB0IENH;                             /* ATAUB0IENH       */
    unsigned char  dummy204[3];                            /* Reserved         */
    union __tag260 ATAUB0IENL;                             /* ATAUB0IENL       */
    unsigned char  dummy205[51];                           /* Reserved         */
    unsigned char  AENCA0ICTL;                             /* AENCA0ICTL       */
    unsigned char  dummy206[3];                            /* Reserved         */
    unsigned short AENCA0IEN;                              /* AENCA0IEN        */
    unsigned char  dummy207[6];                            /* Reserved         */
    union __tag261 AENCA0IENL;                             /* AENCA0IENL       */
    unsigned char  dummy208[51];                           /* Reserved         */
    unsigned char  AADCTL0CTL;                             /* AADCTL0CTL       */
    unsigned char  dummy209[3];                            /* Reserved         */
    unsigned short AADCTL0EN;                              /* AADCTL0EN        */
    unsigned char  dummy210[6];                            /* Reserved         */
    union __tag262 AADCTL0ENL;                             /* AADCTL0ENL       */
    unsigned char  dummy211[19];                           /* Reserved         */
    unsigned char  AADCTL1CTL;                             /* AADCTL1CTL       */
    unsigned char  dummy212[3];                            /* Reserved         */
    unsigned short AADCTL1EN;                              /* AADCTL1EN        */
    unsigned char  dummy213[6];                            /* Reserved         */
    union __tag263 AADCTL1ENL;                             /* AADCTL1ENL       */
};
struct __tag532
{                                                          /* Module           */
    unsigned char  CTL0_NMI;                               /* CTL0_NMI         */
    unsigned char  dummy214[31];                           /* Reserved         */
    unsigned char  CTL0_INTPL;                             /* CTL0_INTPL       */
    unsigned char  dummy215[3];                            /* Reserved         */
    unsigned char  CTL1_INTPL;                             /* CTL1_INTPL       */
    unsigned char  dummy216[3];                            /* Reserved         */
    unsigned char  CTL2_INTPL;                             /* CTL2_INTPL       */
    unsigned char  dummy217[3];                            /* Reserved         */
    unsigned char  CTL3_INTPL;                             /* CTL3_INTPL       */
    unsigned char  dummy218[3];                            /* Reserved         */
    unsigned char  CTL4_INTPL;                             /* CTL4_INTPL       */
    unsigned char  dummy219[3];                            /* Reserved         */
    unsigned char  CTL5_INTPL;                             /* CTL5_INTPL       */
    unsigned char  dummy220[3];                            /* Reserved         */
    unsigned char  CTL6_INTPL;                             /* CTL6_INTPL       */
    unsigned char  dummy221[3];                            /* Reserved         */
    unsigned char  CTL7_INTPL;                             /* CTL7_INTPL       */
    unsigned char  dummy222[3];                            /* Reserved         */
    unsigned char  CTL0_INTPH;                             /* CTL0_INTPH       */
    unsigned char  dummy223[3];                            /* Reserved         */
    unsigned char  CTL1_INTPH;                             /* CTL1_INTPH       */
    unsigned char  dummy224[3];                            /* Reserved         */
    unsigned char  CTL2_INTPH;                             /* CTL2_INTPH       */
    unsigned char  dummy225[3];                            /* Reserved         */
    unsigned char  CTL3_INTPH;                             /* CTL3_INTPH       */
    unsigned char  dummy226[3];                            /* Reserved         */
    unsigned char  CTL4_INTPH;                             /* CTL4_INTPH       */
    unsigned char  dummy227[3];                            /* Reserved         */
    unsigned char  CTL5_INTPH;                             /* CTL5_INTPH       */
    unsigned char  dummy228[3];                            /* Reserved         */
    unsigned char  CTL6_INTPH;                             /* CTL6_INTPH       */
    unsigned char  dummy229[3];                            /* Reserved         */
    unsigned char  CTL7_INTPH;                             /* CTL7_INTPH       */
    unsigned char  dummy230[3];                            /* Reserved         */
    unsigned char  CTL0_ADC0;                              /* CTL0_ADC0        */
    unsigned char  dummy231[3];                            /* Reserved         */
    unsigned char  CTL1_ADC0;                              /* CTL1_ADC0        */
    unsigned char  dummy232[3];                            /* Reserved         */
    unsigned char  CTL2_ADC0;                              /* CTL2_ADC0        */
    unsigned char  dummy233[23];                           /* Reserved         */
    unsigned char  CTL0_ADC1;                              /* CTL0_ADC1        */
    unsigned char  dummy234[3];                            /* Reserved         */
    unsigned char  CTL1_ADC1;                              /* CTL1_ADC1        */
    unsigned char  dummy235[3];                            /* Reserved         */
    unsigned char  CTL2_ADC1;                              /* CTL2_ADC1        */
};
struct __tag533
{                                                          /* Module           */
    union __tag256 FSGD00PROT0;                            /* FSGD00PROT0      */
    union __tag256 FSGD00PROT1;                            /* FSGD00PROT1      */
    union __tag256 FSGD00PROT2;                            /* FSGD00PROT2      */
    union __tag256 FSGD00PROT3;                            /* FSGD00PROT3      */
    union __tag256 FSGD00PROT4;                            /* FSGD00PROT4      */
    union __tag256 FSGD00PROT5;                            /* FSGD00PROT5      */
    union __tag256 FSGD00PROT6;                            /* FSGD00PROT6      */
    union __tag256 FSGD00PROT7;                            /* FSGD00PROT7      */
    union __tag256 FSGD00PROT8;                            /* FSGD00PROT8      */
    union __tag256 FSGD00PROT9;                            /* FSGD00PROT9      */
    union __tag256 FSGD00PROT10;                           /* FSGD00PROT10     */
    union __tag256 FSGD00PROT11;                           /* FSGD00PROT11     */
    union __tag256 FSGD00PROT12;                           /* FSGD00PROT12     */
    union __tag256 FSGD00PROT13;                           /* FSGD00PROT13     */
    unsigned char  dummy236[8];                            /* Reserved         */
    union __tag256 ERRSLV00CTL;                            /* ERRSLV00CTL      */
    union __tag256 ERRSLV00STAT;                           /* ERRSLV00STAT     */
    unsigned long  ERRSLV00ADDR;                           /* ERRSLV00ADDR     */
    union __tag264 ERRSLV00TYPE;                           /* ERRSLV00TYPE     */
};
struct __tag534
{                                                          /* Module           */
    union __tag256 FSGD01PROT0;                            /* FSGD01PROT0      */
    union __tag256 FSGD01PROT1;                            /* FSGD01PROT1      */
    union __tag256 FSGD01PROT2;                            /* FSGD01PROT2      */
    union __tag256 FSGD01PROT3;                            /* FSGD01PROT3      */
    union __tag256 FSGD01PROT4;                            /* FSGD01PROT4      */
    union __tag256 FSGD01PROT5;                            /* FSGD01PROT5      */
    union __tag256 FSGD01PROT6;                            /* FSGD01PROT6      */
    union __tag256 FSGD01PROT7;                            /* FSGD01PROT7      */
    union __tag256 FSGD01PROT8;                            /* FSGD01PROT8      */
    union __tag256 FSGD01PROT9;                            /* FSGD01PROT9      */
    unsigned char  dummy237[8];                            /* Reserved         */
    union __tag256 FSGD01PROT12;                           /* FSGD01PROT12     */
    union __tag256 FSGD01PROT13;                           /* FSGD01PROT13     */
    union __tag256 FSGD01PROT14;                           /* FSGD01PROT14     */
    unsigned char  dummy238[4];                            /* Reserved         */
    union __tag256 ERRSLV01CTL;                            /* ERRSLV01CTL      */
    union __tag256 ERRSLV01STAT;                           /* ERRSLV01STAT     */
    unsigned long  ERRSLV01ADDR;                           /* ERRSLV01ADDR     */
    union __tag264 ERRSLV01TYPE;                           /* ERRSLV01TYPE     */
};
struct __tag535
{                                                          /* Module           */
    union __tag256 FSGD07PROT0;                            /* FSGD07PROT0      */
    union __tag256 FSGD07PROT1;                            /* FSGD07PROT1      */
    union __tag256 FSGD07PROT2;                            /* FSGD07PROT2      */
    union __tag256 FSGD07PROT3;                            /* FSGD07PROT3      */
    union __tag256 FSGD07PROT4;                            /* FSGD07PROT4      */
    union __tag256 FSGD07PROT5;                            /* FSGD07PROT5      */
    union __tag256 FSGD07PROT6;                            /* FSGD07PROT6      */
    union __tag256 FSGD07PROT7;                            /* FSGD07PROT7      */
    unsigned char  dummy239[32];                           /* Reserved         */
    union __tag256 ERRSLV07CTL;                            /* ERRSLV07CTL      */
    union __tag256 ERRSLV07STAT;                           /* ERRSLV07STAT     */
    unsigned long  ERRSLV07ADDR;                           /* ERRSLV07ADDR     */
    union __tag264 ERRSLV07TYPE;                           /* ERRSLV07TYPE     */
};
struct __tag536
{                                                          /* Module           */
    union __tag256 FSGD08PROT0;                            /* FSGD08PROT0      */
    union __tag256 FSGD08PROT1;                            /* FSGD08PROT1      */
    union __tag256 FSGD08PROT2;                            /* FSGD08PROT2      */
    union __tag256 FSGD08PROT3;                            /* FSGD08PROT3      */
    union __tag256 FSGD08PROT4;                            /* FSGD08PROT4      */
    union __tag256 FSGD08PROT5;                            /* FSGD08PROT5      */
    unsigned char  dummy240[40];                           /* Reserved         */
    union __tag256 ERRSLV08CTL;                            /* ERRSLV08CTL      */
    union __tag256 ERRSLV08STAT;                           /* ERRSLV08STAT     */
    unsigned long  ERRSLV08ADDR;                           /* ERRSLV08ADDR     */
    union __tag264 ERRSLV08TYPE;                           /* ERRSLV08TYPE     */
};
struct __tag537
{                                                          /* Module           */
    union __tag256 FSGDC0PROT0;                            /* FSGDC0PROT0      */
    union __tag256 FSGDC0PROT1;                            /* FSGDC0PROT1      */
    unsigned char  dummy241[2040];                         /* Reserved         */
    union __tag256 ERRSLVC0CTL;                            /* ERRSLVC0CTL      */
    union __tag256 ERRSLVC0STAT;                           /* ERRSLVC0STAT     */
    unsigned long  ERRSLVC0ADDR;                           /* ERRSLVC0ADDR     */
    union __tag264 ERRSLVC0TYPE;                           /* ERRSLVC0TYPE     */
};
struct __tag538
{                                                          /* Module           */
    union __tag256 FSGDC1PROT0;                            /* FSGDC1PROT0      */
    union __tag256 FSGDC1PROT1;                            /* FSGDC1PROT1      */
    union __tag256 FSGDC1PROT2;                            /* FSGDC1PROT2      */
    union __tag256 FSGDC1PROT3;                            /* FSGDC1PROT3      */
    union __tag256 FSGDC1PROT4;                            /* FSGDC1PROT4      */
    union __tag256 FSGDC1PROT5;                            /* FSGDC1PROT5      */
    unsigned char  dummy242[1992];                         /* Reserved         */
    union __tag256 ERRSLVC1CTL;                            /* ERRSLVC1CTL      */
    union __tag256 ERRSLVC1STAT;                           /* ERRSLVC1STAT     */
    unsigned long  ERRSLVC1ADDR;                           /* ERRSLVC1ADDR     */
    union __tag264 ERRSLVC1TYPE;                           /* ERRSLVC1TYPE     */
};
struct __tag539
{                                                          /* Module           */
    unsigned char  EEPRDCYCL;                              /* EEPRDCYCL        */
};
struct __tag540
{                                                          /* Module           */
    union __tag256 FBUFCCTL;                               /* FBUFCCTL         */
};
struct __tag541
{                                                          /* Module           */
    union __tag264 CFECCCTL_VCI;                           /* CFECCCTL_VCI     */
    union __tag256 CFERRINT_VCI;                           /* CFERRINT_VCI     */
    union __tag256 CFSTCLR_VCI;                            /* CFSTCLR_VCI      */
    union __tag256 CFOVFSTR_VCI;                           /* CFOVFSTR_VCI     */
    union __tag256 CF1STERSTR_VCI;                         /* CF1STERSTR_VCI   */
    unsigned char  dummy243[60];                           /* Reserved         */
    union __tag256 CF1STEADR0_VCI;                         /* CF1STEADR0_VCI   */
    unsigned char  dummy244[252];                          /* Reserved         */
    union __tag264 CFSTSTCTL_VCI;                          /* CFSTSTCTL_VCI    */
};
struct __tag542
{                                                          /* Module           */
    union __tag264 CFECCCTL_PE1;                           /* CFECCCTL_PE1     */
    union __tag256 CFERRINT_PE1;                           /* CFERRINT_PE1     */
    union __tag256 CFSTCLR_PE1;                            /* CFSTCLR_PE1      */
    union __tag256 CFOVFSTR_PE1;                           /* CFOVFSTR_PE1     */
    union __tag256 CF1STERSTR_PE1;                         /* CF1STERSTR_PE1   */
    unsigned char  dummy245[60];                           /* Reserved         */
    union __tag256 CF1STEADR0_PE1;                         /* CF1STEADR0_PE1   */
    unsigned char  dummy246[252];                          /* Reserved         */
    union __tag264 CFSTSTCTL_PE1;                          /* CFSTSTCTL_PE1    */
};
struct __tag543
{                                                          /* Module           */
    unsigned short CTL;                                    /* CTL              */
    unsigned char  dummy247[2];                            /* Reserved         */
    unsigned char  DFERSTR;                                /* DFERSTR          */
    unsigned char  dummy248[3];                            /* Reserved         */
    unsigned char  DFERSTC;                                /* DFERSTC          */
    unsigned char  dummy249[3];                            /* Reserved         */
    unsigned char  DFOVFSTR;                               /* DFOVFSTR         */
    unsigned char  dummy250[3];                            /* Reserved         */
    unsigned char  DFOVFSTC;                               /* DFOVFSTC         */
    unsigned char  dummy251[3];                            /* Reserved         */
    unsigned char  DFERRINT;                               /* DFERRINT         */
    unsigned char  dummy252[3];                            /* Reserved         */
    unsigned long  DFEADR;                                 /* DFEADR           */
    unsigned short DFTSTCTL;                               /* DFTSTCTL         */
};
struct __tag544
{                                                          /* Module           */
    union __tag264 CTL_PE1;                                /* CTL_PE1          */
    unsigned long  LRTDATBF0_PE1;                          /* LRTDATBF0_PE1    */
};
struct __tag545
{                                                          /* Module           */
    union __tag264 CTL_PE1;                                /* CTL_PE1          */
    union __tag256 LRERRINT_PE1;                           /* LRERRINT_PE1     */
    union __tag256 LRSTCLR_PE1;                            /* LRSTCLR_PE1      */
    union __tag256 LROVFSTR_PE1;                           /* LROVFSTR_PE1     */
    union __tag256 LR1STERSTR_PE1;                         /* LR1STERSTR_PE1   */
    unsigned char  dummy253[60];                           /* Reserved         */
    union __tag256 LR1STEADR0_PE1;                         /* LR1STEADR0_PE1   */
};
struct __tag546
{                                                          /* Module           */
    unsigned short CTL;                                    /* CTL              */
    unsigned char  dummy254[2];                            /* Reserved         */
    unsigned short TMC;                                    /* TMC              */
    unsigned char  dummy255[2];                            /* Reserved         */
    union __tag265 TRC;                                    /* TRC              */
    unsigned long  TED;                                    /* TED              */
    unsigned long  AD0;                                    /* AD0              */
};
struct __tag547
{                                                          /* Module           */
    unsigned short ECCRCAN0CTL_PHY1;                       /* ECCRCAN0CTL_PHY1 */
    unsigned char  dummy256[2];                            /* Reserved         */
    unsigned short ECCRCAN0TMC_PHY1;                       /* ECCRCAN0TMC_PHY1 */
    unsigned char  dummy257[2];                            /* Reserved         */
    union __tag266 ECCRCAN0TRC_PHY1;                       /* ECCRCAN0TRC_PHY1 */
    unsigned long  ECCRCAN0TED_PHY1;                       /* ECCRCAN0TED_PHY1 */
    unsigned long  ECCRCAN0AD0_PHY1;                       /* ECCRCAN0AD0_PHY1 */
};
struct __tag548
{                                                          /* Module           */
    unsigned short ECCRCANFD0CTL_PHY2;                     /* ECCRCANFD0CTL_PHY2 */
    unsigned char  dummy258[2];                            /* Reserved         */
    unsigned short ECCRCANFD0TMC_PHY2;                     /* ECCRCANFD0TMC_PHY2 */
    unsigned char  dummy259[2];                            /* Reserved         */
    union __tag267 ECCRCANFD0TRC_PHY2;                     /* ECCRCANFD0TRC_PHY2 */
    unsigned long  ECCRCANFD0TED_PHY2;                     /* ECCRCANFD0TED_PHY2 */
    unsigned long  ECCRCANFD0AD0_PHY2;                     /* ECCRCANFD0AD0_PHY2 */
};
struct __tag549
{                                                          /* Module           */
    unsigned short SELB_READTEST;                          /* SELB_READTEST    */
};
struct __tag550
{                                                          /* Module           */
    union __tag256 CR1;                                    /* CR1              */
    union __tag256 CR2;                                    /* CR2              */
    union __tag256 MR1;                                    /* MR1              */
    union __tag256 MR2;                                    /* MR2              */
    union __tag256 MR3;                                    /* MR3              */
    union __tag256 FER;                                    /* FER              */
    union __tag256 SER;                                    /* SER              */
    union __tag256 IER;                                    /* IER              */
    union __tag256 SR1;                                    /* SR1              */
    union __tag256 SR2;                                    /* SR2              */
    union __tag256 SAR0;                                   /* SAR0             */
    union __tag256 SAR1;                                   /* SAR1             */
    union __tag256 SAR2;                                   /* SAR2             */
    union __tag256 BRL;                                    /* BRL              */
    union __tag256 BRH;                                    /* BRH              */
    union __tag256 DRT;                                    /* DRT              */
    union __tag256 DRR;                                    /* DRR              */
};
struct __tag551
{                                                          /* Module           */
    unsigned long  PRDNAME1;                               /* PRDNAME1         */
    unsigned long  PRDNAME2;                               /* PRDNAME2         */
    unsigned long  PRDNAME3;                               /* PRDNAME3         */
    unsigned char  dummy260[4];                            /* Reserved         */
    unsigned long  CHIPID1LL;                              /* CHIPID1LL        */
    unsigned long  CHIPID1LH;                              /* CHIPID1LH        */
    unsigned long  CHIPID1HL;                              /* CHIPID1HL        */
    unsigned long  CHIPID1HH;                              /* CHIPID1HH        */
    unsigned long  CHIPID2LL;                              /* CHIPID2LL        */
    unsigned long  CHIPID2LH;                              /* CHIPID2LH        */
    unsigned long  CHIPID2HL;                              /* CHIPID2HL        */
    unsigned long  CHIPID2HH;                              /* CHIPID2HH        */
};
struct __tag552
{                                                          /* Module           */
    unsigned char  dummy261[1];                            /* Reserved         */
    unsigned char  GLWBR;                                  /* GLWBR            */
    unsigned char  GLBRP0;                                 /* GLBRP0           */
    unsigned char  GLBRP1;                                 /* GLBRP1           */
    unsigned char  GLSTC;                                  /* GLSTC            */
};
struct __tag553
{                                                          /* Module           */
    unsigned char  L0MD;                                   /* L0MD             */
    unsigned char  L0BFC;                                  /* L0BFC            */
    unsigned char  L0SC;                                   /* L0SC             */
    unsigned char  L0WUP;                                  /* L0WUP            */
    unsigned char  L0IE;                                   /* L0IE             */
    unsigned char  L0EDE;                                  /* L0EDE            */
    unsigned char  L0CUC;                                  /* L0CUC            */
    unsigned char  dummy262[1];                            /* Reserved         */
    unsigned char  L0TRC;                                  /* L0TRC            */
    unsigned char  L0MST;                                  /* L0MST            */
    unsigned char  L0ST;                                   /* L0ST             */
    unsigned char  L0EST;                                  /* L0EST            */
    unsigned char  L0DFC;                                  /* L0DFC            */
    unsigned char  L0IDB;                                  /* L0IDB            */
    unsigned char  L0CBR;                                  /* L0CBR            */
    unsigned char  dummy263[1];                            /* Reserved         */
    unsigned char  L0DBR1;                                 /* L0DBR1           */
    unsigned char  L0DBR2;                                 /* L0DBR2           */
    unsigned char  L0DBR3;                                 /* L0DBR3           */
    unsigned char  L0DBR4;                                 /* L0DBR4           */
    unsigned char  L0DBR5;                                 /* L0DBR5           */
    unsigned char  L0DBR6;                                 /* L0DBR6           */
    unsigned char  L0DBR7;                                 /* L0DBR7           */
    unsigned char  L0DBR8;                                 /* L0DBR8           */
};
struct __tag554
{                                                          /* Module           */
    unsigned char  L1MD;                                   /* L1MD             */
    unsigned char  L1BFC;                                  /* L1BFC            */
    unsigned char  L1SC;                                   /* L1SC             */
    unsigned char  L1WUP;                                  /* L1WUP            */
    unsigned char  L1IE;                                   /* L1IE             */
    unsigned char  L1EDE;                                  /* L1EDE            */
    unsigned char  L1CUC;                                  /* L1CUC            */
    unsigned char  dummy264[1];                            /* Reserved         */
    unsigned char  L1TRC;                                  /* L1TRC            */
    unsigned char  L1MST;                                  /* L1MST            */
    unsigned char  L1ST;                                   /* L1ST             */
    unsigned char  L1EST;                                  /* L1EST            */
    unsigned char  L1DFC;                                  /* L1DFC            */
    unsigned char  L1IDB;                                  /* L1IDB            */
    unsigned char  L1CBR;                                  /* L1CBR            */
    unsigned char  dummy265[1];                            /* Reserved         */
    unsigned char  L1DBR1;                                 /* L1DBR1           */
    unsigned char  L1DBR2;                                 /* L1DBR2           */
    unsigned char  L1DBR3;                                 /* L1DBR3           */
    unsigned char  L1DBR4;                                 /* L1DBR4           */
    unsigned char  L1DBR5;                                 /* L1DBR5           */
    unsigned char  L1DBR6;                                 /* L1DBR6           */
    unsigned char  L1DBR7;                                 /* L1DBR7           */
    unsigned char  L1DBR8;                                 /* L1DBR8           */
};
struct __tag555
{                                                          /* Module           */
    unsigned char  L2MD;                                   /* L2MD             */
    unsigned char  L2BFC;                                  /* L2BFC            */
    unsigned char  L2SC;                                   /* L2SC             */
    unsigned char  L2WUP;                                  /* L2WUP            */
    unsigned char  L2IE;                                   /* L2IE             */
    unsigned char  L2EDE;                                  /* L2EDE            */
    unsigned char  L2CUC;                                  /* L2CUC            */
    unsigned char  dummy266[1];                            /* Reserved         */
    unsigned char  L2TRC;                                  /* L2TRC            */
    unsigned char  L2MST;                                  /* L2MST            */
    unsigned char  L2ST;                                   /* L2ST             */
    unsigned char  L2EST;                                  /* L2EST            */
    unsigned char  L2DFC;                                  /* L2DFC            */
    unsigned char  L2IDB;                                  /* L2IDB            */
    unsigned char  L2CBR;                                  /* L2CBR            */
    unsigned char  dummy267[1];                            /* Reserved         */
    unsigned char  L2DBR1;                                 /* L2DBR1           */
    unsigned char  L2DBR2;                                 /* L2DBR2           */
    unsigned char  L2DBR3;                                 /* L2DBR3           */
    unsigned char  L2DBR4;                                 /* L2DBR4           */
    unsigned char  L2DBR5;                                 /* L2DBR5           */
    unsigned char  L2DBR6;                                 /* L2DBR6           */
    unsigned char  L2DBR7;                                 /* L2DBR7           */
    unsigned char  L2DBR8;                                 /* L2DBR8           */
};
struct __tag556
{                                                          /* Module           */
    unsigned char  L3MD;                                   /* L3MD             */
    unsigned char  L3BFC;                                  /* L3BFC            */
    unsigned char  L3SC;                                   /* L3SC             */
    unsigned char  L3WUP;                                  /* L3WUP            */
    unsigned char  L3IE;                                   /* L3IE             */
    unsigned char  L3EDE;                                  /* L3EDE            */
    unsigned char  L3CUC;                                  /* L3CUC            */
    unsigned char  dummy268[1];                            /* Reserved         */
    unsigned char  L3TRC;                                  /* L3TRC            */
    unsigned char  L3MST;                                  /* L3MST            */
    unsigned char  L3ST;                                   /* L3ST             */
    unsigned char  L3EST;                                  /* L3EST            */
    unsigned char  L3DFC;                                  /* L3DFC            */
    unsigned char  L3IDB;                                  /* L3IDB            */
    unsigned char  L3CBR;                                  /* L3CBR            */
    unsigned char  dummy269[1];                            /* Reserved         */
    unsigned char  L3DBR1;                                 /* L3DBR1           */
    unsigned char  L3DBR2;                                 /* L3DBR2           */
    unsigned char  L3DBR3;                                 /* L3DBR3           */
    unsigned char  L3DBR4;                                 /* L3DBR4           */
    unsigned char  L3DBR5;                                 /* L3DBR5           */
    unsigned char  L3DBR6;                                 /* L3DBR6           */
    unsigned char  L3DBR7;                                 /* L3DBR7           */
    unsigned char  L3DBR8;                                 /* L3DBR8           */
};
struct __tag557
{                                                          /* Module           */
    unsigned char  dummy270[1];                            /* Reserved         */
    unsigned char  LWBR;                                   /* LWBR             */
    union __tag268 LBRP01;                                 /* LBRP01           */
    unsigned char  LSTC;                                   /* LSTC             */
    unsigned char  dummy271[3];                            /* Reserved         */
    unsigned char  LMD;                                    /* LMD              */
    unsigned char  LBFC;                                   /* LBFC             */
    unsigned char  LSC;                                    /* LSC              */
    unsigned char  LWUP;                                   /* LWUP             */
    unsigned char  LIE;                                    /* LIE              */
    unsigned char  LEDE;                                   /* LEDE             */
    unsigned char  LCUC;                                   /* LCUC             */
    unsigned char  dummy272[1];                            /* Reserved         */
    unsigned char  LTRC;                                   /* LTRC             */
    unsigned char  LMST;                                   /* LMST             */
    unsigned char  LST;                                    /* LST              */
    unsigned char  LEST;                                   /* LEST             */
    unsigned char  LDFC;                                   /* LDFC             */
    unsigned char  LIDB;                                   /* LIDB             */
    unsigned char  LCBR;                                   /* LCBR             */
    unsigned char  LUDB0;                                  /* LUDB0            */
    unsigned char  LDBR1;                                  /* LDBR1            */
    unsigned char  LDBR2;                                  /* LDBR2            */
    unsigned char  LDBR3;                                  /* LDBR3            */
    unsigned char  LDBR4;                                  /* LDBR4            */
    unsigned char  LDBR5;                                  /* LDBR5            */
    unsigned char  LDBR6;                                  /* LDBR6            */
    unsigned char  LDBR7;                                  /* LDBR7            */
    unsigned char  LDBR8;                                  /* LDBR8            */
    unsigned char  LUOER;                                  /* LUOER            */
    unsigned char  LUOR1;                                  /* LUOR1            */
    unsigned char  dummy273[2];                            /* Reserved         */
    union __tag269 LUTDR;                                  /* LUTDR            */
    union __tag269 LURDR;                                  /* LURDR            */
    union __tag269 LUWTDR;                                 /* LUWTDR           */
};
struct __tag558
{                                                          /* Module           */
    union __tag256 C0CFG;                                  /* C0CFG            */
    union __tag256 C0CTR;                                  /* C0CTR            */
    union __tag256 C0STS;                                  /* C0STS            */
    union __tag256 C0ERFL;                                 /* C0ERFL           */
    union __tag256 C1CFG;                                  /* C1CFG            */
    union __tag256 C1CTR;                                  /* C1CTR            */
    union __tag256 C1STS;                                  /* C1STS            */
    union __tag256 C1ERFL;                                 /* C1ERFL           */
    union __tag256 C2CFG;                                  /* C2CFG            */
    union __tag256 C2CTR;                                  /* C2CTR            */
    union __tag256 C2STS;                                  /* C2STS            */
    union __tag256 C2ERFL;                                 /* C2ERFL           */
    union __tag256 C3CFG;                                  /* C3CFG            */
    union __tag256 C3CTR;                                  /* C3CTR            */
    union __tag256 C3STS;                                  /* C3STS            */
    union __tag256 C3ERFL;                                 /* C3ERFL           */
    union __tag256 C4CFG;                                  /* C4CFG            */
    union __tag256 C4CTR;                                  /* C4CTR            */
    union __tag256 C4STS;                                  /* C4STS            */
    union __tag256 C4ERFL;                                 /* C4ERFL           */
    union __tag256 C5CFG;                                  /* C5CFG            */
    union __tag256 C5CTR;                                  /* C5CTR            */
    union __tag256 C5STS;                                  /* C5STS            */
    union __tag256 C5ERFL;                                 /* C5ERFL           */
    unsigned char  dummy274[36];                           /* Reserved         */
    union __tag256 GCFG;                                   /* GCFG             */
    union __tag256 GCTR;                                   /* GCTR             */
    union __tag256 GSTS;                                   /* GSTS             */
    union __tag256 GERFL;                                  /* GERFL            */
    union __tag264 GTSC;                                   /* GTSC             */
    union __tag256 GAFLECTR;                               /* GAFLECTR         */
    union __tag256 GAFLCFG0;                               /* GAFLCFG0         */
    union __tag256 GAFLCFG1;                               /* GAFLCFG1         */
    union __tag256 RMNB;                                   /* RMNB             */
    union __tag256 RMND0;                                  /* RMND0            */
    union __tag256 RMND1;                                  /* RMND1            */
    union __tag256 RMND2;                                  /* RMND2            */
    unsigned char  dummy275[4];                            /* Reserved         */
    union __tag256 RFCC0;                                  /* RFCC0            */
    union __tag256 RFCC1;                                  /* RFCC1            */
    union __tag256 RFCC2;                                  /* RFCC2            */
    union __tag256 RFCC3;                                  /* RFCC3            */
    union __tag256 RFCC4;                                  /* RFCC4            */
    union __tag256 RFCC5;                                  /* RFCC5            */
    union __tag256 RFCC6;                                  /* RFCC6            */
    union __tag256 RFCC7;                                  /* RFCC7            */
    union __tag256 RFSTS0;                                 /* RFSTS0           */
    union __tag256 RFSTS1;                                 /* RFSTS1           */
    union __tag256 RFSTS2;                                 /* RFSTS2           */
    union __tag256 RFSTS3;                                 /* RFSTS3           */
    union __tag256 RFSTS4;                                 /* RFSTS4           */
    union __tag256 RFSTS5;                                 /* RFSTS5           */
    union __tag256 RFSTS6;                                 /* RFSTS6           */
    union __tag256 RFSTS7;                                 /* RFSTS7           */
    union __tag256 RFPCTR0;                                /* RFPCTR0          */
    union __tag256 RFPCTR1;                                /* RFPCTR1          */
    union __tag256 RFPCTR2;                                /* RFPCTR2          */
    union __tag256 RFPCTR3;                                /* RFPCTR3          */
    union __tag256 RFPCTR4;                                /* RFPCTR4          */
    union __tag256 RFPCTR5;                                /* RFPCTR5          */
    union __tag256 RFPCTR6;                                /* RFPCTR6          */
    union __tag256 RFPCTR7;                                /* RFPCTR7          */
    union __tag256 CFCC0;                                  /* CFCC0            */
    union __tag256 CFCC1;                                  /* CFCC1            */
    union __tag256 CFCC2;                                  /* CFCC2            */
    union __tag256 CFCC3;                                  /* CFCC3            */
    union __tag256 CFCC4;                                  /* CFCC4            */
    union __tag256 CFCC5;                                  /* CFCC5            */
    union __tag256 CFCC6;                                  /* CFCC6            */
    union __tag256 CFCC7;                                  /* CFCC7            */
    union __tag256 CFCC8;                                  /* CFCC8            */
    union __tag256 CFCC9;                                  /* CFCC9            */
    union __tag256 CFCC10;                                 /* CFCC10           */
    union __tag256 CFCC11;                                 /* CFCC11           */
    union __tag256 CFCC12;                                 /* CFCC12           */
    union __tag256 CFCC13;                                 /* CFCC13           */
    union __tag256 CFCC14;                                 /* CFCC14           */
    union __tag256 CFCC15;                                 /* CFCC15           */
    union __tag256 CFCC16;                                 /* CFCC16           */
    union __tag256 CFCC17;                                 /* CFCC17           */
    unsigned char  dummy276[24];                           /* Reserved         */
    union __tag256 CFSTS0;                                 /* CFSTS0           */
    union __tag256 CFSTS1;                                 /* CFSTS1           */
    union __tag256 CFSTS2;                                 /* CFSTS2           */
    union __tag256 CFSTS3;                                 /* CFSTS3           */
    union __tag256 CFSTS4;                                 /* CFSTS4           */
    union __tag256 CFSTS5;                                 /* CFSTS5           */
    union __tag256 CFSTS6;                                 /* CFSTS6           */
    union __tag256 CFSTS7;                                 /* CFSTS7           */
    union __tag256 CFSTS8;                                 /* CFSTS8           */
    union __tag256 CFSTS9;                                 /* CFSTS9           */
    union __tag256 CFSTS10;                                /* CFSTS10          */
    union __tag256 CFSTS11;                                /* CFSTS11          */
    union __tag256 CFSTS12;                                /* CFSTS12          */
    union __tag256 CFSTS13;                                /* CFSTS13          */
    union __tag256 CFSTS14;                                /* CFSTS14          */
    union __tag256 CFSTS15;                                /* CFSTS15          */
    union __tag256 CFSTS16;                                /* CFSTS16          */
    union __tag256 CFSTS17;                                /* CFSTS17          */
    unsigned char  dummy277[24];                           /* Reserved         */
    union __tag256 CFPCTR0;                                /* CFPCTR0          */
    union __tag256 CFPCTR1;                                /* CFPCTR1          */
    union __tag256 CFPCTR2;                                /* CFPCTR2          */
    union __tag256 CFPCTR3;                                /* CFPCTR3          */
    union __tag256 CFPCTR4;                                /* CFPCTR4          */
    union __tag256 CFPCTR5;                                /* CFPCTR5          */
    union __tag256 CFPCTR6;                                /* CFPCTR6          */
    union __tag256 CFPCTR7;                                /* CFPCTR7          */
    union __tag256 CFPCTR8;                                /* CFPCTR8          */
    union __tag256 CFPCTR9;                                /* CFPCTR9          */
    union __tag256 CFPCTR10;                               /* CFPCTR10         */
    union __tag256 CFPCTR11;                               /* CFPCTR11         */
    union __tag256 CFPCTR12;                               /* CFPCTR12         */
    union __tag256 CFPCTR13;                               /* CFPCTR13         */
    union __tag256 CFPCTR14;                               /* CFPCTR14         */
    union __tag256 CFPCTR15;                               /* CFPCTR15         */
    union __tag256 CFPCTR16;                               /* CFPCTR16         */
    union __tag256 CFPCTR17;                               /* CFPCTR17         */
    unsigned char  dummy278[24];                           /* Reserved         */
    union __tag256 FESTS;                                  /* FESTS            */
    union __tag256 FFSTS;                                  /* FFSTS            */
    union __tag256 FMSTS;                                  /* FMSTS            */
    union __tag256 RFISTS;                                 /* RFISTS           */
    union __tag256 CFRISTS;                                /* CFRISTS          */
    union __tag256 CFTISTS;                                /* CFTISTS          */
    unsigned char  TMC0;                                   /* TMC0             */
    unsigned char  TMC1;                                   /* TMC1             */
    unsigned char  TMC2;                                   /* TMC2             */
    unsigned char  TMC3;                                   /* TMC3             */
    unsigned char  TMC4;                                   /* TMC4             */
    unsigned char  TMC5;                                   /* TMC5             */
    unsigned char  TMC6;                                   /* TMC6             */
    unsigned char  TMC7;                                   /* TMC7             */
    unsigned char  TMC8;                                   /* TMC8             */
    unsigned char  TMC9;                                   /* TMC9             */
    unsigned char  TMC10;                                  /* TMC10            */
    unsigned char  TMC11;                                  /* TMC11            */
    unsigned char  TMC12;                                  /* TMC12            */
    unsigned char  TMC13;                                  /* TMC13            */
    unsigned char  TMC14;                                  /* TMC14            */
    unsigned char  TMC15;                                  /* TMC15            */
    unsigned char  TMC16;                                  /* TMC16            */
    unsigned char  TMC17;                                  /* TMC17            */
    unsigned char  TMC18;                                  /* TMC18            */
    unsigned char  TMC19;                                  /* TMC19            */
    unsigned char  TMC20;                                  /* TMC20            */
    unsigned char  TMC21;                                  /* TMC21            */
    unsigned char  TMC22;                                  /* TMC22            */
    unsigned char  TMC23;                                  /* TMC23            */
    unsigned char  TMC24;                                  /* TMC24            */
    unsigned char  TMC25;                                  /* TMC25            */
    unsigned char  TMC26;                                  /* TMC26            */
    unsigned char  TMC27;                                  /* TMC27            */
    unsigned char  TMC28;                                  /* TMC28            */
    unsigned char  TMC29;                                  /* TMC29            */
    unsigned char  TMC30;                                  /* TMC30            */
    unsigned char  TMC31;                                  /* TMC31            */
    unsigned char  TMC32;                                  /* TMC32            */
    unsigned char  TMC33;                                  /* TMC33            */
    unsigned char  TMC34;                                  /* TMC34            */
    unsigned char  TMC35;                                  /* TMC35            */
    unsigned char  TMC36;                                  /* TMC36            */
    unsigned char  TMC37;                                  /* TMC37            */
    unsigned char  TMC38;                                  /* TMC38            */
    unsigned char  TMC39;                                  /* TMC39            */
    unsigned char  TMC40;                                  /* TMC40            */
    unsigned char  TMC41;                                  /* TMC41            */
    unsigned char  TMC42;                                  /* TMC42            */
    unsigned char  TMC43;                                  /* TMC43            */
    unsigned char  TMC44;                                  /* TMC44            */
    unsigned char  TMC45;                                  /* TMC45            */
    unsigned char  TMC46;                                  /* TMC46            */
    unsigned char  TMC47;                                  /* TMC47            */
    unsigned char  TMC48;                                  /* TMC48            */
    unsigned char  TMC49;                                  /* TMC49            */
    unsigned char  TMC50;                                  /* TMC50            */
    unsigned char  TMC51;                                  /* TMC51            */
    unsigned char  TMC52;                                  /* TMC52            */
    unsigned char  TMC53;                                  /* TMC53            */
    unsigned char  TMC54;                                  /* TMC54            */
    unsigned char  TMC55;                                  /* TMC55            */
    unsigned char  TMC56;                                  /* TMC56            */
    unsigned char  TMC57;                                  /* TMC57            */
    unsigned char  TMC58;                                  /* TMC58            */
    unsigned char  TMC59;                                  /* TMC59            */
    unsigned char  TMC60;                                  /* TMC60            */
    unsigned char  TMC61;                                  /* TMC61            */
    unsigned char  TMC62;                                  /* TMC62            */
    unsigned char  TMC63;                                  /* TMC63            */
    unsigned char  TMC64;                                  /* TMC64            */
    unsigned char  TMC65;                                  /* TMC65            */
    unsigned char  TMC66;                                  /* TMC66            */
    unsigned char  TMC67;                                  /* TMC67            */
    unsigned char  TMC68;                                  /* TMC68            */
    unsigned char  TMC69;                                  /* TMC69            */
    unsigned char  TMC70;                                  /* TMC70            */
    unsigned char  TMC71;                                  /* TMC71            */
    unsigned char  TMC72;                                  /* TMC72            */
    unsigned char  TMC73;                                  /* TMC73            */
    unsigned char  TMC74;                                  /* TMC74            */
    unsigned char  TMC75;                                  /* TMC75            */
    unsigned char  TMC76;                                  /* TMC76            */
    unsigned char  TMC77;                                  /* TMC77            */
    unsigned char  TMC78;                                  /* TMC78            */
    unsigned char  TMC79;                                  /* TMC79            */
    unsigned char  TMC80;                                  /* TMC80            */
    unsigned char  TMC81;                                  /* TMC81            */
    unsigned char  TMC82;                                  /* TMC82            */
    unsigned char  TMC83;                                  /* TMC83            */
    unsigned char  TMC84;                                  /* TMC84            */
    unsigned char  TMC85;                                  /* TMC85            */
    unsigned char  TMC86;                                  /* TMC86            */
    unsigned char  TMC87;                                  /* TMC87            */
    unsigned char  TMC88;                                  /* TMC88            */
    unsigned char  TMC89;                                  /* TMC89            */
    unsigned char  TMC90;                                  /* TMC90            */
    unsigned char  TMC91;                                  /* TMC91            */
    unsigned char  TMC92;                                  /* TMC92            */
    unsigned char  TMC93;                                  /* TMC93            */
    unsigned char  TMC94;                                  /* TMC94            */
    unsigned char  TMC95;                                  /* TMC95            */
    unsigned char  dummy279[32];                           /* Reserved         */
    unsigned char  TMSTS0;                                 /* TMSTS0           */
    unsigned char  TMSTS1;                                 /* TMSTS1           */
    unsigned char  TMSTS2;                                 /* TMSTS2           */
    unsigned char  TMSTS3;                                 /* TMSTS3           */
    unsigned char  TMSTS4;                                 /* TMSTS4           */
    unsigned char  TMSTS5;                                 /* TMSTS5           */
    unsigned char  TMSTS6;                                 /* TMSTS6           */
    unsigned char  TMSTS7;                                 /* TMSTS7           */
    unsigned char  TMSTS8;                                 /* TMSTS8           */
    unsigned char  TMSTS9;                                 /* TMSTS9           */
    unsigned char  TMSTS10;                                /* TMSTS10          */
    unsigned char  TMSTS11;                                /* TMSTS11          */
    unsigned char  TMSTS12;                                /* TMSTS12          */
    unsigned char  TMSTS13;                                /* TMSTS13          */
    unsigned char  TMSTS14;                                /* TMSTS14          */
    unsigned char  TMSTS15;                                /* TMSTS15          */
    unsigned char  TMSTS16;                                /* TMSTS16          */
    unsigned char  TMSTS17;                                /* TMSTS17          */
    unsigned char  TMSTS18;                                /* TMSTS18          */
    unsigned char  TMSTS19;                                /* TMSTS19          */
    unsigned char  TMSTS20;                                /* TMSTS20          */
    unsigned char  TMSTS21;                                /* TMSTS21          */
    unsigned char  TMSTS22;                                /* TMSTS22          */
    unsigned char  TMSTS23;                                /* TMSTS23          */
    unsigned char  TMSTS24;                                /* TMSTS24          */
    unsigned char  TMSTS25;                                /* TMSTS25          */
    unsigned char  TMSTS26;                                /* TMSTS26          */
    unsigned char  TMSTS27;                                /* TMSTS27          */
    unsigned char  TMSTS28;                                /* TMSTS28          */
    unsigned char  TMSTS29;                                /* TMSTS29          */
    unsigned char  TMSTS30;                                /* TMSTS30          */
    unsigned char  TMSTS31;                                /* TMSTS31          */
    unsigned char  TMSTS32;                                /* TMSTS32          */
    unsigned char  TMSTS33;                                /* TMSTS33          */
    unsigned char  TMSTS34;                                /* TMSTS34          */
    unsigned char  TMSTS35;                                /* TMSTS35          */
    unsigned char  TMSTS36;                                /* TMSTS36          */
    unsigned char  TMSTS37;                                /* TMSTS37          */
    unsigned char  TMSTS38;                                /* TMSTS38          */
    unsigned char  TMSTS39;                                /* TMSTS39          */
    unsigned char  TMSTS40;                                /* TMSTS40          */
    unsigned char  TMSTS41;                                /* TMSTS41          */
    unsigned char  TMSTS42;                                /* TMSTS42          */
    unsigned char  TMSTS43;                                /* TMSTS43          */
    unsigned char  TMSTS44;                                /* TMSTS44          */
    unsigned char  TMSTS45;                                /* TMSTS45          */
    unsigned char  TMSTS46;                                /* TMSTS46          */
    unsigned char  TMSTS47;                                /* TMSTS47          */
    unsigned char  TMSTS48;                                /* TMSTS48          */
    unsigned char  TMSTS49;                                /* TMSTS49          */
    unsigned char  TMSTS50;                                /* TMSTS50          */
    unsigned char  TMSTS51;                                /* TMSTS51          */
    unsigned char  TMSTS52;                                /* TMSTS52          */
    unsigned char  TMSTS53;                                /* TMSTS53          */
    unsigned char  TMSTS54;                                /* TMSTS54          */
    unsigned char  TMSTS55;                                /* TMSTS55          */
    unsigned char  TMSTS56;                                /* TMSTS56          */
    unsigned char  TMSTS57;                                /* TMSTS57          */
    unsigned char  TMSTS58;                                /* TMSTS58          */
    unsigned char  TMSTS59;                                /* TMSTS59          */
    unsigned char  TMSTS60;                                /* TMSTS60          */
    unsigned char  TMSTS61;                                /* TMSTS61          */
    unsigned char  TMSTS62;                                /* TMSTS62          */
    unsigned char  TMSTS63;                                /* TMSTS63          */
    unsigned char  TMSTS64;                                /* TMSTS64          */
    unsigned char  TMSTS65;                                /* TMSTS65          */
    unsigned char  TMSTS66;                                /* TMSTS66          */
    unsigned char  TMSTS67;                                /* TMSTS67          */
    unsigned char  TMSTS68;                                /* TMSTS68          */
    unsigned char  TMSTS69;                                /* TMSTS69          */
    unsigned char  TMSTS70;                                /* TMSTS70          */
    unsigned char  TMSTS71;                                /* TMSTS71          */
    unsigned char  TMSTS72;                                /* TMSTS72          */
    unsigned char  TMSTS73;                                /* TMSTS73          */
    unsigned char  TMSTS74;                                /* TMSTS74          */
    unsigned char  TMSTS75;                                /* TMSTS75          */
    unsigned char  TMSTS76;                                /* TMSTS76          */
    unsigned char  TMSTS77;                                /* TMSTS77          */
    unsigned char  TMSTS78;                                /* TMSTS78          */
    unsigned char  TMSTS79;                                /* TMSTS79          */
    unsigned char  TMSTS80;                                /* TMSTS80          */
    unsigned char  TMSTS81;                                /* TMSTS81          */
    unsigned char  TMSTS82;                                /* TMSTS82          */
    unsigned char  TMSTS83;                                /* TMSTS83          */
    unsigned char  TMSTS84;                                /* TMSTS84          */
    unsigned char  TMSTS85;                                /* TMSTS85          */
    unsigned char  TMSTS86;                                /* TMSTS86          */
    unsigned char  TMSTS87;                                /* TMSTS87          */
    unsigned char  TMSTS88;                                /* TMSTS88          */
    unsigned char  TMSTS89;                                /* TMSTS89          */
    unsigned char  TMSTS90;                                /* TMSTS90          */
    unsigned char  TMSTS91;                                /* TMSTS91          */
    unsigned char  TMSTS92;                                /* TMSTS92          */
    unsigned char  TMSTS93;                                /* TMSTS93          */
    unsigned char  TMSTS94;                                /* TMSTS94          */
    unsigned char  TMSTS95;                                /* TMSTS95          */
    unsigned char  dummy280[32];                           /* Reserved         */
    union __tag256 TMTRSTS0;                               /* TMTRSTS0         */
    union __tag256 TMTRSTS1;                               /* TMTRSTS1         */
    union __tag256 TMTRSTS2;                               /* TMTRSTS2         */
    unsigned char  dummy281[4];                            /* Reserved         */
    union __tag256 TMTARSTS0;                              /* TMTARSTS0        */
    union __tag256 TMTARSTS1;                              /* TMTARSTS1        */
    union __tag256 TMTARSTS2;                              /* TMTARSTS2        */
    unsigned char  dummy282[4];                            /* Reserved         */
    union __tag256 TMTCSTS0;                               /* TMTCSTS0         */
    union __tag256 TMTCSTS1;                               /* TMTCSTS1         */
    union __tag256 TMTCSTS2;                               /* TMTCSTS2         */
    unsigned char  dummy283[4];                            /* Reserved         */
    union __tag256 TMTASTS0;                               /* TMTASTS0         */
    union __tag256 TMTASTS1;                               /* TMTASTS1         */
    union __tag256 TMTASTS2;                               /* TMTASTS2         */
    unsigned char  dummy284[4];                            /* Reserved         */
    union __tag256 TMIEC0;                                 /* TMIEC0           */
    union __tag256 TMIEC1;                                 /* TMIEC1           */
    union __tag256 TMIEC2;                                 /* TMIEC2           */
    unsigned char  dummy285[4];                            /* Reserved         */
    union __tag256 TXQCC0;                                 /* TXQCC0           */
    union __tag256 TXQCC1;                                 /* TXQCC1           */
    union __tag256 TXQCC2;                                 /* TXQCC2           */
    union __tag256 TXQCC3;                                 /* TXQCC3           */
    union __tag256 TXQCC4;                                 /* TXQCC4           */
    union __tag256 TXQCC5;                                 /* TXQCC5           */
    unsigned char  dummy286[8];                            /* Reserved         */
    union __tag256 TXQSTS0;                                /* TXQSTS0          */
    union __tag256 TXQSTS1;                                /* TXQSTS1          */
    union __tag256 TXQSTS2;                                /* TXQSTS2          */
    union __tag256 TXQSTS3;                                /* TXQSTS3          */
    union __tag256 TXQSTS4;                                /* TXQSTS4          */
    union __tag256 TXQSTS5;                                /* TXQSTS5          */
    unsigned char  dummy287[8];                            /* Reserved         */
    union __tag256 TXQPCTR0;                               /* TXQPCTR0         */
    union __tag256 TXQPCTR1;                               /* TXQPCTR1         */
    union __tag256 TXQPCTR2;                               /* TXQPCTR2         */
    union __tag256 TXQPCTR3;                               /* TXQPCTR3         */
    union __tag256 TXQPCTR4;                               /* TXQPCTR4         */
    union __tag256 TXQPCTR5;                               /* TXQPCTR5         */
    unsigned char  dummy288[8];                            /* Reserved         */
    union __tag256 THLCC0;                                 /* THLCC0           */
    union __tag256 THLCC1;                                 /* THLCC1           */
    union __tag256 THLCC2;                                 /* THLCC2           */
    union __tag256 THLCC3;                                 /* THLCC3           */
    union __tag256 THLCC4;                                 /* THLCC4           */
    union __tag256 THLCC5;                                 /* THLCC5           */
    unsigned char  dummy289[8];                            /* Reserved         */
    union __tag256 THLSTS0;                                /* THLSTS0          */
    union __tag256 THLSTS1;                                /* THLSTS1          */
    union __tag256 THLSTS2;                                /* THLSTS2          */
    union __tag256 THLSTS3;                                /* THLSTS3          */
    union __tag256 THLSTS4;                                /* THLSTS4          */
    union __tag256 THLSTS5;                                /* THLSTS5          */
    unsigned char  dummy290[8];                            /* Reserved         */
    union __tag256 THLPCTR0;                               /* THLPCTR0         */
    union __tag256 THLPCTR1;                               /* THLPCTR1         */
    union __tag256 THLPCTR2;                               /* THLPCTR2         */
    union __tag256 THLPCTR3;                               /* THLPCTR3         */
    union __tag256 THLPCTR4;                               /* THLPCTR4         */
    union __tag256 THLPCTR5;                               /* THLPCTR5         */
    unsigned char  dummy291[8];                            /* Reserved         */
    union __tag256 GTINTSTS0;                              /* GTINTSTS0        */
    union __tag256 GTINTSTS1;                              /* GTINTSTS1        */
    union __tag256 GTSTCFG;                                /* GTSTCFG          */
    union __tag256 GTSTCTR;                                /* GTSTCTR          */
    unsigned char  dummy292[4];                            /* Reserved         */
    union __tag256 GFDCFG;                                 /* GFDCFG           */
    unsigned char  dummy293[4];                            /* Reserved         */
    union __tag264 GLOCKK;                                 /* GLOCKK           */
    unsigned char  dummy294[128];                          /* Reserved         */
    union __tag256 GAFLID0;                                /* GAFLID0          */
    union __tag256 GAFLM0;                                 /* GAFLM0           */
    union __tag256 GAFLP00;                                /* GAFLP00          */
    union __tag256 GAFLP10;                                /* GAFLP10          */
    union __tag256 GAFLID1;                                /* GAFLID1          */
    union __tag256 GAFLM1;                                 /* GAFLM1           */
    union __tag256 GAFLP01;                                /* GAFLP01          */
    union __tag256 GAFLP11;                                /* GAFLP11          */
    union __tag256 GAFLID2;                                /* GAFLID2          */
    union __tag256 GAFLM2;                                 /* GAFLM2           */
    union __tag256 GAFLP02;                                /* GAFLP02          */
    union __tag256 GAFLP12;                                /* GAFLP12          */
    union __tag256 GAFLID3;                                /* GAFLID3          */
    union __tag256 GAFLM3;                                 /* GAFLM3           */
    union __tag256 GAFLP03;                                /* GAFLP03          */
    union __tag256 GAFLP13;                                /* GAFLP13          */
    union __tag256 GAFLID4;                                /* GAFLID4          */
    union __tag256 GAFLM4;                                 /* GAFLM4           */
    union __tag256 GAFLP04;                                /* GAFLP04          */
    union __tag256 GAFLP14;                                /* GAFLP14          */
    union __tag256 GAFLID5;                                /* GAFLID5          */
    union __tag256 GAFLM5;                                 /* GAFLM5           */
    union __tag256 GAFLP05;                                /* GAFLP05          */
    union __tag256 GAFLP15;                                /* GAFLP15          */
    union __tag256 GAFLID6;                                /* GAFLID6          */
    union __tag256 GAFLM6;                                 /* GAFLM6           */
    union __tag256 GAFLP06;                                /* GAFLP06          */
    union __tag256 GAFLP16;                                /* GAFLP16          */
    union __tag256 GAFLID7;                                /* GAFLID7          */
    union __tag256 GAFLM7;                                 /* GAFLM7           */
    union __tag256 GAFLP07;                                /* GAFLP07          */
    union __tag256 GAFLP17;                                /* GAFLP17          */
    union __tag256 GAFLID8;                                /* GAFLID8          */
    union __tag256 GAFLM8;                                 /* GAFLM8           */
    union __tag256 GAFLP08;                                /* GAFLP08          */
    union __tag256 GAFLP18;                                /* GAFLP18          */
    union __tag256 GAFLID9;                                /* GAFLID9          */
    union __tag256 GAFLM9;                                 /* GAFLM9           */
    union __tag256 GAFLP09;                                /* GAFLP09          */
    union __tag256 GAFLP19;                                /* GAFLP19          */
    union __tag256 GAFLID10;                               /* GAFLID10         */
    union __tag256 GAFLM10;                                /* GAFLM10          */
    union __tag256 GAFLP010;                               /* GAFLP010         */
    union __tag256 GAFLP110;                               /* GAFLP110         */
    union __tag256 GAFLID11;                               /* GAFLID11         */
    union __tag256 GAFLM11;                                /* GAFLM11          */
    union __tag256 GAFLP011;                               /* GAFLP011         */
    union __tag256 GAFLP111;                               /* GAFLP111         */
    union __tag256 GAFLID12;                               /* GAFLID12         */
    union __tag256 GAFLM12;                                /* GAFLM12          */
    union __tag256 GAFLP012;                               /* GAFLP012         */
    union __tag256 GAFLP112;                               /* GAFLP112         */
    union __tag256 GAFLID13;                               /* GAFLID13         */
    union __tag256 GAFLM13;                                /* GAFLM13          */
    union __tag256 GAFLP013;                               /* GAFLP013         */
    union __tag256 GAFLP113;                               /* GAFLP113         */
    union __tag256 GAFLID14;                               /* GAFLID14         */
    union __tag256 GAFLM14;                                /* GAFLM14          */
    union __tag256 GAFLP014;                               /* GAFLP014         */
    union __tag256 GAFLP114;                               /* GAFLP114         */
    union __tag256 GAFLID15;                               /* GAFLID15         */
    union __tag256 GAFLM15;                                /* GAFLM15          */
    union __tag256 GAFLP015;                               /* GAFLP015         */
    union __tag256 GAFLP115;                               /* GAFLP115         */
    union __tag256 RMID0;                                  /* RMID0            */
    union __tag256 RMPTR0;                                 /* RMPTR0           */
    union __tag256 RMDF00;                                 /* RMDF00           */
    union __tag256 RMDF10;                                 /* RMDF10           */
    union __tag256 RMID1;                                  /* RMID1            */
    union __tag256 RMPTR1;                                 /* RMPTR1           */
    union __tag256 RMDF01;                                 /* RMDF01           */
    union __tag256 RMDF11;                                 /* RMDF11           */
    union __tag256 RMID2;                                  /* RMID2            */
    union __tag256 RMPTR2;                                 /* RMPTR2           */
    union __tag256 RMDF02;                                 /* RMDF02           */
    union __tag256 RMDF12;                                 /* RMDF12           */
    union __tag256 RMID3;                                  /* RMID3            */
    union __tag256 RMPTR3;                                 /* RMPTR3           */
    union __tag256 RMDF03;                                 /* RMDF03           */
    union __tag256 RMDF13;                                 /* RMDF13           */
    union __tag256 RMID4;                                  /* RMID4            */
    union __tag256 RMPTR4;                                 /* RMPTR4           */
    union __tag256 RMDF04;                                 /* RMDF04           */
    union __tag256 RMDF14;                                 /* RMDF14           */
    union __tag256 RMID5;                                  /* RMID5            */
    union __tag256 RMPTR5;                                 /* RMPTR5           */
    union __tag256 RMDF05;                                 /* RMDF05           */
    union __tag256 RMDF15;                                 /* RMDF15           */
    union __tag256 RMID6;                                  /* RMID6            */
    union __tag256 RMPTR6;                                 /* RMPTR6           */
    union __tag256 RMDF06;                                 /* RMDF06           */
    union __tag256 RMDF16;                                 /* RMDF16           */
    union __tag256 RMID7;                                  /* RMID7            */
    union __tag256 RMPTR7;                                 /* RMPTR7           */
    union __tag256 RMDF07;                                 /* RMDF07           */
    union __tag256 RMDF17;                                 /* RMDF17           */
    union __tag256 RMID8;                                  /* RMID8            */
    union __tag256 RMPTR8;                                 /* RMPTR8           */
    union __tag256 RMDF08;                                 /* RMDF08           */
    union __tag256 RMDF18;                                 /* RMDF18           */
    union __tag256 RMID9;                                  /* RMID9            */
    union __tag256 RMPTR9;                                 /* RMPTR9           */
    union __tag256 RMDF09;                                 /* RMDF09           */
    union __tag256 RMDF19;                                 /* RMDF19           */
    union __tag256 RMID10;                                 /* RMID10           */
    union __tag256 RMPTR10;                                /* RMPTR10          */
    union __tag256 RMDF010;                                /* RMDF010          */
    union __tag256 RMDF110;                                /* RMDF110          */
    union __tag256 RMID11;                                 /* RMID11           */
    union __tag256 RMPTR11;                                /* RMPTR11          */
    union __tag256 RMDF011;                                /* RMDF011          */
    union __tag256 RMDF111;                                /* RMDF111          */
    union __tag256 RMID12;                                 /* RMID12           */
    union __tag256 RMPTR12;                                /* RMPTR12          */
    union __tag256 RMDF012;                                /* RMDF012          */
    union __tag256 RMDF112;                                /* RMDF112          */
    union __tag256 RMID13;                                 /* RMID13           */
    union __tag256 RMPTR13;                                /* RMPTR13          */
    union __tag256 RMDF013;                                /* RMDF013          */
    union __tag256 RMDF113;                                /* RMDF113          */
    union __tag256 RMID14;                                 /* RMID14           */
    union __tag256 RMPTR14;                                /* RMPTR14          */
    union __tag256 RMDF014;                                /* RMDF014          */
    union __tag256 RMDF114;                                /* RMDF114          */
    union __tag256 RMID15;                                 /* RMID15           */
    union __tag256 RMPTR15;                                /* RMPTR15          */
    union __tag256 RMDF015;                                /* RMDF015          */
    union __tag256 RMDF115;                                /* RMDF115          */
    union __tag256 RMID16;                                 /* RMID16           */
    union __tag256 RMPTR16;                                /* RMPTR16          */
    union __tag256 RMDF016;                                /* RMDF016          */
    union __tag256 RMDF116;                                /* RMDF116          */
    union __tag256 RMID17;                                 /* RMID17           */
    union __tag256 RMPTR17;                                /* RMPTR17          */
    union __tag256 RMDF017;                                /* RMDF017          */
    union __tag256 RMDF117;                                /* RMDF117          */
    union __tag256 RMID18;                                 /* RMID18           */
    union __tag256 RMPTR18;                                /* RMPTR18          */
    union __tag256 RMDF018;                                /* RMDF018          */
    union __tag256 RMDF118;                                /* RMDF118          */
    union __tag256 RMID19;                                 /* RMID19           */
    union __tag256 RMPTR19;                                /* RMPTR19          */
    union __tag256 RMDF019;                                /* RMDF019          */
    union __tag256 RMDF119;                                /* RMDF119          */
    union __tag256 RMID20;                                 /* RMID20           */
    union __tag256 RMPTR20;                                /* RMPTR20          */
    union __tag256 RMDF020;                                /* RMDF020          */
    union __tag256 RMDF120;                                /* RMDF120          */
    union __tag256 RMID21;                                 /* RMID21           */
    union __tag256 RMPTR21;                                /* RMPTR21          */
    union __tag256 RMDF021;                                /* RMDF021          */
    union __tag256 RMDF121;                                /* RMDF121          */
    union __tag256 RMID22;                                 /* RMID22           */
    union __tag256 RMPTR22;                                /* RMPTR22          */
    union __tag256 RMDF022;                                /* RMDF022          */
    union __tag256 RMDF122;                                /* RMDF122          */
    union __tag256 RMID23;                                 /* RMID23           */
    union __tag256 RMPTR23;                                /* RMPTR23          */
    union __tag256 RMDF023;                                /* RMDF023          */
    union __tag256 RMDF123;                                /* RMDF123          */
    union __tag256 RMID24;                                 /* RMID24           */
    union __tag256 RMPTR24;                                /* RMPTR24          */
    union __tag256 RMDF024;                                /* RMDF024          */
    union __tag256 RMDF124;                                /* RMDF124          */
    union __tag256 RMID25;                                 /* RMID25           */
    union __tag256 RMPTR25;                                /* RMPTR25          */
    union __tag256 RMDF025;                                /* RMDF025          */
    union __tag256 RMDF125;                                /* RMDF125          */
    union __tag256 RMID26;                                 /* RMID26           */
    union __tag256 RMPTR26;                                /* RMPTR26          */
    union __tag256 RMDF026;                                /* RMDF026          */
    union __tag256 RMDF126;                                /* RMDF126          */
    union __tag256 RMID27;                                 /* RMID27           */
    union __tag256 RMPTR27;                                /* RMPTR27          */
    union __tag256 RMDF027;                                /* RMDF027          */
    union __tag256 RMDF127;                                /* RMDF127          */
    union __tag256 RMID28;                                 /* RMID28           */
    union __tag256 RMPTR28;                                /* RMPTR28          */
    union __tag256 RMDF028;                                /* RMDF028          */
    union __tag256 RMDF128;                                /* RMDF128          */
    union __tag256 RMID29;                                 /* RMID29           */
    union __tag256 RMPTR29;                                /* RMPTR29          */
    union __tag256 RMDF029;                                /* RMDF029          */
    union __tag256 RMDF129;                                /* RMDF129          */
    union __tag256 RMID30;                                 /* RMID30           */
    union __tag256 RMPTR30;                                /* RMPTR30          */
    union __tag256 RMDF030;                                /* RMDF030          */
    union __tag256 RMDF130;                                /* RMDF130          */
    union __tag256 RMID31;                                 /* RMID31           */
    union __tag256 RMPTR31;                                /* RMPTR31          */
    union __tag256 RMDF031;                                /* RMDF031          */
    union __tag256 RMDF131;                                /* RMDF131          */
    union __tag256 RMID32;                                 /* RMID32           */
    union __tag256 RMPTR32;                                /* RMPTR32          */
    union __tag256 RMDF032;                                /* RMDF032          */
    union __tag256 RMDF132;                                /* RMDF132          */
    union __tag256 RMID33;                                 /* RMID33           */
    union __tag256 RMPTR33;                                /* RMPTR33          */
    union __tag256 RMDF033;                                /* RMDF033          */
    union __tag256 RMDF133;                                /* RMDF133          */
    union __tag256 RMID34;                                 /* RMID34           */
    union __tag256 RMPTR34;                                /* RMPTR34          */
    union __tag256 RMDF034;                                /* RMDF034          */
    union __tag256 RMDF134;                                /* RMDF134          */
    union __tag256 RMID35;                                 /* RMID35           */
    union __tag256 RMPTR35;                                /* RMPTR35          */
    union __tag256 RMDF035;                                /* RMDF035          */
    union __tag256 RMDF135;                                /* RMDF135          */
    union __tag256 RMID36;                                 /* RMID36           */
    union __tag256 RMPTR36;                                /* RMPTR36          */
    union __tag256 RMDF036;                                /* RMDF036          */
    union __tag256 RMDF136;                                /* RMDF136          */
    union __tag256 RMID37;                                 /* RMID37           */
    union __tag256 RMPTR37;                                /* RMPTR37          */
    union __tag256 RMDF037;                                /* RMDF037          */
    union __tag256 RMDF137;                                /* RMDF137          */
    union __tag256 RMID38;                                 /* RMID38           */
    union __tag256 RMPTR38;                                /* RMPTR38          */
    union __tag256 RMDF038;                                /* RMDF038          */
    union __tag256 RMDF138;                                /* RMDF138          */
    union __tag256 RMID39;                                 /* RMID39           */
    union __tag256 RMPTR39;                                /* RMPTR39          */
    union __tag256 RMDF039;                                /* RMDF039          */
    union __tag256 RMDF139;                                /* RMDF139          */
    union __tag256 RMID40;                                 /* RMID40           */
    union __tag256 RMPTR40;                                /* RMPTR40          */
    union __tag256 RMDF040;                                /* RMDF040          */
    union __tag256 RMDF140;                                /* RMDF140          */
    union __tag256 RMID41;                                 /* RMID41           */
    union __tag256 RMPTR41;                                /* RMPTR41          */
    union __tag256 RMDF041;                                /* RMDF041          */
    union __tag256 RMDF141;                                /* RMDF141          */
    union __tag256 RMID42;                                 /* RMID42           */
    union __tag256 RMPTR42;                                /* RMPTR42          */
    union __tag256 RMDF042;                                /* RMDF042          */
    union __tag256 RMDF142;                                /* RMDF142          */
    union __tag256 RMID43;                                 /* RMID43           */
    union __tag256 RMPTR43;                                /* RMPTR43          */
    union __tag256 RMDF043;                                /* RMDF043          */
    union __tag256 RMDF143;                                /* RMDF143          */
    union __tag256 RMID44;                                 /* RMID44           */
    union __tag256 RMPTR44;                                /* RMPTR44          */
    union __tag256 RMDF044;                                /* RMDF044          */
    union __tag256 RMDF144;                                /* RMDF144          */
    union __tag256 RMID45;                                 /* RMID45           */
    union __tag256 RMPTR45;                                /* RMPTR45          */
    union __tag256 RMDF045;                                /* RMDF045          */
    union __tag256 RMDF145;                                /* RMDF145          */
    union __tag256 RMID46;                                 /* RMID46           */
    union __tag256 RMPTR46;                                /* RMPTR46          */
    union __tag256 RMDF046;                                /* RMDF046          */
    union __tag256 RMDF146;                                /* RMDF146          */
    union __tag256 RMID47;                                 /* RMID47           */
    union __tag256 RMPTR47;                                /* RMPTR47          */
    union __tag256 RMDF047;                                /* RMDF047          */
    union __tag256 RMDF147;                                /* RMDF147          */
    union __tag256 RMID48;                                 /* RMID48           */
    union __tag256 RMPTR48;                                /* RMPTR48          */
    union __tag256 RMDF048;                                /* RMDF048          */
    union __tag256 RMDF148;                                /* RMDF148          */
    union __tag256 RMID49;                                 /* RMID49           */
    union __tag256 RMPTR49;                                /* RMPTR49          */
    union __tag256 RMDF049;                                /* RMDF049          */
    union __tag256 RMDF149;                                /* RMDF149          */
    union __tag256 RMID50;                                 /* RMID50           */
    union __tag256 RMPTR50;                                /* RMPTR50          */
    union __tag256 RMDF050;                                /* RMDF050          */
    union __tag256 RMDF150;                                /* RMDF150          */
    union __tag256 RMID51;                                 /* RMID51           */
    union __tag256 RMPTR51;                                /* RMPTR51          */
    union __tag256 RMDF051;                                /* RMDF051          */
    union __tag256 RMDF151;                                /* RMDF151          */
    union __tag256 RMID52;                                 /* RMID52           */
    union __tag256 RMPTR52;                                /* RMPTR52          */
    union __tag256 RMDF052;                                /* RMDF052          */
    union __tag256 RMDF152;                                /* RMDF152          */
    union __tag256 RMID53;                                 /* RMID53           */
    union __tag256 RMPTR53;                                /* RMPTR53          */
    union __tag256 RMDF053;                                /* RMDF053          */
    union __tag256 RMDF153;                                /* RMDF153          */
    union __tag256 RMID54;                                 /* RMID54           */
    union __tag256 RMPTR54;                                /* RMPTR54          */
    union __tag256 RMDF054;                                /* RMDF054          */
    union __tag256 RMDF154;                                /* RMDF154          */
    union __tag256 RMID55;                                 /* RMID55           */
    union __tag256 RMPTR55;                                /* RMPTR55          */
    union __tag256 RMDF055;                                /* RMDF055          */
    union __tag256 RMDF155;                                /* RMDF155          */
    union __tag256 RMID56;                                 /* RMID56           */
    union __tag256 RMPTR56;                                /* RMPTR56          */
    union __tag256 RMDF056;                                /* RMDF056          */
    union __tag256 RMDF156;                                /* RMDF156          */
    union __tag256 RMID57;                                 /* RMID57           */
    union __tag256 RMPTR57;                                /* RMPTR57          */
    union __tag256 RMDF057;                                /* RMDF057          */
    union __tag256 RMDF157;                                /* RMDF157          */
    union __tag256 RMID58;                                 /* RMID58           */
    union __tag256 RMPTR58;                                /* RMPTR58          */
    union __tag256 RMDF058;                                /* RMDF058          */
    union __tag256 RMDF158;                                /* RMDF158          */
    union __tag256 RMID59;                                 /* RMID59           */
    union __tag256 RMPTR59;                                /* RMPTR59          */
    union __tag256 RMDF059;                                /* RMDF059          */
    union __tag256 RMDF159;                                /* RMDF159          */
    union __tag256 RMID60;                                 /* RMID60           */
    union __tag256 RMPTR60;                                /* RMPTR60          */
    union __tag256 RMDF060;                                /* RMDF060          */
    union __tag256 RMDF160;                                /* RMDF160          */
    union __tag256 RMID61;                                 /* RMID61           */
    union __tag256 RMPTR61;                                /* RMPTR61          */
    union __tag256 RMDF061;                                /* RMDF061          */
    union __tag256 RMDF161;                                /* RMDF161          */
    union __tag256 RMID62;                                 /* RMID62           */
    union __tag256 RMPTR62;                                /* RMPTR62          */
    union __tag256 RMDF062;                                /* RMDF062          */
    union __tag256 RMDF162;                                /* RMDF162          */
    union __tag256 RMID63;                                 /* RMID63           */
    union __tag256 RMPTR63;                                /* RMPTR63          */
    union __tag256 RMDF063;                                /* RMDF063          */
    union __tag256 RMDF163;                                /* RMDF163          */
    union __tag256 RMID64;                                 /* RMID64           */
    union __tag256 RMPTR64;                                /* RMPTR64          */
    union __tag256 RMDF064;                                /* RMDF064          */
    union __tag256 RMDF164;                                /* RMDF164          */
    union __tag256 RMID65;                                 /* RMID65           */
    union __tag256 RMPTR65;                                /* RMPTR65          */
    union __tag256 RMDF065;                                /* RMDF065          */
    union __tag256 RMDF165;                                /* RMDF165          */
    union __tag256 RMID66;                                 /* RMID66           */
    union __tag256 RMPTR66;                                /* RMPTR66          */
    union __tag256 RMDF066;                                /* RMDF066          */
    union __tag256 RMDF166;                                /* RMDF166          */
    union __tag256 RMID67;                                 /* RMID67           */
    union __tag256 RMPTR67;                                /* RMPTR67          */
    union __tag256 RMDF067;                                /* RMDF067          */
    union __tag256 RMDF167;                                /* RMDF167          */
    union __tag256 RMID68;                                 /* RMID68           */
    union __tag256 RMPTR68;                                /* RMPTR68          */
    union __tag256 RMDF068;                                /* RMDF068          */
    union __tag256 RMDF168;                                /* RMDF168          */
    union __tag256 RMID69;                                 /* RMID69           */
    union __tag256 RMPTR69;                                /* RMPTR69          */
    union __tag256 RMDF069;                                /* RMDF069          */
    union __tag256 RMDF169;                                /* RMDF169          */
    union __tag256 RMID70;                                 /* RMID70           */
    union __tag256 RMPTR70;                                /* RMPTR70          */
    union __tag256 RMDF070;                                /* RMDF070          */
    union __tag256 RMDF170;                                /* RMDF170          */
    union __tag256 RMID71;                                 /* RMID71           */
    union __tag256 RMPTR71;                                /* RMPTR71          */
    union __tag256 RMDF071;                                /* RMDF071          */
    union __tag256 RMDF171;                                /* RMDF171          */
    union __tag256 RMID72;                                 /* RMID72           */
    union __tag256 RMPTR72;                                /* RMPTR72          */
    union __tag256 RMDF072;                                /* RMDF072          */
    union __tag256 RMDF172;                                /* RMDF172          */
    union __tag256 RMID73;                                 /* RMID73           */
    union __tag256 RMPTR73;                                /* RMPTR73          */
    union __tag256 RMDF073;                                /* RMDF073          */
    union __tag256 RMDF173;                                /* RMDF173          */
    union __tag256 RMID74;                                 /* RMID74           */
    union __tag256 RMPTR74;                                /* RMPTR74          */
    union __tag256 RMDF074;                                /* RMDF074          */
    union __tag256 RMDF174;                                /* RMDF174          */
    union __tag256 RMID75;                                 /* RMID75           */
    union __tag256 RMPTR75;                                /* RMPTR75          */
    union __tag256 RMDF075;                                /* RMDF075          */
    union __tag256 RMDF175;                                /* RMDF175          */
    union __tag256 RMID76;                                 /* RMID76           */
    union __tag256 RMPTR76;                                /* RMPTR76          */
    union __tag256 RMDF076;                                /* RMDF076          */
    union __tag256 RMDF176;                                /* RMDF176          */
    union __tag256 RMID77;                                 /* RMID77           */
    union __tag256 RMPTR77;                                /* RMPTR77          */
    union __tag256 RMDF077;                                /* RMDF077          */
    union __tag256 RMDF177;                                /* RMDF177          */
    union __tag256 RMID78;                                 /* RMID78           */
    union __tag256 RMPTR78;                                /* RMPTR78          */
    union __tag256 RMDF078;                                /* RMDF078          */
    union __tag256 RMDF178;                                /* RMDF178          */
    union __tag256 RMID79;                                 /* RMID79           */
    union __tag256 RMPTR79;                                /* RMPTR79          */
    union __tag256 RMDF079;                                /* RMDF079          */
    union __tag256 RMDF179;                                /* RMDF179          */
    union __tag256 RMID80;                                 /* RMID80           */
    union __tag256 RMPTR80;                                /* RMPTR80          */
    union __tag256 RMDF080;                                /* RMDF080          */
    union __tag256 RMDF180;                                /* RMDF180          */
    union __tag256 RMID81;                                 /* RMID81           */
    union __tag256 RMPTR81;                                /* RMPTR81          */
    union __tag256 RMDF081;                                /* RMDF081          */
    union __tag256 RMDF181;                                /* RMDF181          */
    union __tag256 RMID82;                                 /* RMID82           */
    union __tag256 RMPTR82;                                /* RMPTR82          */
    union __tag256 RMDF082;                                /* RMDF082          */
    union __tag256 RMDF182;                                /* RMDF182          */
    union __tag256 RMID83;                                 /* RMID83           */
    union __tag256 RMPTR83;                                /* RMPTR83          */
    union __tag256 RMDF083;                                /* RMDF083          */
    union __tag256 RMDF183;                                /* RMDF183          */
    union __tag256 RMID84;                                 /* RMID84           */
    union __tag256 RMPTR84;                                /* RMPTR84          */
    union __tag256 RMDF084;                                /* RMDF084          */
    union __tag256 RMDF184;                                /* RMDF184          */
    union __tag256 RMID85;                                 /* RMID85           */
    union __tag256 RMPTR85;                                /* RMPTR85          */
    union __tag256 RMDF085;                                /* RMDF085          */
    union __tag256 RMDF185;                                /* RMDF185          */
    union __tag256 RMID86;                                 /* RMID86           */
    union __tag256 RMPTR86;                                /* RMPTR86          */
    union __tag256 RMDF086;                                /* RMDF086          */
    union __tag256 RMDF186;                                /* RMDF186          */
    union __tag256 RMID87;                                 /* RMID87           */
    union __tag256 RMPTR87;                                /* RMPTR87          */
    union __tag256 RMDF087;                                /* RMDF087          */
    union __tag256 RMDF187;                                /* RMDF187          */
    union __tag256 RMID88;                                 /* RMID88           */
    union __tag256 RMPTR88;                                /* RMPTR88          */
    union __tag256 RMDF088;                                /* RMDF088          */
    union __tag256 RMDF188;                                /* RMDF188          */
    union __tag256 RMID89;                                 /* RMID89           */
    union __tag256 RMPTR89;                                /* RMPTR89          */
    union __tag256 RMDF089;                                /* RMDF089          */
    union __tag256 RMDF189;                                /* RMDF189          */
    union __tag256 RMID90;                                 /* RMID90           */
    union __tag256 RMPTR90;                                /* RMPTR90          */
    union __tag256 RMDF090;                                /* RMDF090          */
    union __tag256 RMDF190;                                /* RMDF190          */
    union __tag256 RMID91;                                 /* RMID91           */
    union __tag256 RMPTR91;                                /* RMPTR91          */
    union __tag256 RMDF091;                                /* RMDF091          */
    union __tag256 RMDF191;                                /* RMDF191          */
    union __tag256 RMID92;                                 /* RMID92           */
    union __tag256 RMPTR92;                                /* RMPTR92          */
    union __tag256 RMDF092;                                /* RMDF092          */
    union __tag256 RMDF192;                                /* RMDF192          */
    union __tag256 RMID93;                                 /* RMID93           */
    union __tag256 RMPTR93;                                /* RMPTR93          */
    union __tag256 RMDF093;                                /* RMDF093          */
    union __tag256 RMDF193;                                /* RMDF193          */
    union __tag256 RMID94;                                 /* RMID94           */
    union __tag256 RMPTR94;                                /* RMPTR94          */
    union __tag256 RMDF094;                                /* RMDF094          */
    union __tag256 RMDF194;                                /* RMDF194          */
    union __tag256 RMID95;                                 /* RMID95           */
    union __tag256 RMPTR95;                                /* RMPTR95          */
    union __tag256 RMDF095;                                /* RMDF095          */
    union __tag256 RMDF195;                                /* RMDF195          */
    unsigned char  dummy295[512];                          /* Reserved         */
    union __tag256 RFID0;                                  /* RFID0            */
    union __tag256 RFPTR0;                                 /* RFPTR0           */
    union __tag256 RFDF00;                                 /* RFDF00           */
    union __tag256 RFDF10;                                 /* RFDF10           */
    union __tag256 RFID1;                                  /* RFID1            */
    union __tag256 RFPTR1;                                 /* RFPTR1           */
    union __tag256 RFDF01;                                 /* RFDF01           */
    union __tag256 RFDF11;                                 /* RFDF11           */
    union __tag256 RFID2;                                  /* RFID2            */
    union __tag256 RFPTR2;                                 /* RFPTR2           */
    union __tag256 RFDF02;                                 /* RFDF02           */
    union __tag256 RFDF12;                                 /* RFDF12           */
    union __tag256 RFID3;                                  /* RFID3            */
    union __tag256 RFPTR3;                                 /* RFPTR3           */
    union __tag256 RFDF03;                                 /* RFDF03           */
    union __tag256 RFDF13;                                 /* RFDF13           */
    union __tag256 RFID4;                                  /* RFID4            */
    union __tag256 RFPTR4;                                 /* RFPTR4           */
    union __tag256 RFDF04;                                 /* RFDF04           */
    union __tag256 RFDF14;                                 /* RFDF14           */
    union __tag256 RFID5;                                  /* RFID5            */
    union __tag256 RFPTR5;                                 /* RFPTR5           */
    union __tag256 RFDF05;                                 /* RFDF05           */
    union __tag256 RFDF15;                                 /* RFDF15           */
    union __tag256 RFID6;                                  /* RFID6            */
    union __tag256 RFPTR6;                                 /* RFPTR6           */
    union __tag256 RFDF06;                                 /* RFDF06           */
    union __tag256 RFDF16;                                 /* RFDF16           */
    union __tag256 RFID7;                                  /* RFID7            */
    union __tag256 RFPTR7;                                 /* RFPTR7           */
    union __tag256 RFDF07;                                 /* RFDF07           */
    union __tag256 RFDF17;                                 /* RFDF17           */
    union __tag256 CFID0;                                  /* CFID0            */
    union __tag256 CFPTR0;                                 /* CFPTR0           */
    union __tag256 CFDF00;                                 /* CFDF00           */
    union __tag256 CFDF10;                                 /* CFDF10           */
    union __tag256 CFID1;                                  /* CFID1            */
    union __tag256 CFPTR1;                                 /* CFPTR1           */
    union __tag256 CFDF01;                                 /* CFDF01           */
    union __tag256 CFDF11;                                 /* CFDF11           */
    union __tag256 CFID2;                                  /* CFID2            */
    union __tag256 CFPTR2;                                 /* CFPTR2           */
    union __tag256 CFDF02;                                 /* CFDF02           */
    union __tag256 CFDF12;                                 /* CFDF12           */
    union __tag256 CFID3;                                  /* CFID3            */
    union __tag256 CFPTR3;                                 /* CFPTR3           */
    union __tag256 CFDF03;                                 /* CFDF03           */
    union __tag256 CFDF13;                                 /* CFDF13           */
    union __tag256 CFID4;                                  /* CFID4            */
    union __tag256 CFPTR4;                                 /* CFPTR4           */
    union __tag256 CFDF04;                                 /* CFDF04           */
    union __tag256 CFDF14;                                 /* CFDF14           */
    union __tag256 CFID5;                                  /* CFID5            */
    union __tag256 CFPTR5;                                 /* CFPTR5           */
    union __tag256 CFDF05;                                 /* CFDF05           */
    union __tag256 CFDF15;                                 /* CFDF15           */
    union __tag256 CFID6;                                  /* CFID6            */
    union __tag256 CFPTR6;                                 /* CFPTR6           */
    union __tag256 CFDF06;                                 /* CFDF06           */
    union __tag256 CFDF16;                                 /* CFDF16           */
    union __tag256 CFID7;                                  /* CFID7            */
    union __tag256 CFPTR7;                                 /* CFPTR7           */
    union __tag256 CFDF07;                                 /* CFDF07           */
    union __tag256 CFDF17;                                 /* CFDF17           */
    union __tag256 CFID8;                                  /* CFID8            */
    union __tag256 CFPTR8;                                 /* CFPTR8           */
    union __tag256 CFDF08;                                 /* CFDF08           */
    union __tag256 CFDF18;                                 /* CFDF18           */
    union __tag256 CFID9;                                  /* CFID9            */
    union __tag256 CFPTR9;                                 /* CFPTR9           */
    union __tag256 CFDF09;                                 /* CFDF09           */
    union __tag256 CFDF19;                                 /* CFDF19           */
    union __tag256 CFID10;                                 /* CFID10           */
    union __tag256 CFPTR10;                                /* CFPTR10          */
    union __tag256 CFDF010;                                /* CFDF010          */
    union __tag256 CFDF110;                                /* CFDF110          */
    union __tag256 CFID11;                                 /* CFID11           */
    union __tag256 CFPTR11;                                /* CFPTR11          */
    union __tag256 CFDF011;                                /* CFDF011          */
    union __tag256 CFDF111;                                /* CFDF111          */
    union __tag256 CFID12;                                 /* CFID12           */
    union __tag256 CFPTR12;                                /* CFPTR12          */
    union __tag256 CFDF012;                                /* CFDF012          */
    union __tag256 CFDF112;                                /* CFDF112          */
    union __tag256 CFID13;                                 /* CFID13           */
    union __tag256 CFPTR13;                                /* CFPTR13          */
    union __tag256 CFDF013;                                /* CFDF013          */
    union __tag256 CFDF113;                                /* CFDF113          */
    union __tag256 CFID14;                                 /* CFID14           */
    union __tag256 CFPTR14;                                /* CFPTR14          */
    union __tag256 CFDF014;                                /* CFDF014          */
    union __tag256 CFDF114;                                /* CFDF114          */
    union __tag256 CFID15;                                 /* CFID15           */
    union __tag256 CFPTR15;                                /* CFPTR15          */
    union __tag256 CFDF015;                                /* CFDF015          */
    union __tag256 CFDF115;                                /* CFDF115          */
    union __tag256 CFID16;                                 /* CFID16           */
    union __tag256 CFPTR16;                                /* CFPTR16          */
    union __tag256 CFDF016;                                /* CFDF016          */
    union __tag256 CFDF116;                                /* CFDF116          */
    union __tag256 CFID17;                                 /* CFID17           */
    union __tag256 CFPTR17;                                /* CFPTR17          */
    union __tag256 CFDF017;                                /* CFDF017          */
    union __tag256 CFDF117;                                /* CFDF117          */
    unsigned char  dummy296[96];                           /* Reserved         */
    union __tag256 TMID0;                                  /* TMID0            */
    union __tag256 TMPTR0;                                 /* TMPTR0           */
    union __tag256 TMDF00;                                 /* TMDF00           */
    union __tag256 TMDF10;                                 /* TMDF10           */
    union __tag256 TMID1;                                  /* TMID1            */
    union __tag256 TMPTR1;                                 /* TMPTR1           */
    union __tag256 TMDF01;                                 /* TMDF01           */
    union __tag256 TMDF11;                                 /* TMDF11           */
    union __tag256 TMID2;                                  /* TMID2            */
    union __tag256 TMPTR2;                                 /* TMPTR2           */
    union __tag256 TMDF02;                                 /* TMDF02           */
    union __tag256 TMDF12;                                 /* TMDF12           */
    union __tag256 TMID3;                                  /* TMID3            */
    union __tag256 TMPTR3;                                 /* TMPTR3           */
    union __tag256 TMDF03;                                 /* TMDF03           */
    union __tag256 TMDF13;                                 /* TMDF13           */
    union __tag256 TMID4;                                  /* TMID4            */
    union __tag256 TMPTR4;                                 /* TMPTR4           */
    union __tag256 TMDF04;                                 /* TMDF04           */
    union __tag256 TMDF14;                                 /* TMDF14           */
    union __tag256 TMID5;                                  /* TMID5            */
    union __tag256 TMPTR5;                                 /* TMPTR5           */
    union __tag256 TMDF05;                                 /* TMDF05           */
    union __tag256 TMDF15;                                 /* TMDF15           */
    union __tag256 TMID6;                                  /* TMID6            */
    union __tag256 TMPTR6;                                 /* TMPTR6           */
    union __tag256 TMDF06;                                 /* TMDF06           */
    union __tag256 TMDF16;                                 /* TMDF16           */
    union __tag256 TMID7;                                  /* TMID7            */
    union __tag256 TMPTR7;                                 /* TMPTR7           */
    union __tag256 TMDF07;                                 /* TMDF07           */
    union __tag256 TMDF17;                                 /* TMDF17           */
    union __tag256 TMID8;                                  /* TMID8            */
    union __tag256 TMPTR8;                                 /* TMPTR8           */
    union __tag256 TMDF08;                                 /* TMDF08           */
    union __tag256 TMDF18;                                 /* TMDF18           */
    union __tag256 TMID9;                                  /* TMID9            */
    union __tag256 TMPTR9;                                 /* TMPTR9           */
    union __tag256 TMDF09;                                 /* TMDF09           */
    union __tag256 TMDF19;                                 /* TMDF19           */
    union __tag256 TMID10;                                 /* TMID10           */
    union __tag256 TMPTR10;                                /* TMPTR10          */
    union __tag256 TMDF010;                                /* TMDF010          */
    union __tag256 TMDF110;                                /* TMDF110          */
    union __tag256 TMID11;                                 /* TMID11           */
    union __tag256 TMPTR11;                                /* TMPTR11          */
    union __tag256 TMDF011;                                /* TMDF011          */
    union __tag256 TMDF111;                                /* TMDF111          */
    union __tag256 TMID12;                                 /* TMID12           */
    union __tag256 TMPTR12;                                /* TMPTR12          */
    union __tag256 TMDF012;                                /* TMDF012          */
    union __tag256 TMDF112;                                /* TMDF112          */
    union __tag256 TMID13;                                 /* TMID13           */
    union __tag256 TMPTR13;                                /* TMPTR13          */
    union __tag256 TMDF013;                                /* TMDF013          */
    union __tag256 TMDF113;                                /* TMDF113          */
    union __tag256 TMID14;                                 /* TMID14           */
    union __tag256 TMPTR14;                                /* TMPTR14          */
    union __tag256 TMDF014;                                /* TMDF014          */
    union __tag256 TMDF114;                                /* TMDF114          */
    union __tag256 TMID15;                                 /* TMID15           */
    union __tag256 TMPTR15;                                /* TMPTR15          */
    union __tag256 TMDF015;                                /* TMDF015          */
    union __tag256 TMDF115;                                /* TMDF115          */
    union __tag256 TMID16;                                 /* TMID16           */
    union __tag256 TMPTR16;                                /* TMPTR16          */
    union __tag256 TMDF016;                                /* TMDF016          */
    union __tag256 TMDF116;                                /* TMDF116          */
    union __tag256 TMID17;                                 /* TMID17           */
    union __tag256 TMPTR17;                                /* TMPTR17          */
    union __tag256 TMDF017;                                /* TMDF017          */
    union __tag256 TMDF117;                                /* TMDF117          */
    union __tag256 TMID18;                                 /* TMID18           */
    union __tag256 TMPTR18;                                /* TMPTR18          */
    union __tag256 TMDF018;                                /* TMDF018          */
    union __tag256 TMDF118;                                /* TMDF118          */
    union __tag256 TMID19;                                 /* TMID19           */
    union __tag256 TMPTR19;                                /* TMPTR19          */
    union __tag256 TMDF019;                                /* TMDF019          */
    union __tag256 TMDF119;                                /* TMDF119          */
    union __tag256 TMID20;                                 /* TMID20           */
    union __tag256 TMPTR20;                                /* TMPTR20          */
    union __tag256 TMDF020;                                /* TMDF020          */
    union __tag256 TMDF120;                                /* TMDF120          */
    union __tag256 TMID21;                                 /* TMID21           */
    union __tag256 TMPTR21;                                /* TMPTR21          */
    union __tag256 TMDF021;                                /* TMDF021          */
    union __tag256 TMDF121;                                /* TMDF121          */
    union __tag256 TMID22;                                 /* TMID22           */
    union __tag256 TMPTR22;                                /* TMPTR22          */
    union __tag256 TMDF022;                                /* TMDF022          */
    union __tag256 TMDF122;                                /* TMDF122          */
    union __tag256 TMID23;                                 /* TMID23           */
    union __tag256 TMPTR23;                                /* TMPTR23          */
    union __tag256 TMDF023;                                /* TMDF023          */
    union __tag256 TMDF123;                                /* TMDF123          */
    union __tag256 TMID24;                                 /* TMID24           */
    union __tag256 TMPTR24;                                /* TMPTR24          */
    union __tag256 TMDF024;                                /* TMDF024          */
    union __tag256 TMDF124;                                /* TMDF124          */
    union __tag256 TMID25;                                 /* TMID25           */
    union __tag256 TMPTR25;                                /* TMPTR25          */
    union __tag256 TMDF025;                                /* TMDF025          */
    union __tag256 TMDF125;                                /* TMDF125          */
    union __tag256 TMID26;                                 /* TMID26           */
    union __tag256 TMPTR26;                                /* TMPTR26          */
    union __tag256 TMDF026;                                /* TMDF026          */
    union __tag256 TMDF126;                                /* TMDF126          */
    union __tag256 TMID27;                                 /* TMID27           */
    union __tag256 TMPTR27;                                /* TMPTR27          */
    union __tag256 TMDF027;                                /* TMDF027          */
    union __tag256 TMDF127;                                /* TMDF127          */
    union __tag256 TMID28;                                 /* TMID28           */
    union __tag256 TMPTR28;                                /* TMPTR28          */
    union __tag256 TMDF028;                                /* TMDF028          */
    union __tag256 TMDF128;                                /* TMDF128          */
    union __tag256 TMID29;                                 /* TMID29           */
    union __tag256 TMPTR29;                                /* TMPTR29          */
    union __tag256 TMDF029;                                /* TMDF029          */
    union __tag256 TMDF129;                                /* TMDF129          */
    union __tag256 TMID30;                                 /* TMID30           */
    union __tag256 TMPTR30;                                /* TMPTR30          */
    union __tag256 TMDF030;                                /* TMDF030          */
    union __tag256 TMDF130;                                /* TMDF130          */
    union __tag256 TMID31;                                 /* TMID31           */
    union __tag256 TMPTR31;                                /* TMPTR31          */
    union __tag256 TMDF031;                                /* TMDF031          */
    union __tag256 TMDF131;                                /* TMDF131          */
    union __tag256 TMID32;                                 /* TMID32           */
    union __tag256 TMPTR32;                                /* TMPTR32          */
    union __tag256 TMDF032;                                /* TMDF032          */
    union __tag256 TMDF132;                                /* TMDF132          */
    union __tag256 TMID33;                                 /* TMID33           */
    union __tag256 TMPTR33;                                /* TMPTR33          */
    union __tag256 TMDF033;                                /* TMDF033          */
    union __tag256 TMDF133;                                /* TMDF133          */
    union __tag256 TMID34;                                 /* TMID34           */
    union __tag256 TMPTR34;                                /* TMPTR34          */
    union __tag256 TMDF034;                                /* TMDF034          */
    union __tag256 TMDF134;                                /* TMDF134          */
    union __tag256 TMID35;                                 /* TMID35           */
    union __tag256 TMPTR35;                                /* TMPTR35          */
    union __tag256 TMDF035;                                /* TMDF035          */
    union __tag256 TMDF135;                                /* TMDF135          */
    union __tag256 TMID36;                                 /* TMID36           */
    union __tag256 TMPTR36;                                /* TMPTR36          */
    union __tag256 TMDF036;                                /* TMDF036          */
    union __tag256 TMDF136;                                /* TMDF136          */
    union __tag256 TMID37;                                 /* TMID37           */
    union __tag256 TMPTR37;                                /* TMPTR37          */
    union __tag256 TMDF037;                                /* TMDF037          */
    union __tag256 TMDF137;                                /* TMDF137          */
    union __tag256 TMID38;                                 /* TMID38           */
    union __tag256 TMPTR38;                                /* TMPTR38          */
    union __tag256 TMDF038;                                /* TMDF038          */
    union __tag256 TMDF138;                                /* TMDF138          */
    union __tag256 TMID39;                                 /* TMID39           */
    union __tag256 TMPTR39;                                /* TMPTR39          */
    union __tag256 TMDF039;                                /* TMDF039          */
    union __tag256 TMDF139;                                /* TMDF139          */
    union __tag256 TMID40;                                 /* TMID40           */
    union __tag256 TMPTR40;                                /* TMPTR40          */
    union __tag256 TMDF040;                                /* TMDF040          */
    union __tag256 TMDF140;                                /* TMDF140          */
    union __tag256 TMID41;                                 /* TMID41           */
    union __tag256 TMPTR41;                                /* TMPTR41          */
    union __tag256 TMDF041;                                /* TMDF041          */
    union __tag256 TMDF141;                                /* TMDF141          */
    union __tag256 TMID42;                                 /* TMID42           */
    union __tag256 TMPTR42;                                /* TMPTR42          */
    union __tag256 TMDF042;                                /* TMDF042          */
    union __tag256 TMDF142;                                /* TMDF142          */
    union __tag256 TMID43;                                 /* TMID43           */
    union __tag256 TMPTR43;                                /* TMPTR43          */
    union __tag256 TMDF043;                                /* TMDF043          */
    union __tag256 TMDF143;                                /* TMDF143          */
    union __tag256 TMID44;                                 /* TMID44           */
    union __tag256 TMPTR44;                                /* TMPTR44          */
    union __tag256 TMDF044;                                /* TMDF044          */
    union __tag256 TMDF144;                                /* TMDF144          */
    union __tag256 TMID45;                                 /* TMID45           */
    union __tag256 TMPTR45;                                /* TMPTR45          */
    union __tag256 TMDF045;                                /* TMDF045          */
    union __tag256 TMDF145;                                /* TMDF145          */
    union __tag256 TMID46;                                 /* TMID46           */
    union __tag256 TMPTR46;                                /* TMPTR46          */
    union __tag256 TMDF046;                                /* TMDF046          */
    union __tag256 TMDF146;                                /* TMDF146          */
    union __tag256 TMID47;                                 /* TMID47           */
    union __tag256 TMPTR47;                                /* TMPTR47          */
    union __tag256 TMDF047;                                /* TMDF047          */
    union __tag256 TMDF147;                                /* TMDF147          */
    union __tag256 TMID48;                                 /* TMID48           */
    union __tag256 TMPTR48;                                /* TMPTR48          */
    union __tag256 TMDF048;                                /* TMDF048          */
    union __tag256 TMDF148;                                /* TMDF148          */
    union __tag256 TMID49;                                 /* TMID49           */
    union __tag256 TMPTR49;                                /* TMPTR49          */
    union __tag256 TMDF049;                                /* TMDF049          */
    union __tag256 TMDF149;                                /* TMDF149          */
    union __tag256 TMID50;                                 /* TMID50           */
    union __tag256 TMPTR50;                                /* TMPTR50          */
    union __tag256 TMDF050;                                /* TMDF050          */
    union __tag256 TMDF150;                                /* TMDF150          */
    union __tag256 TMID51;                                 /* TMID51           */
    union __tag256 TMPTR51;                                /* TMPTR51          */
    union __tag256 TMDF051;                                /* TMDF051          */
    union __tag256 TMDF151;                                /* TMDF151          */
    union __tag256 TMID52;                                 /* TMID52           */
    union __tag256 TMPTR52;                                /* TMPTR52          */
    union __tag256 TMDF052;                                /* TMDF052          */
    union __tag256 TMDF152;                                /* TMDF152          */
    union __tag256 TMID53;                                 /* TMID53           */
    union __tag256 TMPTR53;                                /* TMPTR53          */
    union __tag256 TMDF053;                                /* TMDF053          */
    union __tag256 TMDF153;                                /* TMDF153          */
    union __tag256 TMID54;                                 /* TMID54           */
    union __tag256 TMPTR54;                                /* TMPTR54          */
    union __tag256 TMDF054;                                /* TMDF054          */
    union __tag256 TMDF154;                                /* TMDF154          */
    union __tag256 TMID55;                                 /* TMID55           */
    union __tag256 TMPTR55;                                /* TMPTR55          */
    union __tag256 TMDF055;                                /* TMDF055          */
    union __tag256 TMDF155;                                /* TMDF155          */
    union __tag256 TMID56;                                 /* TMID56           */
    union __tag256 TMPTR56;                                /* TMPTR56          */
    union __tag256 TMDF056;                                /* TMDF056          */
    union __tag256 TMDF156;                                /* TMDF156          */
    union __tag256 TMID57;                                 /* TMID57           */
    union __tag256 TMPTR57;                                /* TMPTR57          */
    union __tag256 TMDF057;                                /* TMDF057          */
    union __tag256 TMDF157;                                /* TMDF157          */
    union __tag256 TMID58;                                 /* TMID58           */
    union __tag256 TMPTR58;                                /* TMPTR58          */
    union __tag256 TMDF058;                                /* TMDF058          */
    union __tag256 TMDF158;                                /* TMDF158          */
    union __tag256 TMID59;                                 /* TMID59           */
    union __tag256 TMPTR59;                                /* TMPTR59          */
    union __tag256 TMDF059;                                /* TMDF059          */
    union __tag256 TMDF159;                                /* TMDF159          */
    union __tag256 TMID60;                                 /* TMID60           */
    union __tag256 TMPTR60;                                /* TMPTR60          */
    union __tag256 TMDF060;                                /* TMDF060          */
    union __tag256 TMDF160;                                /* TMDF160          */
    union __tag256 TMID61;                                 /* TMID61           */
    union __tag256 TMPTR61;                                /* TMPTR61          */
    union __tag256 TMDF061;                                /* TMDF061          */
    union __tag256 TMDF161;                                /* TMDF161          */
    union __tag256 TMID62;                                 /* TMID62           */
    union __tag256 TMPTR62;                                /* TMPTR62          */
    union __tag256 TMDF062;                                /* TMDF062          */
    union __tag256 TMDF162;                                /* TMDF162          */
    union __tag256 TMID63;                                 /* TMID63           */
    union __tag256 TMPTR63;                                /* TMPTR63          */
    union __tag256 TMDF063;                                /* TMDF063          */
    union __tag256 TMDF163;                                /* TMDF163          */
    union __tag256 TMID64;                                 /* TMID64           */
    union __tag256 TMPTR64;                                /* TMPTR64          */
    union __tag256 TMDF064;                                /* TMDF064          */
    union __tag256 TMDF164;                                /* TMDF164          */
    union __tag256 TMID65;                                 /* TMID65           */
    union __tag256 TMPTR65;                                /* TMPTR65          */
    union __tag256 TMDF065;                                /* TMDF065          */
    union __tag256 TMDF165;                                /* TMDF165          */
    union __tag256 TMID66;                                 /* TMID66           */
    union __tag256 TMPTR66;                                /* TMPTR66          */
    union __tag256 TMDF066;                                /* TMDF066          */
    union __tag256 TMDF166;                                /* TMDF166          */
    union __tag256 TMID67;                                 /* TMID67           */
    union __tag256 TMPTR67;                                /* TMPTR67          */
    union __tag256 TMDF067;                                /* TMDF067          */
    union __tag256 TMDF167;                                /* TMDF167          */
    union __tag256 TMID68;                                 /* TMID68           */
    union __tag256 TMPTR68;                                /* TMPTR68          */
    union __tag256 TMDF068;                                /* TMDF068          */
    union __tag256 TMDF168;                                /* TMDF168          */
    union __tag256 TMID69;                                 /* TMID69           */
    union __tag256 TMPTR69;                                /* TMPTR69          */
    union __tag256 TMDF069;                                /* TMDF069          */
    union __tag256 TMDF169;                                /* TMDF169          */
    union __tag256 TMID70;                                 /* TMID70           */
    union __tag256 TMPTR70;                                /* TMPTR70          */
    union __tag256 TMDF070;                                /* TMDF070          */
    union __tag256 TMDF170;                                /* TMDF170          */
    union __tag256 TMID71;                                 /* TMID71           */
    union __tag256 TMPTR71;                                /* TMPTR71          */
    union __tag256 TMDF071;                                /* TMDF071          */
    union __tag256 TMDF171;                                /* TMDF171          */
    union __tag256 TMID72;                                 /* TMID72           */
    union __tag256 TMPTR72;                                /* TMPTR72          */
    union __tag256 TMDF072;                                /* TMDF072          */
    union __tag256 TMDF172;                                /* TMDF172          */
    union __tag256 TMID73;                                 /* TMID73           */
    union __tag256 TMPTR73;                                /* TMPTR73          */
    union __tag256 TMDF073;                                /* TMDF073          */
    union __tag256 TMDF173;                                /* TMDF173          */
    union __tag256 TMID74;                                 /* TMID74           */
    union __tag256 TMPTR74;                                /* TMPTR74          */
    union __tag256 TMDF074;                                /* TMDF074          */
    union __tag256 TMDF174;                                /* TMDF174          */
    union __tag256 TMID75;                                 /* TMID75           */
    union __tag256 TMPTR75;                                /* TMPTR75          */
    union __tag256 TMDF075;                                /* TMDF075          */
    union __tag256 TMDF175;                                /* TMDF175          */
    union __tag256 TMID76;                                 /* TMID76           */
    union __tag256 TMPTR76;                                /* TMPTR76          */
    union __tag256 TMDF076;                                /* TMDF076          */
    union __tag256 TMDF176;                                /* TMDF176          */
    union __tag256 TMID77;                                 /* TMID77           */
    union __tag256 TMPTR77;                                /* TMPTR77          */
    union __tag256 TMDF077;                                /* TMDF077          */
    union __tag256 TMDF177;                                /* TMDF177          */
    union __tag256 TMID78;                                 /* TMID78           */
    union __tag256 TMPTR78;                                /* TMPTR78          */
    union __tag256 TMDF078;                                /* TMDF078          */
    union __tag256 TMDF178;                                /* TMDF178          */
    union __tag256 TMID79;                                 /* TMID79           */
    union __tag256 TMPTR79;                                /* TMPTR79          */
    union __tag256 TMDF079;                                /* TMDF079          */
    union __tag256 TMDF179;                                /* TMDF179          */
    union __tag256 TMID80;                                 /* TMID80           */
    union __tag256 TMPTR80;                                /* TMPTR80          */
    union __tag256 TMDF080;                                /* TMDF080          */
    union __tag256 TMDF180;                                /* TMDF180          */
    union __tag256 TMID81;                                 /* TMID81           */
    union __tag256 TMPTR81;                                /* TMPTR81          */
    union __tag256 TMDF081;                                /* TMDF081          */
    union __tag256 TMDF181;                                /* TMDF181          */
    union __tag256 TMID82;                                 /* TMID82           */
    union __tag256 TMPTR82;                                /* TMPTR82          */
    union __tag256 TMDF082;                                /* TMDF082          */
    union __tag256 TMDF182;                                /* TMDF182          */
    union __tag256 TMID83;                                 /* TMID83           */
    union __tag256 TMPTR83;                                /* TMPTR83          */
    union __tag256 TMDF083;                                /* TMDF083          */
    union __tag256 TMDF183;                                /* TMDF183          */
    union __tag256 TMID84;                                 /* TMID84           */
    union __tag256 TMPTR84;                                /* TMPTR84          */
    union __tag256 TMDF084;                                /* TMDF084          */
    union __tag256 TMDF184;                                /* TMDF184          */
    union __tag256 TMID85;                                 /* TMID85           */
    union __tag256 TMPTR85;                                /* TMPTR85          */
    union __tag256 TMDF085;                                /* TMDF085          */
    union __tag256 TMDF185;                                /* TMDF185          */
    union __tag256 TMID86;                                 /* TMID86           */
    union __tag256 TMPTR86;                                /* TMPTR86          */
    union __tag256 TMDF086;                                /* TMDF086          */
    union __tag256 TMDF186;                                /* TMDF186          */
    union __tag256 TMID87;                                 /* TMID87           */
    union __tag256 TMPTR87;                                /* TMPTR87          */
    union __tag256 TMDF087;                                /* TMDF087          */
    union __tag256 TMDF187;                                /* TMDF187          */
    union __tag256 TMID88;                                 /* TMID88           */
    union __tag256 TMPTR88;                                /* TMPTR88          */
    union __tag256 TMDF088;                                /* TMDF088          */
    union __tag256 TMDF188;                                /* TMDF188          */
    union __tag256 TMID89;                                 /* TMID89           */
    union __tag256 TMPTR89;                                /* TMPTR89          */
    union __tag256 TMDF089;                                /* TMDF089          */
    union __tag256 TMDF189;                                /* TMDF189          */
    union __tag256 TMID90;                                 /* TMID90           */
    union __tag256 TMPTR90;                                /* TMPTR90          */
    union __tag256 TMDF090;                                /* TMDF090          */
    union __tag256 TMDF190;                                /* TMDF190          */
    union __tag256 TMID91;                                 /* TMID91           */
    union __tag256 TMPTR91;                                /* TMPTR91          */
    union __tag256 TMDF091;                                /* TMDF091          */
    union __tag256 TMDF191;                                /* TMDF191          */
    union __tag256 TMID92;                                 /* TMID92           */
    union __tag256 TMPTR92;                                /* TMPTR92          */
    union __tag256 TMDF092;                                /* TMDF092          */
    union __tag256 TMDF192;                                /* TMDF192          */
    union __tag256 TMID93;                                 /* TMID93           */
    union __tag256 TMPTR93;                                /* TMPTR93          */
    union __tag256 TMDF093;                                /* TMDF093          */
    union __tag256 TMDF193;                                /* TMDF193          */
    union __tag256 TMID94;                                 /* TMID94           */
    union __tag256 TMPTR94;                                /* TMPTR94          */
    union __tag256 TMDF094;                                /* TMDF094          */
    union __tag256 TMDF194;                                /* TMDF194          */
    union __tag256 TMID95;                                 /* TMID95           */
    union __tag256 TMPTR95;                                /* TMPTR95          */
    union __tag256 TMDF095;                                /* TMDF095          */
    union __tag256 TMDF195;                                /* TMDF195          */
    unsigned char  dummy297[512];                          /* Reserved         */
    union __tag256 THLACC0;                                /* THLACC0          */
    union __tag256 THLACC1;                                /* THLACC1          */
    union __tag256 THLACC2;                                /* THLACC2          */
    union __tag256 THLACC3;                                /* THLACC3          */
    union __tag256 THLACC4;                                /* THLACC4          */
    union __tag256 THLACC5;                                /* THLACC5          */
    unsigned char  dummy298[232];                          /* Reserved         */
    union __tag256 RPGACC0;                                /* RPGACC0          */
    union __tag256 RPGACC1;                                /* RPGACC1          */
    union __tag256 RPGACC2;                                /* RPGACC2          */
    union __tag256 RPGACC3;                                /* RPGACC3          */
    union __tag256 RPGACC4;                                /* RPGACC4          */
    union __tag256 RPGACC5;                                /* RPGACC5          */
    union __tag256 RPGACC6;                                /* RPGACC6          */
    union __tag256 RPGACC7;                                /* RPGACC7          */
    union __tag256 RPGACC8;                                /* RPGACC8          */
    union __tag256 RPGACC9;                                /* RPGACC9          */
    union __tag256 RPGACC10;                               /* RPGACC10         */
    union __tag256 RPGACC11;                               /* RPGACC11         */
    union __tag256 RPGACC12;                               /* RPGACC12         */
    union __tag256 RPGACC13;                               /* RPGACC13         */
    union __tag256 RPGACC14;                               /* RPGACC14         */
    union __tag256 RPGACC15;                               /* RPGACC15         */
    union __tag256 RPGACC16;                               /* RPGACC16         */
    union __tag256 RPGACC17;                               /* RPGACC17         */
    union __tag256 RPGACC18;                               /* RPGACC18         */
    union __tag256 RPGACC19;                               /* RPGACC19         */
    union __tag256 RPGACC20;                               /* RPGACC20         */
    union __tag256 RPGACC21;                               /* RPGACC21         */
    union __tag256 RPGACC22;                               /* RPGACC22         */
    union __tag256 RPGACC23;                               /* RPGACC23         */
    union __tag256 RPGACC24;                               /* RPGACC24         */
    union __tag256 RPGACC25;                               /* RPGACC25         */
    union __tag256 RPGACC26;                               /* RPGACC26         */
    union __tag256 RPGACC27;                               /* RPGACC27         */
    union __tag256 RPGACC28;                               /* RPGACC28         */
    union __tag256 RPGACC29;                               /* RPGACC29         */
    union __tag256 RPGACC30;                               /* RPGACC30         */
    union __tag256 RPGACC31;                               /* RPGACC31         */
    union __tag256 RPGACC32;                               /* RPGACC32         */
    union __tag256 RPGACC33;                               /* RPGACC33         */
    union __tag256 RPGACC34;                               /* RPGACC34         */
    union __tag256 RPGACC35;                               /* RPGACC35         */
    union __tag256 RPGACC36;                               /* RPGACC36         */
    union __tag256 RPGACC37;                               /* RPGACC37         */
    union __tag256 RPGACC38;                               /* RPGACC38         */
    union __tag256 RPGACC39;                               /* RPGACC39         */
    union __tag256 RPGACC40;                               /* RPGACC40         */
    union __tag256 RPGACC41;                               /* RPGACC41         */
    union __tag256 RPGACC42;                               /* RPGACC42         */
    union __tag256 RPGACC43;                               /* RPGACC43         */
    union __tag256 RPGACC44;                               /* RPGACC44         */
    union __tag256 RPGACC45;                               /* RPGACC45         */
    union __tag256 RPGACC46;                               /* RPGACC46         */
    union __tag256 RPGACC47;                               /* RPGACC47         */
    union __tag256 RPGACC48;                               /* RPGACC48         */
    union __tag256 RPGACC49;                               /* RPGACC49         */
    union __tag256 RPGACC50;                               /* RPGACC50         */
    union __tag256 RPGACC51;                               /* RPGACC51         */
    union __tag256 RPGACC52;                               /* RPGACC52         */
    union __tag256 RPGACC53;                               /* RPGACC53         */
    union __tag256 RPGACC54;                               /* RPGACC54         */
    union __tag256 RPGACC55;                               /* RPGACC55         */
    union __tag256 RPGACC56;                               /* RPGACC56         */
    union __tag256 RPGACC57;                               /* RPGACC57         */
    union __tag256 RPGACC58;                               /* RPGACC58         */
    union __tag256 RPGACC59;                               /* RPGACC59         */
    union __tag256 RPGACC60;                               /* RPGACC60         */
    union __tag256 RPGACC61;                               /* RPGACC61         */
    union __tag256 RPGACC62;                               /* RPGACC62         */
    union __tag256 RPGACC63;                               /* RPGACC63         */
};
struct __tag559
{                                                          /* Module           */
    union __tag256 VCR00;                                  /* VCR00            */
    union __tag256 VCR01;                                  /* VCR01            */
    union __tag256 VCR02;                                  /* VCR02            */
    union __tag256 VCR03;                                  /* VCR03            */
    union __tag256 VCR04;                                  /* VCR04            */
    union __tag256 VCR05;                                  /* VCR05            */
    union __tag256 VCR06;                                  /* VCR06            */
    union __tag256 VCR07;                                  /* VCR07            */
    union __tag256 VCR08;                                  /* VCR08            */
    union __tag256 VCR09;                                  /* VCR09            */
    union __tag256 VCR10;                                  /* VCR10            */
    union __tag256 VCR11;                                  /* VCR11            */
    union __tag256 VCR12;                                  /* VCR12            */
    union __tag256 VCR13;                                  /* VCR13            */
    union __tag256 VCR14;                                  /* VCR14            */
    union __tag256 VCR15;                                  /* VCR15            */
    union __tag256 VCR16;                                  /* VCR16            */
    union __tag256 VCR17;                                  /* VCR17            */
    union __tag256 VCR18;                                  /* VCR18            */
    union __tag256 VCR19;                                  /* VCR19            */
    union __tag256 VCR20;                                  /* VCR20            */
    union __tag256 VCR21;                                  /* VCR21            */
    union __tag256 VCR22;                                  /* VCR22            */
    union __tag256 VCR23;                                  /* VCR23            */
    union __tag256 VCR24;                                  /* VCR24            */
    union __tag256 VCR25;                                  /* VCR25            */
    union __tag256 VCR26;                                  /* VCR26            */
    union __tag256 VCR27;                                  /* VCR27            */
    union __tag256 VCR28;                                  /* VCR28            */
    union __tag256 VCR29;                                  /* VCR29            */
    union __tag256 VCR30;                                  /* VCR30            */
    union __tag256 VCR31;                                  /* VCR31            */
    union __tag256 VCR32;                                  /* VCR32            */
    union __tag256 VCR33;                                  /* VCR33            */
    union __tag256 VCR34;                                  /* VCR34            */
    union __tag256 VCR35;                                  /* VCR35            */
    unsigned char  dummy299[100];                          /* Reserved         */
    union __tag256 PWDVCR;                                 /* PWDVCR           */
    unsigned char  dummy300[8];                            /* Reserved         */
    union __tag264 DR00;                                   /* DR00             */
    union __tag264 DR02;                                   /* DR02             */
    union __tag264 DR04;                                   /* DR04             */
    union __tag264 DR06;                                   /* DR06             */
    union __tag264 DR08;                                   /* DR08             */
    union __tag264 DR10;                                   /* DR10             */
    union __tag264 DR12;                                   /* DR12             */
    union __tag264 DR14;                                   /* DR14             */
    union __tag264 DR16;                                   /* DR16             */
    union __tag264 DR18;                                   /* DR18             */
    union __tag264 DR20;                                   /* DR20             */
    union __tag264 DR22;                                   /* DR22             */
    union __tag264 DR24;                                   /* DR24             */
    union __tag264 DR26;                                   /* DR26             */
    union __tag264 DR28;                                   /* DR28             */
    union __tag264 DR30;                                   /* DR30             */
    union __tag264 DR32;                                   /* DR32             */
    union __tag264 DR34;                                   /* DR34             */
    unsigned char  dummy301[48];                           /* Reserved         */
    union __tag264 PWDTSNDR;                               /* PWDTSNDR         */
    unsigned char  dummy302[132];                          /* Reserved         */
    unsigned long  DIR00;                                  /* DIR00            */
    unsigned long  DIR01;                                  /* DIR01            */
    unsigned long  DIR02;                                  /* DIR02            */
    unsigned long  DIR03;                                  /* DIR03            */
    unsigned long  DIR04;                                  /* DIR04            */
    unsigned long  DIR05;                                  /* DIR05            */
    unsigned long  DIR06;                                  /* DIR06            */
    unsigned long  DIR07;                                  /* DIR07            */
    unsigned long  DIR08;                                  /* DIR08            */
    unsigned long  DIR09;                                  /* DIR09            */
    unsigned long  DIR10;                                  /* DIR10            */
    unsigned long  DIR11;                                  /* DIR11            */
    unsigned long  DIR12;                                  /* DIR12            */
    unsigned long  DIR13;                                  /* DIR13            */
    unsigned long  DIR14;                                  /* DIR14            */
    unsigned long  DIR15;                                  /* DIR15            */
    unsigned long  DIR16;                                  /* DIR16            */
    unsigned long  DIR17;                                  /* DIR17            */
    unsigned long  DIR18;                                  /* DIR18            */
    unsigned long  DIR19;                                  /* DIR19            */
    unsigned long  DIR20;                                  /* DIR20            */
    unsigned long  DIR21;                                  /* DIR21            */
    unsigned long  DIR22;                                  /* DIR22            */
    unsigned long  DIR23;                                  /* DIR23            */
    unsigned long  DIR24;                                  /* DIR24            */
    unsigned long  DIR25;                                  /* DIR25            */
    unsigned long  DIR26;                                  /* DIR26            */
    unsigned long  DIR27;                                  /* DIR27            */
    unsigned long  DIR28;                                  /* DIR28            */
    unsigned long  DIR29;                                  /* DIR29            */
    unsigned long  DIR30;                                  /* DIR30            */
    unsigned long  DIR31;                                  /* DIR31            */
    unsigned long  DIR32;                                  /* DIR32            */
    unsigned long  DIR33;                                  /* DIR33            */
    unsigned long  DIR34;                                  /* DIR34            */
    unsigned long  DIR35;                                  /* DIR35            */
    unsigned char  dummy303[100];                          /* Reserved         */
    unsigned long  PWDDIR;                                 /* PWDDIR           */
    unsigned char  dummy304[8];                            /* Reserved         */
    union __tag256 ADHALTR;                                /* ADHALTR          */
    union __tag256 ADCR;                                   /* ADCR             */
    union __tag264 SGSTR;                                  /* SGSTR            */
    unsigned char  dummy305[40];                           /* Reserved         */
    union __tag256 SFTCR;                                  /* SFTCR            */
    union __tag264 ULLMTBR0;                               /* ULLMTBR0         */
    union __tag264 ULLMTBR1;                               /* ULLMTBR1         */
    union __tag264 ULLMTBR2;                               /* ULLMTBR2         */
    union __tag256 ECR;                                    /* ECR              */
    union __tag256 ULER;                                   /* ULER             */
    union __tag256 OWER;                                   /* OWER             */
    union __tag256 DGCTL0;                                 /* DGCTL0           */
    union __tag264 DGCTL1;                                 /* DGCTL1           */
    union __tag264 PDCTL1;                                 /* PDCTL1           */
    union __tag256 PDCTL2;                                 /* PDCTL2           */
    unsigned char  dummy306[32];                           /* Reserved         */
    union __tag256 SMPCR;                                  /* SMPCR            */
    unsigned char  dummy307[4];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
    unsigned char  dummy308[183];                          /* Reserved         */
    union __tag256 SGSTCR1;                                /* SGSTCR1          */
    unsigned char  dummy309[4];                            /* Reserved         */
    union __tag256 SGCR1;                                  /* SGCR1            */
    union __tag256 SGVCSP1;                                /* SGVCSP1          */
    union __tag256 SGVCEP1;                                /* SGVCEP1          */
    union __tag256 SGMCYCR1;                               /* SGMCYCR1         */
    union __tag256 SGSEFCR1;                               /* SGSEFCR1         */
    union __tag264 SGTSEL1;                                /* SGTSEL1          */
    unsigned char  dummy310[32];                           /* Reserved         */
    union __tag256 SGSTCR2;                                /* SGSTCR2          */
    unsigned char  dummy311[4];                            /* Reserved         */
    union __tag256 SGCR2;                                  /* SGCR2            */
    union __tag256 SGVCSP2;                                /* SGVCSP2          */
    union __tag256 SGVCEP2;                                /* SGVCEP2          */
    union __tag256 SGMCYCR2;                               /* SGMCYCR2         */
    union __tag256 SGSEFCR2;                               /* SGSEFCR2         */
    union __tag264 SGTSEL2;                                /* SGTSEL2          */
    unsigned char  dummy312[32];                           /* Reserved         */
    union __tag256 SGSTCR3;                                /* SGSTCR3          */
    unsigned char  dummy313[4];                            /* Reserved         */
    union __tag256 SGCR3;                                  /* SGCR3            */
    union __tag256 SGVCSP3;                                /* SGVCSP3          */
    union __tag256 SGVCEP3;                                /* SGVCEP3          */
    union __tag256 SGMCYCR3;                               /* SGMCYCR3         */
    union __tag256 SGSEFCR3;                               /* SGSEFCR3         */
    union __tag264 SGTSEL3;                                /* SGTSEL3          */
    unsigned char  dummy314[40];                           /* Reserved         */
    union __tag256 PWDSGCR;                                /* PWDSGCR          */
    unsigned char  dummy315[12];                           /* Reserved         */
    union __tag256 PWDSGSEFCR;                             /* PWDSGSEFCR       */
};
struct __tag560
{                                                          /* Module           */
    unsigned long  CMP;                                    /* CMP              */
    unsigned long  CNT;                                    /* CNT              */
    unsigned char  dummy316[8];                            /* Reserved         */
    unsigned char  TE;                                     /* TE               */
    unsigned char  dummy317[3];                            /* Reserved         */
    unsigned char  TS;                                     /* TS               */
    unsigned char  dummy318[3];                            /* Reserved         */
    unsigned char  TT;                                     /* TT               */
    unsigned char  dummy319[7];                            /* Reserved         */
    unsigned char  CTL;                                    /* CTL              */
    unsigned char  dummy320[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag561
{                                                          /* Module           */
    unsigned char  CTL0;                                   /* CTL0             */
    unsigned char  dummy321[3];                            /* Reserved         */
    unsigned long  STR0;                                   /* STR0             */
    unsigned short STCR0;                                  /* STCR0            */
    unsigned char  dummy322[6];                            /* Reserved         */
    unsigned long  CTL1;                                   /* CTL1             */
    unsigned short CTL2;                                   /* CTL2             */
    unsigned char  dummy323[2];                            /* Reserved         */
    union __tag270 EMU;                                    /* EMU              */
    unsigned char  dummy324[4071];                         /* Reserved         */
    unsigned long  MCTL1;                                  /* MCTL1            */
    unsigned long  MCTL2;                                  /* MCTL2            */
    unsigned long  TX0W;                                   /* TX0W             */
    unsigned short TX0H;                                   /* TX0H             */
    unsigned char  dummy325[2];                            /* Reserved         */
    unsigned long  RX0W;                                   /* RX0W             */
    unsigned short RX0H;                                   /* RX0H             */
    unsigned char  dummy326[2];                            /* Reserved         */
    unsigned long  MRWP0;                                  /* MRWP0            */
    unsigned char  dummy327[36];                           /* Reserved         */
    unsigned short MCTL0;                                  /* MCTL0            */
    unsigned char  dummy328[2];                            /* Reserved         */
    unsigned long  CFG0;                                   /* CFG0             */
    unsigned long  CFG1;                                   /* CFG1             */
    unsigned long  CFG2;                                   /* CFG2             */
    unsigned long  CFG3;                                   /* CFG3             */
    unsigned long  CFG4;                                   /* CFG4             */
    unsigned long  CFG5;                                   /* CFG5             */
    unsigned long  CFG6;                                   /* CFG6             */
    unsigned long  CFG7;                                   /* CFG7             */
    unsigned char  dummy329[4];                            /* Reserved         */
    unsigned short BRS0;                                   /* BRS0             */
    unsigned char  dummy330[2];                            /* Reserved         */
    unsigned short BRS1;                                   /* BRS1             */
    unsigned char  dummy331[2];                            /* Reserved         */
    unsigned short BRS2;                                   /* BRS2             */
    unsigned char  dummy332[2];                            /* Reserved         */
    unsigned short BRS3;                                   /* BRS3             */
};
struct __tag562
{                                                          /* Module           */
    unsigned char  CTL0;                                   /* CTL0             */
    unsigned char  dummy333[3];                            /* Reserved         */
    unsigned long  STR0;                                   /* STR0             */
    unsigned short STCR0;                                  /* STCR0            */
    unsigned char  dummy334[6];                            /* Reserved         */
    unsigned long  CTL1;                                   /* CTL1             */
    unsigned short CTL2;                                   /* CTL2             */
    unsigned char  dummy335[2];                            /* Reserved         */
    union __tag270 EMU;                                    /* EMU              */
    unsigned char  dummy336[4071];                         /* Reserved         */
    unsigned long  MCTL1;                                  /* MCTL1            */
    unsigned long  MCTL2;                                  /* MCTL2            */
    unsigned long  TX0W;                                   /* TX0W             */
    unsigned short TX0H;                                   /* TX0H             */
    unsigned char  dummy337[2];                            /* Reserved         */
    unsigned long  RX0W;                                   /* RX0W             */
    unsigned short RX0H;                                   /* RX0H             */
    unsigned char  dummy338[2];                            /* Reserved         */
    unsigned long  MRWP0;                                  /* MRWP0            */
    unsigned char  dummy339[36];                           /* Reserved         */
    unsigned short MCTL0;                                  /* MCTL0            */
    unsigned char  dummy340[2];                            /* Reserved         */
    unsigned long  CFG0;                                   /* CFG0             */
    unsigned long  CFG1;                                   /* CFG1             */
    unsigned long  CFG2;                                   /* CFG2             */
    unsigned long  CFG3;                                   /* CFG3             */
    unsigned long  CFG4;                                   /* CFG4             */
    unsigned long  CFG5;                                   /* CFG5             */
    unsigned char  dummy341[12];                           /* Reserved         */
    unsigned short BRS0;                                   /* BRS0             */
    unsigned char  dummy342[2];                            /* Reserved         */
    unsigned short BRS1;                                   /* BRS1             */
    unsigned char  dummy343[2];                            /* Reserved         */
    unsigned short BRS2;                                   /* BRS2             */
    unsigned char  dummy344[2];                            /* Reserved         */
    unsigned short BRS3;                                   /* BRS3             */
};
struct __tag563
{                                                          /* Module           */
    unsigned char  CTL0;                                   /* CTL0             */
    unsigned char  dummy345[3];                            /* Reserved         */
    unsigned long  STR0;                                   /* STR0             */
    unsigned short STCR0;                                  /* STCR0            */
    unsigned char  dummy346[6];                            /* Reserved         */
    unsigned long  CTL1;                                   /* CTL1             */
    unsigned short CTL2;                                   /* CTL2             */
    unsigned char  dummy347[2];                            /* Reserved         */
    union __tag270 EMU;                                    /* EMU              */
    unsigned char  dummy348[4071];                         /* Reserved         */
    unsigned long  MCTL1;                                  /* MCTL1            */
    unsigned long  MCTL2;                                  /* MCTL2            */
    unsigned long  TX0W;                                   /* TX0W             */
    unsigned short TX0H;                                   /* TX0H             */
    unsigned char  dummy349[2];                            /* Reserved         */
    unsigned long  RX0W;                                   /* RX0W             */
    unsigned short RX0H;                                   /* RX0H             */
    unsigned char  dummy350[2];                            /* Reserved         */
    unsigned long  MRWP0;                                  /* MRWP0            */
    unsigned char  dummy351[36];                           /* Reserved         */
    unsigned short MCTL0;                                  /* MCTL0            */
    unsigned char  dummy352[2];                            /* Reserved         */
    unsigned long  CFG0;                                   /* CFG0             */
    unsigned long  CFG1;                                   /* CFG1             */
    unsigned long  CFG2;                                   /* CFG2             */
    unsigned long  CFG3;                                   /* CFG3             */
    unsigned char  dummy353[20];                           /* Reserved         */
    unsigned short BRS0;                                   /* BRS0             */
    unsigned char  dummy354[2];                            /* Reserved         */
    unsigned short BRS1;                                   /* BRS1             */
    unsigned char  dummy355[2];                            /* Reserved         */
    unsigned short BRS2;                                   /* BRS2             */
    unsigned char  dummy356[2];                            /* Reserved         */
    unsigned short BRS3;                                   /* BRS3             */
};
struct __tag564
{                                                          /* Module           */
    unsigned char  CTL0;                                   /* CTL0             */
    unsigned char  dummy357[3];                            /* Reserved         */
    unsigned long  STR0;                                   /* STR0             */
    unsigned short STCR0;                                  /* STCR0            */
    unsigned char  dummy358[6];                            /* Reserved         */
    unsigned long  CTL1;                                   /* CTL1             */
    unsigned short CTL2;                                   /* CTL2             */
    unsigned char  dummy359[2];                            /* Reserved         */
    union __tag270 EMU;                                    /* EMU              */
    unsigned char  dummy360[4071];                         /* Reserved         */
    union __tag271 BCTL0;                                  /* BCTL0            */
    unsigned char  dummy361[3];                            /* Reserved         */
    unsigned long  TX0W;                                   /* TX0W             */
    unsigned short TX0H;                                   /* TX0H             */
    unsigned char  dummy362[2];                            /* Reserved         */
    unsigned short RX0;                                    /* RX0              */
    unsigned char  dummy363[2];                            /* Reserved         */
    unsigned long  CFG0;                                   /* CFG0             */
};
struct __tag565
{                                                          /* Module           */
    unsigned char  SST;                                    /* SST              */
    unsigned char  dummy364[11];                           /* Reserved         */
    unsigned short SSER0;                                  /* SSER0            */
    unsigned char  dummy365[6];                            /* Reserved         */
    unsigned short SSER2;                                  /* SSER2            */
    unsigned char  dummy366[102];                          /* Reserved         */
    unsigned char  HIZCEN0;                                /* HIZCEN0          */
    unsigned char  dummy367[15];                           /* Reserved         */
    unsigned short ADTEN400;                               /* ADTEN400         */
    unsigned char  dummy368[2];                            /* Reserved         */
    unsigned short ADTEN401;                               /* ADTEN401         */
    unsigned char  dummy369[2];                            /* Reserved         */
    unsigned short ADTEN402;                               /* ADTEN402         */
    unsigned char  dummy370[38];                           /* Reserved         */
    unsigned long  REG200;                                 /* REG200           */
    unsigned long  REG201;                                 /* REG201           */
    unsigned long  REG202;                                 /* REG202           */
    unsigned long  REG203;                                 /* REG203           */
    unsigned char  dummy371[24];                           /* Reserved         */
    unsigned long  REG30;                                  /* REG30            */
    unsigned long  REG31;                                  /* REG31            */
};
struct __tag566
{                                                          /* Module           */
    union __tag256 FSGD02PROT0;                            /* FSGD02PROT0      */
    union __tag256 FSGD02PROT1;                            /* FSGD02PROT1      */
    union __tag256 FSGD02PROT2;                            /* FSGD02PROT2      */
    union __tag256 FSGD02PROT3;                            /* FSGD02PROT3      */
    union __tag256 FSGD02PROT4;                            /* FSGD02PROT4      */
    union __tag256 FSGD02PROT5;                            /* FSGD02PROT5      */
    union __tag256 FSGD02PROT6;                            /* FSGD02PROT6      */
    unsigned char  dummy372[4];                            /* Reserved         */
    union __tag256 FSGD02PROT8;                            /* FSGD02PROT8      */
    union __tag256 FSGD02PROT9;                            /* FSGD02PROT9      */
    union __tag256 FSGD02PROT10;                           /* FSGD02PROT10     */
    union __tag256 FSGD02PROT11;                           /* FSGD02PROT11     */
    union __tag256 FSGD02PROT12;                           /* FSGD02PROT12     */
    unsigned char  dummy373[4];                            /* Reserved         */
    union __tag256 FSGD02PROT14;                           /* FSGD02PROT14     */
    unsigned char  dummy374[4];                            /* Reserved         */
    union __tag256 ERRSLV02CTL;                            /* ERRSLV02CTL      */
    union __tag256 ERRSLV02STAT;                           /* ERRSLV02STAT     */
    unsigned long  ERRSLV02ADDR;                           /* ERRSLV02ADDR     */
    union __tag264 ERRSLV02TYPE;                           /* ERRSLV02TYPE     */
};
struct __tag567
{                                                          /* Module           */
    union __tag256 FSGD09PROT0;                            /* FSGD09PROT0      */
    union __tag256 FSGD09PROT1;                            /* FSGD09PROT1      */
    unsigned char  dummy375[56];                           /* Reserved         */
    union __tag256 ERRSLV09CTL;                            /* ERRSLV09CTL      */
    union __tag256 ERRSLV09STAT;                           /* ERRSLV09STAT     */
    unsigned long  ERRSLV09ADDR;                           /* ERRSLV09ADDR     */
    union __tag264 ERRSLV09TYPE;                           /* ERRSLV09TYPE     */
};
struct __tag568
{                                                          /* Module           */
    unsigned short CDR0;                                   /* CDR0             */
    unsigned char  dummy376[2];                            /* Reserved         */
    unsigned short CDR1;                                   /* CDR1             */
    unsigned char  dummy377[2];                            /* Reserved         */
    unsigned short CDR2;                                   /* CDR2             */
    unsigned char  dummy378[2];                            /* Reserved         */
    unsigned short CDR3;                                   /* CDR3             */
    unsigned char  dummy379[2];                            /* Reserved         */
    unsigned short CDR4;                                   /* CDR4             */
    unsigned char  dummy380[2];                            /* Reserved         */
    unsigned short CDR5;                                   /* CDR5             */
    unsigned char  dummy381[2];                            /* Reserved         */
    unsigned short CDR6;                                   /* CDR6             */
    unsigned char  dummy382[2];                            /* Reserved         */
    unsigned short CDR7;                                   /* CDR7             */
    unsigned char  dummy383[2];                            /* Reserved         */
    unsigned short CDR8;                                   /* CDR8             */
    unsigned char  dummy384[2];                            /* Reserved         */
    unsigned short CDR9;                                   /* CDR9             */
    unsigned char  dummy385[2];                            /* Reserved         */
    unsigned short CDR10;                                  /* CDR10            */
    unsigned char  dummy386[2];                            /* Reserved         */
    unsigned short CDR11;                                  /* CDR11            */
    unsigned char  dummy387[2];                            /* Reserved         */
    unsigned short CDR12;                                  /* CDR12            */
    unsigned char  dummy388[2];                            /* Reserved         */
    unsigned short CDR13;                                  /* CDR13            */
    unsigned char  dummy389[2];                            /* Reserved         */
    unsigned short CDR14;                                  /* CDR14            */
    unsigned char  dummy390[2];                            /* Reserved         */
    unsigned short CDR15;                                  /* CDR15            */
    unsigned char  dummy391[2];                            /* Reserved         */
    unsigned short TOL;                                    /* TOL              */
    unsigned char  dummy392[2];                            /* Reserved         */
    unsigned short RDT;                                    /* RDT              */
    unsigned char  dummy393[2];                            /* Reserved         */
    unsigned short RSF;                                    /* RSF              */
    unsigned char  dummy394[2];                            /* Reserved         */
    unsigned short TRO;                                    /* TRO              */
    unsigned char  dummy395[2];                            /* Reserved         */
    unsigned short TME;                                    /* TME              */
    unsigned char  dummy396[2];                            /* Reserved         */
    unsigned short TDL;                                    /* TDL              */
    unsigned char  dummy397[2];                            /* Reserved         */
    unsigned short TO;                                     /* TO               */
    unsigned char  dummy398[2];                            /* Reserved         */
    unsigned short TOE;                                    /* TOE              */
    unsigned char  dummy399[34];                           /* Reserved         */
    unsigned short CNT0;                                   /* CNT0             */
    unsigned char  dummy400[2];                            /* Reserved         */
    unsigned short CNT1;                                   /* CNT1             */
    unsigned char  dummy401[2];                            /* Reserved         */
    unsigned short CNT2;                                   /* CNT2             */
    unsigned char  dummy402[2];                            /* Reserved         */
    unsigned short CNT3;                                   /* CNT3             */
    unsigned char  dummy403[2];                            /* Reserved         */
    unsigned short CNT4;                                   /* CNT4             */
    unsigned char  dummy404[2];                            /* Reserved         */
    unsigned short CNT5;                                   /* CNT5             */
    unsigned char  dummy405[2];                            /* Reserved         */
    unsigned short CNT6;                                   /* CNT6             */
    unsigned char  dummy406[2];                            /* Reserved         */
    unsigned short CNT7;                                   /* CNT7             */
    unsigned char  dummy407[2];                            /* Reserved         */
    unsigned short CNT8;                                   /* CNT8             */
    unsigned char  dummy408[2];                            /* Reserved         */
    unsigned short CNT9;                                   /* CNT9             */
    unsigned char  dummy409[2];                            /* Reserved         */
    unsigned short CNT10;                                  /* CNT10            */
    unsigned char  dummy410[2];                            /* Reserved         */
    unsigned short CNT11;                                  /* CNT11            */
    unsigned char  dummy411[2];                            /* Reserved         */
    unsigned short CNT12;                                  /* CNT12            */
    unsigned char  dummy412[2];                            /* Reserved         */
    unsigned short CNT13;                                  /* CNT13            */
    unsigned char  dummy413[2];                            /* Reserved         */
    unsigned short CNT14;                                  /* CNT14            */
    unsigned char  dummy414[2];                            /* Reserved         */
    unsigned short CNT15;                                  /* CNT15            */
    unsigned char  dummy415[2];                            /* Reserved         */
    unsigned char  CMUR0;                                  /* CMUR0            */
    unsigned char  dummy416[3];                            /* Reserved         */
    unsigned char  CMUR1;                                  /* CMUR1            */
    unsigned char  dummy417[3];                            /* Reserved         */
    unsigned char  CMUR2;                                  /* CMUR2            */
    unsigned char  dummy418[3];                            /* Reserved         */
    unsigned char  CMUR3;                                  /* CMUR3            */
    unsigned char  dummy419[3];                            /* Reserved         */
    unsigned char  CMUR4;                                  /* CMUR4            */
    unsigned char  dummy420[3];                            /* Reserved         */
    unsigned char  CMUR5;                                  /* CMUR5            */
    unsigned char  dummy421[3];                            /* Reserved         */
    unsigned char  CMUR6;                                  /* CMUR6            */
    unsigned char  dummy422[3];                            /* Reserved         */
    unsigned char  CMUR7;                                  /* CMUR7            */
    unsigned char  dummy423[3];                            /* Reserved         */
    unsigned char  CMUR8;                                  /* CMUR8            */
    unsigned char  dummy424[3];                            /* Reserved         */
    unsigned char  CMUR9;                                  /* CMUR9            */
    unsigned char  dummy425[3];                            /* Reserved         */
    unsigned char  CMUR10;                                 /* CMUR10           */
    unsigned char  dummy426[3];                            /* Reserved         */
    unsigned char  CMUR11;                                 /* CMUR11           */
    unsigned char  dummy427[3];                            /* Reserved         */
    unsigned char  CMUR12;                                 /* CMUR12           */
    unsigned char  dummy428[3];                            /* Reserved         */
    unsigned char  CMUR13;                                 /* CMUR13           */
    unsigned char  dummy429[3];                            /* Reserved         */
    unsigned char  CMUR14;                                 /* CMUR14           */
    unsigned char  dummy430[3];                            /* Reserved         */
    unsigned char  CMUR15;                                 /* CMUR15           */
    unsigned char  dummy431[67];                           /* Reserved         */
    unsigned char  CSR0;                                   /* CSR0             */
    unsigned char  dummy432[3];                            /* Reserved         */
    unsigned char  CSR1;                                   /* CSR1             */
    unsigned char  dummy433[3];                            /* Reserved         */
    unsigned char  CSR2;                                   /* CSR2             */
    unsigned char  dummy434[3];                            /* Reserved         */
    unsigned char  CSR3;                                   /* CSR3             */
    unsigned char  dummy435[3];                            /* Reserved         */
    unsigned char  CSR4;                                   /* CSR4             */
    unsigned char  dummy436[3];                            /* Reserved         */
    unsigned char  CSR5;                                   /* CSR5             */
    unsigned char  dummy437[3];                            /* Reserved         */
    unsigned char  CSR6;                                   /* CSR6             */
    unsigned char  dummy438[3];                            /* Reserved         */
    unsigned char  CSR7;                                   /* CSR7             */
    unsigned char  dummy439[3];                            /* Reserved         */
    unsigned char  CSR8;                                   /* CSR8             */
    unsigned char  dummy440[3];                            /* Reserved         */
    unsigned char  CSR9;                                   /* CSR9             */
    unsigned char  dummy441[3];                            /* Reserved         */
    unsigned char  CSR10;                                  /* CSR10            */
    unsigned char  dummy442[3];                            /* Reserved         */
    unsigned char  CSR11;                                  /* CSR11            */
    unsigned char  dummy443[3];                            /* Reserved         */
    unsigned char  CSR12;                                  /* CSR12            */
    unsigned char  dummy444[3];                            /* Reserved         */
    unsigned char  CSR13;                                  /* CSR13            */
    unsigned char  dummy445[3];                            /* Reserved         */
    unsigned char  CSR14;                                  /* CSR14            */
    unsigned char  dummy446[3];                            /* Reserved         */
    unsigned char  CSR15;                                  /* CSR15            */
    unsigned char  dummy447[3];                            /* Reserved         */
    unsigned char  CSC0;                                   /* CSC0             */
    unsigned char  dummy448[3];                            /* Reserved         */
    unsigned char  CSC1;                                   /* CSC1             */
    unsigned char  dummy449[3];                            /* Reserved         */
    unsigned char  CSC2;                                   /* CSC2             */
    unsigned char  dummy450[3];                            /* Reserved         */
    unsigned char  CSC3;                                   /* CSC3             */
    unsigned char  dummy451[3];                            /* Reserved         */
    unsigned char  CSC4;                                   /* CSC4             */
    unsigned char  dummy452[3];                            /* Reserved         */
    unsigned char  CSC5;                                   /* CSC5             */
    unsigned char  dummy453[3];                            /* Reserved         */
    unsigned char  CSC6;                                   /* CSC6             */
    unsigned char  dummy454[3];                            /* Reserved         */
    unsigned char  CSC7;                                   /* CSC7             */
    unsigned char  dummy455[3];                            /* Reserved         */
    unsigned char  CSC8;                                   /* CSC8             */
    unsigned char  dummy456[3];                            /* Reserved         */
    unsigned char  CSC9;                                   /* CSC9             */
    unsigned char  dummy457[3];                            /* Reserved         */
    unsigned char  CSC10;                                  /* CSC10            */
    unsigned char  dummy458[3];                            /* Reserved         */
    unsigned char  CSC11;                                  /* CSC11            */
    unsigned char  dummy459[3];                            /* Reserved         */
    unsigned char  CSC12;                                  /* CSC12            */
    unsigned char  dummy460[3];                            /* Reserved         */
    unsigned char  CSC13;                                  /* CSC13            */
    unsigned char  dummy461[3];                            /* Reserved         */
    unsigned char  CSC14;                                  /* CSC14            */
    unsigned char  dummy462[3];                            /* Reserved         */
    unsigned char  CSC15;                                  /* CSC15            */
    unsigned char  dummy463[3];                            /* Reserved         */
    unsigned short TE;                                     /* TE               */
    unsigned char  dummy464[2];                            /* Reserved         */
    unsigned short TS;                                     /* TS               */
    unsigned char  dummy465[2];                            /* Reserved         */
    unsigned short TT;                                     /* TT               */
    unsigned char  dummy466[54];                           /* Reserved         */
    unsigned short CMOR0;                                  /* CMOR0            */
    unsigned char  dummy467[2];                            /* Reserved         */
    unsigned short CMOR1;                                  /* CMOR1            */
    unsigned char  dummy468[2];                            /* Reserved         */
    unsigned short CMOR2;                                  /* CMOR2            */
    unsigned char  dummy469[2];                            /* Reserved         */
    unsigned short CMOR3;                                  /* CMOR3            */
    unsigned char  dummy470[2];                            /* Reserved         */
    unsigned short CMOR4;                                  /* CMOR4            */
    unsigned char  dummy471[2];                            /* Reserved         */
    unsigned short CMOR5;                                  /* CMOR5            */
    unsigned char  dummy472[2];                            /* Reserved         */
    unsigned short CMOR6;                                  /* CMOR6            */
    unsigned char  dummy473[2];                            /* Reserved         */
    unsigned short CMOR7;                                  /* CMOR7            */
    unsigned char  dummy474[2];                            /* Reserved         */
    unsigned short CMOR8;                                  /* CMOR8            */
    unsigned char  dummy475[2];                            /* Reserved         */
    unsigned short CMOR9;                                  /* CMOR9            */
    unsigned char  dummy476[2];                            /* Reserved         */
    unsigned short CMOR10;                                 /* CMOR10           */
    unsigned char  dummy477[2];                            /* Reserved         */
    unsigned short CMOR11;                                 /* CMOR11           */
    unsigned char  dummy478[2];                            /* Reserved         */
    unsigned short CMOR12;                                 /* CMOR12           */
    unsigned char  dummy479[2];                            /* Reserved         */
    unsigned short CMOR13;                                 /* CMOR13           */
    unsigned char  dummy480[2];                            /* Reserved         */
    unsigned short CMOR14;                                 /* CMOR14           */
    unsigned char  dummy481[2];                            /* Reserved         */
    unsigned short CMOR15;                                 /* CMOR15           */
    unsigned char  dummy482[2];                            /* Reserved         */
    unsigned short TPS;                                    /* TPS              */
    unsigned char  dummy483[2];                            /* Reserved         */
    unsigned char  BRS;                                    /* BRS              */
    unsigned char  dummy484[3];                            /* Reserved         */
    unsigned short TOM;                                    /* TOM              */
    unsigned char  dummy485[2];                            /* Reserved         */
    unsigned short TOC;                                    /* TOC              */
    unsigned char  dummy486[2];                            /* Reserved         */
    unsigned short TDE;                                    /* TDE              */
    unsigned char  dummy487[2];                            /* Reserved         */
    unsigned short TDM;                                    /* TDM              */
    unsigned char  dummy488[2];                            /* Reserved         */
    unsigned short TRE;                                    /* TRE              */
    unsigned char  dummy489[2];                            /* Reserved         */
    unsigned short TRC;                                    /* TRC              */
    unsigned char  dummy490[2];                            /* Reserved         */
    unsigned short RDE;                                    /* RDE              */
    unsigned char  dummy491[2];                            /* Reserved         */
    unsigned short RDM;                                    /* RDM              */
    unsigned char  dummy492[2];                            /* Reserved         */
    unsigned short RDS;                                    /* RDS              */
    unsigned char  dummy493[2];                            /* Reserved         */
    unsigned short RDC;                                    /* RDC              */
    unsigned char  dummy494[34];                           /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag569
{                                                          /* Module           */
    unsigned short SELB_TAUD0I;                            /* SELB_TAUD0I      */
};
struct __tag570
{                                                          /* Module           */
    unsigned short CDR0;                                   /* CDR0             */
    unsigned char  dummy495[2];                            /* Reserved         */
    unsigned short CDR1;                                   /* CDR1             */
    unsigned char  dummy496[2];                            /* Reserved         */
    unsigned short CDR2;                                   /* CDR2             */
    unsigned char  dummy497[2];                            /* Reserved         */
    unsigned short CDR3;                                   /* CDR3             */
    unsigned char  dummy498[2];                            /* Reserved         */
    unsigned short CDR4;                                   /* CDR4             */
    unsigned char  dummy499[2];                            /* Reserved         */
    unsigned short CDR5;                                   /* CDR5             */
    unsigned char  dummy500[2];                            /* Reserved         */
    unsigned short CDR6;                                   /* CDR6             */
    unsigned char  dummy501[2];                            /* Reserved         */
    unsigned short CDR7;                                   /* CDR7             */
    unsigned char  dummy502[2];                            /* Reserved         */
    unsigned short CDR8;                                   /* CDR8             */
    unsigned char  dummy503[2];                            /* Reserved         */
    unsigned short CDR9;                                   /* CDR9             */
    unsigned char  dummy504[2];                            /* Reserved         */
    unsigned short CDR10;                                  /* CDR10            */
    unsigned char  dummy505[2];                            /* Reserved         */
    unsigned short CDR11;                                  /* CDR11            */
    unsigned char  dummy506[2];                            /* Reserved         */
    unsigned short CDR12;                                  /* CDR12            */
    unsigned char  dummy507[2];                            /* Reserved         */
    unsigned short CDR13;                                  /* CDR13            */
    unsigned char  dummy508[2];                            /* Reserved         */
    unsigned short CDR14;                                  /* CDR14            */
    unsigned char  dummy509[2];                            /* Reserved         */
    unsigned short CDR15;                                  /* CDR15            */
    unsigned char  dummy510[2];                            /* Reserved         */
    unsigned short TOL;                                    /* TOL              */
    unsigned char  dummy511[2];                            /* Reserved         */
    unsigned short RDT;                                    /* RDT              */
    unsigned char  dummy512[2];                            /* Reserved         */
    unsigned short RSF;                                    /* RSF              */
    unsigned char  dummy513[10];                           /* Reserved         */
    unsigned short TDL;                                    /* TDL              */
    unsigned char  dummy514[2];                            /* Reserved         */
    unsigned short TO;                                     /* TO               */
    unsigned char  dummy515[2];                            /* Reserved         */
    unsigned short TOE;                                    /* TOE              */
    unsigned char  dummy516[34];                           /* Reserved         */
    unsigned short CNT0;                                   /* CNT0             */
    unsigned char  dummy517[2];                            /* Reserved         */
    unsigned short CNT1;                                   /* CNT1             */
    unsigned char  dummy518[2];                            /* Reserved         */
    unsigned short CNT2;                                   /* CNT2             */
    unsigned char  dummy519[2];                            /* Reserved         */
    unsigned short CNT3;                                   /* CNT3             */
    unsigned char  dummy520[2];                            /* Reserved         */
    unsigned short CNT4;                                   /* CNT4             */
    unsigned char  dummy521[2];                            /* Reserved         */
    unsigned short CNT5;                                   /* CNT5             */
    unsigned char  dummy522[2];                            /* Reserved         */
    unsigned short CNT6;                                   /* CNT6             */
    unsigned char  dummy523[2];                            /* Reserved         */
    unsigned short CNT7;                                   /* CNT7             */
    unsigned char  dummy524[2];                            /* Reserved         */
    unsigned short CNT8;                                   /* CNT8             */
    unsigned char  dummy525[2];                            /* Reserved         */
    unsigned short CNT9;                                   /* CNT9             */
    unsigned char  dummy526[2];                            /* Reserved         */
    unsigned short CNT10;                                  /* CNT10            */
    unsigned char  dummy527[2];                            /* Reserved         */
    unsigned short CNT11;                                  /* CNT11            */
    unsigned char  dummy528[2];                            /* Reserved         */
    unsigned short CNT12;                                  /* CNT12            */
    unsigned char  dummy529[2];                            /* Reserved         */
    unsigned short CNT13;                                  /* CNT13            */
    unsigned char  dummy530[2];                            /* Reserved         */
    unsigned short CNT14;                                  /* CNT14            */
    unsigned char  dummy531[2];                            /* Reserved         */
    unsigned short CNT15;                                  /* CNT15            */
    unsigned char  dummy532[2];                            /* Reserved         */
    unsigned char  CMUR0;                                  /* CMUR0            */
    unsigned char  dummy533[3];                            /* Reserved         */
    unsigned char  CMUR1;                                  /* CMUR1            */
    unsigned char  dummy534[3];                            /* Reserved         */
    unsigned char  CMUR2;                                  /* CMUR2            */
    unsigned char  dummy535[3];                            /* Reserved         */
    unsigned char  CMUR3;                                  /* CMUR3            */
    unsigned char  dummy536[3];                            /* Reserved         */
    unsigned char  CMUR4;                                  /* CMUR4            */
    unsigned char  dummy537[3];                            /* Reserved         */
    unsigned char  CMUR5;                                  /* CMUR5            */
    unsigned char  dummy538[3];                            /* Reserved         */
    unsigned char  CMUR6;                                  /* CMUR6            */
    unsigned char  dummy539[3];                            /* Reserved         */
    unsigned char  CMUR7;                                  /* CMUR7            */
    unsigned char  dummy540[3];                            /* Reserved         */
    unsigned char  CMUR8;                                  /* CMUR8            */
    unsigned char  dummy541[3];                            /* Reserved         */
    unsigned char  CMUR9;                                  /* CMUR9            */
    unsigned char  dummy542[3];                            /* Reserved         */
    unsigned char  CMUR10;                                 /* CMUR10           */
    unsigned char  dummy543[3];                            /* Reserved         */
    unsigned char  CMUR11;                                 /* CMUR11           */
    unsigned char  dummy544[3];                            /* Reserved         */
    unsigned char  CMUR12;                                 /* CMUR12           */
    unsigned char  dummy545[3];                            /* Reserved         */
    unsigned char  CMUR13;                                 /* CMUR13           */
    unsigned char  dummy546[3];                            /* Reserved         */
    unsigned char  CMUR14;                                 /* CMUR14           */
    unsigned char  dummy547[3];                            /* Reserved         */
    unsigned char  CMUR15;                                 /* CMUR15           */
    unsigned char  dummy548[67];                           /* Reserved         */
    unsigned char  CSR0;                                   /* CSR0             */
    unsigned char  dummy549[3];                            /* Reserved         */
    unsigned char  CSR1;                                   /* CSR1             */
    unsigned char  dummy550[3];                            /* Reserved         */
    unsigned char  CSR2;                                   /* CSR2             */
    unsigned char  dummy551[3];                            /* Reserved         */
    unsigned char  CSR3;                                   /* CSR3             */
    unsigned char  dummy552[3];                            /* Reserved         */
    unsigned char  CSR4;                                   /* CSR4             */
    unsigned char  dummy553[3];                            /* Reserved         */
    unsigned char  CSR5;                                   /* CSR5             */
    unsigned char  dummy554[3];                            /* Reserved         */
    unsigned char  CSR6;                                   /* CSR6             */
    unsigned char  dummy555[3];                            /* Reserved         */
    unsigned char  CSR7;                                   /* CSR7             */
    unsigned char  dummy556[3];                            /* Reserved         */
    unsigned char  CSR8;                                   /* CSR8             */
    unsigned char  dummy557[3];                            /* Reserved         */
    unsigned char  CSR9;                                   /* CSR9             */
    unsigned char  dummy558[3];                            /* Reserved         */
    unsigned char  CSR10;                                  /* CSR10            */
    unsigned char  dummy559[3];                            /* Reserved         */
    unsigned char  CSR11;                                  /* CSR11            */
    unsigned char  dummy560[3];                            /* Reserved         */
    unsigned char  CSR12;                                  /* CSR12            */
    unsigned char  dummy561[3];                            /* Reserved         */
    unsigned char  CSR13;                                  /* CSR13            */
    unsigned char  dummy562[3];                            /* Reserved         */
    unsigned char  CSR14;                                  /* CSR14            */
    unsigned char  dummy563[3];                            /* Reserved         */
    unsigned char  CSR15;                                  /* CSR15            */
    unsigned char  dummy564[3];                            /* Reserved         */
    unsigned char  CSC0;                                   /* CSC0             */
    unsigned char  dummy565[3];                            /* Reserved         */
    unsigned char  CSC1;                                   /* CSC1             */
    unsigned char  dummy566[3];                            /* Reserved         */
    unsigned char  CSC2;                                   /* CSC2             */
    unsigned char  dummy567[3];                            /* Reserved         */
    unsigned char  CSC3;                                   /* CSC3             */
    unsigned char  dummy568[3];                            /* Reserved         */
    unsigned char  CSC4;                                   /* CSC4             */
    unsigned char  dummy569[3];                            /* Reserved         */
    unsigned char  CSC5;                                   /* CSC5             */
    unsigned char  dummy570[3];                            /* Reserved         */
    unsigned char  CSC6;                                   /* CSC6             */
    unsigned char  dummy571[3];                            /* Reserved         */
    unsigned char  CSC7;                                   /* CSC7             */
    unsigned char  dummy572[3];                            /* Reserved         */
    unsigned char  CSC8;                                   /* CSC8             */
    unsigned char  dummy573[3];                            /* Reserved         */
    unsigned char  CSC9;                                   /* CSC9             */
    unsigned char  dummy574[3];                            /* Reserved         */
    unsigned char  CSC10;                                  /* CSC10            */
    unsigned char  dummy575[3];                            /* Reserved         */
    unsigned char  CSC11;                                  /* CSC11            */
    unsigned char  dummy576[3];                            /* Reserved         */
    unsigned char  CSC12;                                  /* CSC12            */
    unsigned char  dummy577[3];                            /* Reserved         */
    unsigned char  CSC13;                                  /* CSC13            */
    unsigned char  dummy578[3];                            /* Reserved         */
    unsigned char  CSC14;                                  /* CSC14            */
    unsigned char  dummy579[3];                            /* Reserved         */
    unsigned char  CSC15;                                  /* CSC15            */
    unsigned char  dummy580[3];                            /* Reserved         */
    unsigned short TE;                                     /* TE               */
    unsigned char  dummy581[2];                            /* Reserved         */
    unsigned short TS;                                     /* TS               */
    unsigned char  dummy582[2];                            /* Reserved         */
    unsigned short TT;                                     /* TT               */
    unsigned char  dummy583[54];                           /* Reserved         */
    unsigned short CMOR0;                                  /* CMOR0            */
    unsigned char  dummy584[2];                            /* Reserved         */
    unsigned short CMOR1;                                  /* CMOR1            */
    unsigned char  dummy585[2];                            /* Reserved         */
    unsigned short CMOR2;                                  /* CMOR2            */
    unsigned char  dummy586[2];                            /* Reserved         */
    unsigned short CMOR3;                                  /* CMOR3            */
    unsigned char  dummy587[2];                            /* Reserved         */
    unsigned short CMOR4;                                  /* CMOR4            */
    unsigned char  dummy588[2];                            /* Reserved         */
    unsigned short CMOR5;                                  /* CMOR5            */
    unsigned char  dummy589[2];                            /* Reserved         */
    unsigned short CMOR6;                                  /* CMOR6            */
    unsigned char  dummy590[2];                            /* Reserved         */
    unsigned short CMOR7;                                  /* CMOR7            */
    unsigned char  dummy591[2];                            /* Reserved         */
    unsigned short CMOR8;                                  /* CMOR8            */
    unsigned char  dummy592[2];                            /* Reserved         */
    unsigned short CMOR9;                                  /* CMOR9            */
    unsigned char  dummy593[2];                            /* Reserved         */
    unsigned short CMOR10;                                 /* CMOR10           */
    unsigned char  dummy594[2];                            /* Reserved         */
    unsigned short CMOR11;                                 /* CMOR11           */
    unsigned char  dummy595[2];                            /* Reserved         */
    unsigned short CMOR12;                                 /* CMOR12           */
    unsigned char  dummy596[2];                            /* Reserved         */
    unsigned short CMOR13;                                 /* CMOR13           */
    unsigned char  dummy597[2];                            /* Reserved         */
    unsigned short CMOR14;                                 /* CMOR14           */
    unsigned char  dummy598[2];                            /* Reserved         */
    unsigned short CMOR15;                                 /* CMOR15           */
    unsigned char  dummy599[2];                            /* Reserved         */
    unsigned short TPS;                                    /* TPS              */
    unsigned char  dummy600[6];                            /* Reserved         */
    unsigned short TOM;                                    /* TOM              */
    unsigned char  dummy601[2];                            /* Reserved         */
    unsigned short TOC;                                    /* TOC              */
    unsigned char  dummy602[2];                            /* Reserved         */
    unsigned short TDE;                                    /* TDE              */
    unsigned char  dummy603[14];                           /* Reserved         */
    unsigned short RDE;                                    /* RDE              */
    unsigned char  dummy604[2];                            /* Reserved         */
    unsigned short RDM;                                    /* RDM              */
    unsigned char  dummy605[2];                            /* Reserved         */
    unsigned short RDS;                                    /* RDS              */
    unsigned char  dummy606[2];                            /* Reserved         */
    unsigned short RDC;                                    /* RDC              */
    unsigned char  dummy607[34];                           /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag571
{                                                          /* Module           */
    unsigned long  CDR0;                                   /* CDR0             */
    unsigned long  CDR1;                                   /* CDR1             */
    unsigned long  CDR2;                                   /* CDR2             */
    unsigned long  CDR3;                                   /* CDR3             */
    unsigned long  CNT0;                                   /* CNT0             */
    unsigned long  CNT1;                                   /* CNT1             */
    unsigned long  CNT2;                                   /* CNT2             */
    unsigned long  CNT3;                                   /* CNT3             */
    unsigned char  CMUR0;                                  /* CMUR0            */
    unsigned char  dummy608[3];                            /* Reserved         */
    unsigned char  CMUR1;                                  /* CMUR1            */
    unsigned char  dummy609[3];                            /* Reserved         */
    unsigned char  CMUR2;                                  /* CMUR2            */
    unsigned char  dummy610[3];                            /* Reserved         */
    unsigned char  CMUR3;                                  /* CMUR3            */
    unsigned char  dummy611[3];                            /* Reserved         */
    unsigned char  CSR0;                                   /* CSR0             */
    unsigned char  dummy612[3];                            /* Reserved         */
    unsigned char  CSR1;                                   /* CSR1             */
    unsigned char  dummy613[3];                            /* Reserved         */
    unsigned char  CSR2;                                   /* CSR2             */
    unsigned char  dummy614[3];                            /* Reserved         */
    unsigned char  CSR3;                                   /* CSR3             */
    unsigned char  dummy615[3];                            /* Reserved         */
    unsigned char  CSC0;                                   /* CSC0             */
    unsigned char  dummy616[3];                            /* Reserved         */
    unsigned char  CSC1;                                   /* CSC1             */
    unsigned char  dummy617[3];                            /* Reserved         */
    unsigned char  CSC2;                                   /* CSC2             */
    unsigned char  dummy618[3];                            /* Reserved         */
    unsigned char  CSC3;                                   /* CSC3             */
    unsigned char  dummy619[3];                            /* Reserved         */
    unsigned char  TE;                                     /* TE               */
    unsigned char  dummy620[3];                            /* Reserved         */
    unsigned char  TS;                                     /* TS               */
    unsigned char  dummy621[3];                            /* Reserved         */
    unsigned char  TT;                                     /* TT               */
    unsigned char  dummy622[3];                            /* Reserved         */
    unsigned char  TO;                                     /* TO               */
    unsigned char  dummy623[3];                            /* Reserved         */
    unsigned char  TOE;                                    /* TOE              */
    unsigned char  dummy624[3];                            /* Reserved         */
    unsigned char  TOL;                                    /* TOL              */
    unsigned char  dummy625[3];                            /* Reserved         */
    unsigned char  RDT;                                    /* RDT              */
    unsigned char  dummy626[3];                            /* Reserved         */
    unsigned char  RSF;                                    /* RSF              */
    unsigned char  dummy627[19];                           /* Reserved         */
    unsigned short CMOR0;                                  /* CMOR0            */
    unsigned char  dummy628[2];                            /* Reserved         */
    unsigned short CMOR1;                                  /* CMOR1            */
    unsigned char  dummy629[2];                            /* Reserved         */
    unsigned short CMOR2;                                  /* CMOR2            */
    unsigned char  dummy630[2];                            /* Reserved         */
    unsigned short CMOR3;                                  /* CMOR3            */
    unsigned char  dummy631[2];                            /* Reserved         */
    unsigned short TPS;                                    /* TPS              */
    unsigned char  dummy632[2];                            /* Reserved         */
    unsigned char  BRS;                                    /* BRS              */
    unsigned char  dummy633[3];                            /* Reserved         */
    unsigned char  TOM;                                    /* TOM              */
    unsigned char  dummy634[3];                            /* Reserved         */
    unsigned char  TOC;                                    /* TOC              */
    unsigned char  dummy635[3];                            /* Reserved         */
    unsigned char  RDE;                                    /* RDE              */
    unsigned char  dummy636[3];                            /* Reserved         */
    unsigned char  RDM;                                    /* RDM              */
    unsigned char  dummy637[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag572
{                                                          /* Module           */
    unsigned char  SELB_TAUJ0I;                            /* SELB_TAUJ0I      */
};
struct __tag573
{                                                          /* Module           */
    unsigned char  CTL;                                    /* CTL              */
    unsigned char  dummy638[3];                            /* Reserved         */
    unsigned char  STR;                                    /* STR              */
    unsigned char  dummy639[3];                            /* Reserved         */
    unsigned char  STC;                                    /* STC              */
    unsigned char  dummy640[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
    unsigned char  dummy641[19];                           /* Reserved         */
    unsigned char  QUE0;                                   /* QUE0             */
    unsigned char  dummy642[3];                            /* Reserved         */
    unsigned char  QUE1;                                   /* QUE1             */
    unsigned char  dummy643[3];                            /* Reserved         */
    unsigned char  QUE2;                                   /* QUE2             */
    unsigned char  dummy644[3];                            /* Reserved         */
    unsigned char  QUE3;                                   /* QUE3             */
    unsigned char  dummy645[3];                            /* Reserved         */
    unsigned char  QUE4;                                   /* QUE4             */
    unsigned char  dummy646[3];                            /* Reserved         */
    unsigned char  QUE5;                                   /* QUE5             */
    unsigned char  dummy647[3];                            /* Reserved         */
    unsigned char  QUE6;                                   /* QUE6             */
    unsigned char  dummy648[3];                            /* Reserved         */
    unsigned char  QUE7;                                   /* QUE7             */
    unsigned char  dummy649[3];                            /* Reserved         */
    unsigned long  PVCR00_01;                              /* PVCR00_01        */
    unsigned long  PVCR02_03;                              /* PVCR02_03        */
    unsigned long  PVCR04_05;                              /* PVCR04_05        */
    unsigned long  PVCR06_07;                              /* PVCR06_07        */
    unsigned long  PVCR08_09;                              /* PVCR08_09        */
    unsigned long  PVCR10_11;                              /* PVCR10_11        */
    unsigned long  PVCR12_13;                              /* PVCR12_13        */
    unsigned long  PVCR14_15;                              /* PVCR14_15        */
    unsigned long  PVCR16_17;                              /* PVCR16_17        */
    unsigned long  PVCR18_19;                              /* PVCR18_19        */
    unsigned long  PVCR20_21;                              /* PVCR20_21        */
    unsigned long  PVCR22_23;                              /* PVCR22_23        */
    unsigned long  PVCR24_25;                              /* PVCR24_25        */
    unsigned long  PVCR26_27;                              /* PVCR26_27        */
    unsigned long  PVCR28_29;                              /* PVCR28_29        */
    unsigned long  PVCR30_31;                              /* PVCR30_31        */
    unsigned long  PVCR32_33;                              /* PVCR32_33        */
    unsigned long  PVCR34_35;                              /* PVCR34_35        */
    unsigned long  PVCR36_37;                              /* PVCR36_37        */
    unsigned long  PVCR38_39;                              /* PVCR38_39        */
    unsigned long  PVCR40_41;                              /* PVCR40_41        */
    unsigned long  PVCR42_43;                              /* PVCR42_43        */
    unsigned long  PVCR44_45;                              /* PVCR44_45        */
    unsigned long  PVCR46_47;                              /* PVCR46_47        */
    unsigned long  PVCR48_49;                              /* PVCR48_49        */
    unsigned long  PVCR50_51;                              /* PVCR50_51        */
    unsigned long  PVCR52_53;                              /* PVCR52_53        */
    unsigned long  PVCR54_55;                              /* PVCR54_55        */
    unsigned long  PVCR56_57;                              /* PVCR56_57        */
    unsigned long  PVCR58_59;                              /* PVCR58_59        */
    unsigned long  PVCR60_61;                              /* PVCR60_61        */
    unsigned long  PVCR62_63;                              /* PVCR62_63        */
};
struct __tag574
{                                                          /* Module           */
    unsigned short CSDR;                                   /* CSDR             */
    unsigned char  dummy650[2];                            /* Reserved         */
    unsigned short CRDR;                                   /* CRDR             */
    unsigned char  dummy651[2];                            /* Reserved         */
    unsigned short CTDR;                                   /* CTDR             */
    unsigned char  dummy652[2];                            /* Reserved         */
    unsigned char  RDT;                                    /* RDT              */
    unsigned char  dummy653[3];                            /* Reserved         */
    unsigned char  RSF;                                    /* RSF              */
    unsigned char  dummy654[3];                            /* Reserved         */
    unsigned short CNT;                                    /* CNT              */
    unsigned char  dummy655[10];                           /* Reserved         */
    unsigned char  CTL;                                    /* CTL              */
    unsigned char  dummy656[3];                            /* Reserved         */
    unsigned short CSBR;                                   /* CSBR             */
    unsigned char  dummy657[2];                            /* Reserved         */
    unsigned short CRBR;                                   /* CRBR             */
    unsigned char  dummy658[2];                            /* Reserved         */
    unsigned short CTBR;                                   /* CTBR             */
};
struct __tag575
{                                                          /* Module           */
    unsigned short BRS0;                                   /* BRS0             */
    unsigned char  dummy659[2];                            /* Reserved         */
    unsigned short BRS1;                                   /* BRS1             */
    unsigned char  dummy660[2];                            /* Reserved         */
    unsigned short BRS2;                                   /* BRS2             */
    unsigned char  dummy661[2];                            /* Reserved         */
    unsigned short BRS3;                                   /* BRS3             */
    unsigned char  dummy662[2];                            /* Reserved         */
    unsigned char  TE;                                     /* TE               */
    unsigned char  dummy663[3];                            /* Reserved         */
    unsigned char  TS;                                     /* TS               */
    unsigned char  dummy664[3];                            /* Reserved         */
    unsigned char  TT;                                     /* TT               */
    unsigned char  dummy665[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag576
{                                                          /* Module           */
    unsigned long  A0;                                     /* A0               */
    unsigned long  A1;                                     /* A1               */
};
struct __tag577
{                                                          /* Module           */
    union __tag272 CTL0;                                   /* CTL0             */
    unsigned char  dummy666[3];                            /* Reserved         */
    union __tag273 CTL1;                                   /* CTL1             */
    unsigned char  dummy667[3];                            /* Reserved         */
    union __tag274 CTL2;                                   /* CTL2             */
    unsigned char  dummy668[3];                            /* Reserved         */
    unsigned long  SUBC;                                   /* SUBC             */
    unsigned long  SRBU;                                   /* SRBU             */
    unsigned char  SEC;                                    /* SEC              */
    unsigned char  dummy669[3];                            /* Reserved         */
    unsigned char  MIN;                                    /* MIN              */
    unsigned char  dummy670[3];                            /* Reserved         */
    unsigned char  HOUR;                                   /* HOUR             */
    unsigned char  dummy671[3];                            /* Reserved         */
    unsigned char  WEEK;                                   /* WEEK             */
    unsigned char  dummy672[3];                            /* Reserved         */
    unsigned char  DAY;                                    /* DAY              */
    unsigned char  dummy673[3];                            /* Reserved         */
    unsigned char  MONTH;                                  /* MONTH            */
    unsigned char  dummy674[3];                            /* Reserved         */
    unsigned char  YEAR;                                   /* YEAR             */
    unsigned char  dummy675[3];                            /* Reserved         */
    unsigned long  TIME;                                   /* TIME             */
    unsigned long  CAL;                                    /* CAL              */
    unsigned char  SUBU;                                   /* SUBU             */
    unsigned char  dummy676[3];                            /* Reserved         */
    unsigned long  SCMP;                                   /* SCMP             */
    unsigned char  ALM;                                    /* ALM              */
    unsigned char  dummy677[3];                            /* Reserved         */
    unsigned char  ALH;                                    /* ALH              */
    unsigned char  dummy678[3];                            /* Reserved         */
    unsigned char  ALW;                                    /* ALW              */
    unsigned char  dummy679[3];                            /* Reserved         */
    unsigned char  SECC;                                   /* SECC             */
    unsigned char  dummy680[3];                            /* Reserved         */
    unsigned char  MINC;                                   /* MINC             */
    unsigned char  dummy681[3];                            /* Reserved         */
    unsigned char  HOURC;                                  /* HOURC            */
    unsigned char  dummy682[3];                            /* Reserved         */
    unsigned char  WEEKC;                                  /* WEEKC            */
    unsigned char  dummy683[3];                            /* Reserved         */
    unsigned char  DAYC;                                   /* DAYC             */
    unsigned char  dummy684[3];                            /* Reserved         */
    unsigned char  MONC;                                   /* MONC             */
    unsigned char  dummy685[3];                            /* Reserved         */
    unsigned char  YEARC;                                  /* YEARC            */
    unsigned char  dummy686[3];                            /* Reserved         */
    unsigned long  TIMEC;                                  /* TIMEC            */
    unsigned long  CALC;                                   /* CALC             */
    unsigned char  dummy687[4];                            /* Reserved         */
    union __tag270 EMU;                                    /* EMU              */
};
struct __tag578
{                                                          /* Module           */
    unsigned short CCR0;                                   /* CCR0             */
    unsigned char  dummy688[2];                            /* Reserved         */
    unsigned short CCR1;                                   /* CCR1             */
    unsigned char  dummy689[2];                            /* Reserved         */
    unsigned short CNT;                                    /* CNT              */
    unsigned char  dummy690[2];                            /* Reserved         */
    unsigned char  FLG;                                    /* FLG              */
    unsigned char  dummy691[3];                            /* Reserved         */
    unsigned char  FGC;                                    /* FGC              */
    unsigned char  dummy692[3];                            /* Reserved         */
    unsigned char  TE;                                     /* TE               */
    unsigned char  dummy693[3];                            /* Reserved         */
    unsigned char  TS;                                     /* TS               */
    unsigned char  dummy694[3];                            /* Reserved         */
    unsigned char  TT;                                     /* TT               */
    unsigned char  dummy695[3];                            /* Reserved         */
    unsigned char  IOC0;                                   /* IOC0             */
    unsigned char  dummy696[31];                           /* Reserved         */
    unsigned short CTL;                                    /* CTL              */
    unsigned char  dummy697[2];                            /* Reserved         */
    unsigned char  IOC1;                                   /* IOC1             */
    unsigned char  dummy698[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag579
{                                                          /* Module           */
    unsigned short FLG;                                    /* FLG              */
    unsigned char  dummy699[2];                            /* Reserved         */
    unsigned char  ACWE;                                   /* ACWE             */
    unsigned char  dummy700[3];                            /* Reserved         */
    unsigned char  ACTS;                                   /* ACTS             */
    unsigned char  dummy701[3];                            /* Reserved         */
    unsigned char  ACTT;                                   /* ACTT             */
    unsigned char  dummy702[7];                            /* Reserved         */
    unsigned char  OPHS;                                   /* OPHS             */
    unsigned char  dummy703[3];                            /* Reserved         */
    unsigned char  OPHT;                                   /* OPHT             */
    unsigned char  dummy704[7];                            /* Reserved         */
    unsigned short CTL0;                                   /* CTL0             */
    unsigned char  dummy705[2];                            /* Reserved         */
    unsigned char  CTL1;                                   /* CTL1             */
    unsigned char  dummy706[3];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
};
struct __tag580
{                                                          /* Module           */
    unsigned char  WDTE;                                   /* WDTE             */
    unsigned char  dummy707[3];                            /* Reserved         */
    unsigned char  EVAC;                                   /* EVAC             */
    unsigned char  dummy708[3];                            /* Reserved         */
    unsigned char  REF;                                    /* REF              */
    unsigned char  dummy709[3];                            /* Reserved         */
    unsigned char  MD;                                     /* MD               */
};
struct __tag581
{                                                          /* Module           */
    union __tag256 VCR00;                                  /* VCR00            */
    union __tag256 VCR01;                                  /* VCR01            */
    union __tag256 VCR02;                                  /* VCR02            */
    union __tag256 VCR03;                                  /* VCR03            */
    union __tag256 VCR04;                                  /* VCR04            */
    union __tag256 VCR05;                                  /* VCR05            */
    union __tag256 VCR06;                                  /* VCR06            */
    union __tag256 VCR07;                                  /* VCR07            */
    union __tag256 VCR08;                                  /* VCR08            */
    union __tag256 VCR09;                                  /* VCR09            */
    union __tag256 VCR10;                                  /* VCR10            */
    union __tag256 VCR11;                                  /* VCR11            */
    union __tag256 VCR12;                                  /* VCR12            */
    union __tag256 VCR13;                                  /* VCR13            */
    union __tag256 VCR14;                                  /* VCR14            */
    union __tag256 VCR15;                                  /* VCR15            */
    union __tag256 VCR16;                                  /* VCR16            */
    union __tag256 VCR17;                                  /* VCR17            */
    union __tag256 VCR18;                                  /* VCR18            */
    union __tag256 VCR19;                                  /* VCR19            */
    union __tag256 VCR20;                                  /* VCR20            */
    union __tag256 VCR21;                                  /* VCR21            */
    union __tag256 VCR22;                                  /* VCR22            */
    union __tag256 VCR23;                                  /* VCR23            */
    union __tag256 VCR24;                                  /* VCR24            */
    union __tag256 VCR25;                                  /* VCR25            */
    union __tag256 VCR26;                                  /* VCR26            */
    union __tag256 VCR27;                                  /* VCR27            */
    union __tag256 VCR28;                                  /* VCR28            */
    union __tag256 VCR29;                                  /* VCR29            */
    union __tag256 VCR30;                                  /* VCR30            */
    union __tag256 VCR31;                                  /* VCR31            */
    union __tag256 VCR32;                                  /* VCR32            */
    union __tag256 VCR33;                                  /* VCR33            */
    union __tag256 VCR34;                                  /* VCR34            */
    union __tag256 VCR35;                                  /* VCR35            */
    union __tag256 VCR36;                                  /* VCR36            */
    union __tag256 VCR37;                                  /* VCR37            */
    union __tag256 VCR38;                                  /* VCR38            */
    union __tag256 VCR39;                                  /* VCR39            */
    union __tag256 VCR40;                                  /* VCR40            */
    union __tag256 VCR41;                                  /* VCR41            */
    union __tag256 VCR42;                                  /* VCR42            */
    union __tag256 VCR43;                                  /* VCR43            */
    union __tag256 VCR44;                                  /* VCR44            */
    union __tag256 VCR45;                                  /* VCR45            */
    union __tag256 VCR46;                                  /* VCR46            */
    union __tag256 VCR47;                                  /* VCR47            */
    union __tag256 VCR48;                                  /* VCR48            */
    union __tag256 VCR49;                                  /* VCR49            */
    unsigned char  dummy710[44];                           /* Reserved         */
    union __tag256 PWDVCR;                                 /* PWDVCR           */
    unsigned char  dummy711[8];                            /* Reserved         */
    union __tag264 DR00;                                   /* DR00             */
    union __tag264 DR02;                                   /* DR02             */
    union __tag264 DR04;                                   /* DR04             */
    union __tag264 DR06;                                   /* DR06             */
    union __tag264 DR08;                                   /* DR08             */
    union __tag264 DR10;                                   /* DR10             */
    union __tag264 DR12;                                   /* DR12             */
    union __tag264 DR14;                                   /* DR14             */
    union __tag264 DR16;                                   /* DR16             */
    union __tag264 DR18;                                   /* DR18             */
    union __tag264 DR20;                                   /* DR20             */
    union __tag264 DR22;                                   /* DR22             */
    union __tag264 DR24;                                   /* DR24             */
    union __tag264 DR26;                                   /* DR26             */
    union __tag264 DR28;                                   /* DR28             */
    union __tag264 DR30;                                   /* DR30             */
    union __tag264 DR32;                                   /* DR32             */
    union __tag264 DR34;                                   /* DR34             */
    union __tag264 DR36;                                   /* DR36             */
    union __tag264 DR38;                                   /* DR38             */
    union __tag264 DR40;                                   /* DR40             */
    union __tag264 DR42;                                   /* DR42             */
    union __tag264 DR44;                                   /* DR44             */
    union __tag264 DR46;                                   /* DR46             */
    union __tag264 DR48;                                   /* DR48             */
    unsigned char  dummy712[20];                           /* Reserved         */
    union __tag264 PWDTSNDR;                               /* PWDTSNDR         */
    unsigned char  dummy713[132];                          /* Reserved         */
    unsigned long  DIR00;                                  /* DIR00            */
    unsigned long  DIR01;                                  /* DIR01            */
    unsigned long  DIR02;                                  /* DIR02            */
    unsigned long  DIR03;                                  /* DIR03            */
    unsigned long  DIR04;                                  /* DIR04            */
    unsigned long  DIR05;                                  /* DIR05            */
    unsigned long  DIR06;                                  /* DIR06            */
    unsigned long  DIR07;                                  /* DIR07            */
    unsigned long  DIR08;                                  /* DIR08            */
    unsigned long  DIR09;                                  /* DIR09            */
    unsigned long  DIR10;                                  /* DIR10            */
    unsigned long  DIR11;                                  /* DIR11            */
    unsigned long  DIR12;                                  /* DIR12            */
    unsigned long  DIR13;                                  /* DIR13            */
    unsigned long  DIR14;                                  /* DIR14            */
    unsigned long  DIR15;                                  /* DIR15            */
    unsigned long  DIR16;                                  /* DIR16            */
    unsigned long  DIR17;                                  /* DIR17            */
    unsigned long  DIR18;                                  /* DIR18            */
    unsigned long  DIR19;                                  /* DIR19            */
    unsigned long  DIR20;                                  /* DIR20            */
    unsigned long  DIR21;                                  /* DIR21            */
    unsigned long  DIR22;                                  /* DIR22            */
    unsigned long  DIR23;                                  /* DIR23            */
    unsigned long  DIR24;                                  /* DIR24            */
    unsigned long  DIR25;                                  /* DIR25            */
    unsigned long  DIR26;                                  /* DIR26            */
    unsigned long  DIR27;                                  /* DIR27            */
    unsigned long  DIR28;                                  /* DIR28            */
    unsigned long  DIR29;                                  /* DIR29            */
    unsigned long  DIR30;                                  /* DIR30            */
    unsigned long  DIR31;                                  /* DIR31            */
    unsigned long  DIR32;                                  /* DIR32            */
    unsigned long  DIR33;                                  /* DIR33            */
    unsigned long  DIR34;                                  /* DIR34            */
    unsigned long  DIR35;                                  /* DIR35            */
    unsigned long  DIR36;                                  /* DIR36            */
    unsigned long  DIR37;                                  /* DIR37            */
    unsigned long  DIR38;                                  /* DIR38            */
    unsigned long  DIR39;                                  /* DIR39            */
    unsigned long  DIR40;                                  /* DIR40            */
    unsigned long  DIR41;                                  /* DIR41            */
    unsigned long  DIR42;                                  /* DIR42            */
    unsigned long  DIR43;                                  /* DIR43            */
    unsigned long  DIR44;                                  /* DIR44            */
    unsigned long  DIR45;                                  /* DIR45            */
    unsigned long  DIR46;                                  /* DIR46            */
    unsigned long  DIR47;                                  /* DIR47            */
    unsigned long  DIR48;                                  /* DIR48            */
    unsigned long  DIR49;                                  /* DIR49            */
    unsigned char  dummy714[44];                           /* Reserved         */
    unsigned long  PWDDIR;                                 /* PWDDIR           */
    unsigned char  dummy715[8];                            /* Reserved         */
    union __tag256 ADHALTR;                                /* ADHALTR          */
    union __tag256 ADCR;                                   /* ADCR             */
    union __tag264 SGSTR;                                  /* SGSTR            */
    union __tag256 MPXCURR;                                /* MPXCURR          */
    unsigned char  dummy716[4];                            /* Reserved         */
    union __tag256 THSMPSTCR;                              /* THSMPSTCR        */
    union __tag256 THCR;                                   /* THCR             */
    union __tag256 THAHLDSTCR;                             /* THAHLDSTCR       */
    union __tag256 THBHLDSTCR;                             /* THBHLDSTCR       */
    union __tag256 THACR;                                  /* THACR            */
    union __tag256 THBCR;                                  /* THBCR            */
    union __tag256 THER;                                   /* THER             */
    union __tag256 THGSR;                                  /* THGSR            */
    union __tag256 SFTCR;                                  /* SFTCR            */
    union __tag264 ULLMTBR0;                               /* ULLMTBR0         */
    union __tag264 ULLMTBR1;                               /* ULLMTBR1         */
    union __tag264 ULLMTBR2;                               /* ULLMTBR2         */
    union __tag256 ECR;                                    /* ECR              */
    union __tag256 ULER;                                   /* ULER             */
    union __tag256 OWER;                                   /* OWER             */
    union __tag256 DGCTL0;                                 /* DGCTL0           */
    union __tag264 DGCTL1;                                 /* DGCTL1           */
    union __tag264 PDCTL1;                                 /* PDCTL1           */
    union __tag256 PDCTL2;                                 /* PDCTL2           */
    unsigned char  dummy717[32];                           /* Reserved         */
    union __tag256 SMPCR;                                  /* SMPCR            */
    unsigned char  dummy718[4];                            /* Reserved         */
    unsigned char  EMU;                                    /* EMU              */
    unsigned char  dummy719[183];                          /* Reserved         */
    union __tag256 SGSTCR1;                                /* SGSTCR1          */
    unsigned char  dummy720[4];                            /* Reserved         */
    union __tag256 SGCR1;                                  /* SGCR1            */
    union __tag256 SGVCSP1;                                /* SGVCSP1          */
    union __tag256 SGVCEP1;                                /* SGVCEP1          */
    union __tag256 SGMCYCR1;                               /* SGMCYCR1         */
    union __tag256 SGSEFCR1;                               /* SGSEFCR1         */
    union __tag264 SGTSEL1;                                /* SGTSEL1          */
    unsigned char  dummy721[32];                           /* Reserved         */
    union __tag256 SGSTCR2;                                /* SGSTCR2          */
    unsigned char  dummy722[4];                            /* Reserved         */
    union __tag256 SGCR2;                                  /* SGCR2            */
    union __tag256 SGVCSP2;                                /* SGVCSP2          */
    union __tag256 SGVCEP2;                                /* SGVCEP2          */
    union __tag256 SGMCYCR2;                               /* SGMCYCR2         */
    union __tag256 SGSEFCR2;                               /* SGSEFCR2         */
    union __tag264 SGTSEL2;                                /* SGTSEL2          */
    unsigned char  dummy723[32];                           /* Reserved         */
    union __tag256 SGSTCR3;                                /* SGSTCR3          */
    unsigned char  dummy724[4];                            /* Reserved         */
    union __tag256 SGCR3;                                  /* SGCR3            */
    union __tag256 SGVCSP3;                                /* SGVCSP3          */
    union __tag256 SGVCEP3;                                /* SGVCEP3          */
    union __tag256 SGMCYCR3;                               /* SGMCYCR3         */
    union __tag256 SGSEFCR3;                               /* SGSEFCR3         */
    union __tag264 SGTSEL3;                                /* SGTSEL3          */
    unsigned char  dummy725[40];                           /* Reserved         */
    union __tag256 PWDSGCR;                                /* PWDSGCR          */
    unsigned char  dummy726[12];                           /* Reserved         */
    union __tag256 PWDSGSEFCR;                             /* PWDSGSEFCR       */
};
struct __tag582
{                                                          /* Module           */
    unsigned long  CIN;                                    /* CIN              */
    unsigned long  COUT;                                   /* COUT             */
    unsigned char  dummy727[24];                           /* Reserved         */
    unsigned char  CTL;                                    /* CTL              */
};
struct __tag583
{                                                          /* Module           */
    union __tag275 KRM;                                    /* KRM              */
};
struct __tag584
{                                                          /* Module           */
    unsigned long  PROTCMD0;                               /* PROTCMD0         */
    unsigned long  PROTS0;                                 /* PROTS0           */
    unsigned char  dummy728[32760];                        /* Reserved         */
    unsigned long  PROTCMD1;                               /* PROTCMD1         */
    unsigned long  PROTS1;                                 /* PROTS1           */
};
struct __tag585
{                                                          /* Module           */
    unsigned long  PSC;                                    /* PSC              */
    unsigned char  dummy729[12];                           /* Reserved         */
    unsigned long  STPT;                                   /* STPT             */
};
struct __tag586
{                                                          /* Module           */
    unsigned long  WUF0;                                   /* WUF0             */
    unsigned long  WUFMSK0;                                /* WUFMSK0          */
    unsigned long  WUFC0;                                  /* WUFC0            */
};
struct __tag587
{                                                          /* Module           */
    unsigned long  WUF20;                                  /* WUF20            */
    unsigned long  WUFMSK20;                               /* WUFMSK20         */
    unsigned long  WUFC20;                                 /* WUFC20           */
};
struct __tag588
{                                                          /* Module           */
    unsigned long  RESF;                                   /* RESF             */
    unsigned char  dummy730[4];                            /* Reserved         */
    unsigned long  RESFC;                                  /* RESFC            */
    unsigned char  dummy731[244];                          /* Reserved         */
    unsigned long  RESFR;                                  /* RESFR            */
    unsigned char  dummy732[4];                            /* Reserved         */
    unsigned long  RESFCR;                                 /* RESFCR           */
    unsigned char  dummy733[408];                          /* Reserved         */
    unsigned long  SWRESA;                                 /* SWRESA           */
    unsigned char  dummy734[11256];                        /* Reserved         */
    unsigned long  CYCRBASE;                               /* CYCRBASE         */
};
struct __tag589
{                                                          /* Module           */
    unsigned long  VLVF;                                   /* VLVF             */
    unsigned char  dummy735[4];                            /* Reserved         */
    unsigned long  VLVFC;                                  /* VLVFC            */
    unsigned char  dummy736[116];                          /* Reserved         */
    unsigned long  LVICNT;                                 /* LVICNT           */
    unsigned char  dummy737[9980];                         /* Reserved         */
    unsigned long  CVMF;                                   /* CVMF             */
    unsigned long  CVMDE;                                  /* CVMDE            */
    unsigned char  dummy738[12];                           /* Reserved         */
    unsigned long  CVMDIAG;                                /* CVMDIAG          */
    unsigned char  dummy739[232];                          /* Reserved         */
    unsigned long  PROTCMDCVM;                             /* PROTCMDCVM       */
    unsigned long  PROTSCVM;                               /* PROTSCVM         */
};
struct __tag590
{                                                          /* Module           */
    unsigned long  IOHOLD;                                 /* IOHOLD           */
};
struct __tag591
{                                                          /* Module           */
    unsigned long  ROSCE;                                  /* ROSCE            */
    unsigned long  ROSCS;                                  /* ROSCS            */
    unsigned char  dummy740[16];                           /* Reserved         */
    unsigned long  ROSCSTPM;                               /* ROSCSTPM         */
    unsigned long  ROSCUT;                                 /* ROSCUT           */
    unsigned char  dummy741[224];                          /* Reserved         */
    unsigned long  MOSCE;                                  /* MOSCE            */
    unsigned long  MOSCS;                                  /* MOSCS            */
    unsigned long  MOSCC;                                  /* MOSCC            */
    unsigned long  MOSCST;                                 /* MOSCST           */
    unsigned char  dummy742[8];                            /* Reserved         */
    unsigned long  MOSCSTPM;                               /* MOSCSTPM         */
    unsigned long  MOSCM;                                  /* MOSCM            */
    unsigned char  dummy743[224];                          /* Reserved         */
    unsigned long  SOSCE;                                  /* SOSCE            */
    unsigned long  SOSCS;                                  /* SOSCS            */
    unsigned char  dummy744[4];                            /* Reserved         */
    unsigned long  SOSCST;                                 /* SOSCST           */
    unsigned char  dummy745[3568];                         /* Reserved         */
    unsigned long  CKSC_AWDTAD_CTL;                        /* CKSC_AWDTAD_CTL  */
    unsigned char  dummy746[4];                            /* Reserved         */
    unsigned long  CKSC_AWDTAD_ACT;                        /* CKSC_AWDTAD_ACT  */
    unsigned char  dummy747[12];                           /* Reserved         */
    unsigned long  CKSC_AWDTAD_STPM;                       /* CKSC_AWDTAD_STPM */
    unsigned char  dummy748[228];                          /* Reserved         */
    unsigned long  CKSC_ATAUJS_CTL;                        /* CKSC_ATAUJS_CTL  */
    unsigned char  dummy749[4];                            /* Reserved         */
    unsigned long  CKSC_ATAUJS_ACT;                        /* CKSC_ATAUJS_ACT  */
    unsigned char  dummy750[244];                          /* Reserved         */
    unsigned long  CKSC_ATAUJD_CTL;                        /* CKSC_ATAUJD_CTL  */
    unsigned char  dummy751[4];                            /* Reserved         */
    unsigned long  CKSC_ATAUJD_ACT;                        /* CKSC_ATAUJD_ACT  */
    unsigned char  dummy752[12];                           /* Reserved         */
    unsigned long  CKSC_ATAUJD_STPM;                       /* CKSC_ATAUJD_STPM */
    unsigned char  dummy753[228];                          /* Reserved         */
    unsigned long  CKSC_ARTCAS_CTL;                        /* CKSC_ARTCAS_CTL  */
    unsigned char  dummy754[4];                            /* Reserved         */
    unsigned long  CKSC_ARTCAS_ACT;                        /* CKSC_ARTCAS_ACT  */
    unsigned char  dummy755[244];                          /* Reserved         */
    unsigned long  CKSC_ARTCAD_CTL;                        /* CKSC_ARTCAD_CTL  */
    unsigned char  dummy756[4];                            /* Reserved         */
    unsigned long  CKSC_ARTCAD_ACT;                        /* CKSC_ARTCAD_ACT  */
    unsigned char  dummy757[12];                           /* Reserved         */
    unsigned long  CKSC_ARTCAD_STPM;                       /* CKSC_ARTCAD_STPM */
    unsigned char  dummy758[228];                          /* Reserved         */
    unsigned long  CKSC_AADCAS_CTL;                        /* CKSC_AADCAS_CTL  */
    unsigned char  dummy759[4];                            /* Reserved         */
    unsigned long  CKSC_AADCAS_ACT;                        /* CKSC_AADCAS_ACT  */
    unsigned char  dummy760[244];                          /* Reserved         */
    unsigned long  CKSC_AADCAD_CTL;                        /* CKSC_AADCAD_CTL  */
    unsigned char  dummy761[4];                            /* Reserved         */
    unsigned long  CKSC_AADCAD_ACT;                        /* CKSC_AADCAD_ACT  */
    unsigned char  dummy762[12];                           /* Reserved         */
    unsigned long  CKSC_AADCAD_STPM;                       /* CKSC_AADCAD_STPM */
    unsigned char  dummy763[228];                          /* Reserved         */
    unsigned long  CKSC_AFOUTS_CTL;                        /* CKSC_AFOUTS_CTL  */
    unsigned char  dummy764[4];                            /* Reserved         */
    unsigned long  CKSC_AFOUTS_ACT;                        /* CKSC_AFOUTS_ACT  */
    unsigned char  dummy765[12];                           /* Reserved         */
    unsigned long  CKSC_AFOUTS_STPM;                       /* CKSC_AFOUTS_STPM */
    unsigned char  dummy766[228];                          /* Reserved         */
    unsigned long  FOUTDIV;                                /* FOUTDIV          */
    unsigned long  FOUTSTAT;                               /* FOUTSTAT         */
    unsigned char  dummy767[26616];                        /* Reserved         */
    unsigned long  PLLE;                                   /* PLLE             */
    unsigned long  PLLS;                                   /* PLLS             */
    unsigned long  PLLC;                                   /* PLLC             */
    unsigned char  dummy768[4084];                         /* Reserved         */
    unsigned long  CKSC_CPUCLKS_CTL;                       /* CKSC_CPUCLKS_CTL */
    unsigned char  dummy769[4];                            /* Reserved         */
    unsigned long  CKSC_CPUCLKS_ACT;                       /* CKSC_CPUCLKS_ACT */
    unsigned char  dummy770[4];                            /* Reserved         */
    unsigned long  CKSC_PPLLCLKS_CTL;                      /* CKSC_PPLLCLKS_CTL */
    unsigned char  dummy771[4];                            /* Reserved         */
    unsigned long  CKSC_PPLLCLKS_ACT;                      /* CKSC_PPLLCLKS_ACT */
    unsigned char  dummy772[228];                          /* Reserved         */
    unsigned long  CKSC_CPUCLKD_CTL;                       /* CKSC_CPUCLKD_CTL */
    unsigned char  dummy773[4];                            /* Reserved         */
    unsigned long  CKSC_CPUCLKD_ACT;                       /* CKSC_CPUCLKD_ACT */
    unsigned char  dummy774[244];                          /* Reserved         */
    unsigned long  CKSC_IPERI1S_CTL;                       /* CKSC_IPERI1S_CTL */
    unsigned char  dummy775[4];                            /* Reserved         */
    unsigned long  CKSC_IPERI1S_ACT;                       /* CKSC_IPERI1S_ACT */
    unsigned char  dummy776[244];                          /* Reserved         */
    unsigned long  CKSC_IPERI2S_CTL;                       /* CKSC_IPERI2S_CTL */
    unsigned char  dummy777[4];                            /* Reserved         */
    unsigned long  CKSC_IPERI2S_ACT;                       /* CKSC_IPERI2S_ACT */
    unsigned char  dummy778[244];                          /* Reserved         */
    unsigned long  CKSC_ILINS_CTL;                         /* CKSC_ILINS_CTL   */
    unsigned char  dummy779[4];                            /* Reserved         */
    unsigned long  CKSC_ILINS_ACT;                         /* CKSC_ILINS_ACT   */
    unsigned char  dummy780[244];                          /* Reserved         */
    unsigned long  CKSC_IADCAS_CTL;                        /* CKSC_IADCAS_CTL  */
    unsigned char  dummy781[4];                            /* Reserved         */
    unsigned long  CKSC_IADCAS_ACT;                        /* CKSC_IADCAS_ACT  */
    unsigned char  dummy782[244];                          /* Reserved         */
    unsigned long  CKSC_IADCAD_CTL;                        /* CKSC_IADCAD_CTL  */
    unsigned char  dummy783[4];                            /* Reserved         */
    unsigned long  CKSC_IADCAD_ACT;                        /* CKSC_IADCAD_ACT  */
    unsigned char  dummy784[244];                          /* Reserved         */
    unsigned long  CKSC_PLLIS_CTL;                         /* CKSC_PLLIS_CTL   */
    unsigned char  dummy785[4];                            /* Reserved         */
    unsigned long  CKSC_PLLIS_ACT;                         /* CKSC_PLLIS_ACT   */
    unsigned char  dummy786[244];                          /* Reserved         */
    unsigned long  CKSC_ILIND_CTL;                         /* CKSC_ILIND_CTL   */
    unsigned char  dummy787[4];                            /* Reserved         */
    unsigned long  CKSC_ILIND_ACT;                         /* CKSC_ILIND_ACT   */
    unsigned char  dummy788[12];                           /* Reserved         */
    unsigned long  CKSC_ILIND_STPM;                        /* CKSC_ILIND_STPM  */
    unsigned char  dummy789[228];                          /* Reserved         */
    unsigned long  CKSC_ICANS_CTL;                         /* CKSC_ICANS_CTL   */
    unsigned char  dummy790[4];                            /* Reserved         */
    unsigned long  CKSC_ICANS_ACT;                         /* CKSC_ICANS_ACT   */
    unsigned char  dummy791[12];                           /* Reserved         */
    unsigned long  CKSC_ICANS_STPM;                        /* CKSC_ICANS_STPM  */
    unsigned char  dummy792[228];                          /* Reserved         */
    unsigned long  CKSC_ICANOSCD_CTL;                      /* CKSC_ICANOSCD_CTL */
    unsigned char  dummy793[4];                            /* Reserved         */
    unsigned long  CKSC_ICANOSCD_ACT;                      /* CKSC_ICANOSCD_ACT */
    unsigned char  dummy794[12];                           /* Reserved         */
    unsigned long  CKSC_ICANOSCD_STPM;                     /* CKSC_ICANOSCD_STPM */
    unsigned char  dummy795[228];                          /* Reserved         */
    unsigned long  CKSC_ICSIS_CTL;                         /* CKSC_ICSIS_CTL   */
    unsigned char  dummy796[4];                            /* Reserved         */
    unsigned long  CKSC_ICSIS_ACT;                         /* CKSC_ICSIS_ACT   */
    unsigned char  dummy797[244];                          /* Reserved         */
    unsigned long  CKSC_IIICS_CTL;                         /* CKSC_IIICS_CTL   */
    unsigned char  dummy798[4];                            /* Reserved         */
    unsigned long  CKSC_IIICS_ACT;                         /* CKSC_IIICS_ACT   */
};
struct __tag592
{                                                          /* Module           */
    unsigned long  SCTLR;                                  /* SCTLR            */
    unsigned long  EVFR;                                   /* EVFR             */
    unsigned long  DPSELR0;                                /* DPSELR0          */
    union __tag276 DPSELRM;                                /* DPSELRM          */
    union __tag277 DPSELRH;                                /* DPSELRH          */
    unsigned long  DPDSR0;                                 /* DPDSR0           */
    union __tag278 DPDSRM;                                 /* DPDSRM           */
    union __tag279 DPDSRH;                                 /* DPDSRH           */
    unsigned long  DPDIMR0;                                /* DPDIMR0          */
    unsigned char  DPDIMR1;                                /* DPDIMR1          */
    unsigned char  dummy799[3];                            /* Reserved         */
    unsigned char  DPDIMR2;                                /* DPDIMR2          */
    unsigned char  dummy800[3];                            /* Reserved         */
    unsigned char  DPDIMR3;                                /* DPDIMR3          */
    unsigned char  dummy801[3];                            /* Reserved         */
    unsigned char  DPDIMR4;                                /* DPDIMR4          */
    unsigned char  dummy802[3];                            /* Reserved         */
    unsigned char  DPDIMR5;                                /* DPDIMR5          */
    unsigned char  dummy803[3];                            /* Reserved         */
    unsigned char  DPDIMR6;                                /* DPDIMR6          */
    unsigned char  dummy804[3];                            /* Reserved         */
    unsigned char  DPDIMR7;                                /* DPDIMR7          */
    unsigned char  dummy805[3];                            /* Reserved         */
    unsigned short CNTVAL;                                 /* CNTVAL           */
    unsigned char  dummy806[2];                            /* Reserved         */
    unsigned char  SOSTR;                                  /* SOSTR            */
};
struct __tag593
{                                                          /* Module           */
    unsigned long  WUF_ISO0;                               /* WUF_ISO0         */
    unsigned long  WUFMSK_ISO0;                            /* WUFMSK_ISO0      */
    unsigned long  WUFC_ISO0;                              /* WUFC_ISO0        */
};
struct __tag594
{                                                          /* Module           */
    unsigned char  CTL0;                                   /* CTL0             */
    unsigned char  dummy807[7];                            /* Reserved         */
    unsigned short CMPL;                                   /* CMPL             */
    unsigned char  dummy808[2];                            /* Reserved         */
    unsigned short CMPH;                                   /* CMPH             */
    unsigned char  dummy809[2];                            /* Reserved         */
    unsigned char  PCMD;                                   /* PCMD             */
    unsigned char  dummy810[3];                            /* Reserved         */
    unsigned char  PS;                                     /* PS               */
    unsigned char  dummy811[3];                            /* Reserved         */
    unsigned char  EMU0;                                   /* EMU0             */
};
struct __tag595
{                                                          /* Module           */
    unsigned long  TEST;                                   /* TEST             */
    unsigned long  TESTS;                                  /* TESTS            */
    unsigned char  dummy812[248];                          /* Reserved         */
    unsigned long  PROTCMDCLMA;                            /* PROTCMDCLMA      */
    unsigned long  PROTSCLMA;                              /* PROTSCLMA        */
};
struct __tag596
{                                                          /* Module           */
    union __tag256 FSGD06PROT0;                            /* FSGD06PROT0      */
    union __tag256 FSGD06PROT1;                            /* FSGD06PROT1      */
    unsigned char  dummy813[8];                            /* Reserved         */
    union __tag256 FSGD06PROT4;                            /* FSGD06PROT4      */
    union __tag256 FSGD06PROT5;                            /* FSGD06PROT5      */
    union __tag256 FSGD06PROT6;                            /* FSGD06PROT6      */
    union __tag256 FSGD06PROT7;                            /* FSGD06PROT7      */
    union __tag256 FSGD06PROT8;                            /* FSGD06PROT8      */
    unsigned char  dummy814[28];                           /* Reserved         */
    union __tag256 ERRSLV06CTL;                            /* ERRSLV06CTL      */
    union __tag256 ERRSLV06STAT;                           /* ERRSLV06STAT     */
    unsigned long  ERRSLV06ADDR;                           /* ERRSLV06ADDR     */
    union __tag264 ERRSLV06TYPE;                           /* ERRSLV06TYPE     */
};
struct __tag597
{                                                          /* Module           */
    union __tag256 FSGD03PROT0;                            /* FSGD03PROT0      */
    union __tag256 FSGD03PROT1;                            /* FSGD03PROT1      */
    union __tag256 FSGD03PROT2;                            /* FSGD03PROT2      */
    union __tag256 FSGD03PROT3;                            /* FSGD03PROT3      */
    union __tag256 FSGD03PROT4;                            /* FSGD03PROT4      */
    union __tag256 FSGD03PROT5;                            /* FSGD03PROT5      */
    union __tag256 FSGD03PROT6;                            /* FSGD03PROT6      */
    unsigned char  dummy815[20];                           /* Reserved         */
    union __tag256 FSGD03PROT12;                           /* FSGD03PROT12     */
    unsigned char  dummy816[12];                           /* Reserved         */
    union __tag256 ERRSLV03CTL;                            /* ERRSLV03CTL      */
    union __tag256 ERRSLV03STAT;                           /* ERRSLV03STAT     */
    unsigned long  ERRSLV03ADDR;                           /* ERRSLV03ADDR     */
    union __tag264 ERRSLV03TYPE;                           /* ERRSLV03TYPE     */
};
struct __tag598
{                                                          /* Module           */
    union __tag256 FSGD04PROT0;                            /* FSGD04PROT0      */
    union __tag256 FSGD04PROT1;                            /* FSGD04PROT1      */
    unsigned char  dummy817[8];                            /* Reserved         */
    union __tag256 FSGD04PROT4;                            /* FSGD04PROT4      */
    union __tag256 FSGD04PROT5;                            /* FSGD04PROT5      */
    union __tag256 FSGD04PROT6;                            /* FSGD04PROT6      */
    union __tag256 FSGD04PROT7;                            /* FSGD04PROT7      */
    union __tag256 FSGD04PROT8;                            /* FSGD04PROT8      */
    unsigned char  dummy818[4];                            /* Reserved         */
    union __tag256 FSGD04PROT10;                           /* FSGD04PROT10     */
    union __tag256 FSGD04PROT11;                           /* FSGD04PROT11     */
    unsigned char  dummy819[16];                           /* Reserved         */
    union __tag256 ERRSLV04CTL;                            /* ERRSLV04CTL      */
    union __tag256 ERRSLV04STAT;                           /* ERRSLV04STAT     */
    unsigned long  ERRSLV04ADDR;                           /* ERRSLV04ADDR     */
    union __tag264 ERRSLV04TYPE;                           /* ERRSLV04TYPE     */
};
struct __tag599
{                                                          /* Module           */
    union __tag256 FSGD05PROT0;                            /* FSGD05PROT0      */
    union __tag256 FSGD05PROT1;                            /* FSGD05PROT1      */
    union __tag256 FSGD05PROT2;                            /* FSGD05PROT2      */
    union __tag256 FSGD05PROT3;                            /* FSGD05PROT3      */
    union __tag256 FSGD05PROT4;                            /* FSGD05PROT4      */
    union __tag256 FSGD05PROT5;                            /* FSGD05PROT5      */
    union __tag256 FSGD05PROT6;                            /* FSGD05PROT6      */
    union __tag256 FSGD05PROT7;                            /* FSGD05PROT7      */
    union __tag256 FSGD05PROT8;                            /* FSGD05PROT8      */
    union __tag256 FSGD05PROT9;                            /* FSGD05PROT9      */
    union __tag256 FSGD05PROT10;                           /* FSGD05PROT10     */
    union __tag256 FSGD05PROT11;                           /* FSGD05PROT11     */
    unsigned char  dummy820[16];                           /* Reserved         */
    union __tag256 ERRSLV05CTL;                            /* ERRSLV05CTL      */
    union __tag256 ERRSLV05STAT;                           /* ERRSLV05STAT     */
    unsigned long  ERRSLV05ADDR;                           /* ERRSLV05ADDR     */
    union __tag264 ERRSLV05TYPE;                           /* ERRSLV05TYPE     */
};
struct __tag600
{                                                          /* Module           */
    union __tag256 SP;                                     /* SP               */
    unsigned char  dummy821[112];                          /* Reserved         */
    union __tag256 G0MK;                                   /* G0MK             */
    union __tag256 G0BA;                                   /* G0BA             */
    unsigned char  dummy822[8];                            /* Reserved         */
    union __tag256 G1MK;                                   /* G1MK             */
    union __tag256 G1BA;                                   /* G1BA             */
    unsigned char  dummy823[8];                            /* Reserved         */
    union __tag256 G2MK;                                   /* G2MK             */
    union __tag256 G2BA;                                   /* G2BA             */
    unsigned char  dummy824[8];                            /* Reserved         */
    union __tag256 G3MK;                                   /* G3MK             */
    union __tag256 G3BA;                                   /* G3BA             */
};
struct __tag601
{                                                          /* Module           */
    unsigned short CONT;                                   /* CONT             */
    unsigned short FLAG;                                   /* FLAG             */
    unsigned char  dummy825[4];                            /* Reserved         */
    unsigned long  ADDR;                                   /* ADDR             */
};
struct __tag602
{                                                          /* Module           */
    union __tag280 ICCSIH2IC_1;                            /* ICCSIH2IC_1      */
    union __tag281 ICCSIH3IC_1;                            /* ICCSIH3IC_1      */
    union __tag282 ICCSIH2IR_1;                            /* ICCSIH2IR_1      */
    union __tag283 ICCSIH2IRE_1;                           /* ICCSIH2IRE_1     */
    union __tag284 ICCSIH2IJC_1;                           /* ICCSIH2IJC_1     */
    union __tag285 ICCSIH3IR_1;                            /* ICCSIH3IR_1      */
    union __tag286 ICCSIH3IRE_1;                           /* ICCSIH3IRE_1     */
    union __tag287 ICCSIH3IJC_1;                           /* ICCSIH3IJC_1     */
    union __tag288 ICCSIH1IC_1;                            /* ICCSIH1IC_1      */
    union __tag289 ICCSIH1IR_1;                            /* ICCSIH1IR_1      */
    union __tag290 ICADCA0I0;                              /* ICADCA0I0        */
    union __tag291 ICADCA0I1;                              /* ICADCA0I1        */
    union __tag292 ICADCA0I2;                              /* ICADCA0I2        */
    union __tag293 ICDCUTDI;                               /* ICDCUTDI         */
    union __tag294 ICRCANGERR0;                            /* ICRCANGERR0      */
    union __tag295 ICRCANGRECC0;                           /* ICRCANGRECC0     */
    union __tag296 ICRCAN0ERR;                             /* ICRCAN0ERR       */
    union __tag297 ICRCAN0REC;                             /* ICRCAN0REC       */
    union __tag298 ICRCAN0TRX;                             /* ICRCAN0TRX       */
    union __tag299 ICCSIG0IC;                              /* ICCSIG0IC        */
    union __tag300 ICCSIG0IR;                              /* ICCSIG0IR        */
    union __tag301 ICCSIH0IC;                              /* ICCSIH0IC        */
    union __tag302 ICCSIH0IR;                              /* ICCSIH0IR        */
    union __tag303 ICCSIH0IRE;                             /* ICCSIH0IRE       */
    unsigned char  dummy826[56];                           /* Reserved         */
    union __tag304 FNC;                                    /* FNC              */
    union __tag305 FIC;                                    /* FIC              */
    unsigned char  dummy827[116];                          /* Reserved         */
    union __tag306 IMR0;                                   /* IMR0             */
};
struct __tag603
{                                                          /* Module           */
    unsigned long  TL;                                     /* TL               */
    unsigned char  dummy828[28];                           /* Reserved         */
    unsigned long  ER;                                     /* ER               */
    unsigned char  dummy829[12];                           /* Reserved         */
    unsigned long  DM0CMV;                                 /* DM0CMV           */
    unsigned long  DM1CMV;                                 /* DM1CMV           */
    unsigned char  dummy830[4];                            /* Reserved         */
    unsigned long  CMVC;                                   /* CMVC             */
    unsigned char  dummy831[192];                          /* Reserved         */
    unsigned long  DM00CM;                                 /* DM00CM           */
    unsigned long  DM01CM;                                 /* DM01CM           */
    unsigned long  DM02CM;                                 /* DM02CM           */
    unsigned long  DM03CM;                                 /* DM03CM           */
    unsigned long  DM04CM;                                 /* DM04CM           */
    unsigned long  DM05CM;                                 /* DM05CM           */
    unsigned long  DM06CM;                                 /* DM06CM           */
    unsigned long  DM07CM;                                 /* DM07CM           */
    unsigned long  DM10CM;                                 /* DM10CM           */
    unsigned long  DM11CM;                                 /* DM11CM           */
    unsigned long  DM12CM;                                 /* DM12CM           */
    unsigned long  DM13CM;                                 /* DM13CM           */
    unsigned long  DM14CM;                                 /* DM14CM           */
    unsigned long  DM15CM;                                 /* DM15CM           */
    unsigned long  DM16CM;                                 /* DM16CM           */
    unsigned long  DM17CM;                                 /* DM17CM           */
    unsigned char  dummy832[704];                          /* Reserved         */
    unsigned long  DSA0;                                   /* DSA0             */
    unsigned long  DDA0;                                   /* DDA0             */
    unsigned long  DTC0;                                   /* DTC0             */
    unsigned long  DTCT0;                                  /* DTCT0            */
    unsigned long  DRSA0;                                  /* DRSA0            */
    unsigned long  DRDA0;                                  /* DRDA0            */
    unsigned long  DRTC0;                                  /* DRTC0            */
    unsigned char  dummy833[4];                            /* Reserved         */
    unsigned long  DCEN0;                                  /* DCEN0            */
    unsigned long  DCST0;                                  /* DCST0            */
    unsigned long  DCSTS0;                                 /* DCSTS0           */
    unsigned long  DCSTC0;                                 /* DCSTC0           */
    unsigned long  DTFR0;                                  /* DTFR0            */
    unsigned long  DTFRRQ0;                                /* DTFRRQ0          */
    unsigned long  DTFRRQC0;                               /* DTFRRQC0         */
    unsigned char  dummy834[4];                            /* Reserved         */
    unsigned long  DSA1;                                   /* DSA1             */
    unsigned long  DDA1;                                   /* DDA1             */
    unsigned long  DTC1;                                   /* DTC1             */
    unsigned long  DTCT1;                                  /* DTCT1            */
    unsigned long  DRSA1;                                  /* DRSA1            */
    unsigned long  DRDA1;                                  /* DRDA1            */
    unsigned long  DRTC1;                                  /* DRTC1            */
    unsigned char  dummy835[4];                            /* Reserved         */
    unsigned long  DCEN1;                                  /* DCEN1            */
    unsigned long  DCST1;                                  /* DCST1            */
    unsigned long  DCSTS1;                                 /* DCSTS1           */
    unsigned long  DCSTC1;                                 /* DCSTC1           */
    unsigned long  DTFR1;                                  /* DTFR1            */
    unsigned long  DTFRRQ1;                                /* DTFRRQ1          */
    unsigned long  DTFRRQC1;                               /* DTFRRQC1         */
    unsigned char  dummy836[4];                            /* Reserved         */
    unsigned long  DSA2;                                   /* DSA2             */
    unsigned long  DDA2;                                   /* DDA2             */
    unsigned long  DTC2;                                   /* DTC2             */
    unsigned long  DTCT2;                                  /* DTCT2            */
    unsigned long  DRSA2;                                  /* DRSA2            */
    unsigned long  DRDA2;                                  /* DRDA2            */
    unsigned long  DRTC2;                                  /* DRTC2            */
    unsigned char  dummy837[4];                            /* Reserved         */
    unsigned long  DCEN2;                                  /* DCEN2            */
    unsigned long  DCST2;                                  /* DCST2            */
    unsigned long  DCSTS2;                                 /* DCSTS2           */
    unsigned long  DCSTC2;                                 /* DCSTC2           */
    unsigned long  DTFR2;                                  /* DTFR2            */
    unsigned long  DTFRRQ2;                                /* DTFRRQ2          */
    unsigned long  DTFRRQC2;                               /* DTFRRQC2         */
    unsigned char  dummy838[4];                            /* Reserved         */
    unsigned long  DSA3;                                   /* DSA3             */
    unsigned long  DDA3;                                   /* DDA3             */
    unsigned long  DTC3;                                   /* DTC3             */
    unsigned long  DTCT3;                                  /* DTCT3            */
    unsigned long  DRSA3;                                  /* DRSA3            */
    unsigned long  DRDA3;                                  /* DRDA3            */
    unsigned long  DRTC3;                                  /* DRTC3            */
    unsigned char  dummy839[4];                            /* Reserved         */
    unsigned long  DCEN3;                                  /* DCEN3            */
    unsigned long  DCST3;                                  /* DCST3            */
    unsigned long  DCSTS3;                                 /* DCSTS3           */
    unsigned long  DCSTC3;                                 /* DCSTC3           */
    unsigned long  DTFR3;                                  /* DTFR3            */
    unsigned long  DTFRRQ3;                                /* DTFRRQ3          */
    unsigned long  DTFRRQC3;                               /* DTFRRQC3         */
    unsigned char  dummy840[4];                            /* Reserved         */
    unsigned long  DSA4;                                   /* DSA4             */
    unsigned long  DDA4;                                   /* DDA4             */
    unsigned long  DTC4;                                   /* DTC4             */
    unsigned long  DTCT4;                                  /* DTCT4            */
    unsigned long  DRSA4;                                  /* DRSA4            */
    unsigned long  DRDA4;                                  /* DRDA4            */
    unsigned long  DRTC4;                                  /* DRTC4            */
    unsigned char  dummy841[4];                            /* Reserved         */
    unsigned long  DCEN4;                                  /* DCEN4            */
    unsigned long  DCST4;                                  /* DCST4            */
    unsigned long  DCSTS4;                                 /* DCSTS4           */
    unsigned long  DCSTC4;                                 /* DCSTC4           */
    unsigned long  DTFR4;                                  /* DTFR4            */
    unsigned long  DTFRRQ4;                                /* DTFRRQ4          */
    unsigned long  DTFRRQC4;                               /* DTFRRQC4         */
    unsigned char  dummy842[4];                            /* Reserved         */
    unsigned long  DSA5;                                   /* DSA5             */
    unsigned long  DDA5;                                   /* DDA5             */
    unsigned long  DTC5;                                   /* DTC5             */
    unsigned long  DTCT5;                                  /* DTCT5            */
    unsigned long  DRSA5;                                  /* DRSA5            */
    unsigned long  DRDA5;                                  /* DRDA5            */
    unsigned long  DRTC5;                                  /* DRTC5            */
    unsigned char  dummy843[4];                            /* Reserved         */
    unsigned long  DCEN5;                                  /* DCEN5            */
    unsigned long  DCST5;                                  /* DCST5            */
    unsigned long  DCSTS5;                                 /* DCSTS5           */
    unsigned long  DCSTC5;                                 /* DCSTC5           */
    unsigned long  DTFR5;                                  /* DTFR5            */
    unsigned long  DTFRRQ5;                                /* DTFRRQ5          */
    unsigned long  DTFRRQC5;                               /* DTFRRQC5         */
    unsigned char  dummy844[4];                            /* Reserved         */
    unsigned long  DSA6;                                   /* DSA6             */
    unsigned long  DDA6;                                   /* DDA6             */
    unsigned long  DTC6;                                   /* DTC6             */
    unsigned long  DTCT6;                                  /* DTCT6            */
    unsigned long  DRSA6;                                  /* DRSA6            */
    unsigned long  DRDA6;                                  /* DRDA6            */
    unsigned long  DRTC6;                                  /* DRTC6            */
    unsigned char  dummy845[4];                            /* Reserved         */
    unsigned long  DCEN6;                                  /* DCEN6            */
    unsigned long  DCST6;                                  /* DCST6            */
    unsigned long  DCSTS6;                                 /* DCSTS6           */
    unsigned long  DCSTC6;                                 /* DCSTC6           */
    unsigned long  DTFR6;                                  /* DTFR6            */
    unsigned long  DTFRRQ6;                                /* DTFRRQ6          */
    unsigned long  DTFRRQC6;                               /* DTFRRQC6         */
    unsigned char  dummy846[4];                            /* Reserved         */
    unsigned long  DSA7;                                   /* DSA7             */
    unsigned long  DDA7;                                   /* DDA7             */
    unsigned long  DTC7;                                   /* DTC7             */
    unsigned long  DTCT7;                                  /* DTCT7            */
    unsigned long  DRSA7;                                  /* DRSA7            */
    unsigned long  DRDA7;                                  /* DRDA7            */
    unsigned long  DRTC7;                                  /* DRTC7            */
    unsigned char  dummy847[4];                            /* Reserved         */
    unsigned long  DCEN7;                                  /* DCEN7            */
    unsigned long  DCST7;                                  /* DCST7            */
    unsigned long  DCSTS7;                                 /* DCSTS7           */
    unsigned long  DCSTC7;                                 /* DCSTC7           */
    unsigned long  DTFR7;                                  /* DTFR7            */
    unsigned long  DTFRRQ7;                                /* DTFRRQ7          */
    unsigned long  DTFRRQC7;                               /* DTFRRQC7         */
    unsigned char  dummy848[4];                            /* Reserved         */
    unsigned long  DSA8;                                   /* DSA8             */
    unsigned long  DDA8;                                   /* DDA8             */
    unsigned long  DTC8;                                   /* DTC8             */
    unsigned long  DTCT8;                                  /* DTCT8            */
    unsigned long  DRSA8;                                  /* DRSA8            */
    unsigned long  DRDA8;                                  /* DRDA8            */
    unsigned long  DRTC8;                                  /* DRTC8            */
    unsigned char  dummy849[4];                            /* Reserved         */
    unsigned long  DCEN8;                                  /* DCEN8            */
    unsigned long  DCST8;                                  /* DCST8            */
    unsigned long  DCSTS8;                                 /* DCSTS8           */
    unsigned long  DCSTC8;                                 /* DCSTC8           */
    unsigned long  DTFR8;                                  /* DTFR8            */
    unsigned long  DTFRRQ8;                                /* DTFRRQ8          */
    unsigned long  DTFRRQC8;                               /* DTFRRQC8         */
    unsigned char  dummy850[4];                            /* Reserved         */
    unsigned long  DSA9;                                   /* DSA9             */
    unsigned long  DDA9;                                   /* DDA9             */
    unsigned long  DTC9;                                   /* DTC9             */
    unsigned long  DTCT9;                                  /* DTCT9            */
    unsigned long  DRSA9;                                  /* DRSA9            */
    unsigned long  DRDA9;                                  /* DRDA9            */
    unsigned long  DRTC9;                                  /* DRTC9            */
    unsigned char  dummy851[4];                            /* Reserved         */
    unsigned long  DCEN9;                                  /* DCEN9            */
    unsigned long  DCST9;                                  /* DCST9            */
    unsigned long  DCSTS9;                                 /* DCSTS9           */
    unsigned long  DCSTC9;                                 /* DCSTC9           */
    unsigned long  DTFR9;                                  /* DTFR9            */
    unsigned long  DTFRRQ9;                                /* DTFRRQ9          */
    unsigned long  DTFRRQC9;                               /* DTFRRQC9         */
    unsigned char  dummy852[4];                            /* Reserved         */
    unsigned long  DSA10;                                  /* DSA10            */
    unsigned long  DDA10;                                  /* DDA10            */
    unsigned long  DTC10;                                  /* DTC10            */
    unsigned long  DTCT10;                                 /* DTCT10           */
    unsigned long  DRSA10;                                 /* DRSA10           */
    unsigned long  DRDA10;                                 /* DRDA10           */
    unsigned long  DRTC10;                                 /* DRTC10           */
    unsigned char  dummy853[4];                            /* Reserved         */
    unsigned long  DCEN10;                                 /* DCEN10           */
    unsigned long  DCST10;                                 /* DCST10           */
    unsigned long  DCSTS10;                                /* DCSTS10          */
    unsigned long  DCSTC10;                                /* DCSTC10          */
    unsigned long  DTFR10;                                 /* DTFR10           */
    unsigned long  DTFRRQ10;                               /* DTFRRQ10         */
    unsigned long  DTFRRQC10;                              /* DTFRRQC10        */
    unsigned char  dummy854[4];                            /* Reserved         */
    unsigned long  DSA11;                                  /* DSA11            */
    unsigned long  DDA11;                                  /* DDA11            */
    unsigned long  DTC11;                                  /* DTC11            */
    unsigned long  DTCT11;                                 /* DTCT11           */
    unsigned long  DRSA11;                                 /* DRSA11           */
    unsigned long  DRDA11;                                 /* DRDA11           */
    unsigned long  DRTC11;                                 /* DRTC11           */
    unsigned char  dummy855[4];                            /* Reserved         */
    unsigned long  DCEN11;                                 /* DCEN11           */
    unsigned long  DCST11;                                 /* DCST11           */
    unsigned long  DCSTS11;                                /* DCSTS11          */
    unsigned long  DCSTC11;                                /* DCSTC11          */
    unsigned long  DTFR11;                                 /* DTFR11           */
    unsigned long  DTFRRQ11;                               /* DTFRRQ11         */
    unsigned long  DTFRRQC11;                              /* DTFRRQC11        */
    unsigned char  dummy856[4];                            /* Reserved         */
    unsigned long  DSA12;                                  /* DSA12            */
    unsigned long  DDA12;                                  /* DDA12            */
    unsigned long  DTC12;                                  /* DTC12            */
    unsigned long  DTCT12;                                 /* DTCT12           */
    unsigned long  DRSA12;                                 /* DRSA12           */
    unsigned long  DRDA12;                                 /* DRDA12           */
    unsigned long  DRTC12;                                 /* DRTC12           */
    unsigned char  dummy857[4];                            /* Reserved         */
    unsigned long  DCEN12;                                 /* DCEN12           */
    unsigned long  DCST12;                                 /* DCST12           */
    unsigned long  DCSTS12;                                /* DCSTS12          */
    unsigned long  DCSTC12;                                /* DCSTC12          */
    unsigned long  DTFR12;                                 /* DTFR12           */
    unsigned long  DTFRRQ12;                               /* DTFRRQ12         */
    unsigned long  DTFRRQC12;                              /* DTFRRQC12        */
    unsigned char  dummy858[4];                            /* Reserved         */
    unsigned long  DSA13;                                  /* DSA13            */
    unsigned long  DDA13;                                  /* DDA13            */
    unsigned long  DTC13;                                  /* DTC13            */
    unsigned long  DTCT13;                                 /* DTCT13           */
    unsigned long  DRSA13;                                 /* DRSA13           */
    unsigned long  DRDA13;                                 /* DRDA13           */
    unsigned long  DRTC13;                                 /* DRTC13           */
    unsigned char  dummy859[4];                            /* Reserved         */
    unsigned long  DCEN13;                                 /* DCEN13           */
    unsigned long  DCST13;                                 /* DCST13           */
    unsigned long  DCSTS13;                                /* DCSTS13          */
    unsigned long  DCSTC13;                                /* DCSTC13          */
    unsigned long  DTFR13;                                 /* DTFR13           */
    unsigned long  DTFRRQ13;                               /* DTFRRQ13         */
    unsigned long  DTFRRQC13;                              /* DTFRRQC13        */
    unsigned char  dummy860[4];                            /* Reserved         */
    unsigned long  DSA14;                                  /* DSA14            */
    unsigned long  DDA14;                                  /* DDA14            */
    unsigned long  DTC14;                                  /* DTC14            */
    unsigned long  DTCT14;                                 /* DTCT14           */
    unsigned long  DRSA14;                                 /* DRSA14           */
    unsigned long  DRDA14;                                 /* DRDA14           */
    unsigned long  DRTC14;                                 /* DRTC14           */
    unsigned char  dummy861[4];                            /* Reserved         */
    unsigned long  DCEN14;                                 /* DCEN14           */
    unsigned long  DCST14;                                 /* DCST14           */
    unsigned long  DCSTS14;                                /* DCSTS14          */
    unsigned long  DCSTC14;                                /* DCSTC14          */
    unsigned long  DTFR14;                                 /* DTFR14           */
    unsigned long  DTFRRQ14;                               /* DTFRRQ14         */
    unsigned long  DTFRRQC14;                              /* DTFRRQC14        */
    unsigned char  dummy862[4];                            /* Reserved         */
    unsigned long  DSA15;                                  /* DSA15            */
    unsigned long  DDA15;                                  /* DDA15            */
    unsigned long  DTC15;                                  /* DTC15            */
    unsigned long  DTCT15;                                 /* DTCT15           */
    unsigned long  DRSA15;                                 /* DRSA15           */
    unsigned long  DRDA15;                                 /* DRDA15           */
    unsigned long  DRTC15;                                 /* DRTC15           */
    unsigned char  dummy863[4];                            /* Reserved         */
    unsigned long  DCEN15;                                 /* DCEN15           */
    unsigned long  DCST15;                                 /* DCST15           */
    unsigned long  DCSTS15;                                /* DCSTS15          */
    unsigned long  DCSTC15;                                /* DCSTC15          */
    unsigned long  DTFR15;                                 /* DTFR15           */
    unsigned long  DTFRRQ15;                               /* DTFRRQ15         */
    unsigned long  DTFRRQC15;                              /* DTFRRQC15        */
};
struct __tag604
{                                                          /* Module           */
    union __tag307 ICADCA0I2_2;                            /* ICADCA0I2_2      */
    union __tag308 ICRLIN30;                               /* ICRLIN30         */
    union __tag309 ICRLIN30UR0;                            /* ICRLIN30UR0      */
    union __tag310 ICRLIN30UR1;                            /* ICRLIN30UR1      */
    union __tag311 ICRLIN30UR2;                            /* ICRLIN30UR2      */
    union __tag312 ICP0;                                   /* ICP0             */
    union __tag313 ICP1;                                   /* ICP1             */
    union __tag314 ICP2;                                   /* ICP2             */
    union __tag315 ICWDTA0;                                /* ICWDTA0          */
    union __tag316 ICWDTA1;                                /* ICWDTA1          */
    unsigned char  dummy864[2];                            /* Reserved         */
    union __tag317 ICP3;                                   /* ICP3             */
    union __tag318 ICP4;                                   /* ICP4             */
    union __tag319 ICP5;                                   /* ICP5             */
    union __tag320 ICP10;                                  /* ICP10            */
    union __tag321 ICP11;                                  /* ICP11            */
    union __tag322 ICTAUD0I1;                              /* ICTAUD0I1        */
    union __tag323 ICTAUD0I3;                              /* ICTAUD0I3        */
    union __tag324 ICTAUD0I5;                              /* ICTAUD0I5        */
    union __tag325 ICTAUD0I7;                              /* ICTAUD0I7        */
    union __tag326 ICTAUD0I9;                              /* ICTAUD0I9        */
    union __tag327 ICTAUD0I11;                             /* ICTAUD0I11       */
    union __tag328 ICTAUD0I13;                             /* ICTAUD0I13       */
    union __tag329 ICTAUD0I15;                             /* ICTAUD0I15       */
    union __tag330 ICADCA0ERR;                             /* ICADCA0ERR       */
    union __tag331 ICCSIG0IRE;                             /* ICCSIG0IRE       */
    union __tag332 ICRLIN20;                               /* ICRLIN20         */
    union __tag333 ICRLIN21;                               /* ICRLIN21         */
    union __tag334 ICDMA0;                                 /* ICDMA0           */
    union __tag335 ICDMA1;                                 /* ICDMA1           */
    union __tag336 ICDMA2;                                 /* ICDMA2           */
    union __tag337 ICDMA3;                                 /* ICDMA3           */
    union __tag338 ICDMA4;                                 /* ICDMA4           */
    union __tag339 ICDMA5;                                 /* ICDMA5           */
    union __tag340 ICDMA6;                                 /* ICDMA6           */
    union __tag341 ICDMA7;                                 /* ICDMA7           */
    union __tag342 ICDMA8;                                 /* ICDMA8           */
    union __tag343 ICDMA9;                                 /* ICDMA9           */
    union __tag344 ICDMA10;                                /* ICDMA10          */
    union __tag345 ICDMA11;                                /* ICDMA11          */
    union __tag346 ICDMA12;                                /* ICDMA12          */
    union __tag347 ICDMA13;                                /* ICDMA13          */
    union __tag348 ICDMA14;                                /* ICDMA14          */
    union __tag349 ICDMA15;                                /* ICDMA15          */
    union __tag350 ICRIIC0TI;                              /* ICRIIC0TI        */
    union __tag351 ICRIIC0EE;                              /* ICRIIC0EE        */
    union __tag352 ICRIIC0RI;                              /* ICRIIC0RI        */
    union __tag353 ICRIIC0TEI;                             /* ICRIIC0TEI       */
    union __tag354 ICTAUJ0I0;                              /* ICTAUJ0I0        */
    union __tag355 ICTAUJ0I1;                              /* ICTAUJ0I1        */
    union __tag356 ICTAUJ0I2;                              /* ICTAUJ0I2        */
    union __tag357 ICTAUJ0I3;                              /* ICTAUJ0I3        */
    union __tag358 ICOSTM0;                                /* ICOSTM0          */
    union __tag359 ICENCA0IOV;                             /* ICENCA0IOV       */
    union __tag360 ICENCA0IUD;                             /* ICENCA0IUD       */
    union __tag361 ICENCA0I0;                              /* ICENCA0I0        */
    union __tag362 ICENCA0I1;                              /* ICENCA0I1        */
    union __tag363 ICENCA0IEC;                             /* ICENCA0IEC       */
    union __tag364 ICKR0;                                  /* ICKR0            */
    union __tag365 ICQFULL;                                /* ICQFULL          */
    union __tag366 ICPWGA0;                                /* ICPWGA0          */
    union __tag367 ICPWGA1;                                /* ICPWGA1          */
    union __tag368 ICPWGA2;                                /* ICPWGA2          */
    union __tag369 ICPWGA3;                                /* ICPWGA3          */
    union __tag370 ICPWGA8;                                /* ICPWGA8          */
    union __tag371 ICPWGA9;                                /* ICPWGA9          */
    union __tag372 ICPWGA10;                               /* ICPWGA10         */
    union __tag373 ICPWGA11;                               /* ICPWGA11         */
    union __tag374 ICPWGA12;                               /* ICPWGA12         */
    union __tag375 ICPWGA13;                               /* ICPWGA13         */
    union __tag376 ICPWGA14;                               /* ICPWGA14         */
    union __tag377 ICPWGA15;                               /* ICPWGA15         */
    unsigned char  dummy865[12];                           /* Reserved         */
    union __tag378 ICFLERR;                                /* ICFLERR          */
    union __tag379 ICFLENDNM;                              /* ICFLENDNM        */
    union __tag380 ICCWEND;                                /* ICCWEND          */
    union __tag381 ICRCAN1ERR;                             /* ICRCAN1ERR       */
    union __tag382 ICRCAN1REC;                             /* ICRCAN1REC       */
    union __tag383 ICRCAN1TRX;                             /* ICRCAN1TRX       */
    union __tag384 ICCSIH1IC;                              /* ICCSIH1IC        */
    union __tag385 ICCSIH1IR;                              /* ICCSIH1IR        */
    union __tag386 ICCSIG0IC_2;                            /* ICCSIG0IC_2      */
    union __tag387 ICCSIG0IR_2;                            /* ICCSIG0IR_2      */
    union __tag388 ICRLIN31;                               /* ICRLIN31         */
    union __tag389 ICRLIN31UR0;                            /* ICRLIN31UR0      */
    union __tag390 ICRLIN31UR1;                            /* ICRLIN31UR1      */
    union __tag391 ICRLIN31UR2;                            /* ICRLIN31UR2      */
    union __tag392 ICPWGA20;                               /* ICPWGA20         */
    union __tag393 ICPWGA21;                               /* ICPWGA21         */
    union __tag394 ICPWGA22;                               /* ICPWGA22         */
    union __tag395 ICPWGA23;                               /* ICPWGA23         */
    union __tag396 ICP6;                                   /* ICP6             */
    union __tag397 ICP7;                                   /* ICP7             */
    union __tag398 ICP8;                                   /* ICP8             */
    union __tag399 ICP12;                                  /* ICP12            */
    union __tag400 ICCSIH2IC;                              /* ICCSIH2IC        */
    union __tag401 ICCSIH2IR;                              /* ICCSIH2IR        */
    union __tag402 ICCSIH2IRE;                             /* ICCSIH2IRE       */
    union __tag403 ICCSIH2IJC;                             /* ICCSIH2IJC       */
    unsigned char  dummy866[12];                           /* Reserved         */
    union __tag404 ICTAUB0I0;                              /* ICTAUB0I0        */
    union __tag405 ICTAUB0I1;                              /* ICTAUB0I1        */
    union __tag406 ICTAUB0I2;                              /* ICTAUB0I2        */
    union __tag407 ICPWGA16;                               /* ICPWGA16         */
    union __tag408 ICTAUB0I4;                              /* ICTAUB0I4        */
    union __tag409 ICPWGA17;                               /* ICPWGA17         */
    union __tag410 ICTAUB0I6;                              /* ICTAUB0I6        */
    union __tag411 ICPWGA18;                               /* ICPWGA18         */
    union __tag412 ICTAUB0I8;                              /* ICTAUB0I8        */
    union __tag413 ICPWGA19;                               /* ICPWGA19         */
    union __tag414 ICTAUB0I10;                             /* ICTAUB0I10       */
    union __tag415 ICPWGA26;                               /* ICPWGA26         */
    union __tag416 ICTAUB0I12;                             /* ICTAUB0I12       */
    union __tag417 ICPWGA30;                               /* ICPWGA30         */
    union __tag418 ICTAUB0I14;                             /* ICTAUB0I14       */
    union __tag419 ICPWGA31;                               /* ICPWGA31         */
    union __tag420 ICCSIH3IC;                              /* ICCSIH3IC        */
    union __tag421 ICCSIH3IR;                              /* ICCSIH3IR        */
    union __tag422 ICCSIH3IRE;                             /* ICCSIH3IRE       */
    union __tag423 ICCSIH3IJC;                             /* ICCSIH3IJC       */
    union __tag424 ICRLIN22;                               /* ICRLIN22         */
    union __tag425 ICRLIN23;                               /* ICRLIN23         */
    union __tag426 ICRLIN32;                               /* ICRLIN32         */
    union __tag427 ICRLIN32UR0;                            /* ICRLIN32UR0      */
    union __tag428 ICRLIN32UR1;                            /* ICRLIN32UR1      */
    union __tag429 ICRLIN32UR2;                            /* ICRLIN32UR2      */
    union __tag430 ICTAUJ1I0;                              /* ICTAUJ1I0        */
    union __tag431 ICTAUJ1I1;                              /* ICTAUJ1I1        */
    union __tag432 ICTAUJ1I2;                              /* ICTAUJ1I2        */
    union __tag433 ICTAUJ1I3;                              /* ICTAUJ1I3        */
    unsigned char  dummy867[24];                           /* Reserved         */
    union __tag434 ICPWGA24;                               /* ICPWGA24         */
    union __tag435 ICPWGA25;                               /* ICPWGA25         */
    union __tag436 ICPWGA27;                               /* ICPWGA27         */
    union __tag437 ICPWGA28;                               /* ICPWGA28         */
    union __tag438 ICPWGA29;                               /* ICPWGA29         */
    union __tag439 ICPWGA32;                               /* ICPWGA32         */
    union __tag440 ICPWGA33;                               /* ICPWGA33         */
    union __tag441 ICPWGA34;                               /* ICPWGA34         */
    union __tag442 ICPWGA35;                               /* ICPWGA35         */
    union __tag443 ICPWGA36;                               /* ICPWGA36         */
    union __tag444 ICPWGA37;                               /* ICPWGA37         */
    union __tag445 ICPWGA38;                               /* ICPWGA38         */
    union __tag446 ICPWGA39;                               /* ICPWGA39         */
    union __tag447 ICPWGA40;                               /* ICPWGA40         */
    union __tag448 ICPWGA41;                               /* ICPWGA41         */
    union __tag449 ICPWGA42;                               /* ICPWGA42         */
    union __tag450 ICPWGA43;                               /* ICPWGA43         */
    union __tag451 ICPWGA44;                               /* ICPWGA44         */
    union __tag452 ICPWGA45;                               /* ICPWGA45         */
    union __tag453 ICPWGA46;                               /* ICPWGA46         */
    union __tag454 ICPWGA47;                               /* ICPWGA47         */
    union __tag455 ICP9;                                   /* ICP9             */
    union __tag456 ICP13;                                  /* ICP13            */
    union __tag457 ICP14;                                  /* ICP14            */
    union __tag458 ICP15;                                  /* ICP15            */
    union __tag459 ICRTCA01S;                              /* ICRTCA01S        */
    union __tag460 ICRTCA0AL;                              /* ICRTCA0AL        */
    union __tag461 ICRTCA0R;                               /* ICRTCA0R         */
    union __tag462 ICADCA1ERR;                             /* ICADCA1ERR       */
    union __tag463 ICADCA1I0;                              /* ICADCA1I0        */
    union __tag464 ICADCA1I1;                              /* ICADCA1I1        */
    union __tag465 ICADCA1I2;                              /* ICADCA1I2        */
    unsigned char  dummy868[2];                            /* Reserved         */
    union __tag466 ICRCAN2ERR;                             /* ICRCAN2ERR       */
    union __tag467 ICRCAN2REC;                             /* ICRCAN2REC       */
    union __tag468 ICRCAN2TRX;                             /* ICRCAN2TRX       */
    union __tag469 ICRCAN3ERR;                             /* ICRCAN3ERR       */
    union __tag470 ICRCAN3REC;                             /* ICRCAN3REC       */
    union __tag471 ICRCAN3TRX;                             /* ICRCAN3TRX       */
    union __tag472 ICCSIG1IC;                              /* ICCSIG1IC        */
    union __tag473 ICCSIG1IR;                              /* ICCSIG1IR        */
    union __tag474 ICCSIG1IRE;                             /* ICCSIG1IRE       */
    union __tag475 ICRLIN24;                               /* ICRLIN24         */
    union __tag476 ICRLIN25;                               /* ICRLIN25         */
    union __tag477 ICRLIN33;                               /* ICRLIN33         */
    union __tag478 ICRLIN33UR0;                            /* ICRLIN33UR0      */
    union __tag479 ICRLIN33UR1;                            /* ICRLIN33UR1      */
    union __tag480 ICRLIN33UR2;                            /* ICRLIN33UR2      */
    union __tag481 ICRLIN34;                               /* ICRLIN34         */
    union __tag482 ICRLIN34UR0;                            /* ICRLIN34UR0      */
    union __tag483 ICRLIN34UR1;                            /* ICRLIN34UR1      */
    union __tag484 ICRLIN34UR2;                            /* ICRLIN34UR2      */
    union __tag485 ICRLIN35;                               /* ICRLIN35         */
    union __tag486 ICRLIN35UR0;                            /* ICRLIN35UR0      */
    union __tag487 ICRLIN35UR1;                            /* ICRLIN35UR1      */
    union __tag488 ICRLIN35UR2;                            /* ICRLIN35UR2      */
    union __tag489 ICPWGA48;                               /* ICPWGA48         */
    union __tag490 ICPWGA49;                               /* ICPWGA49         */
    union __tag491 ICPWGA50;                               /* ICPWGA50         */
    union __tag492 ICPWGA51;                               /* ICPWGA51         */
    union __tag493 ICPWGA52;                               /* ICPWGA52         */
    union __tag494 ICPWGA53;                               /* ICPWGA53         */
    union __tag495 ICPWGA54;                               /* ICPWGA54         */
    union __tag496 ICPWGA55;                               /* ICPWGA55         */
    union __tag497 ICPWGA56;                               /* ICPWGA56         */
    union __tag498 ICPWGA57;                               /* ICPWGA57         */
    union __tag499 ICPWGA58;                               /* ICPWGA58         */
    union __tag500 ICPWGA59;                               /* ICPWGA59         */
    union __tag501 ICPWGA60;                               /* ICPWGA60         */
    union __tag502 ICPWGA61;                               /* ICPWGA61         */
    union __tag503 ICPWGA62;                               /* ICPWGA62         */
    union __tag504 ICPWGA63;                               /* ICPWGA63         */
    unsigned char  dummy869[32];                           /* Reserved         */
    union __tag505 ICRCAN4ERR;                             /* ICRCAN4ERR       */
    union __tag506 ICRCAN4REC;                             /* ICRCAN4REC       */
    union __tag507 ICRCAN4TRX;                             /* ICRCAN4TRX       */
    unsigned char  dummy870[24];                           /* Reserved         */
    union __tag508 ICRCAN5ERR;                             /* ICRCAN5ERR       */
    union __tag509 ICRCAN5REC;                             /* ICRCAN5REC       */
    union __tag510 ICRCAN5TRX;                             /* ICRCAN5TRX       */
    unsigned char  dummy871[132];                          /* Reserved         */
    union __tag511 ICDPE;                                  /* ICDPE            */
    union __tag512 ICAPE;                                  /* ICAPE            */
    unsigned char  dummy872[312];                          /* Reserved         */
    union __tag513 IMR1;                                   /* IMR1             */
    union __tag514 IMR2;                                   /* IMR2             */
    union __tag515 IMR3;                                   /* IMR3             */
    union __tag516 IMR4;                                   /* IMR4             */
    union __tag517 IMR5;                                   /* IMR5             */
    union __tag518 IMR6;                                   /* IMR6             */
    union __tag519 IMR7;                                   /* IMR7             */
    union __tag520 IMR8;                                   /* IMR8             */
    union __tag521 IMR9;                                   /* IMR9             */
    unsigned char  dummy873[4];                            /* Reserved         */
    union __tag522 IMR11;                                  /* IMR11            */
};

#define ICTAUD0I0 ICCSIH2IC_1
#define ICTAUD0I0L ICCSIH2ICL_1
#define ICTAUD0I0H ICCSIH2ICH_1
#define ICTAUD0I2 ICCSIH3IC_1
#define ICTAUD0I2L ICCSIH3ICL_1
#define ICTAUD0I2H ICCSIH3ICH_1
#define ICTAUD0I4 ICCSIH2IR_1
#define ICTAUD0I4L ICCSIH2IRL_1
#define ICTAUD0I4H ICCSIH2IRH_1
#define ICTAUD0I6 ICCSIH2IRE_1
#define ICTAUD0I6L ICCSIH2IREL_1
#define ICTAUD0I6H ICCSIH2IREH_1
#define ICTAUD0I8 ICCSIH2IJC_1
#define ICTAUD0I8L ICCSIH2IJCL_1
#define ICTAUD0I8H ICCSIH2IJCH_1
#define ICTAUD0I10 ICCSIH3IR_1
#define ICTAUD0I10L ICCSIH3IRL_1
#define ICTAUD0I10H ICCSIH3IRH_1
#define ICTAUD0I12 ICCSIH3IRE_1
#define ICTAUD0I12L ICCSIH3IREL_1
#define ICTAUD0I12H ICCSIH3IREH_1
#define ICTAUD0I14 ICCSIH3IJC_1
#define ICTAUD0I14L ICCSIH3IJCL_1
#define ICTAUD0I14H ICCSIH3IJCH_1
#define ICTAPA0IPEK0 ICCSIH1IC_1
#define ICTAPA0IPEK0L ICCSIH1ICL_1
#define ICTAPA0IPEK0H ICCSIH1ICH_1
#define ICTAPA0IVLY0 ICCSIH1IR_1
#define ICTAPA0IVLY0L ICCSIH1IRL_1
#define ICTAPA0IVLY0H ICCSIH1IRH_1
#define ICCSIH0IJC_1 ICADCA0I2
#define ICCSIH0IJCL_1 ICADCA0I2L
#define ICCSIH0IJCH_1 ICADCA0I2H
#define ICCSIH1IRE_1 ICCSIG0IC
#define ICCSIH1IREL_1 ICCSIG0ICL
#define ICCSIH1IREH_1 ICCSIG0ICH
#define ICCSIH1IJC_1 ICCSIG0IR
#define ICCSIH1IJCL_1 ICCSIG0IRL
#define ICCSIH1IJCH_1 ICCSIG0IRH
#define ICCSIH0IJC ICADCA0I2_2
#define ICCSIH0IJCL ICADCA0I2L_2
#define ICCSIH0IJCH ICADCA0I2H_2
#define ICPWGA4 ICENCA0IOV
#define ICPWGA4L ICENCA0IOVL
#define ICPWGA4H ICENCA0IOVH
#define ICPWGA5 ICENCA0IUD
#define ICPWGA5L ICENCA0IUDL
#define ICPWGA5H ICENCA0IUDH
#define ICPWGA6 ICENCA0I0
#define ICPWGA6L ICENCA0I0L
#define ICPWGA6H ICENCA0I0H
#define ICPWGA7 ICENCA0I1
#define ICPWGA7L ICENCA0I1L
#define ICPWGA7H ICENCA0I1H
#define ICTAPA0IPEK0_2 ICCSIH1IC
#define ICTAPA0IPEK0L_2 ICCSIH1ICL
#define ICTAPA0IPEK0H_2 ICCSIH1ICH
#define ICTAPA0IVLY0_2 ICCSIH1IR
#define ICTAPA0IVLY0L_2 ICCSIH1IRL
#define ICTAPA0IVLY0H_2 ICCSIH1IRH
#define ICCSIH1IRE ICCSIG0IC_2
#define ICCSIH1IREL ICCSIG0ICL_2
#define ICCSIH1IREH ICCSIG0ICH_2
#define ICCSIH1IJC ICCSIG0IR_2
#define ICCSIH1IJCL ICCSIG0IRL_2
#define ICCSIH1IJCH ICCSIG0IRH_2
#define ICTAUD0I0_2 ICCSIH2IC
#define ICTAUD0I0L_2 ICCSIH2ICL
#define ICTAUD0I0H_2 ICCSIH2ICH
#define ICTAUD0I4_2 ICCSIH2IR
#define ICTAUD0I4L_2 ICCSIH2IRL
#define ICTAUD0I4H_2 ICCSIH2IRH
#define ICTAUD0I6_2 ICCSIH2IRE
#define ICTAUD0I6L_2 ICCSIH2IREL
#define ICTAUD0I6H_2 ICCSIH2IREH
#define ICTAUD0I8_2 ICCSIH2IJC
#define ICTAUD0I8L_2 ICCSIH2IJCL
#define ICTAUD0I8H_2 ICCSIH2IJCH
#define ICTAUB0I3 ICPWGA16
#define ICTAUB0I3L ICPWGA16L
#define ICTAUB0I3H ICPWGA16H
#define ICTAUB0I5 ICPWGA17
#define ICTAUB0I5L ICPWGA17L
#define ICTAUB0I5H ICPWGA17H
#define ICTAUB0I7 ICPWGA18
#define ICTAUB0I7L ICPWGA18L
#define ICTAUB0I7H ICPWGA18H
#define ICTAUB0I9 ICPWGA19
#define ICTAUB0I9L ICPWGA19L
#define ICTAUB0I9H ICPWGA19H
#define ICTAUB0I11 ICPWGA26
#define ICTAUB0I11L ICPWGA26L
#define ICTAUB0I11H ICPWGA26H
#define ICTAUB0I13 ICPWGA30
#define ICTAUB0I13L ICPWGA30L
#define ICTAUB0I13H ICPWGA30H
#define ICTAUB0I15 ICPWGA31
#define ICTAUB0I15L ICPWGA31L
#define ICTAUB0I15H ICPWGA31H
#define ICTAUD0I2_2 ICCSIH3IC
#define ICTAUD0I2L_2 ICCSIH3ICL
#define ICTAUD0I2H_2 ICCSIH3ICH
#define ICTAUD0I10_2 ICCSIH3IR
#define ICTAUD0I10L_2 ICCSIH3IRL
#define ICTAUD0I10H_2 ICCSIH3IRH
#define ICTAUD0I12_2 ICCSIH3IRE
#define ICTAUD0I12L_2 ICCSIH3IREL
#define ICTAUD0I12H_2 ICCSIH3IREH
#define ICTAUD0I14_2 ICCSIH3IJC
#define ICTAUD0I14L_2 ICCSIH3IJCL
#define ICTAUD0I14H_2 ICCSIH3IJCH
#define P0TAUD0I0 P0CSIH2IC_1
#define P1TAUD0I0 P1CSIH2IC_1
#define P2TAUD0I0 P2CSIH2IC_1
#define P3TAUD0I0 P3CSIH2IC_1
#define TBTAUD0I0 TBCSIH2IC_1
#define MKTAUD0I0 MKCSIH2IC_1
#define RFTAUD0I0 RFCSIH2IC_1
#define CTTAUD0I0 CTCSIH2IC_1
#define P0TAUD0I2 P0CSIH3IC_1
#define P1TAUD0I2 P1CSIH3IC_1
#define P2TAUD0I2 P2CSIH3IC_1
#define P3TAUD0I2 P3CSIH3IC_1
#define TBTAUD0I2 TBCSIH3IC_1
#define MKTAUD0I2 MKCSIH3IC_1
#define RFTAUD0I2 RFCSIH3IC_1
#define CTTAUD0I2 CTCSIH3IC_1
#define P0TAUD0I4 P0CSIH2IR_1
#define P1TAUD0I4 P1CSIH2IR_1
#define P2TAUD0I4 P2CSIH2IR_1
#define P3TAUD0I4 P3CSIH2IR_1
#define TBTAUD0I4 TBCSIH2IR_1
#define MKTAUD0I4 MKCSIH2IR_1
#define RFTAUD0I4 RFCSIH2IR_1
#define CTTAUD0I4 CTCSIH2IR_1
#define P0TAUD0I6 P0CSIH2IRE_1
#define P1TAUD0I6 P1CSIH2IRE_1
#define P2TAUD0I6 P2CSIH2IRE_1
#define P3TAUD0I6 P3CSIH2IRE_1
#define TBTAUD0I6 TBCSIH2IRE_1
#define MKTAUD0I6 MKCSIH2IRE_1
#define RFTAUD0I6 RFCSIH2IRE_1
#define CTTAUD0I6 CTCSIH2IRE_1
#define P0TAUD0I8 P0CSIH2IJC_1
#define P1TAUD0I8 P1CSIH2IJC_1
#define P2TAUD0I8 P2CSIH2IJC_1
#define P3TAUD0I8 P3CSIH2IJC_1
#define TBTAUD0I8 TBCSIH2IJC_1
#define MKTAUD0I8 MKCSIH2IJC_1
#define RFTAUD0I8 RFCSIH2IJC_1
#define CTTAUD0I8 CTCSIH2IJC_1
#define P0TAUD0I10 P0CSIH3IR_1
#define P1TAUD0I10 P1CSIH3IR_1
#define P2TAUD0I10 P2CSIH3IR_1
#define P3TAUD0I10 P3CSIH3IR_1
#define TBTAUD0I10 TBCSIH3IR_1
#define MKTAUD0I10 MKCSIH3IR_1
#define RFTAUD0I10 RFCSIH3IR_1
#define CTTAUD0I10 CTCSIH3IR_1
#define P0TAUD0I12 P0CSIH3IRE_1
#define P1TAUD0I12 P1CSIH3IRE_1
#define P2TAUD0I12 P2CSIH3IRE_1
#define P3TAUD0I12 P3CSIH3IRE_1
#define TBTAUD0I12 TBCSIH3IRE_1
#define MKTAUD0I12 MKCSIH3IRE_1
#define RFTAUD0I12 RFCSIH3IRE_1
#define CTTAUD0I12 CTCSIH3IRE_1
#define P0TAUD0I14 P0CSIH3IJC_1
#define P1TAUD0I14 P1CSIH3IJC_1
#define P2TAUD0I14 P2CSIH3IJC_1
#define P3TAUD0I14 P3CSIH3IJC_1
#define TBTAUD0I14 TBCSIH3IJC_1
#define MKTAUD0I14 MKCSIH3IJC_1
#define RFTAUD0I14 RFCSIH3IJC_1
#define CTTAUD0I14 CTCSIH3IJC_1
#define P0TAPA0IPEK0 P0CSIH1IC_1
#define P1TAPA0IPEK0 P1CSIH1IC_1
#define P2TAPA0IPEK0 P2CSIH1IC_1
#define P3TAPA0IPEK0 P3CSIH1IC_1
#define TBTAPA0IPEK0 TBCSIH1IC_1
#define MKTAPA0IPEK0 MKCSIH1IC_1
#define RFTAPA0IPEK0 RFCSIH1IC_1
#define CTTAPA0IPEK0 CTCSIH1IC_1
#define P0TAPA0IVLY0 P0CSIH1IR_1
#define P1TAPA0IVLY0 P1CSIH1IR_1
#define P2TAPA0IVLY0 P2CSIH1IR_1
#define P3TAPA0IVLY0 P3CSIH1IR_1
#define TBTAPA0IVLY0 TBCSIH1IR_1
#define MKTAPA0IVLY0 MKCSIH1IR_1
#define RFTAPA0IVLY0 RFCSIH1IR_1
#define CTTAPA0IVLY0 CTCSIH1IR_1
#define P0CSIH0IJC_1 P0ADCA0I2
#define P1CSIH0IJC_1 P1ADCA0I2
#define P2CSIH0IJC_1 P2ADCA0I2
#define P3CSIH0IJC_1 P3ADCA0I2
#define TBCSIH0IJC_1 TBADCA0I2
#define MKCSIH0IJC_1 MKADCA0I2
#define RFCSIH0IJC_1 RFADCA0I2
#define CTCSIH0IJC_1 CTADCA0I2
#define P0CSIH1IRE_1 P0CSIG0IC
#define P1CSIH1IRE_1 P1CSIG0IC
#define P2CSIH1IRE_1 P2CSIG0IC
#define P3CSIH1IRE_1 P3CSIG0IC
#define TBCSIH1IRE_1 TBCSIG0IC
#define MKCSIH1IRE_1 MKCSIG0IC
#define RFCSIH1IRE_1 RFCSIG0IC
#define CTCSIH1IRE_1 CTCSIG0IC
#define P0CSIH1IJC_1 P0CSIG0IR
#define P1CSIH1IJC_1 P1CSIG0IR
#define P2CSIH1IJC_1 P2CSIG0IR
#define P3CSIH1IJC_1 P3CSIG0IR
#define TBCSIH1IJC_1 TBCSIG0IR
#define MKCSIH1IJC_1 MKCSIG0IR
#define RFCSIH1IJC_1 RFCSIG0IR
#define CTCSIH1IJC_1 CTCSIG0IR
#define P0CSIH0IJC P0ADCA0I2_2
#define P1CSIH0IJC P1ADCA0I2_2
#define P2CSIH0IJC P2ADCA0I2_2
#define P3CSIH0IJC P3ADCA0I2_2
#define TBCSIH0IJC TBADCA0I2_2
#define MKCSIH0IJC MKADCA0I2_2
#define RFCSIH0IJC RFADCA0I2_2
#define CTCSIH0IJC CTADCA0I2_2
#define P0PWGA4 P0ENCA0IOV
#define P1PWGA4 P1ENCA0IOV
#define P2PWGA4 P2ENCA0IOV
#define P3PWGA4 P3ENCA0IOV
#define TBPWGA4 TBENCA0IOV
#define MKPWGA4 MKENCA0IOV
#define RFPWGA4 RFENCA0IOV
#define CTPWGA4 CTENCA0IOV
#define P0PWGA5 P0ENCA0IUD
#define P1PWGA5 P1ENCA0IUD
#define P2PWGA5 P2ENCA0IUD
#define P3PWGA5 P3ENCA0IUD
#define TBPWGA5 TBENCA0IUD
#define MKPWGA5 MKENCA0IUD
#define RFPWGA5 RFENCA0IUD
#define CTPWGA5 CTENCA0IUD
#define P0PWGA6 P0ENCA0I0
#define P1PWGA6 P1ENCA0I0
#define P2PWGA6 P2ENCA0I0
#define P3PWGA6 P3ENCA0I0
#define TBPWGA6 TBENCA0I0
#define MKPWGA6 MKENCA0I0
#define RFPWGA6 RFENCA0I0
#define CTPWGA6 CTENCA0I0
#define P0PWGA7 P0ENCA0I1
#define P1PWGA7 P1ENCA0I1
#define P2PWGA7 P2ENCA0I1
#define P3PWGA7 P3ENCA0I1
#define TBPWGA7 TBENCA0I1
#define MKPWGA7 MKENCA0I1
#define RFPWGA7 RFENCA0I1
#define CTPWGA7 CTENCA0I1
#define P0TAPA0IPEK0_2 P0CSIH1IC
#define P1TAPA0IPEK0_2 P1CSIH1IC
#define P2TAPA0IPEK0_2 P2CSIH1IC
#define P3TAPA0IPEK0_2 P3CSIH1IC
#define TBTAPA0IPEK0_2 TBCSIH1IC
#define MKTAPA0IPEK0_2 MKCSIH1IC
#define RFTAPA0IPEK0_2 RFCSIH1IC
#define CTTAPA0IPEK0_2 CTCSIH1IC
#define P0TAPA0IVLY0_2 P0CSIH1IR
#define P1TAPA0IVLY0_2 P1CSIH1IR
#define P2TAPA0IVLY0_2 P2CSIH1IR
#define P3TAPA0IVLY0_2 P3CSIH1IR
#define TBTAPA0IVLY0_2 TBCSIH1IR
#define MKTAPA0IVLY0_2 MKCSIH1IR
#define RFTAPA0IVLY0_2 RFCSIH1IR
#define CTTAPA0IVLY0_2 CTCSIH1IR
#define P0CSIH1IRE P0CSIG0IC_2
#define P1CSIH1IRE P1CSIG0IC_2
#define P2CSIH1IRE P2CSIG0IC_2
#define P3CSIH1IRE P3CSIG0IC_2
#define TBCSIH1IRE TBCSIG0IC_2
#define MKCSIH1IRE MKCSIG0IC_2
#define RFCSIH1IRE RFCSIG0IC_2
#define CTCSIH1IRE CTCSIG0IC_2
#define P0CSIH1IJC P0CSIG0IR_2
#define P1CSIH1IJC P1CSIG0IR_2
#define P2CSIH1IJC P2CSIG0IR_2
#define P3CSIH1IJC P3CSIG0IR_2
#define TBCSIH1IJC TBCSIG0IR_2
#define MKCSIH1IJC MKCSIG0IR_2
#define RFCSIH1IJC RFCSIG0IR_2
#define CTCSIH1IJC CTCSIG0IR_2
#define P0TAUD0I0_2 P0CSIH2IC
#define P1TAUD0I0_2 P1CSIH2IC
#define P2TAUD0I0_2 P2CSIH2IC
#define P3TAUD0I0_2 P3CSIH2IC
#define TBTAUD0I0_2 TBCSIH2IC
#define MKTAUD0I0_2 MKCSIH2IC
#define RFTAUD0I0_2 RFCSIH2IC
#define CTTAUD0I0_2 CTCSIH2IC
#define P0TAUD0I4_2 P0CSIH2IR
#define P1TAUD0I4_2 P1CSIH2IR
#define P2TAUD0I4_2 P2CSIH2IR
#define P3TAUD0I4_2 P3CSIH2IR
#define TBTAUD0I4_2 TBCSIH2IR
#define MKTAUD0I4_2 MKCSIH2IR
#define RFTAUD0I4_2 RFCSIH2IR
#define CTTAUD0I4_2 CTCSIH2IR
#define P0TAUD0I6_2 P0CSIH2IRE
#define P1TAUD0I6_2 P1CSIH2IRE
#define P2TAUD0I6_2 P2CSIH2IRE
#define P3TAUD0I6_2 P3CSIH2IRE
#define TBTAUD0I6_2 TBCSIH2IRE
#define MKTAUD0I6_2 MKCSIH2IRE
#define RFTAUD0I6_2 RFCSIH2IRE
#define CTTAUD0I6_2 CTCSIH2IRE
#define P0TAUD0I8_2 P0CSIH2IJC
#define P1TAUD0I8_2 P1CSIH2IJC
#define P2TAUD0I8_2 P2CSIH2IJC
#define P3TAUD0I8_2 P3CSIH2IJC
#define TBTAUD0I8_2 TBCSIH2IJC
#define MKTAUD0I8_2 MKCSIH2IJC
#define RFTAUD0I8_2 RFCSIH2IJC
#define CTTAUD0I8_2 CTCSIH2IJC
#define P0TAUB0I3 P0PWGA16
#define P1TAUB0I3 P1PWGA16
#define P2TAUB0I3 P2PWGA16
#define P3TAUB0I3 P3PWGA16
#define TBTAUB0I3 TBPWGA16
#define MKTAUB0I3 MKPWGA16
#define RFTAUB0I3 RFPWGA16
#define CTTAUB0I3 CTPWGA16
#define P0TAUB0I5 P0PWGA17
#define P1TAUB0I5 P1PWGA17
#define P2TAUB0I5 P2PWGA17
#define P3TAUB0I5 P3PWGA17
#define TBTAUB0I5 TBPWGA17
#define MKTAUB0I5 MKPWGA17
#define RFTAUB0I5 RFPWGA17
#define CTTAUB0I5 CTPWGA17
#define P0TAUB0I7 P0PWGA18
#define P1TAUB0I7 P1PWGA18
#define P2TAUB0I7 P2PWGA18
#define P3TAUB0I7 P3PWGA18
#define TBTAUB0I7 TBPWGA18
#define MKTAUB0I7 MKPWGA18
#define RFTAUB0I7 RFPWGA18
#define CTTAUB0I7 CTPWGA18
#define P0TAUB0I9 P0PWGA19
#define P1TAUB0I9 P1PWGA19
#define P2TAUB0I9 P2PWGA19
#define P3TAUB0I9 P3PWGA19
#define TBTAUB0I9 TBPWGA19
#define MKTAUB0I9 MKPWGA19
#define RFTAUB0I9 RFPWGA19
#define CTTAUB0I9 CTPWGA19
#define P0TAUB0I11 P0PWGA26
#define P1TAUB0I11 P1PWGA26
#define P2TAUB0I11 P2PWGA26
#define P3TAUB0I11 P3PWGA26
#define TBTAUB0I11 TBPWGA26
#define MKTAUB0I11 MKPWGA26
#define RFTAUB0I11 RFPWGA26
#define CTTAUB0I11 CTPWGA26
#define P0TAUB0I13 P0PWGA30
#define P1TAUB0I13 P1PWGA30
#define P2TAUB0I13 P2PWGA30
#define P3TAUB0I13 P3PWGA30
#define TBTAUB0I13 TBPWGA30
#define MKTAUB0I13 MKPWGA30
#define RFTAUB0I13 RFPWGA30
#define CTTAUB0I13 CTPWGA30
#define P0TAUB0I15 P0PWGA31
#define P1TAUB0I15 P1PWGA31
#define P2TAUB0I15 P2PWGA31
#define P3TAUB0I15 P3PWGA31
#define TBTAUB0I15 TBPWGA31
#define MKTAUB0I15 MKPWGA31
#define RFTAUB0I15 RFPWGA31
#define CTTAUB0I15 CTPWGA31
#define P0TAUD0I2_2 P0CSIH3IC
#define P1TAUD0I2_2 P1CSIH3IC
#define P2TAUD0I2_2 P2CSIH3IC
#define P3TAUD0I2_2 P3CSIH3IC
#define TBTAUD0I2_2 TBCSIH3IC
#define MKTAUD0I2_2 MKCSIH3IC
#define RFTAUD0I2_2 RFCSIH3IC
#define CTTAUD0I2_2 CTCSIH3IC
#define P0TAUD0I10_2 P0CSIH3IR
#define P1TAUD0I10_2 P1CSIH3IR
#define P2TAUD0I10_2 P2CSIH3IR
#define P3TAUD0I10_2 P3CSIH3IR
#define TBTAUD0I10_2 TBCSIH3IR
#define MKTAUD0I10_2 MKCSIH3IR
#define RFTAUD0I10_2 RFCSIH3IR
#define CTTAUD0I10_2 CTCSIH3IR
#define P0TAUD0I12_2 P0CSIH3IRE
#define P1TAUD0I12_2 P1CSIH3IRE
#define P2TAUD0I12_2 P2CSIH3IRE
#define P3TAUD0I12_2 P3CSIH3IRE
#define TBTAUD0I12_2 TBCSIH3IRE
#define MKTAUD0I12_2 MKCSIH3IRE
#define RFTAUD0I12_2 RFCSIH3IRE
#define CTTAUD0I12_2 CTCSIH3IRE
#define P0TAUD0I14_2 P0CSIH3IJC
#define P1TAUD0I14_2 P1CSIH3IJC
#define P2TAUD0I14_2 P2CSIH3IJC
#define P3TAUD0I14_2 P3CSIH3IJC
#define TBTAUD0I14_2 TBCSIH3IJC
#define MKTAUD0I14_2 MKCSIH3IJC
#define RFTAUD0I14_2 RFCSIH3IJC
#define CTTAUD0I14_2 CTCSIH3IJC


#define FLMD     (*(volatile struct __tag523 *)0xFFA00000) /* FLMD */
#define SELF     (*(volatile struct __tag524 *)0xFFA08000) /* SELF */
#define FACI     (*(volatile struct __tag525 *)0xFFA10000) /* FACI */
#define ECON_NMI (*(volatile struct __tag526 *)0xFFC00000) /* ECON_NMI */
#define ECON_FEINT (*(volatile struct __tag527 *)0xFFC00100) /* ECON_FEINT */
#define SL_INTC  (*(volatile struct __tag528 *)0xFFC01000) /* SL_INTC */
#define PORT     (*(volatile struct __tag529 *)0xFFC10000) /* PORT */
#define JTAG     (*(volatile struct __tag530 *)0xFFC20000) /* JTAG */
#define DNF      (*(volatile struct __tag531 *)0xFFC30000) /* DNF */
#define FCLA0    (*(volatile struct __tag532 *)0xFFC34000) /* FCLA0 */
#define PBG10    (*(volatile struct __tag533 *)0xFFC40000) /* PBG10 */
#define PBG11    (*(volatile struct __tag534 *)0xFFC40100) /* PBG11 */
#define PBG12    (*(volatile struct __tag535 *)0xFFC40400) /* PBG12 */
#define PBG13    (*(volatile struct __tag536 *)0xFFC40500) /* PBG13 */
#define PBGC0    (*(volatile struct __tag537 *)0xFFC4C000) /* PBGC0 */
#define PBGC1    (*(volatile struct __tag538 *)0xFFC4C120) /* PBGC1 */
#define DCIB     (*(volatile struct __tag539 *)0xFFC59810) /* DCIB */
#define FBUF_CTRL (*(volatile struct __tag540 *)0xFFC5B000) /* FBUF_CTRL */
#define CFECC_VCI (*(volatile struct __tag541 *)0xFFC62200) /* CFECC_VCI */
#define CFECC_CPU1 (*(volatile struct __tag542 *)0xFFC62400) /* CFECC_CPU1 */
#define DFECC    (*(volatile struct __tag543 *)0xFFC62A00) /* DFECC */
#define LRTST    (*(volatile struct __tag544 *)0xFFC65004) /* LRTST */
#define LRECC    (*(volatile struct __tag545 *)0xFFC65400) /* LRECC */
#define ECCCSIH0 (*(volatile struct __tag546 *)0xFFC70100) /* ECCCSIH0 */
#define ECCCSIH1 (*(volatile struct __tag546 *)0xFFC70200) /* ECCCSIH1 */
#define ECCCSIH2 (*(volatile struct __tag546 *)0xFFC70300) /* ECCCSIH2 */
#define ECCCSIH3 (*(volatile struct __tag546 *)0xFFC70400) /* ECCCSIH3 */
#define ECCCAN00 (*(volatile struct __tag547 *)0xFFC71300) /* ECCCAN00 */
#define ECCCAN01 (*(volatile struct __tag548 *)0xFFC71400) /* ECCCAN01 */
#define SL_READTEST (*(volatile struct __tag549 *)0xFFC78000) /* SL_READTEST */
#define RIIC0    (*(volatile struct __tag550 *)0xFFCA0000) /* RIIC0 */
#define SCDS     (*(volatile struct __tag551 *)0xFFCD00D0) /* SCDS */
#define RLN240   (*(volatile struct __tag552 *)0xFFCE0000) /* RLN240 */
#define RLN2400  (*(volatile struct __tag553 *)0xFFCE0008) /* RLN2400 */
#define RLN2401  (*(volatile struct __tag554 *)0xFFCE0028) /* RLN2401 */
#define RLN2402  (*(volatile struct __tag555 *)0xFFCE0048) /* RLN2402 */
#define RLN2403  (*(volatile struct __tag556 *)0xFFCE0068) /* RLN2403 */
#define RLN241   (*(volatile struct __tag552 *)0xFFCE0080) /* RLN241 */
#define RLN2414  (*(volatile struct __tag553 *)0xFFCE0088) /* RLN2414 */
#define RLN2415  (*(volatile struct __tag554 *)0xFFCE00A8) /* RLN2415 */
#define RLN30    (*(volatile struct __tag557 *)0xFFCE2000) /* RLN30 */
#define RLN31    (*(volatile struct __tag557 *)0xFFCE2040) /* RLN31 */
#define RLN32    (*(volatile struct __tag557 *)0xFFCE2080) /* RLN32 */
#define RLN33    (*(volatile struct __tag557 *)0xFFCE20C0) /* RLN33 */
#define RLN34    (*(volatile struct __tag557 *)0xFFCE2100) /* RLN34 */
#define RLN35    (*(volatile struct __tag557 *)0xFFCE2140) /* RLN35 */
#define RSCAN0   (*(volatile struct __tag558 *)0xFFD00000) /* RSCAN0 */
#define ADCA1    (*(volatile struct __tag559 *)0xFFD6D000) /* ADCA1 */
#define OSTM0    (*(volatile struct __tag560 *)0xFFD70000) /* OSTM0 */
#define OSTM1    (*(volatile struct __tag560 *)0xFFD70100) /* OSTM1 */
#define OSTM2    (*(volatile struct __tag560 *)0xFFD70200) /* OSTM2 */
#define OSTM3    (*(volatile struct __tag560 *)0xFFD70300) /* OSTM3 */
#define OSTM4    (*(volatile struct __tag560 *)0xFFD70400) /* OSTM4 */
#define CSIH0    (*(volatile struct __tag561 *)0xFFD80000) /* CSIH0 */
#define CSIH1    (*(volatile struct __tag562 *)0xFFD82000) /* CSIH1 */
#define CSIH2    (*(volatile struct __tag562 *)0xFFD84000) /* CSIH2 */
#define CSIH3    (*(volatile struct __tag563 *)0xFFD86000) /* CSIH3 */
#define CSIG0    (*(volatile struct __tag564 *)0xFFD88000) /* CSIG0 */
#define CSIG1    (*(volatile struct __tag564 *)0xFFD8A000) /* CSIG1 */
#define PIC0     (*(volatile struct __tag565 *)0xFFDD0004) /* PIC0 */
#define PBG20    (*(volatile struct __tag566 *)0xFFDDD000) /* PBG20 */
#define PBG21    (*(volatile struct __tag567 *)0xFFDDD100) /* PBG21 */
#define TAUD0    (*(volatile struct __tag568 *)0xFFE20000) /* TAUD0 */
#define SL_TAUD0 (*(volatile struct __tag569 *)0xFFE24000) /* SL_TAUD0 */
#define TAUB0    (*(volatile struct __tag570 *)0xFFE30000) /* TAUB0 */
#define TAUJ0    (*(volatile struct __tag571 *)0xFFE50000) /* TAUJ0 */
#define TAUJ1    (*(volatile struct __tag571 *)0xFFE51000) /* TAUJ1 */
#define SL_TAUJ0 (*(volatile struct __tag572 *)0xFFE54000) /* SL_TAUJ0 */
#define PWSA0    (*(volatile struct __tag573 *)0xFFE70000) /* PWSA0 */
#define PWGA0    (*(volatile struct __tag574 *)0xFFE71000) /* PWGA0 */
#define PWGA1    (*(volatile struct __tag574 *)0xFFE71040) /* PWGA1 */
#define PWGA2    (*(volatile struct __tag574 *)0xFFE71080) /* PWGA2 */
#define PWGA3    (*(volatile struct __tag574 *)0xFFE710C0) /* PWGA3 */
#define PWGA4    (*(volatile struct __tag574 *)0xFFE71100) /* PWGA4 */
#define PWGA5    (*(volatile struct __tag574 *)0xFFE71140) /* PWGA5 */
#define PWGA6    (*(volatile struct __tag574 *)0xFFE71180) /* PWGA6 */
#define PWGA7    (*(volatile struct __tag574 *)0xFFE711C0) /* PWGA7 */
#define PWGA8    (*(volatile struct __tag574 *)0xFFE71200) /* PWGA8 */
#define PWGA9    (*(volatile struct __tag574 *)0xFFE71240) /* PWGA9 */
#define PWGA10   (*(volatile struct __tag574 *)0xFFE71280) /* PWGA10 */
#define PWGA11   (*(volatile struct __tag574 *)0xFFE712C0) /* PWGA11 */
#define PWGA12   (*(volatile struct __tag574 *)0xFFE71300) /* PWGA12 */
#define PWGA13   (*(volatile struct __tag574 *)0xFFE71340) /* PWGA13 */
#define PWGA14   (*(volatile struct __tag574 *)0xFFE71380) /* PWGA14 */
#define PWGA15   (*(volatile struct __tag574 *)0xFFE713C0) /* PWGA15 */
#define PWGA16   (*(volatile struct __tag574 *)0xFFE71400) /* PWGA16 */
#define PWGA17   (*(volatile struct __tag574 *)0xFFE71440) /* PWGA17 */
#define PWGA18   (*(volatile struct __tag574 *)0xFFE71480) /* PWGA18 */
#define PWGA19   (*(volatile struct __tag574 *)0xFFE714C0) /* PWGA19 */
#define PWGA20   (*(volatile struct __tag574 *)0xFFE71500) /* PWGA20 */
#define PWGA21   (*(volatile struct __tag574 *)0xFFE71540) /* PWGA21 */
#define PWGA22   (*(volatile struct __tag574 *)0xFFE71580) /* PWGA22 */
#define PWGA23   (*(volatile struct __tag574 *)0xFFE715C0) /* PWGA23 */
#define PWGA24   (*(volatile struct __tag574 *)0xFFE71600) /* PWGA24 */
#define PWGA25   (*(volatile struct __tag574 *)0xFFE71640) /* PWGA25 */
#define PWGA26   (*(volatile struct __tag574 *)0xFFE71680) /* PWGA26 */
#define PWGA27   (*(volatile struct __tag574 *)0xFFE716C0) /* PWGA27 */
#define PWGA28   (*(volatile struct __tag574 *)0xFFE71700) /* PWGA28 */
#define PWGA29   (*(volatile struct __tag574 *)0xFFE71740) /* PWGA29 */
#define PWGA30   (*(volatile struct __tag574 *)0xFFE71780) /* PWGA30 */
#define PWGA31   (*(volatile struct __tag574 *)0xFFE717C0) /* PWGA31 */
#define PWGA32   (*(volatile struct __tag574 *)0xFFE71800) /* PWGA32 */
#define PWGA33   (*(volatile struct __tag574 *)0xFFE71840) /* PWGA33 */
#define PWGA34   (*(volatile struct __tag574 *)0xFFE71880) /* PWGA34 */
#define PWGA35   (*(volatile struct __tag574 *)0xFFE718C0) /* PWGA35 */
#define PWGA36   (*(volatile struct __tag574 *)0xFFE71900) /* PWGA36 */
#define PWGA37   (*(volatile struct __tag574 *)0xFFE71940) /* PWGA37 */
#define PWGA38   (*(volatile struct __tag574 *)0xFFE71980) /* PWGA38 */
#define PWGA39   (*(volatile struct __tag574 *)0xFFE719C0) /* PWGA39 */
#define PWGA40   (*(volatile struct __tag574 *)0xFFE71A00) /* PWGA40 */
#define PWGA41   (*(volatile struct __tag574 *)0xFFE71A40) /* PWGA41 */
#define PWGA42   (*(volatile struct __tag574 *)0xFFE71A80) /* PWGA42 */
#define PWGA43   (*(volatile struct __tag574 *)0xFFE71AC0) /* PWGA43 */
#define PWGA44   (*(volatile struct __tag574 *)0xFFE71B00) /* PWGA44 */
#define PWGA45   (*(volatile struct __tag574 *)0xFFE71B40) /* PWGA45 */
#define PWGA46   (*(volatile struct __tag574 *)0xFFE71B80) /* PWGA46 */
#define PWGA47   (*(volatile struct __tag574 *)0xFFE71BC0) /* PWGA47 */
#define PWGA48   (*(volatile struct __tag574 *)0xFFE71C00) /* PWGA48 */
#define PWGA49   (*(volatile struct __tag574 *)0xFFE71C40) /* PWGA49 */
#define PWGA50   (*(volatile struct __tag574 *)0xFFE71C80) /* PWGA50 */
#define PWGA51   (*(volatile struct __tag574 *)0xFFE71CC0) /* PWGA51 */
#define PWGA52   (*(volatile struct __tag574 *)0xFFE71D00) /* PWGA52 */
#define PWGA53   (*(volatile struct __tag574 *)0xFFE71D40) /* PWGA53 */
#define PWGA54   (*(volatile struct __tag574 *)0xFFE71D80) /* PWGA54 */
#define PWGA55   (*(volatile struct __tag574 *)0xFFE71DC0) /* PWGA55 */
#define PWGA56   (*(volatile struct __tag574 *)0xFFE71E00) /* PWGA56 */
#define PWGA57   (*(volatile struct __tag574 *)0xFFE71E40) /* PWGA57 */
#define PWGA58   (*(volatile struct __tag574 *)0xFFE71E80) /* PWGA58 */
#define PWGA59   (*(volatile struct __tag574 *)0xFFE71EC0) /* PWGA59 */
#define PWGA60   (*(volatile struct __tag574 *)0xFFE71F00) /* PWGA60 */
#define PWGA61   (*(volatile struct __tag574 *)0xFFE71F40) /* PWGA61 */
#define PWGA62   (*(volatile struct __tag574 *)0xFFE71F80) /* PWGA62 */
#define PWGA63   (*(volatile struct __tag574 *)0xFFE71FC0) /* PWGA63 */
#define PWBA0    (*(volatile struct __tag575 *)0xFFE72800) /* PWBA0 */
#define SLPWG    (*(volatile struct __tag576 *)0xFFE73000) /* SLPWG */
#define RTCA0    (*(volatile struct __tag577 *)0xFFE78000) /* RTCA0 */
#define ENCA0    (*(volatile struct __tag578 *)0xFFE80000) /* ENCA0 */
#define TAPA0    (*(volatile struct __tag579 *)0xFFE90000) /* TAPA0 */
#define WDTA0    (*(volatile struct __tag580 *)0xFFED0000) /* WDTA0 */
#define WDTA1    (*(volatile struct __tag580 *)0xFFED1000) /* WDTA1 */
#define ADCA0    (*(volatile struct __tag581 *)0xFFF20000) /* ADCA0 */
#define DCRA0    (*(volatile struct __tag582 *)0xFFF70000) /* DCRA0 */
#define DCRA1    (*(volatile struct __tag582 *)0xFFF71000) /* DCRA1 */
#define DCRA2    (*(volatile struct __tag582 *)0xFFF72000) /* DCRA2 */
#define DCRA3    (*(volatile struct __tag582 *)0xFFF73000) /* DCRA3 */
#define KR0      (*(volatile struct __tag583 *)0xFFF78000) /* KR0 */
#define WPROTR   (*(volatile struct __tag584 *)0xFFF80000) /* WPROTR */
#define STBC0    (*(volatile struct __tag585 *)0xFFF80100) /* STBC0 */
#define STBC_WUF0 (*(volatile struct __tag586 *)0xFFF80400) /* STBC_WUF0 */
#define STBC_WUF20 (*(volatile struct __tag587 *)0xFFF80520) /* STBC_WUF20 */
#define RESCTL   (*(volatile struct __tag588 *)0xFFF80760) /* RESCTL */
#define SVM      (*(volatile struct __tag589 *)0xFFF80980) /* SVM */
#define STBC_IOHOLD (*(volatile struct __tag590 *)0xFFF80B00) /* STBC_IOHOLD */
#define CLKCTL   (*(volatile struct __tag591 *)0xFFF81000) /* CLKCTL */
#define LPS0     (*(volatile struct __tag592 *)0xFFF83000) /* LPS0 */
#define STBC_WUFISO (*(volatile struct __tag593 *)0xFFF88110) /* STBC_WUFISO */
#define CLMA0    (*(volatile struct __tag594 *)0xFFF8C000) /* CLMA0 */
#define CLMA     (*(volatile struct __tag595 *)0xFFF8C100) /* CLMA */
#define CLMA1    (*(volatile struct __tag594 *)0xFFF8D000) /* CLMA1 */
#define CLMA2    (*(volatile struct __tag594 *)0xFFF8E000) /* CLMA2 */
#define PBG50    (*(volatile struct __tag596 *)0xFFF90000) /* PBG50 */
#define PBG30    (*(volatile struct __tag597 *)0xFFF94000) /* PBG30 */
#define PBG31    (*(volatile struct __tag598 *)0xFFF94100) /* PBG31 */
#define PBG32    (*(volatile struct __tag599 *)0xFFF94200) /* PBG32 */
#define PEG      (*(volatile struct __tag600 *)0xFFFEE60C) /* PEG */
#define SEG      (*(volatile struct __tag601 *)0xFFFEE980) /* SEG */
#define INTC1    (*(volatile struct __tag602 *)0xFFFEEA10) /* INTC1 */
#define DMAC     (*(volatile struct __tag603 *)0xFFFF8000) /* DMAC */
#define INTC2    (*(volatile struct __tag604 *)0xFFFFB040) /* INTC2 */

/* IOR List *
FLMD.CNT
FLMD.PCMD
FLMD.PS
SELF.ID0 ... SELF.ID3
SELF.IDST.UINT32
SELF.IDST.UINT16[L]
SELF.IDST.UINT8[LL]
FACI.FPMON
FACI.FASTAT
FACI.FAEINT
FACI.FAREASELC
FACI.FSADDR
FACI.FEADDR
FACI.FSTATR.UINT32
FACI.FSTATR.UINT16[L/H]
FACI.FSTATR.UINT8[LL/LH/HL]
FACI.FENTRYR
FACI.FPROTR
FACI.FSUINITR
FACI.FLKSTAT
FACI.FRTSTAT
FACI.FCMDR
FACI.FPESTAT
FACI.FBCCNT
FACI.FBCSTAT
FACI.FPSADDR
FACI.FCPSR
FACI.FPCKAR
FACI.FECCEMON
FACI.FECCTMD
FACI.FDMYECC
FACI.BFASELR
ECON_NMI.WDTNMIF
ECON_NMI.WDTNMIFC
ECON_FEINT.FEINTF
ECON_FEINT.FEINTFMSK
ECON_FEINT.FEINTFC
SL_INTC.SELB_INTC1
SL_INTC.SELB_INTC2
PORT.P0
PORT.P1
PORT.P8 ... PORT.P12
PORT.P18
PORT.P20
PORT.AP0
PORT.AP1
PORT.PSR0
PORT.PSR1
PORT.PSR8 ... PORT.PSR12
PORT.PSR18
PORT.PSR20
PORT.APSR0
PORT.APSR1
PORT.PPR0
PORT.PPR1
PORT.PPR8 ... PORT.PPR12
PORT.PPR18
PORT.PPR20
PORT.APPR0
PORT.APPR1
PORT.IPPR0
PORT.PM0
PORT.PM1
PORT.PM8 ... PORT.PM12
PORT.PM18
PORT.PM20
PORT.APM0
PORT.APM1
PORT.PMC0
PORT.PMC1
PORT.PMC8 ... PORT.PMC12
PORT.PMC18
PORT.PMC20
PORT.PFC0
PORT.PFC1
PORT.PFC8 ... PORT.PFC12
PORT.PFC18
PORT.PFC20
PORT.PFCE0
PORT.PFCE1
PORT.PFCE8 ... PORT.PFCE12
PORT.PNOT0
PORT.PNOT1
PORT.PNOT8 ... PORT.PNOT12
PORT.PNOT18
PORT.PNOT20
PORT.APNOT0
PORT.APNOT1
PORT.PMSR0
PORT.PMSR1
PORT.PMSR8 ... PORT.PMSR12
PORT.PMSR18
PORT.PMSR20
PORT.APMSR0
PORT.APMSR1
PORT.PMCSR0
PORT.PMCSR1
PORT.PMCSR8 ... PORT.PMCSR12
PORT.PMCSR18
PORT.PMCSR20
PORT.PFCAE0
PORT.PFCAE1
PORT.PFCAE10 ... PORT.PFCAE12
PORT.PIBC0
PORT.PIBC1
PORT.PIBC8 ... PORT.PIBC12
PORT.PIBC18
PORT.PIBC20
PORT.APIBC0
PORT.APIBC1
PORT.IPIBC0
PORT.PBDC0
PORT.PBDC1
PORT.PBDC8 ... PORT.PBDC12
PORT.PBDC18
PORT.PBDC20
PORT.APBDC0
PORT.APBDC1
PORT.PIPC0
PORT.PIPC10
PORT.PIPC11
PORT.PU0
PORT.PU1
PORT.PU8 ... PORT.PU12
PORT.PU18
PORT.PU20
PORT.PD0
PORT.PD1
PORT.PD8 ... PORT.PD12
PORT.PD18
PORT.PD20
PORT.PODC0
PORT.PODC1
PORT.PODC8 ... PORT.PODC12
PORT.PODC18
PORT.PODC20
PORT.PDSC0
PORT.PDSC1
PORT.PDSC10 ... PORT.PDSC12
PORT.PDSC18
PORT.PDSC20
PORT.PIS0
PORT.PIS1
PORT.PIS8 ... PORT.PIS12
PORT.PIS18
PORT.PIS20
PORT.PPROTS0
PORT.PPROTS1
PORT.PPROTS8 ... PORT.PPROTS12
PORT.PPROTS18
PORT.PPROTS20
PORT.PPCMD0
PORT.PPCMD1
PORT.PPCMD8 ... PORT.PPCMD12
PORT.PPCMD18
PORT.PPCMD20
JTAG.JP0
JTAG.JPSR0
JTAG.JPPR0
JTAG.JPM0
JTAG.JPMC0
JTAG.JPFC0
JTAG.JPFCE0
JTAG.JPNOT0
JTAG.JPMSR0
JTAG.JPMCSR0
JTAG.JPIBC0
JTAG.JPBDC0
JTAG.JPU0
JTAG.JPD0
JTAG.JPODC0
JTAG.JPDSC0
JTAG.JPIS0
JTAG.JPISA0
JTAG.JPPROTS0
JTAG.JPPCMD0
DNF.ATAUD0ICTL
DNF.ATAUD0IEN
DNF.ATAUD0IENH.UINT8
DNF.ATAUD0IENH.BIT.ATAUD0IENH0 ... DNF.ATAUD0IENH.BIT.ATAUD0IENH7
DNF.ATAUD0IENL.UINT8
DNF.ATAUD0IENL.BIT.ATAUD0IENL0 ... DNF.ATAUD0IENL.BIT.ATAUD0IENL7
DNF.ATAUB0ICTL
DNF.ATAUB0IEN
DNF.ATAUB0IENH.UINT8
DNF.ATAUB0IENH.BIT.ATAUB0IENH0 ... DNF.ATAUB0IENH.BIT.ATAUB0IENH7
DNF.ATAUB0IENL.UINT8
DNF.ATAUB0IENL.BIT.ATAUB0IENL0 ... DNF.ATAUB0IENL.BIT.ATAUB0IENL7
DNF.AENCA0ICTL
DNF.AENCA0IEN
DNF.AENCA0IENL.UINT8
DNF.AENCA0IENL.BIT.AENCA0IENL0 ... DNF.AENCA0IENL.BIT.AENCA0IENL4
DNF.AADCTL0CTL
DNF.AADCTL0EN
DNF.AADCTL0ENL.UINT8
DNF.AADCTL0ENL.BIT.AADCTL0ENL0 ... DNF.AADCTL0ENL.BIT.AADCTL0ENL2
DNF.AADCTL1CTL
DNF.AADCTL1EN
DNF.AADCTL1ENL.UINT8
DNF.AADCTL1ENL.BIT.AADCTL1ENL0 ... DNF.AADCTL1ENL.BIT.AADCTL1ENL2
FCLA0.CTL0_NMI
FCLA0.CTL0_INTPL
FCLA0.CTL1_INTPL
FCLA0.CTL2_INTPL
FCLA0.CTL3_INTPL
FCLA0.CTL4_INTPL
FCLA0.CTL5_INTPL
FCLA0.CTL6_INTPL
FCLA0.CTL7_INTPL
FCLA0.CTL0_INTPH
FCLA0.CTL1_INTPH
FCLA0.CTL2_INTPH
FCLA0.CTL3_INTPH
FCLA0.CTL4_INTPH
FCLA0.CTL5_INTPH
FCLA0.CTL6_INTPH
FCLA0.CTL7_INTPH
FCLA0.CTL0_ADC0
FCLA0.CTL1_ADC0
FCLA0.CTL2_ADC0
FCLA0.CTL0_ADC1
FCLA0.CTL1_ADC1
FCLA0.CTL2_ADC1
PBG10.FSGD00PROT0.UINT32
PBG10.FSGD00PROT0.UINT16[L/H]
PBG10.FSGD00PROT0.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT1.UINT32
PBG10.FSGD00PROT1.UINT16[L/H]
PBG10.FSGD00PROT1.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT2.UINT32
PBG10.FSGD00PROT2.UINT16[L/H]
PBG10.FSGD00PROT2.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT3.UINT32
PBG10.FSGD00PROT3.UINT16[L/H]
PBG10.FSGD00PROT3.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT4.UINT32
PBG10.FSGD00PROT4.UINT16[L/H]
PBG10.FSGD00PROT4.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT5.UINT32
PBG10.FSGD00PROT5.UINT16[L/H]
PBG10.FSGD00PROT5.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT6.UINT32
PBG10.FSGD00PROT6.UINT16[L/H]
PBG10.FSGD00PROT6.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT7.UINT32
PBG10.FSGD00PROT7.UINT16[L/H]
PBG10.FSGD00PROT7.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT8.UINT32
PBG10.FSGD00PROT8.UINT16[L/H]
PBG10.FSGD00PROT8.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT9.UINT32
PBG10.FSGD00PROT9.UINT16[L/H]
PBG10.FSGD00PROT9.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT10.UINT32
PBG10.FSGD00PROT10.UINT16[L/H]
PBG10.FSGD00PROT10.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT11.UINT32
PBG10.FSGD00PROT11.UINT16[L/H]
PBG10.FSGD00PROT11.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT12.UINT32
PBG10.FSGD00PROT12.UINT16[L/H]
PBG10.FSGD00PROT12.UINT8[LL/LH/HL/HH]
PBG10.FSGD00PROT13.UINT32
PBG10.FSGD00PROT13.UINT16[L/H]
PBG10.FSGD00PROT13.UINT8[LL/LH/HL/HH]
PBG10.ERRSLV00CTL.UINT32
PBG10.ERRSLV00CTL.UINT16[L]
PBG10.ERRSLV00CTL.UINT8[LL]
PBG10.ERRSLV00STAT.UINT32
PBG10.ERRSLV00STAT.UINT16[L]
PBG10.ERRSLV00STAT.UINT8[LL]
PBG10.ERRSLV00ADDR
PBG10.ERRSLV00TYPE.UINT32
PBG10.ERRSLV00TYPE.UINT16[L]
PBG11.FSGD01PROT0.UINT32
PBG11.FSGD01PROT0.UINT16[L/H]
PBG11.FSGD01PROT0.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT1.UINT32
PBG11.FSGD01PROT1.UINT16[L/H]
PBG11.FSGD01PROT1.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT2.UINT32
PBG11.FSGD01PROT2.UINT16[L/H]
PBG11.FSGD01PROT2.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT3.UINT32
PBG11.FSGD01PROT3.UINT16[L/H]
PBG11.FSGD01PROT3.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT4.UINT32
PBG11.FSGD01PROT4.UINT16[L/H]
PBG11.FSGD01PROT4.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT5.UINT32
PBG11.FSGD01PROT5.UINT16[L/H]
PBG11.FSGD01PROT5.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT6.UINT32
PBG11.FSGD01PROT6.UINT16[L/H]
PBG11.FSGD01PROT6.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT7.UINT32
PBG11.FSGD01PROT7.UINT16[L/H]
PBG11.FSGD01PROT7.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT8.UINT32
PBG11.FSGD01PROT8.UINT16[L/H]
PBG11.FSGD01PROT8.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT9.UINT32
PBG11.FSGD01PROT9.UINT16[L/H]
PBG11.FSGD01PROT9.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT12.UINT32
PBG11.FSGD01PROT12.UINT16[L/H]
PBG11.FSGD01PROT12.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT13.UINT32
PBG11.FSGD01PROT13.UINT16[L/H]
PBG11.FSGD01PROT13.UINT8[LL/LH/HL/HH]
PBG11.FSGD01PROT14.UINT32
PBG11.FSGD01PROT14.UINT16[L/H]
PBG11.FSGD01PROT14.UINT8[LL/LH/HL/HH]
PBG11.ERRSLV01CTL.UINT32
PBG11.ERRSLV01CTL.UINT16[L]
PBG11.ERRSLV01CTL.UINT8[LL]
PBG11.ERRSLV01STAT.UINT32
PBG11.ERRSLV01STAT.UINT16[L]
PBG11.ERRSLV01STAT.UINT8[LL]
PBG11.ERRSLV01ADDR
PBG11.ERRSLV01TYPE.UINT32
PBG11.ERRSLV01TYPE.UINT16[L]
PBG12.FSGD07PROT0.UINT32
PBG12.FSGD07PROT0.UINT16[L/H]
PBG12.FSGD07PROT0.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT1.UINT32
PBG12.FSGD07PROT1.UINT16[L/H]
PBG12.FSGD07PROT1.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT2.UINT32
PBG12.FSGD07PROT2.UINT16[L/H]
PBG12.FSGD07PROT2.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT3.UINT32
PBG12.FSGD07PROT3.UINT16[L/H]
PBG12.FSGD07PROT3.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT4.UINT32
PBG12.FSGD07PROT4.UINT16[L/H]
PBG12.FSGD07PROT4.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT5.UINT32
PBG12.FSGD07PROT5.UINT16[L/H]
PBG12.FSGD07PROT5.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT6.UINT32
PBG12.FSGD07PROT6.UINT16[L/H]
PBG12.FSGD07PROT6.UINT8[LL/LH/HL/HH]
PBG12.FSGD07PROT7.UINT32
PBG12.FSGD07PROT7.UINT16[L/H]
PBG12.FSGD07PROT7.UINT8[LL/LH/HL/HH]
PBG12.ERRSLV07CTL.UINT32
PBG12.ERRSLV07CTL.UINT16[L]
PBG12.ERRSLV07CTL.UINT8[LL]
PBG12.ERRSLV07STAT.UINT32
PBG12.ERRSLV07STAT.UINT16[L]
PBG12.ERRSLV07STAT.UINT8[LL]
PBG12.ERRSLV07ADDR
PBG12.ERRSLV07TYPE.UINT32
PBG12.ERRSLV07TYPE.UINT16[L]
PBG13.FSGD08PROT0.UINT32
PBG13.FSGD08PROT0.UINT16[L/H]
PBG13.FSGD08PROT0.UINT8[LL/LH/HL/HH]
PBG13.FSGD08PROT1.UINT32
PBG13.FSGD08PROT1.UINT16[L/H]
PBG13.FSGD08PROT1.UINT8[LL/LH/HL/HH]
PBG13.FSGD08PROT2.UINT32
PBG13.FSGD08PROT2.UINT16[L/H]
PBG13.FSGD08PROT2.UINT8[LL/LH/HL/HH]
PBG13.FSGD08PROT3.UINT32
PBG13.FSGD08PROT3.UINT16[L/H]
PBG13.FSGD08PROT3.UINT8[LL/LH/HL/HH]
PBG13.FSGD08PROT4.UINT32
PBG13.FSGD08PROT4.UINT16[L/H]
PBG13.FSGD08PROT4.UINT8[LL/LH/HL/HH]
PBG13.FSGD08PROT5.UINT32
PBG13.FSGD08PROT5.UINT16[L/H]
PBG13.FSGD08PROT5.UINT8[LL/LH/HL/HH]
PBG13.ERRSLV08CTL.UINT32
PBG13.ERRSLV08CTL.UINT16[L]
PBG13.ERRSLV08CTL.UINT8[LL]
PBG13.ERRSLV08STAT.UINT32
PBG13.ERRSLV08STAT.UINT16[L]
PBG13.ERRSLV08STAT.UINT8[LL]
PBG13.ERRSLV08ADDR
PBG13.ERRSLV08TYPE.UINT32
PBG13.ERRSLV08TYPE.UINT16[L]
PBGC0.FSGDC0PROT0.UINT32
PBGC0.FSGDC0PROT0.UINT16[L/H]
PBGC0.FSGDC0PROT0.UINT8[LL/LH/HL/HH]
PBGC0.FSGDC0PROT1.UINT32
PBGC0.FSGDC0PROT1.UINT16[L/H]
PBGC0.FSGDC0PROT1.UINT8[LL/LH/HL/HH]
PBGC0.ERRSLVC0CTL.UINT32
PBGC0.ERRSLVC0CTL.UINT16[L]
PBGC0.ERRSLVC0CTL.UINT8[LL]
PBGC0.ERRSLVC0STAT.UINT32
PBGC0.ERRSLVC0STAT.UINT16[L]
PBGC0.ERRSLVC0STAT.UINT8[LL]
PBGC0.ERRSLVC0ADDR
PBGC0.ERRSLVC0TYPE.UINT32
PBGC0.ERRSLVC0TYPE.UINT16[L]
PBGC1.FSGDC1PROT0.UINT32
PBGC1.FSGDC1PROT0.UINT16[L/H]
PBGC1.FSGDC1PROT0.UINT8[LL/LH/HL/HH]
PBGC1.FSGDC1PROT1.UINT32
PBGC1.FSGDC1PROT1.UINT16[L/H]
PBGC1.FSGDC1PROT1.UINT8[LL/LH/HL/HH]
PBGC1.FSGDC1PROT2.UINT32
PBGC1.FSGDC1PROT2.UINT16[L/H]
PBGC1.FSGDC1PROT2.UINT8[LL/LH/HL/HH]
PBGC1.FSGDC1PROT3.UINT32
PBGC1.FSGDC1PROT3.UINT16[L/H]
PBGC1.FSGDC1PROT3.UINT8[LL/LH/HL/HH]
PBGC1.FSGDC1PROT4.UINT32
PBGC1.FSGDC1PROT4.UINT16[L/H]
PBGC1.FSGDC1PROT4.UINT8[LL/LH/HL/HH]
PBGC1.FSGDC1PROT5.UINT32
PBGC1.FSGDC1PROT5.UINT16[L/H]
PBGC1.FSGDC1PROT5.UINT8[LL/LH/HL/HH]
PBGC1.ERRSLVC1CTL.UINT32
PBGC1.ERRSLVC1CTL.UINT16[L]
PBGC1.ERRSLVC1CTL.UINT8[LL]
PBGC1.ERRSLVC1STAT.UINT32
PBGC1.ERRSLVC1STAT.UINT16[L]
PBGC1.ERRSLVC1STAT.UINT8[LL]
PBGC1.ERRSLVC1ADDR
PBGC1.ERRSLVC1TYPE.UINT32
PBGC1.ERRSLVC1TYPE.UINT16[L]
DCIB.EEPRDCYCL
FBUF_CTRL.FBUFCCTL.UINT32
FBUF_CTRL.FBUFCCTL.UINT16[L]
FBUF_CTRL.FBUFCCTL.UINT8[LL]
CFECC_VCI.CFECCCTL_VCI.UINT32
CFECC_VCI.CFECCCTL_VCI.UINT16[L]
CFECC_VCI.CFERRINT_VCI.UINT32
CFECC_VCI.CFERRINT_VCI.UINT16[L]
CFECC_VCI.CFERRINT_VCI.UINT8[LL]
CFECC_VCI.CFSTCLR_VCI.UINT32
CFECC_VCI.CFSTCLR_VCI.UINT16[L]
CFECC_VCI.CFSTCLR_VCI.UINT8[LL]
CFECC_VCI.CFOVFSTR_VCI.UINT32
CFECC_VCI.CFOVFSTR_VCI.UINT16[L]
CFECC_VCI.CFOVFSTR_VCI.UINT8[LL]
CFECC_VCI.CF1STERSTR_VCI.UINT32
CFECC_VCI.CF1STERSTR_VCI.UINT16[L]
CFECC_VCI.CF1STERSTR_VCI.UINT8[LL]
CFECC_VCI.CF1STEADR0_VCI.UINT32
CFECC_VCI.CF1STEADR0_VCI.UINT16[L/H]
CFECC_VCI.CF1STEADR0_VCI.UINT8[LL/LH/HL/HH]
CFECC_VCI.CFSTSTCTL_VCI.UINT32
CFECC_VCI.CFSTSTCTL_VCI.UINT16[L]
CFECC_CPU1.CFECCCTL_PE1.UINT32
CFECC_CPU1.CFECCCTL_PE1.UINT16[L]
CFECC_CPU1.CFERRINT_PE1.UINT32
CFECC_CPU1.CFERRINT_PE1.UINT16[L]
CFECC_CPU1.CFERRINT_PE1.UINT8[LL]
CFECC_CPU1.CFSTCLR_PE1.UINT32
CFECC_CPU1.CFSTCLR_PE1.UINT16[L]
CFECC_CPU1.CFSTCLR_PE1.UINT8[LL]
CFECC_CPU1.CFOVFSTR_PE1.UINT32
CFECC_CPU1.CFOVFSTR_PE1.UINT16[L]
CFECC_CPU1.CFOVFSTR_PE1.UINT8[LL]
CFECC_CPU1.CF1STERSTR_PE1.UINT32
CFECC_CPU1.CF1STERSTR_PE1.UINT16[L]
CFECC_CPU1.CF1STERSTR_PE1.UINT8[LL]
CFECC_CPU1.CF1STEADR0_PE1.UINT32
CFECC_CPU1.CF1STEADR0_PE1.UINT16[L/H]
CFECC_CPU1.CF1STEADR0_PE1.UINT8[LL/LH/HL/HH]
CFECC_CPU1.CFSTSTCTL_PE1.UINT32
CFECC_CPU1.CFSTSTCTL_PE1.UINT16[L]
DFECC.CTL
DFECC.DFERSTR
DFECC.DFERSTC
DFECC.DFOVFSTR
DFECC.DFOVFSTC
DFECC.DFERRINT
DFECC.DFEADR
DFECC.DFTSTCTL
LRTST.CTL_PE1.UINT32
LRTST.CTL_PE1.UINT16[L]
LRTST.LRTDATBF0_PE1
LRECC.CTL_PE1.UINT32
LRECC.CTL_PE1.UINT16[L]
LRECC.LRERRINT_PE1.UINT32
LRECC.LRERRINT_PE1.UINT16[L]
LRECC.LRERRINT_PE1.UINT8[LL]
LRECC.LRSTCLR_PE1.UINT32
LRECC.LRSTCLR_PE1.UINT16[L]
LRECC.LRSTCLR_PE1.UINT8[LL]
LRECC.LROVFSTR_PE1.UINT32
LRECC.LROVFSTR_PE1.UINT16[L]
LRECC.LROVFSTR_PE1.UINT8[LL]
LRECC.LR1STERSTR_PE1.UINT32
LRECC.LR1STERSTR_PE1.UINT16[L]
LRECC.LR1STERSTR_PE1.UINT8[LL]
LRECC.LR1STEADR0_PE1.UINT32
LRECC.LR1STEADR0_PE1.UINT16[L/H]
LRECC.LR1STEADR0_PE1.UINT8[LL/LH/HL]
ECCCSIH0.CTL
ECCCSIH0.TMC
ECCCSIH0.TRC.UINT32
ECCCSIH0.TRC.UINT8[LL/LH/HL/HH]
ECCCSIH0.TRC.REGS8.ERDB.UINT8
ECCCSIH0.TRC.REGS8.ECRD.UINT8
ECCCSIH0.TRC.REGS8.HORD.UINT8
ECCCSIH0.TRC.REGS8.SYND.UINT8
ECCCSIH0.TED
ECCCSIH0.AD0
ECCCSIH1.CTL
ECCCSIH1.TMC
ECCCSIH1.TRC.UINT32
ECCCSIH1.TRC.UINT8[LL/LH/HL/HH]
ECCCSIH1.TRC.REGS8.ERDB.UINT8
ECCCSIH1.TRC.REGS8.ECRD.UINT8
ECCCSIH1.TRC.REGS8.HORD.UINT8
ECCCSIH1.TRC.REGS8.SYND.UINT8
ECCCSIH1.TED
ECCCSIH1.AD0
ECCCSIH2.CTL
ECCCSIH2.TMC
ECCCSIH2.TRC.UINT32
ECCCSIH2.TRC.UINT8[LL/LH/HL/HH]
ECCCSIH2.TRC.REGS8.ERDB.UINT8
ECCCSIH2.TRC.REGS8.ECRD.UINT8
ECCCSIH2.TRC.REGS8.HORD.UINT8
ECCCSIH2.TRC.REGS8.SYND.UINT8
ECCCSIH2.TED
ECCCSIH2.AD0
ECCCSIH3.CTL
ECCCSIH3.TMC
ECCCSIH3.TRC.UINT32
ECCCSIH3.TRC.UINT8[LL/LH/HL/HH]
ECCCSIH3.TRC.REGS8.ERDB.UINT8
ECCCSIH3.TRC.REGS8.ECRD.UINT8
ECCCSIH3.TRC.REGS8.HORD.UINT8
ECCCSIH3.TRC.REGS8.SYND.UINT8
ECCCSIH3.TED
ECCCSIH3.AD0
ECCCAN00.ECCRCAN0CTL_PHY1
ECCCAN00.ECCRCAN0TMC_PHY1
ECCCAN00.ECCRCAN0TRC_PHY1.UINT32
ECCCAN00.ECCRCAN0TRC_PHY1.UINT8[LL/LH/HL/HH]
ECCCAN00.ECCRCAN0TRC_PHY1.REGS8.ECCRCAN0ERDB_PHY1.UINT8
ECCCAN00.ECCRCAN0TRC_PHY1.REGS8.ECCRCAN0ECRD_PHY1.UINT8
ECCCAN00.ECCRCAN0TRC_PHY1.REGS8.ECCRCAN0HORD_PHY1.UINT8
ECCCAN00.ECCRCAN0TRC_PHY1.REGS8.ECCRCAN0SYND_PHY1.UINT8
ECCCAN00.ECCRCAN0TED_PHY1
ECCCAN00.ECCRCAN0AD0_PHY1
ECCCAN01.ECCRCANFD0CTL_PHY2
ECCCAN01.ECCRCANFD0TMC_PHY2
ECCCAN01.ECCRCANFD0TRC_PHY2.UINT32
ECCCAN01.ECCRCANFD0TRC_PHY2.UINT8[LL/LH/HL/HH]
ECCCAN01.ECCRCANFD0TRC_PHY2.REGS8.ECCRCANFD0ERDB_PHY2.UINT8
ECCCAN01.ECCRCANFD0TRC_PHY2.REGS8.ECCRCANFD0ECRD_PHY2.UINT8
ECCCAN01.ECCRCANFD0TRC_PHY2.REGS8.ECCRCANFD0HORD_PHY2.UINT8
ECCCAN01.ECCRCANFD0TRC_PHY2.REGS8.ECCRCANFD0SYND_PHY2.UINT8
ECCCAN01.ECCRCANFD0TED_PHY2
ECCCAN01.ECCRCANFD0AD0_PHY2
SL_READTEST.SELB_READTEST
RIIC0.CR1.UINT32
RIIC0.CR1.UINT16[L]
RIIC0.CR1.UINT8[LL]
RIIC0.CR2.UINT32
RIIC0.CR2.UINT16[L]
RIIC0.CR2.UINT8[LL]
RIIC0.MR1.UINT32
RIIC0.MR1.UINT16[L]
RIIC0.MR1.UINT8[LL]
RIIC0.MR2.UINT32
RIIC0.MR2.UINT16[L]
RIIC0.MR2.UINT8[LL]
RIIC0.MR3.UINT32
RIIC0.MR3.UINT16[L]
RIIC0.MR3.UINT8[LL]
RIIC0.FER.UINT32
RIIC0.FER.UINT16[L]
RIIC0.FER.UINT8[LL]
RIIC0.SER.UINT32
RIIC0.SER.UINT16[L]
RIIC0.SER.UINT8[LL]
RIIC0.IER.UINT32
RIIC0.IER.UINT16[L]
RIIC0.IER.UINT8[LL]
RIIC0.SR1.UINT32
RIIC0.SR1.UINT16[L]
RIIC0.SR1.UINT8[LL]
RIIC0.SR2.UINT32
RIIC0.SR2.UINT16[L]
RIIC0.SR2.UINT8[LL]
RIIC0.SAR0.UINT32
RIIC0.SAR0.UINT16[L]
RIIC0.SAR0.UINT8[LL/LH]
RIIC0.SAR1.UINT32
RIIC0.SAR1.UINT16[L]
RIIC0.SAR1.UINT8[LL/LH]
RIIC0.SAR2.UINT32
RIIC0.SAR2.UINT16[L]
RIIC0.SAR2.UINT8[LL/LH]
RIIC0.BRL.UINT32
RIIC0.BRL.UINT16[L]
RIIC0.BRL.UINT8[LL]
RIIC0.BRH.UINT32
RIIC0.BRH.UINT16[L]
RIIC0.BRH.UINT8[LL]
RIIC0.DRT.UINT32
RIIC0.DRT.UINT16[L]
RIIC0.DRT.UINT8[LL]
RIIC0.DRR.UINT32
RIIC0.DRR.UINT16[L]
RIIC0.DRR.UINT8[LL]
SCDS.PRDNAME1 ... SCDS.PRDNAME3
SCDS.CHIPID1LL
SCDS.CHIPID1LH
SCDS.CHIPID1HL
SCDS.CHIPID1HH
SCDS.CHIPID2LL
SCDS.CHIPID2LH
SCDS.CHIPID2HL
SCDS.CHIPID2HH
RLN240.GLWBR
RLN240.GLBRP0
RLN240.GLBRP1
RLN240.GLSTC
RLN2400.L0MD
RLN2400.L0BFC
RLN2400.L0SC
RLN2400.L0WUP
RLN2400.L0IE
RLN2400.L0EDE
RLN2400.L0CUC
RLN2400.L0TRC
RLN2400.L0MST
RLN2400.L0ST
RLN2400.L0EST
RLN2400.L0DFC
RLN2400.L0IDB
RLN2400.L0CBR
RLN2400.L0DBR1 ... RLN2400.L0DBR8
RLN2401.L1MD
RLN2401.L1BFC
RLN2401.L1SC
RLN2401.L1WUP
RLN2401.L1IE
RLN2401.L1EDE
RLN2401.L1CUC
RLN2401.L1TRC
RLN2401.L1MST
RLN2401.L1ST
RLN2401.L1EST
RLN2401.L1DFC
RLN2401.L1IDB
RLN2401.L1CBR
RLN2401.L1DBR1 ... RLN2401.L1DBR8
RLN2402.L2MD
RLN2402.L2BFC
RLN2402.L2SC
RLN2402.L2WUP
RLN2402.L2IE
RLN2402.L2EDE
RLN2402.L2CUC
RLN2402.L2TRC
RLN2402.L2MST
RLN2402.L2ST
RLN2402.L2EST
RLN2402.L2DFC
RLN2402.L2IDB
RLN2402.L2CBR
RLN2402.L2DBR1 ... RLN2402.L2DBR8
RLN2403.L3MD
RLN2403.L3BFC
RLN2403.L3SC
RLN2403.L3WUP
RLN2403.L3IE
RLN2403.L3EDE
RLN2403.L3CUC
RLN2403.L3TRC
RLN2403.L3MST
RLN2403.L3ST
RLN2403.L3EST
RLN2403.L3DFC
RLN2403.L3IDB
RLN2403.L3CBR
RLN2403.L3DBR1 ... RLN2403.L3DBR8
RLN241.GLWBR
RLN241.GLBRP0
RLN241.GLBRP1
RLN241.GLSTC
RLN2414.L0MD
RLN2414.L0BFC
RLN2414.L0SC
RLN2414.L0WUP
RLN2414.L0IE
RLN2414.L0EDE
RLN2414.L0CUC
RLN2414.L0TRC
RLN2414.L0MST
RLN2414.L0ST
RLN2414.L0EST
RLN2414.L0DFC
RLN2414.L0IDB
RLN2414.L0CBR
RLN2414.L0DBR1 ... RLN2414.L0DBR8
RLN2415.L1MD
RLN2415.L1BFC
RLN2415.L1SC
RLN2415.L1WUP
RLN2415.L1IE
RLN2415.L1EDE
RLN2415.L1CUC
RLN2415.L1TRC
RLN2415.L1MST
RLN2415.L1ST
RLN2415.L1EST
RLN2415.L1DFC
RLN2415.L1IDB
RLN2415.L1CBR
RLN2415.L1DBR1 ... RLN2415.L1DBR8
RLN30.LWBR
RLN30.LBRP01.UINT16
RLN30.LBRP01.UINT8[L/H]
RLN30.LBRP01.REGS8.LBRP0.UINT8
RLN30.LBRP01.REGS8.LBRP1.UINT8
RLN30.LSTC
RLN30.LMD
RLN30.LBFC
RLN30.LSC
RLN30.LWUP
RLN30.LIE
RLN30.LEDE
RLN30.LCUC
RLN30.LTRC
RLN30.LMST
RLN30.LST
RLN30.LEST
RLN30.LDFC
RLN30.LIDB
RLN30.LCBR
RLN30.LUDB0
RLN30.LDBR1 ... RLN30.LDBR8
RLN30.LUOER
RLN30.LUOR1
RLN30.LUTDR.UINT16
RLN30.LUTDR.UINT8[L/H]
RLN30.LURDR.UINT16
RLN30.LURDR.UINT8[L/H]
RLN30.LUWTDR.UINT16
RLN30.LUWTDR.UINT8[L/H]
RLN31.LWBR
RLN31.LBRP01.UINT16
RLN31.LBRP01.UINT8[L/H]
RLN31.LBRP01.REGS8.LBRP0.UINT8
RLN31.LBRP01.REGS8.LBRP1.UINT8
RLN31.LSTC
RLN31.LMD
RLN31.LBFC
RLN31.LSC
RLN31.LWUP
RLN31.LIE
RLN31.LEDE
RLN31.LCUC
RLN31.LTRC
RLN31.LMST
RLN31.LST
RLN31.LEST
RLN31.LDFC
RLN31.LIDB
RLN31.LCBR
RLN31.LUDB0
RLN31.LDBR1 ... RLN31.LDBR8
RLN31.LUOER
RLN31.LUOR1
RLN31.LUTDR.UINT16
RLN31.LUTDR.UINT8[L/H]
RLN31.LURDR.UINT16
RLN31.LURDR.UINT8[L/H]
RLN31.LUWTDR.UINT16
RLN31.LUWTDR.UINT8[L/H]
RLN32.LWBR
RLN32.LBRP01.UINT16
RLN32.LBRP01.UINT8[L/H]
RLN32.LBRP01.REGS8.LBRP0.UINT8
RLN32.LBRP01.REGS8.LBRP1.UINT8
RLN32.LSTC
RLN32.LMD
RLN32.LBFC
RLN32.LSC
RLN32.LWUP
RLN32.LIE
RLN32.LEDE
RLN32.LCUC
RLN32.LTRC
RLN32.LMST
RLN32.LST
RLN32.LEST
RLN32.LDFC
RLN32.LIDB
RLN32.LCBR
RLN32.LUDB0
RLN32.LDBR1 ... RLN32.LDBR8
RLN32.LUOER
RLN32.LUOR1
RLN32.LUTDR.UINT16
RLN32.LUTDR.UINT8[L/H]
RLN32.LURDR.UINT16
RLN32.LURDR.UINT8[L/H]
RLN32.LUWTDR.UINT16
RLN32.LUWTDR.UINT8[L/H]
RLN33.LWBR
RLN33.LBRP01.UINT16
RLN33.LBRP01.UINT8[L/H]
RLN33.LBRP01.REGS8.LBRP0.UINT8
RLN33.LBRP01.REGS8.LBRP1.UINT8
RLN33.LSTC
RLN33.LMD
RLN33.LBFC
RLN33.LSC
RLN33.LWUP
RLN33.LIE
RLN33.LEDE
RLN33.LCUC
RLN33.LTRC
RLN33.LMST
RLN33.LST
RLN33.LEST
RLN33.LDFC
RLN33.LIDB
RLN33.LCBR
RLN33.LUDB0
RLN33.LDBR1 ... RLN33.LDBR8
RLN33.LUOER
RLN33.LUOR1
RLN33.LUTDR.UINT16
RLN33.LUTDR.UINT8[L/H]
RLN33.LURDR.UINT16
RLN33.LURDR.UINT8[L/H]
RLN33.LUWTDR.UINT16
RLN33.LUWTDR.UINT8[L/H]
RLN34.LWBR
RLN34.LBRP01.UINT16
RLN34.LBRP01.UINT8[L/H]
RLN34.LBRP01.REGS8.LBRP0.UINT8
RLN34.LBRP01.REGS8.LBRP1.UINT8
RLN34.LSTC
RLN34.LMD
RLN34.LBFC
RLN34.LSC
RLN34.LWUP
RLN34.LIE
RLN34.LEDE
RLN34.LCUC
RLN34.LTRC
RLN34.LMST
RLN34.LST
RLN34.LEST
RLN34.LDFC
RLN34.LIDB
RLN34.LCBR
RLN34.LUDB0
RLN34.LDBR1 ... RLN34.LDBR8
RLN34.LUOER
RLN34.LUOR1
RLN34.LUTDR.UINT16
RLN34.LUTDR.UINT8[L/H]
RLN34.LURDR.UINT16
RLN34.LURDR.UINT8[L/H]
RLN34.LUWTDR.UINT16
RLN34.LUWTDR.UINT8[L/H]
RLN35.LWBR
RLN35.LBRP01.UINT16
RLN35.LBRP01.UINT8[L/H]
RLN35.LBRP01.REGS8.LBRP0.UINT8
RLN35.LBRP01.REGS8.LBRP1.UINT8
RLN35.LSTC
RLN35.LMD
RLN35.LBFC
RLN35.LSC
RLN35.LWUP
RLN35.LIE
RLN35.LEDE
RLN35.LCUC
RLN35.LTRC
RLN35.LMST
RLN35.LST
RLN35.LEST
RLN35.LDFC
RLN35.LIDB
RLN35.LCBR
RLN35.LUDB0
RLN35.LDBR1 ... RLN35.LDBR8
RLN35.LUOER
RLN35.LUOR1
RLN35.LUTDR.UINT16
RLN35.LUTDR.UINT8[L/H]
RLN35.LURDR.UINT16
RLN35.LURDR.UINT8[L/H]
RLN35.LUWTDR.UINT16
RLN35.LUWTDR.UINT8[L/H]
RSCAN0.C0CFG.UINT32
RSCAN0.C0CFG.UINT16[L/H]
RSCAN0.C0CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C0CTR.UINT32
RSCAN0.C0CTR.UINT16[L/H]
RSCAN0.C0CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C0STS.UINT32
RSCAN0.C0STS.UINT16[L/H]
RSCAN0.C0STS.UINT8[LL/HL/HH]
RSCAN0.C0ERFL.UINT32
RSCAN0.C0ERFL.UINT16[L/H]
RSCAN0.C0ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.C1CFG.UINT32
RSCAN0.C1CFG.UINT16[L/H]
RSCAN0.C1CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C1CTR.UINT32
RSCAN0.C1CTR.UINT16[L/H]
RSCAN0.C1CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C1STS.UINT32
RSCAN0.C1STS.UINT16[L/H]
RSCAN0.C1STS.UINT8[LL/HL/HH]
RSCAN0.C1ERFL.UINT32
RSCAN0.C1ERFL.UINT16[L/H]
RSCAN0.C1ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.C2CFG.UINT32
RSCAN0.C2CFG.UINT16[L/H]
RSCAN0.C2CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C2CTR.UINT32
RSCAN0.C2CTR.UINT16[L/H]
RSCAN0.C2CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C2STS.UINT32
RSCAN0.C2STS.UINT16[L/H]
RSCAN0.C2STS.UINT8[LL/HL/HH]
RSCAN0.C2ERFL.UINT32
RSCAN0.C2ERFL.UINT16[L/H]
RSCAN0.C2ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.C3CFG.UINT32
RSCAN0.C3CFG.UINT16[L/H]
RSCAN0.C3CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C3CTR.UINT32
RSCAN0.C3CTR.UINT16[L/H]
RSCAN0.C3CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C3STS.UINT32
RSCAN0.C3STS.UINT16[L/H]
RSCAN0.C3STS.UINT8[LL/HL/HH]
RSCAN0.C3ERFL.UINT32
RSCAN0.C3ERFL.UINT16[L/H]
RSCAN0.C3ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.C4CFG.UINT32
RSCAN0.C4CFG.UINT16[L/H]
RSCAN0.C4CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C4CTR.UINT32
RSCAN0.C4CTR.UINT16[L/H]
RSCAN0.C4CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C4STS.UINT32
RSCAN0.C4STS.UINT16[L/H]
RSCAN0.C4STS.UINT8[LL/HL/HH]
RSCAN0.C4ERFL.UINT32
RSCAN0.C4ERFL.UINT16[L/H]
RSCAN0.C4ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.C5CFG.UINT32
RSCAN0.C5CFG.UINT16[L/H]
RSCAN0.C5CFG.UINT8[LL/LH/HL/HH]
RSCAN0.C5CTR.UINT32
RSCAN0.C5CTR.UINT16[L/H]
RSCAN0.C5CTR.UINT8[LL/LH/HL/HH]
RSCAN0.C5STS.UINT32
RSCAN0.C5STS.UINT16[L/H]
RSCAN0.C5STS.UINT8[LL/HL/HH]
RSCAN0.C5ERFL.UINT32
RSCAN0.C5ERFL.UINT16[L/H]
RSCAN0.C5ERFL.UINT8[LL/LH/HL/HH]
RSCAN0.GCFG.UINT32
RSCAN0.GCFG.UINT16[L/H]
RSCAN0.GCFG.UINT8[LL/LH/HL/HH]
RSCAN0.GCTR.UINT32
RSCAN0.GCTR.UINT16[L/H]
RSCAN0.GCTR.UINT8[LL/LH/HL]
RSCAN0.GSTS.UINT32
RSCAN0.GSTS.UINT16[L]
RSCAN0.GSTS.UINT8[LL]
RSCAN0.GERFL.UINT32
RSCAN0.GERFL.UINT16[L/H]
RSCAN0.GERFL.UINT8[LL/HL]
RSCAN0.GTSC.UINT32
RSCAN0.GTSC.UINT16[L]
RSCAN0.GAFLECTR.UINT32
RSCAN0.GAFLECTR.UINT16[L]
RSCAN0.GAFLECTR.UINT8[LL/LH]
RSCAN0.GAFLCFG0.UINT32
RSCAN0.GAFLCFG0.UINT16[L/H]
RSCAN0.GAFLCFG0.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLCFG1.UINT32
RSCAN0.GAFLCFG1.UINT16[H]
RSCAN0.GAFLCFG1.UINT8[HL/HH]
RSCAN0.RMNB.UINT32
RSCAN0.RMNB.UINT16[L]
RSCAN0.RMNB.UINT8[LL]
RSCAN0.RMND0.UINT32
RSCAN0.RMND0.UINT16[L/H]
RSCAN0.RMND0.UINT8[LL/LH/HL/HH]
RSCAN0.RMND1.UINT32
RSCAN0.RMND1.UINT16[L/H]
RSCAN0.RMND1.UINT8[LL/LH/HL/HH]
RSCAN0.RMND2.UINT32
RSCAN0.RMND2.UINT16[L/H]
RSCAN0.RMND2.UINT8[LL/LH/HL/HH]
RSCAN0.RFCC0.UINT32
RSCAN0.RFCC0.UINT16[L]
RSCAN0.RFCC0.UINT8[LL/LH]
RSCAN0.RFCC1.UINT32
RSCAN0.RFCC1.UINT16[L]
RSCAN0.RFCC1.UINT8[LL/LH]
RSCAN0.RFCC2.UINT32
RSCAN0.RFCC2.UINT16[L]
RSCAN0.RFCC2.UINT8[LL/LH]
RSCAN0.RFCC3.UINT32
RSCAN0.RFCC3.UINT16[L]
RSCAN0.RFCC3.UINT8[LL/LH]
RSCAN0.RFCC4.UINT32
RSCAN0.RFCC4.UINT16[L]
RSCAN0.RFCC4.UINT8[LL/LH]
RSCAN0.RFCC5.UINT32
RSCAN0.RFCC5.UINT16[L]
RSCAN0.RFCC5.UINT8[LL/LH]
RSCAN0.RFCC6.UINT32
RSCAN0.RFCC6.UINT16[L]
RSCAN0.RFCC6.UINT8[LL/LH]
RSCAN0.RFCC7.UINT32
RSCAN0.RFCC7.UINT16[L]
RSCAN0.RFCC7.UINT8[LL/LH]
RSCAN0.RFSTS0.UINT32
RSCAN0.RFSTS0.UINT16[L]
RSCAN0.RFSTS0.UINT8[LL/LH]
RSCAN0.RFSTS1.UINT32
RSCAN0.RFSTS1.UINT16[L]
RSCAN0.RFSTS1.UINT8[LL/LH]
RSCAN0.RFSTS2.UINT32
RSCAN0.RFSTS2.UINT16[L]
RSCAN0.RFSTS2.UINT8[LL/LH]
RSCAN0.RFSTS3.UINT32
RSCAN0.RFSTS3.UINT16[L]
RSCAN0.RFSTS3.UINT8[LL/LH]
RSCAN0.RFSTS4.UINT32
RSCAN0.RFSTS4.UINT16[L]
RSCAN0.RFSTS4.UINT8[LL/LH]
RSCAN0.RFSTS5.UINT32
RSCAN0.RFSTS5.UINT16[L]
RSCAN0.RFSTS5.UINT8[LL/LH]
RSCAN0.RFSTS6.UINT32
RSCAN0.RFSTS6.UINT16[L]
RSCAN0.RFSTS6.UINT8[LL/LH]
RSCAN0.RFSTS7.UINT32
RSCAN0.RFSTS7.UINT16[L]
RSCAN0.RFSTS7.UINT8[LL/LH]
RSCAN0.RFPCTR0.UINT32
RSCAN0.RFPCTR0.UINT16[L]
RSCAN0.RFPCTR0.UINT8[LL]
RSCAN0.RFPCTR1.UINT32
RSCAN0.RFPCTR1.UINT16[L]
RSCAN0.RFPCTR1.UINT8[LL]
RSCAN0.RFPCTR2.UINT32
RSCAN0.RFPCTR2.UINT16[L]
RSCAN0.RFPCTR2.UINT8[LL]
RSCAN0.RFPCTR3.UINT32
RSCAN0.RFPCTR3.UINT16[L]
RSCAN0.RFPCTR3.UINT8[LL]
RSCAN0.RFPCTR4.UINT32
RSCAN0.RFPCTR4.UINT16[L]
RSCAN0.RFPCTR4.UINT8[LL]
RSCAN0.RFPCTR5.UINT32
RSCAN0.RFPCTR5.UINT16[L]
RSCAN0.RFPCTR5.UINT8[LL]
RSCAN0.RFPCTR6.UINT32
RSCAN0.RFPCTR6.UINT16[L]
RSCAN0.RFPCTR6.UINT8[LL]
RSCAN0.RFPCTR7.UINT32
RSCAN0.RFPCTR7.UINT16[L]
RSCAN0.RFPCTR7.UINT8[LL]
RSCAN0.CFCC0.UINT32
RSCAN0.CFCC0.UINT16[L/H]
RSCAN0.CFCC0.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC1.UINT32
RSCAN0.CFCC1.UINT16[L/H]
RSCAN0.CFCC1.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC2.UINT32
RSCAN0.CFCC2.UINT16[L/H]
RSCAN0.CFCC2.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC3.UINT32
RSCAN0.CFCC3.UINT16[L/H]
RSCAN0.CFCC3.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC4.UINT32
RSCAN0.CFCC4.UINT16[L/H]
RSCAN0.CFCC4.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC5.UINT32
RSCAN0.CFCC5.UINT16[L/H]
RSCAN0.CFCC5.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC6.UINT32
RSCAN0.CFCC6.UINT16[L/H]
RSCAN0.CFCC6.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC7.UINT32
RSCAN0.CFCC7.UINT16[L/H]
RSCAN0.CFCC7.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC8.UINT32
RSCAN0.CFCC8.UINT16[L/H]
RSCAN0.CFCC8.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC9.UINT32
RSCAN0.CFCC9.UINT16[L/H]
RSCAN0.CFCC9.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC10.UINT32
RSCAN0.CFCC10.UINT16[L/H]
RSCAN0.CFCC10.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC11.UINT32
RSCAN0.CFCC11.UINT16[L/H]
RSCAN0.CFCC11.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC12.UINT32
RSCAN0.CFCC12.UINT16[L/H]
RSCAN0.CFCC12.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC13.UINT32
RSCAN0.CFCC13.UINT16[L/H]
RSCAN0.CFCC13.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC14.UINT32
RSCAN0.CFCC14.UINT16[L/H]
RSCAN0.CFCC14.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC15.UINT32
RSCAN0.CFCC15.UINT16[L/H]
RSCAN0.CFCC15.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC16.UINT32
RSCAN0.CFCC16.UINT16[L/H]
RSCAN0.CFCC16.UINT8[LL/LH/HL/HH]
RSCAN0.CFCC17.UINT32
RSCAN0.CFCC17.UINT16[L/H]
RSCAN0.CFCC17.UINT8[LL/LH/HL/HH]
RSCAN0.CFSTS0.UINT32
RSCAN0.CFSTS0.UINT16[L]
RSCAN0.CFSTS0.UINT8[LL/LH]
RSCAN0.CFSTS1.UINT32
RSCAN0.CFSTS1.UINT16[L]
RSCAN0.CFSTS1.UINT8[LL/LH]
RSCAN0.CFSTS2.UINT32
RSCAN0.CFSTS2.UINT16[L]
RSCAN0.CFSTS2.UINT8[LL/LH]
RSCAN0.CFSTS3.UINT32
RSCAN0.CFSTS3.UINT16[L]
RSCAN0.CFSTS3.UINT8[LL/LH]
RSCAN0.CFSTS4.UINT32
RSCAN0.CFSTS4.UINT16[L]
RSCAN0.CFSTS4.UINT8[LL/LH]
RSCAN0.CFSTS5.UINT32
RSCAN0.CFSTS5.UINT16[L]
RSCAN0.CFSTS5.UINT8[LL/LH]
RSCAN0.CFSTS6.UINT32
RSCAN0.CFSTS6.UINT16[L]
RSCAN0.CFSTS6.UINT8[LL/LH]
RSCAN0.CFSTS7.UINT32
RSCAN0.CFSTS7.UINT16[L]
RSCAN0.CFSTS7.UINT8[LL/LH]
RSCAN0.CFSTS8.UINT32
RSCAN0.CFSTS8.UINT16[L]
RSCAN0.CFSTS8.UINT8[LL/LH]
RSCAN0.CFSTS9.UINT32
RSCAN0.CFSTS9.UINT16[L]
RSCAN0.CFSTS9.UINT8[LL/LH]
RSCAN0.CFSTS10.UINT32
RSCAN0.CFSTS10.UINT16[L]
RSCAN0.CFSTS10.UINT8[LL/LH]
RSCAN0.CFSTS11.UINT32
RSCAN0.CFSTS11.UINT16[L]
RSCAN0.CFSTS11.UINT8[LL/LH]
RSCAN0.CFSTS12.UINT32
RSCAN0.CFSTS12.UINT16[L]
RSCAN0.CFSTS12.UINT8[LL/LH]
RSCAN0.CFSTS13.UINT32
RSCAN0.CFSTS13.UINT16[L]
RSCAN0.CFSTS13.UINT8[LL/LH]
RSCAN0.CFSTS14.UINT32
RSCAN0.CFSTS14.UINT16[L]
RSCAN0.CFSTS14.UINT8[LL/LH]
RSCAN0.CFSTS15.UINT32
RSCAN0.CFSTS15.UINT16[L]
RSCAN0.CFSTS15.UINT8[LL/LH]
RSCAN0.CFSTS16.UINT32
RSCAN0.CFSTS16.UINT16[L]
RSCAN0.CFSTS16.UINT8[LL/LH]
RSCAN0.CFSTS17.UINT32
RSCAN0.CFSTS17.UINT16[L]
RSCAN0.CFSTS17.UINT8[LL/LH]
RSCAN0.CFPCTR0.UINT32
RSCAN0.CFPCTR0.UINT16[L]
RSCAN0.CFPCTR0.UINT8[LL]
RSCAN0.CFPCTR1.UINT32
RSCAN0.CFPCTR1.UINT16[L]
RSCAN0.CFPCTR1.UINT8[LL]
RSCAN0.CFPCTR2.UINT32
RSCAN0.CFPCTR2.UINT16[L]
RSCAN0.CFPCTR2.UINT8[LL]
RSCAN0.CFPCTR3.UINT32
RSCAN0.CFPCTR3.UINT16[L]
RSCAN0.CFPCTR3.UINT8[LL]
RSCAN0.CFPCTR4.UINT32
RSCAN0.CFPCTR4.UINT16[L]
RSCAN0.CFPCTR4.UINT8[LL]
RSCAN0.CFPCTR5.UINT32
RSCAN0.CFPCTR5.UINT16[L]
RSCAN0.CFPCTR5.UINT8[LL]
RSCAN0.CFPCTR6.UINT32
RSCAN0.CFPCTR6.UINT16[L]
RSCAN0.CFPCTR6.UINT8[LL]
RSCAN0.CFPCTR7.UINT32
RSCAN0.CFPCTR7.UINT16[L]
RSCAN0.CFPCTR7.UINT8[LL]
RSCAN0.CFPCTR8.UINT32
RSCAN0.CFPCTR8.UINT16[L]
RSCAN0.CFPCTR8.UINT8[LL]
RSCAN0.CFPCTR9.UINT32
RSCAN0.CFPCTR9.UINT16[L]
RSCAN0.CFPCTR9.UINT8[LL]
RSCAN0.CFPCTR10.UINT32
RSCAN0.CFPCTR10.UINT16[L]
RSCAN0.CFPCTR10.UINT8[LL]
RSCAN0.CFPCTR11.UINT32
RSCAN0.CFPCTR11.UINT16[L]
RSCAN0.CFPCTR11.UINT8[LL]
RSCAN0.CFPCTR12.UINT32
RSCAN0.CFPCTR12.UINT16[L]
RSCAN0.CFPCTR12.UINT8[LL]
RSCAN0.CFPCTR13.UINT32
RSCAN0.CFPCTR13.UINT16[L]
RSCAN0.CFPCTR13.UINT8[LL]
RSCAN0.CFPCTR14.UINT32
RSCAN0.CFPCTR14.UINT16[L]
RSCAN0.CFPCTR14.UINT8[LL]
RSCAN0.CFPCTR15.UINT32
RSCAN0.CFPCTR15.UINT16[L]
RSCAN0.CFPCTR15.UINT8[LL]
RSCAN0.CFPCTR16.UINT32
RSCAN0.CFPCTR16.UINT16[L]
RSCAN0.CFPCTR16.UINT8[LL]
RSCAN0.CFPCTR17.UINT32
RSCAN0.CFPCTR17.UINT16[L]
RSCAN0.CFPCTR17.UINT8[LL]
RSCAN0.FESTS.UINT32
RSCAN0.FESTS.UINT16[L/H]
RSCAN0.FESTS.UINT8[LL/LH/HL/HH]
RSCAN0.FFSTS.UINT32
RSCAN0.FFSTS.UINT16[L/H]
RSCAN0.FFSTS.UINT8[LL/LH/HL/HH]
RSCAN0.FMSTS.UINT32
RSCAN0.FMSTS.UINT16[L/H]
RSCAN0.FMSTS.UINT8[LL/LH/HL/HH]
RSCAN0.RFISTS.UINT32
RSCAN0.RFISTS.UINT16[L]
RSCAN0.RFISTS.UINT8[LL]
RSCAN0.CFRISTS.UINT32
RSCAN0.CFRISTS.UINT16[L/H]
RSCAN0.CFRISTS.UINT8[LL/LH/HL]
RSCAN0.CFTISTS.UINT32
RSCAN0.CFTISTS.UINT16[L/H]
RSCAN0.CFTISTS.UINT8[LL/LH/HL]
RSCAN0.TMC0 ... RSCAN0.TMC95
RSCAN0.TMSTS0 ... RSCAN0.TMSTS95
RSCAN0.TMTRSTS0.UINT32
RSCAN0.TMTRSTS0.UINT16[L/H]
RSCAN0.TMTRSTS0.UINT8[LL/LH/HL/HH]
RSCAN0.TMTRSTS1.UINT32
RSCAN0.TMTRSTS1.UINT16[L/H]
RSCAN0.TMTRSTS1.UINT8[LL/LH/HL/HH]
RSCAN0.TMTRSTS2.UINT32
RSCAN0.TMTRSTS2.UINT16[L/H]
RSCAN0.TMTRSTS2.UINT8[LL/LH/HL/HH]
RSCAN0.TMTARSTS0.UINT32
RSCAN0.TMTARSTS0.UINT16[L/H]
RSCAN0.TMTARSTS0.UINT8[LL/LH/HL/HH]
RSCAN0.TMTARSTS1.UINT32
RSCAN0.TMTARSTS1.UINT16[L/H]
RSCAN0.TMTARSTS1.UINT8[LL/LH/HL/HH]
RSCAN0.TMTARSTS2.UINT32
RSCAN0.TMTARSTS2.UINT16[L/H]
RSCAN0.TMTARSTS2.UINT8[LL/LH/HL/HH]
RSCAN0.TMTCSTS0.UINT32
RSCAN0.TMTCSTS0.UINT16[L/H]
RSCAN0.TMTCSTS0.UINT8[LL/LH/HL/HH]
RSCAN0.TMTCSTS1.UINT32
RSCAN0.TMTCSTS1.UINT16[L/H]
RSCAN0.TMTCSTS1.UINT8[LL/LH/HL/HH]
RSCAN0.TMTCSTS2.UINT32
RSCAN0.TMTCSTS2.UINT16[L/H]
RSCAN0.TMTCSTS2.UINT8[LL/LH/HL/HH]
RSCAN0.TMTASTS0.UINT32
RSCAN0.TMTASTS0.UINT16[L/H]
RSCAN0.TMTASTS0.UINT8[LL/LH/HL/HH]
RSCAN0.TMTASTS1.UINT32
RSCAN0.TMTASTS1.UINT16[L/H]
RSCAN0.TMTASTS1.UINT8[LL/LH/HL/HH]
RSCAN0.TMTASTS2.UINT32
RSCAN0.TMTASTS2.UINT16[L/H]
RSCAN0.TMTASTS2.UINT8[LL/LH/HL/HH]
RSCAN0.TMIEC0.UINT32
RSCAN0.TMIEC0.UINT16[L/H]
RSCAN0.TMIEC0.UINT8[LL/LH/HL/HH]
RSCAN0.TMIEC1.UINT32
RSCAN0.TMIEC1.UINT16[L/H]
RSCAN0.TMIEC1.UINT8[LL/LH/HL/HH]
RSCAN0.TMIEC2.UINT32
RSCAN0.TMIEC2.UINT16[L/H]
RSCAN0.TMIEC2.UINT8[LL/LH/HL/HH]
RSCAN0.TXQCC0.UINT32
RSCAN0.TXQCC0.UINT16[L]
RSCAN0.TXQCC0.UINT8[LL/LH]
RSCAN0.TXQCC1.UINT32
RSCAN0.TXQCC1.UINT16[L]
RSCAN0.TXQCC1.UINT8[LL/LH]
RSCAN0.TXQCC2.UINT32
RSCAN0.TXQCC2.UINT16[L]
RSCAN0.TXQCC2.UINT8[LL/LH]
RSCAN0.TXQCC3.UINT32
RSCAN0.TXQCC3.UINT16[L]
RSCAN0.TXQCC3.UINT8[LL/LH]
RSCAN0.TXQCC4.UINT32
RSCAN0.TXQCC4.UINT16[L]
RSCAN0.TXQCC4.UINT8[LL/LH]
RSCAN0.TXQCC5.UINT32
RSCAN0.TXQCC5.UINT16[L]
RSCAN0.TXQCC5.UINT8[LL/LH]
RSCAN0.TXQSTS0.UINT32
RSCAN0.TXQSTS0.UINT16[L]
RSCAN0.TXQSTS0.UINT8[LL]
RSCAN0.TXQSTS1.UINT32
RSCAN0.TXQSTS1.UINT16[L]
RSCAN0.TXQSTS1.UINT8[LL]
RSCAN0.TXQSTS2.UINT32
RSCAN0.TXQSTS2.UINT16[L]
RSCAN0.TXQSTS2.UINT8[LL]
RSCAN0.TXQSTS3.UINT32
RSCAN0.TXQSTS3.UINT16[L]
RSCAN0.TXQSTS3.UINT8[LL]
RSCAN0.TXQSTS4.UINT32
RSCAN0.TXQSTS4.UINT16[L]
RSCAN0.TXQSTS4.UINT8[LL]
RSCAN0.TXQSTS5.UINT32
RSCAN0.TXQSTS5.UINT16[L]
RSCAN0.TXQSTS5.UINT8[LL]
RSCAN0.TXQPCTR0.UINT32
RSCAN0.TXQPCTR0.UINT16[L]
RSCAN0.TXQPCTR0.UINT8[LL]
RSCAN0.TXQPCTR1.UINT32
RSCAN0.TXQPCTR1.UINT16[L]
RSCAN0.TXQPCTR1.UINT8[LL]
RSCAN0.TXQPCTR2.UINT32
RSCAN0.TXQPCTR2.UINT16[L]
RSCAN0.TXQPCTR2.UINT8[LL]
RSCAN0.TXQPCTR3.UINT32
RSCAN0.TXQPCTR3.UINT16[L]
RSCAN0.TXQPCTR3.UINT8[LL]
RSCAN0.TXQPCTR4.UINT32
RSCAN0.TXQPCTR4.UINT16[L]
RSCAN0.TXQPCTR4.UINT8[LL]
RSCAN0.TXQPCTR5.UINT32
RSCAN0.TXQPCTR5.UINT16[L]
RSCAN0.TXQPCTR5.UINT8[LL]
RSCAN0.THLCC0.UINT32
RSCAN0.THLCC0.UINT16[L]
RSCAN0.THLCC0.UINT8[LL/LH]
RSCAN0.THLCC1.UINT32
RSCAN0.THLCC1.UINT16[L]
RSCAN0.THLCC1.UINT8[LL/LH]
RSCAN0.THLCC2.UINT32
RSCAN0.THLCC2.UINT16[L]
RSCAN0.THLCC2.UINT8[LL/LH]
RSCAN0.THLCC3.UINT32
RSCAN0.THLCC3.UINT16[L]
RSCAN0.THLCC3.UINT8[LL/LH]
RSCAN0.THLCC4.UINT32
RSCAN0.THLCC4.UINT16[L]
RSCAN0.THLCC4.UINT8[LL/LH]
RSCAN0.THLCC5.UINT32
RSCAN0.THLCC5.UINT16[L]
RSCAN0.THLCC5.UINT8[LL/LH]
RSCAN0.THLSTS0.UINT32
RSCAN0.THLSTS0.UINT16[L]
RSCAN0.THLSTS0.UINT8[LL/LH]
RSCAN0.THLSTS1.UINT32
RSCAN0.THLSTS1.UINT16[L]
RSCAN0.THLSTS1.UINT8[LL/LH]
RSCAN0.THLSTS2.UINT32
RSCAN0.THLSTS2.UINT16[L]
RSCAN0.THLSTS2.UINT8[LL/LH]
RSCAN0.THLSTS3.UINT32
RSCAN0.THLSTS3.UINT16[L]
RSCAN0.THLSTS3.UINT8[LL/LH]
RSCAN0.THLSTS4.UINT32
RSCAN0.THLSTS4.UINT16[L]
RSCAN0.THLSTS4.UINT8[LL/LH]
RSCAN0.THLSTS5.UINT32
RSCAN0.THLSTS5.UINT16[L]
RSCAN0.THLSTS5.UINT8[LL/LH]
RSCAN0.THLPCTR0.UINT32
RSCAN0.THLPCTR0.UINT16[L]
RSCAN0.THLPCTR0.UINT8[LL]
RSCAN0.THLPCTR1.UINT32
RSCAN0.THLPCTR1.UINT16[L]
RSCAN0.THLPCTR1.UINT8[LL]
RSCAN0.THLPCTR2.UINT32
RSCAN0.THLPCTR2.UINT16[L]
RSCAN0.THLPCTR2.UINT8[LL]
RSCAN0.THLPCTR3.UINT32
RSCAN0.THLPCTR3.UINT16[L]
RSCAN0.THLPCTR3.UINT8[LL]
RSCAN0.THLPCTR4.UINT32
RSCAN0.THLPCTR4.UINT16[L]
RSCAN0.THLPCTR4.UINT8[LL]
RSCAN0.THLPCTR5.UINT32
RSCAN0.THLPCTR5.UINT16[L]
RSCAN0.THLPCTR5.UINT8[LL]
RSCAN0.GTINTSTS0.UINT32
RSCAN0.GTINTSTS0.UINT16[L/H]
RSCAN0.GTINTSTS0.UINT8[LL/LH/HL/HH]
RSCAN0.GTINTSTS1.UINT32
RSCAN0.GTINTSTS1.UINT16[L]
RSCAN0.GTINTSTS1.UINT8[LL/LH]
RSCAN0.GTSTCFG.UINT32
RSCAN0.GTSTCFG.UINT16[L/H]
RSCAN0.GTSTCFG.UINT8[LL/HL]
RSCAN0.GTSTCTR.UINT32
RSCAN0.GTSTCTR.UINT16[L]
RSCAN0.GTSTCTR.UINT8[LL]
RSCAN0.GFDCFG.UINT32
RSCAN0.GFDCFG.UINT16[L]
RSCAN0.GFDCFG.UINT8[LH]
RSCAN0.GLOCKK.UINT32
RSCAN0.GLOCKK.UINT16[L]
RSCAN0.GAFLID0.UINT32
RSCAN0.GAFLID0.UINT16[L/H]
RSCAN0.GAFLID0.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM0.UINT32
RSCAN0.GAFLM0.UINT16[L/H]
RSCAN0.GAFLM0.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP00.UINT32
RSCAN0.GAFLP00.UINT16[L/H]
RSCAN0.GAFLP00.UINT8[LH/HL/HH]
RSCAN0.GAFLP10.UINT32
RSCAN0.GAFLP10.UINT16[L/H]
RSCAN0.GAFLP10.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID1.UINT32
RSCAN0.GAFLID1.UINT16[L/H]
RSCAN0.GAFLID1.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM1.UINT32
RSCAN0.GAFLM1.UINT16[L/H]
RSCAN0.GAFLM1.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP01.UINT32
RSCAN0.GAFLP01.UINT16[L/H]
RSCAN0.GAFLP01.UINT8[LH/HL/HH]
RSCAN0.GAFLP11.UINT32
RSCAN0.GAFLP11.UINT16[L/H]
RSCAN0.GAFLP11.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID2.UINT32
RSCAN0.GAFLID2.UINT16[L/H]
RSCAN0.GAFLID2.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM2.UINT32
RSCAN0.GAFLM2.UINT16[L/H]
RSCAN0.GAFLM2.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP02.UINT32
RSCAN0.GAFLP02.UINT16[L/H]
RSCAN0.GAFLP02.UINT8[LH/HL/HH]
RSCAN0.GAFLP12.UINT32
RSCAN0.GAFLP12.UINT16[L/H]
RSCAN0.GAFLP12.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID3.UINT32
RSCAN0.GAFLID3.UINT16[L/H]
RSCAN0.GAFLID3.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM3.UINT32
RSCAN0.GAFLM3.UINT16[L/H]
RSCAN0.GAFLM3.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP03.UINT32
RSCAN0.GAFLP03.UINT16[L/H]
RSCAN0.GAFLP03.UINT8[LH/HL/HH]
RSCAN0.GAFLP13.UINT32
RSCAN0.GAFLP13.UINT16[L/H]
RSCAN0.GAFLP13.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID4.UINT32
RSCAN0.GAFLID4.UINT16[L/H]
RSCAN0.GAFLID4.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM4.UINT32
RSCAN0.GAFLM4.UINT16[L/H]
RSCAN0.GAFLM4.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP04.UINT32
RSCAN0.GAFLP04.UINT16[L/H]
RSCAN0.GAFLP04.UINT8[LH/HL/HH]
RSCAN0.GAFLP14.UINT32
RSCAN0.GAFLP14.UINT16[L/H]
RSCAN0.GAFLP14.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID5.UINT32
RSCAN0.GAFLID5.UINT16[L/H]
RSCAN0.GAFLID5.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM5.UINT32
RSCAN0.GAFLM5.UINT16[L/H]
RSCAN0.GAFLM5.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP05.UINT32
RSCAN0.GAFLP05.UINT16[L/H]
RSCAN0.GAFLP05.UINT8[LH/HL/HH]
RSCAN0.GAFLP15.UINT32
RSCAN0.GAFLP15.UINT16[L/H]
RSCAN0.GAFLP15.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID6.UINT32
RSCAN0.GAFLID6.UINT16[L/H]
RSCAN0.GAFLID6.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM6.UINT32
RSCAN0.GAFLM6.UINT16[L/H]
RSCAN0.GAFLM6.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP06.UINT32
RSCAN0.GAFLP06.UINT16[L/H]
RSCAN0.GAFLP06.UINT8[LH/HL/HH]
RSCAN0.GAFLP16.UINT32
RSCAN0.GAFLP16.UINT16[L/H]
RSCAN0.GAFLP16.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID7.UINT32
RSCAN0.GAFLID7.UINT16[L/H]
RSCAN0.GAFLID7.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM7.UINT32
RSCAN0.GAFLM7.UINT16[L/H]
RSCAN0.GAFLM7.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP07.UINT32
RSCAN0.GAFLP07.UINT16[L/H]
RSCAN0.GAFLP07.UINT8[LH/HL/HH]
RSCAN0.GAFLP17.UINT32
RSCAN0.GAFLP17.UINT16[L/H]
RSCAN0.GAFLP17.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID8.UINT32
RSCAN0.GAFLID8.UINT16[L/H]
RSCAN0.GAFLID8.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM8.UINT32
RSCAN0.GAFLM8.UINT16[L/H]
RSCAN0.GAFLM8.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP08.UINT32
RSCAN0.GAFLP08.UINT16[L/H]
RSCAN0.GAFLP08.UINT8[LH/HL/HH]
RSCAN0.GAFLP18.UINT32
RSCAN0.GAFLP18.UINT16[L/H]
RSCAN0.GAFLP18.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID9.UINT32
RSCAN0.GAFLID9.UINT16[L/H]
RSCAN0.GAFLID9.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM9.UINT32
RSCAN0.GAFLM9.UINT16[L/H]
RSCAN0.GAFLM9.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP09.UINT32
RSCAN0.GAFLP09.UINT16[L/H]
RSCAN0.GAFLP09.UINT8[LH/HL/HH]
RSCAN0.GAFLP19.UINT32
RSCAN0.GAFLP19.UINT16[L/H]
RSCAN0.GAFLP19.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID10.UINT32
RSCAN0.GAFLID10.UINT16[L/H]
RSCAN0.GAFLID10.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM10.UINT32
RSCAN0.GAFLM10.UINT16[L/H]
RSCAN0.GAFLM10.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP010.UINT32
RSCAN0.GAFLP010.UINT16[L/H]
RSCAN0.GAFLP010.UINT8[LH/HL/HH]
RSCAN0.GAFLP110.UINT32
RSCAN0.GAFLP110.UINT16[L/H]
RSCAN0.GAFLP110.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID11.UINT32
RSCAN0.GAFLID11.UINT16[L/H]
RSCAN0.GAFLID11.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM11.UINT32
RSCAN0.GAFLM11.UINT16[L/H]
RSCAN0.GAFLM11.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP011.UINT32
RSCAN0.GAFLP011.UINT16[L/H]
RSCAN0.GAFLP011.UINT8[LH/HL/HH]
RSCAN0.GAFLP111.UINT32
RSCAN0.GAFLP111.UINT16[L/H]
RSCAN0.GAFLP111.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID12.UINT32
RSCAN0.GAFLID12.UINT16[L/H]
RSCAN0.GAFLID12.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM12.UINT32
RSCAN0.GAFLM12.UINT16[L/H]
RSCAN0.GAFLM12.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP012.UINT32
RSCAN0.GAFLP012.UINT16[L/H]
RSCAN0.GAFLP012.UINT8[LH/HL/HH]
RSCAN0.GAFLP112.UINT32
RSCAN0.GAFLP112.UINT16[L/H]
RSCAN0.GAFLP112.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID13.UINT32
RSCAN0.GAFLID13.UINT16[L/H]
RSCAN0.GAFLID13.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM13.UINT32
RSCAN0.GAFLM13.UINT16[L/H]
RSCAN0.GAFLM13.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP013.UINT32
RSCAN0.GAFLP013.UINT16[L/H]
RSCAN0.GAFLP013.UINT8[LH/HL/HH]
RSCAN0.GAFLP113.UINT32
RSCAN0.GAFLP113.UINT16[L/H]
RSCAN0.GAFLP113.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID14.UINT32
RSCAN0.GAFLID14.UINT16[L/H]
RSCAN0.GAFLID14.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM14.UINT32
RSCAN0.GAFLM14.UINT16[L/H]
RSCAN0.GAFLM14.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP014.UINT32
RSCAN0.GAFLP014.UINT16[L/H]
RSCAN0.GAFLP014.UINT8[LH/HL/HH]
RSCAN0.GAFLP114.UINT32
RSCAN0.GAFLP114.UINT16[L/H]
RSCAN0.GAFLP114.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLID15.UINT32
RSCAN0.GAFLID15.UINT16[L/H]
RSCAN0.GAFLID15.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLM15.UINT32
RSCAN0.GAFLM15.UINT16[L/H]
RSCAN0.GAFLM15.UINT8[LL/LH/HL/HH]
RSCAN0.GAFLP015.UINT32
RSCAN0.GAFLP015.UINT16[L/H]
RSCAN0.GAFLP015.UINT8[LH/HL/HH]
RSCAN0.GAFLP115.UINT32
RSCAN0.GAFLP115.UINT16[L/H]
RSCAN0.GAFLP115.UINT8[LL/LH/HL/HH]
RSCAN0.RMID0.UINT32
RSCAN0.RMID0.UINT16[L/H]
RSCAN0.RMID0.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR0.UINT32
RSCAN0.RMPTR0.UINT16[L/H]
RSCAN0.RMPTR0.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF00.UINT32
RSCAN0.RMDF00.UINT16[L/H]
RSCAN0.RMDF00.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF10.UINT32
RSCAN0.RMDF10.UINT16[L/H]
RSCAN0.RMDF10.UINT8[LL/LH/HL/HH]
RSCAN0.RMID1.UINT32
RSCAN0.RMID1.UINT16[L/H]
RSCAN0.RMID1.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR1.UINT32
RSCAN0.RMPTR1.UINT16[L/H]
RSCAN0.RMPTR1.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF01.UINT32
RSCAN0.RMDF01.UINT16[L/H]
RSCAN0.RMDF01.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF11.UINT32
RSCAN0.RMDF11.UINT16[L/H]
RSCAN0.RMDF11.UINT8[LL/LH/HL/HH]
RSCAN0.RMID2.UINT32
RSCAN0.RMID2.UINT16[L/H]
RSCAN0.RMID2.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR2.UINT32
RSCAN0.RMPTR2.UINT16[L/H]
RSCAN0.RMPTR2.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF02.UINT32
RSCAN0.RMDF02.UINT16[L/H]
RSCAN0.RMDF02.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF12.UINT32
RSCAN0.RMDF12.UINT16[L/H]
RSCAN0.RMDF12.UINT8[LL/LH/HL/HH]
RSCAN0.RMID3.UINT32
RSCAN0.RMID3.UINT16[L/H]
RSCAN0.RMID3.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR3.UINT32
RSCAN0.RMPTR3.UINT16[L/H]
RSCAN0.RMPTR3.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF03.UINT32
RSCAN0.RMDF03.UINT16[L/H]
RSCAN0.RMDF03.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF13.UINT32
RSCAN0.RMDF13.UINT16[L/H]
RSCAN0.RMDF13.UINT8[LL/LH/HL/HH]
RSCAN0.RMID4.UINT32
RSCAN0.RMID4.UINT16[L/H]
RSCAN0.RMID4.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR4.UINT32
RSCAN0.RMPTR4.UINT16[L/H]
RSCAN0.RMPTR4.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF04.UINT32
RSCAN0.RMDF04.UINT16[L/H]
RSCAN0.RMDF04.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF14.UINT32
RSCAN0.RMDF14.UINT16[L/H]
RSCAN0.RMDF14.UINT8[LL/LH/HL/HH]
RSCAN0.RMID5.UINT32
RSCAN0.RMID5.UINT16[L/H]
RSCAN0.RMID5.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR5.UINT32
RSCAN0.RMPTR5.UINT16[L/H]
RSCAN0.RMPTR5.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF05.UINT32
RSCAN0.RMDF05.UINT16[L/H]
RSCAN0.RMDF05.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF15.UINT32
RSCAN0.RMDF15.UINT16[L/H]
RSCAN0.RMDF15.UINT8[LL/LH/HL/HH]
RSCAN0.RMID6.UINT32
RSCAN0.RMID6.UINT16[L/H]
RSCAN0.RMID6.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR6.UINT32
RSCAN0.RMPTR6.UINT16[L/H]
RSCAN0.RMPTR6.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF06.UINT32
RSCAN0.RMDF06.UINT16[L/H]
RSCAN0.RMDF06.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF16.UINT32
RSCAN0.RMDF16.UINT16[L/H]
RSCAN0.RMDF16.UINT8[LL/LH/HL/HH]
RSCAN0.RMID7.UINT32
RSCAN0.RMID7.UINT16[L/H]
RSCAN0.RMID7.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR7.UINT32
RSCAN0.RMPTR7.UINT16[L/H]
RSCAN0.RMPTR7.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF07.UINT32
RSCAN0.RMDF07.UINT16[L/H]
RSCAN0.RMDF07.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF17.UINT32
RSCAN0.RMDF17.UINT16[L/H]
RSCAN0.RMDF17.UINT8[LL/LH/HL/HH]
RSCAN0.RMID8.UINT32
RSCAN0.RMID8.UINT16[L/H]
RSCAN0.RMID8.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR8.UINT32
RSCAN0.RMPTR8.UINT16[L/H]
RSCAN0.RMPTR8.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF08.UINT32
RSCAN0.RMDF08.UINT16[L/H]
RSCAN0.RMDF08.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF18.UINT32
RSCAN0.RMDF18.UINT16[L/H]
RSCAN0.RMDF18.UINT8[LL/LH/HL/HH]
RSCAN0.RMID9.UINT32
RSCAN0.RMID9.UINT16[L/H]
RSCAN0.RMID9.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR9.UINT32
RSCAN0.RMPTR9.UINT16[L/H]
RSCAN0.RMPTR9.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF09.UINT32
RSCAN0.RMDF09.UINT16[L/H]
RSCAN0.RMDF09.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF19.UINT32
RSCAN0.RMDF19.UINT16[L/H]
RSCAN0.RMDF19.UINT8[LL/LH/HL/HH]
RSCAN0.RMID10.UINT32
RSCAN0.RMID10.UINT16[L/H]
RSCAN0.RMID10.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR10.UINT32
RSCAN0.RMPTR10.UINT16[L/H]
RSCAN0.RMPTR10.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF010.UINT32
RSCAN0.RMDF010.UINT16[L/H]
RSCAN0.RMDF010.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF110.UINT32
RSCAN0.RMDF110.UINT16[L/H]
RSCAN0.RMDF110.UINT8[LL/LH/HL/HH]
RSCAN0.RMID11.UINT32
RSCAN0.RMID11.UINT16[L/H]
RSCAN0.RMID11.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR11.UINT32
RSCAN0.RMPTR11.UINT16[L/H]
RSCAN0.RMPTR11.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF011.UINT32
RSCAN0.RMDF011.UINT16[L/H]
RSCAN0.RMDF011.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF111.UINT32
RSCAN0.RMDF111.UINT16[L/H]
RSCAN0.RMDF111.UINT8[LL/LH/HL/HH]
RSCAN0.RMID12.UINT32
RSCAN0.RMID12.UINT16[L/H]
RSCAN0.RMID12.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR12.UINT32
RSCAN0.RMPTR12.UINT16[L/H]
RSCAN0.RMPTR12.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF012.UINT32
RSCAN0.RMDF012.UINT16[L/H]
RSCAN0.RMDF012.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF112.UINT32
RSCAN0.RMDF112.UINT16[L/H]
RSCAN0.RMDF112.UINT8[LL/LH/HL/HH]
RSCAN0.RMID13.UINT32
RSCAN0.RMID13.UINT16[L/H]
RSCAN0.RMID13.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR13.UINT32
RSCAN0.RMPTR13.UINT16[L/H]
RSCAN0.RMPTR13.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF013.UINT32
RSCAN0.RMDF013.UINT16[L/H]
RSCAN0.RMDF013.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF113.UINT32
RSCAN0.RMDF113.UINT16[L/H]
RSCAN0.RMDF113.UINT8[LL/LH/HL/HH]
RSCAN0.RMID14.UINT32
RSCAN0.RMID14.UINT16[L/H]
RSCAN0.RMID14.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR14.UINT32
RSCAN0.RMPTR14.UINT16[L/H]
RSCAN0.RMPTR14.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF014.UINT32
RSCAN0.RMDF014.UINT16[L/H]
RSCAN0.RMDF014.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF114.UINT32
RSCAN0.RMDF114.UINT16[L/H]
RSCAN0.RMDF114.UINT8[LL/LH/HL/HH]
RSCAN0.RMID15.UINT32
RSCAN0.RMID15.UINT16[L/H]
RSCAN0.RMID15.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR15.UINT32
RSCAN0.RMPTR15.UINT16[L/H]
RSCAN0.RMPTR15.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF015.UINT32
RSCAN0.RMDF015.UINT16[L/H]
RSCAN0.RMDF015.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF115.UINT32
RSCAN0.RMDF115.UINT16[L/H]
RSCAN0.RMDF115.UINT8[LL/LH/HL/HH]
RSCAN0.RMID16.UINT32
RSCAN0.RMID16.UINT16[L/H]
RSCAN0.RMID16.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR16.UINT32
RSCAN0.RMPTR16.UINT16[L/H]
RSCAN0.RMPTR16.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF016.UINT32
RSCAN0.RMDF016.UINT16[L/H]
RSCAN0.RMDF016.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF116.UINT32
RSCAN0.RMDF116.UINT16[L/H]
RSCAN0.RMDF116.UINT8[LL/LH/HL/HH]
RSCAN0.RMID17.UINT32
RSCAN0.RMID17.UINT16[L/H]
RSCAN0.RMID17.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR17.UINT32
RSCAN0.RMPTR17.UINT16[L/H]
RSCAN0.RMPTR17.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF017.UINT32
RSCAN0.RMDF017.UINT16[L/H]
RSCAN0.RMDF017.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF117.UINT32
RSCAN0.RMDF117.UINT16[L/H]
RSCAN0.RMDF117.UINT8[LL/LH/HL/HH]
RSCAN0.RMID18.UINT32
RSCAN0.RMID18.UINT16[L/H]
RSCAN0.RMID18.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR18.UINT32
RSCAN0.RMPTR18.UINT16[L/H]
RSCAN0.RMPTR18.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF018.UINT32
RSCAN0.RMDF018.UINT16[L/H]
RSCAN0.RMDF018.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF118.UINT32
RSCAN0.RMDF118.UINT16[L/H]
RSCAN0.RMDF118.UINT8[LL/LH/HL/HH]
RSCAN0.RMID19.UINT32
RSCAN0.RMID19.UINT16[L/H]
RSCAN0.RMID19.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR19.UINT32
RSCAN0.RMPTR19.UINT16[L/H]
RSCAN0.RMPTR19.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF019.UINT32
RSCAN0.RMDF019.UINT16[L/H]
RSCAN0.RMDF019.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF119.UINT32
RSCAN0.RMDF119.UINT16[L/H]
RSCAN0.RMDF119.UINT8[LL/LH/HL/HH]
RSCAN0.RMID20.UINT32
RSCAN0.RMID20.UINT16[L/H]
RSCAN0.RMID20.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR20.UINT32
RSCAN0.RMPTR20.UINT16[L/H]
RSCAN0.RMPTR20.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF020.UINT32
RSCAN0.RMDF020.UINT16[L/H]
RSCAN0.RMDF020.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF120.UINT32
RSCAN0.RMDF120.UINT16[L/H]
RSCAN0.RMDF120.UINT8[LL/LH/HL/HH]
RSCAN0.RMID21.UINT32
RSCAN0.RMID21.UINT16[L/H]
RSCAN0.RMID21.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR21.UINT32
RSCAN0.RMPTR21.UINT16[L/H]
RSCAN0.RMPTR21.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF021.UINT32
RSCAN0.RMDF021.UINT16[L/H]
RSCAN0.RMDF021.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF121.UINT32
RSCAN0.RMDF121.UINT16[L/H]
RSCAN0.RMDF121.UINT8[LL/LH/HL/HH]
RSCAN0.RMID22.UINT32
RSCAN0.RMID22.UINT16[L/H]
RSCAN0.RMID22.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR22.UINT32
RSCAN0.RMPTR22.UINT16[L/H]
RSCAN0.RMPTR22.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF022.UINT32
RSCAN0.RMDF022.UINT16[L/H]
RSCAN0.RMDF022.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF122.UINT32
RSCAN0.RMDF122.UINT16[L/H]
RSCAN0.RMDF122.UINT8[LL/LH/HL/HH]
RSCAN0.RMID23.UINT32
RSCAN0.RMID23.UINT16[L/H]
RSCAN0.RMID23.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR23.UINT32
RSCAN0.RMPTR23.UINT16[L/H]
RSCAN0.RMPTR23.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF023.UINT32
RSCAN0.RMDF023.UINT16[L/H]
RSCAN0.RMDF023.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF123.UINT32
RSCAN0.RMDF123.UINT16[L/H]
RSCAN0.RMDF123.UINT8[LL/LH/HL/HH]
RSCAN0.RMID24.UINT32
RSCAN0.RMID24.UINT16[L/H]
RSCAN0.RMID24.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR24.UINT32
RSCAN0.RMPTR24.UINT16[L/H]
RSCAN0.RMPTR24.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF024.UINT32
RSCAN0.RMDF024.UINT16[L/H]
RSCAN0.RMDF024.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF124.UINT32
RSCAN0.RMDF124.UINT16[L/H]
RSCAN0.RMDF124.UINT8[LL/LH/HL/HH]
RSCAN0.RMID25.UINT32
RSCAN0.RMID25.UINT16[L/H]
RSCAN0.RMID25.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR25.UINT32
RSCAN0.RMPTR25.UINT16[L/H]
RSCAN0.RMPTR25.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF025.UINT32
RSCAN0.RMDF025.UINT16[L/H]
RSCAN0.RMDF025.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF125.UINT32
RSCAN0.RMDF125.UINT16[L/H]
RSCAN0.RMDF125.UINT8[LL/LH/HL/HH]
RSCAN0.RMID26.UINT32
RSCAN0.RMID26.UINT16[L/H]
RSCAN0.RMID26.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR26.UINT32
RSCAN0.RMPTR26.UINT16[L/H]
RSCAN0.RMPTR26.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF026.UINT32
RSCAN0.RMDF026.UINT16[L/H]
RSCAN0.RMDF026.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF126.UINT32
RSCAN0.RMDF126.UINT16[L/H]
RSCAN0.RMDF126.UINT8[LL/LH/HL/HH]
RSCAN0.RMID27.UINT32
RSCAN0.RMID27.UINT16[L/H]
RSCAN0.RMID27.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR27.UINT32
RSCAN0.RMPTR27.UINT16[L/H]
RSCAN0.RMPTR27.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF027.UINT32
RSCAN0.RMDF027.UINT16[L/H]
RSCAN0.RMDF027.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF127.UINT32
RSCAN0.RMDF127.UINT16[L/H]
RSCAN0.RMDF127.UINT8[LL/LH/HL/HH]
RSCAN0.RMID28.UINT32
RSCAN0.RMID28.UINT16[L/H]
RSCAN0.RMID28.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR28.UINT32
RSCAN0.RMPTR28.UINT16[L/H]
RSCAN0.RMPTR28.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF028.UINT32
RSCAN0.RMDF028.UINT16[L/H]
RSCAN0.RMDF028.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF128.UINT32
RSCAN0.RMDF128.UINT16[L/H]
RSCAN0.RMDF128.UINT8[LL/LH/HL/HH]
RSCAN0.RMID29.UINT32
RSCAN0.RMID29.UINT16[L/H]
RSCAN0.RMID29.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR29.UINT32
RSCAN0.RMPTR29.UINT16[L/H]
RSCAN0.RMPTR29.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF029.UINT32
RSCAN0.RMDF029.UINT16[L/H]
RSCAN0.RMDF029.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF129.UINT32
RSCAN0.RMDF129.UINT16[L/H]
RSCAN0.RMDF129.UINT8[LL/LH/HL/HH]
RSCAN0.RMID30.UINT32
RSCAN0.RMID30.UINT16[L/H]
RSCAN0.RMID30.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR30.UINT32
RSCAN0.RMPTR30.UINT16[L/H]
RSCAN0.RMPTR30.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF030.UINT32
RSCAN0.RMDF030.UINT16[L/H]
RSCAN0.RMDF030.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF130.UINT32
RSCAN0.RMDF130.UINT16[L/H]
RSCAN0.RMDF130.UINT8[LL/LH/HL/HH]
RSCAN0.RMID31.UINT32
RSCAN0.RMID31.UINT16[L/H]
RSCAN0.RMID31.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR31.UINT32
RSCAN0.RMPTR31.UINT16[L/H]
RSCAN0.RMPTR31.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF031.UINT32
RSCAN0.RMDF031.UINT16[L/H]
RSCAN0.RMDF031.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF131.UINT32
RSCAN0.RMDF131.UINT16[L/H]
RSCAN0.RMDF131.UINT8[LL/LH/HL/HH]
RSCAN0.RMID32.UINT32
RSCAN0.RMID32.UINT16[L/H]
RSCAN0.RMID32.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR32.UINT32
RSCAN0.RMPTR32.UINT16[L/H]
RSCAN0.RMPTR32.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF032.UINT32
RSCAN0.RMDF032.UINT16[L/H]
RSCAN0.RMDF032.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF132.UINT32
RSCAN0.RMDF132.UINT16[L/H]
RSCAN0.RMDF132.UINT8[LL/LH/HL/HH]
RSCAN0.RMID33.UINT32
RSCAN0.RMID33.UINT16[L/H]
RSCAN0.RMID33.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR33.UINT32
RSCAN0.RMPTR33.UINT16[L/H]
RSCAN0.RMPTR33.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF033.UINT32
RSCAN0.RMDF033.UINT16[L/H]
RSCAN0.RMDF033.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF133.UINT32
RSCAN0.RMDF133.UINT16[L/H]
RSCAN0.RMDF133.UINT8[LL/LH/HL/HH]
RSCAN0.RMID34.UINT32
RSCAN0.RMID34.UINT16[L/H]
RSCAN0.RMID34.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR34.UINT32
RSCAN0.RMPTR34.UINT16[L/H]
RSCAN0.RMPTR34.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF034.UINT32
RSCAN0.RMDF034.UINT16[L/H]
RSCAN0.RMDF034.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF134.UINT32
RSCAN0.RMDF134.UINT16[L/H]
RSCAN0.RMDF134.UINT8[LL/LH/HL/HH]
RSCAN0.RMID35.UINT32
RSCAN0.RMID35.UINT16[L/H]
RSCAN0.RMID35.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR35.UINT32
RSCAN0.RMPTR35.UINT16[L/H]
RSCAN0.RMPTR35.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF035.UINT32
RSCAN0.RMDF035.UINT16[L/H]
RSCAN0.RMDF035.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF135.UINT32
RSCAN0.RMDF135.UINT16[L/H]
RSCAN0.RMDF135.UINT8[LL/LH/HL/HH]
RSCAN0.RMID36.UINT32
RSCAN0.RMID36.UINT16[L/H]
RSCAN0.RMID36.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR36.UINT32
RSCAN0.RMPTR36.UINT16[L/H]
RSCAN0.RMPTR36.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF036.UINT32
RSCAN0.RMDF036.UINT16[L/H]
RSCAN0.RMDF036.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF136.UINT32
RSCAN0.RMDF136.UINT16[L/H]
RSCAN0.RMDF136.UINT8[LL/LH/HL/HH]
RSCAN0.RMID37.UINT32
RSCAN0.RMID37.UINT16[L/H]
RSCAN0.RMID37.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR37.UINT32
RSCAN0.RMPTR37.UINT16[L/H]
RSCAN0.RMPTR37.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF037.UINT32
RSCAN0.RMDF037.UINT16[L/H]
RSCAN0.RMDF037.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF137.UINT32
RSCAN0.RMDF137.UINT16[L/H]
RSCAN0.RMDF137.UINT8[LL/LH/HL/HH]
RSCAN0.RMID38.UINT32
RSCAN0.RMID38.UINT16[L/H]
RSCAN0.RMID38.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR38.UINT32
RSCAN0.RMPTR38.UINT16[L/H]
RSCAN0.RMPTR38.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF038.UINT32
RSCAN0.RMDF038.UINT16[L/H]
RSCAN0.RMDF038.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF138.UINT32
RSCAN0.RMDF138.UINT16[L/H]
RSCAN0.RMDF138.UINT8[LL/LH/HL/HH]
RSCAN0.RMID39.UINT32
RSCAN0.RMID39.UINT16[L/H]
RSCAN0.RMID39.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR39.UINT32
RSCAN0.RMPTR39.UINT16[L/H]
RSCAN0.RMPTR39.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF039.UINT32
RSCAN0.RMDF039.UINT16[L/H]
RSCAN0.RMDF039.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF139.UINT32
RSCAN0.RMDF139.UINT16[L/H]
RSCAN0.RMDF139.UINT8[LL/LH/HL/HH]
RSCAN0.RMID40.UINT32
RSCAN0.RMID40.UINT16[L/H]
RSCAN0.RMID40.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR40.UINT32
RSCAN0.RMPTR40.UINT16[L/H]
RSCAN0.RMPTR40.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF040.UINT32
RSCAN0.RMDF040.UINT16[L/H]
RSCAN0.RMDF040.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF140.UINT32
RSCAN0.RMDF140.UINT16[L/H]
RSCAN0.RMDF140.UINT8[LL/LH/HL/HH]
RSCAN0.RMID41.UINT32
RSCAN0.RMID41.UINT16[L/H]
RSCAN0.RMID41.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR41.UINT32
RSCAN0.RMPTR41.UINT16[L/H]
RSCAN0.RMPTR41.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF041.UINT32
RSCAN0.RMDF041.UINT16[L/H]
RSCAN0.RMDF041.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF141.UINT32
RSCAN0.RMDF141.UINT16[L/H]
RSCAN0.RMDF141.UINT8[LL/LH/HL/HH]
RSCAN0.RMID42.UINT32
RSCAN0.RMID42.UINT16[L/H]
RSCAN0.RMID42.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR42.UINT32
RSCAN0.RMPTR42.UINT16[L/H]
RSCAN0.RMPTR42.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF042.UINT32
RSCAN0.RMDF042.UINT16[L/H]
RSCAN0.RMDF042.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF142.UINT32
RSCAN0.RMDF142.UINT16[L/H]
RSCAN0.RMDF142.UINT8[LL/LH/HL/HH]
RSCAN0.RMID43.UINT32
RSCAN0.RMID43.UINT16[L/H]
RSCAN0.RMID43.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR43.UINT32
RSCAN0.RMPTR43.UINT16[L/H]
RSCAN0.RMPTR43.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF043.UINT32
RSCAN0.RMDF043.UINT16[L/H]
RSCAN0.RMDF043.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF143.UINT32
RSCAN0.RMDF143.UINT16[L/H]
RSCAN0.RMDF143.UINT8[LL/LH/HL/HH]
RSCAN0.RMID44.UINT32
RSCAN0.RMID44.UINT16[L/H]
RSCAN0.RMID44.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR44.UINT32
RSCAN0.RMPTR44.UINT16[L/H]
RSCAN0.RMPTR44.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF044.UINT32
RSCAN0.RMDF044.UINT16[L/H]
RSCAN0.RMDF044.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF144.UINT32
RSCAN0.RMDF144.UINT16[L/H]
RSCAN0.RMDF144.UINT8[LL/LH/HL/HH]
RSCAN0.RMID45.UINT32
RSCAN0.RMID45.UINT16[L/H]
RSCAN0.RMID45.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR45.UINT32
RSCAN0.RMPTR45.UINT16[L/H]
RSCAN0.RMPTR45.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF045.UINT32
RSCAN0.RMDF045.UINT16[L/H]
RSCAN0.RMDF045.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF145.UINT32
RSCAN0.RMDF145.UINT16[L/H]
RSCAN0.RMDF145.UINT8[LL/LH/HL/HH]
RSCAN0.RMID46.UINT32
RSCAN0.RMID46.UINT16[L/H]
RSCAN0.RMID46.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR46.UINT32
RSCAN0.RMPTR46.UINT16[L/H]
RSCAN0.RMPTR46.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF046.UINT32
RSCAN0.RMDF046.UINT16[L/H]
RSCAN0.RMDF046.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF146.UINT32
RSCAN0.RMDF146.UINT16[L/H]
RSCAN0.RMDF146.UINT8[LL/LH/HL/HH]
RSCAN0.RMID47.UINT32
RSCAN0.RMID47.UINT16[L/H]
RSCAN0.RMID47.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR47.UINT32
RSCAN0.RMPTR47.UINT16[L/H]
RSCAN0.RMPTR47.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF047.UINT32
RSCAN0.RMDF047.UINT16[L/H]
RSCAN0.RMDF047.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF147.UINT32
RSCAN0.RMDF147.UINT16[L/H]
RSCAN0.RMDF147.UINT8[LL/LH/HL/HH]
RSCAN0.RMID48.UINT32
RSCAN0.RMID48.UINT16[L/H]
RSCAN0.RMID48.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR48.UINT32
RSCAN0.RMPTR48.UINT16[L/H]
RSCAN0.RMPTR48.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF048.UINT32
RSCAN0.RMDF048.UINT16[L/H]
RSCAN0.RMDF048.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF148.UINT32
RSCAN0.RMDF148.UINT16[L/H]
RSCAN0.RMDF148.UINT8[LL/LH/HL/HH]
RSCAN0.RMID49.UINT32
RSCAN0.RMID49.UINT16[L/H]
RSCAN0.RMID49.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR49.UINT32
RSCAN0.RMPTR49.UINT16[L/H]
RSCAN0.RMPTR49.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF049.UINT32
RSCAN0.RMDF049.UINT16[L/H]
RSCAN0.RMDF049.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF149.UINT32
RSCAN0.RMDF149.UINT16[L/H]
RSCAN0.RMDF149.UINT8[LL/LH/HL/HH]
RSCAN0.RMID50.UINT32
RSCAN0.RMID50.UINT16[L/H]
RSCAN0.RMID50.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR50.UINT32
RSCAN0.RMPTR50.UINT16[L/H]
RSCAN0.RMPTR50.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF050.UINT32
RSCAN0.RMDF050.UINT16[L/H]
RSCAN0.RMDF050.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF150.UINT32
RSCAN0.RMDF150.UINT16[L/H]
RSCAN0.RMDF150.UINT8[LL/LH/HL/HH]
RSCAN0.RMID51.UINT32
RSCAN0.RMID51.UINT16[L/H]
RSCAN0.RMID51.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR51.UINT32
RSCAN0.RMPTR51.UINT16[L/H]
RSCAN0.RMPTR51.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF051.UINT32
RSCAN0.RMDF051.UINT16[L/H]
RSCAN0.RMDF051.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF151.UINT32
RSCAN0.RMDF151.UINT16[L/H]
RSCAN0.RMDF151.UINT8[LL/LH/HL/HH]
RSCAN0.RMID52.UINT32
RSCAN0.RMID52.UINT16[L/H]
RSCAN0.RMID52.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR52.UINT32
RSCAN0.RMPTR52.UINT16[L/H]
RSCAN0.RMPTR52.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF052.UINT32
RSCAN0.RMDF052.UINT16[L/H]
RSCAN0.RMDF052.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF152.UINT32
RSCAN0.RMDF152.UINT16[L/H]
RSCAN0.RMDF152.UINT8[LL/LH/HL/HH]
RSCAN0.RMID53.UINT32
RSCAN0.RMID53.UINT16[L/H]
RSCAN0.RMID53.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR53.UINT32
RSCAN0.RMPTR53.UINT16[L/H]
RSCAN0.RMPTR53.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF053.UINT32
RSCAN0.RMDF053.UINT16[L/H]
RSCAN0.RMDF053.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF153.UINT32
RSCAN0.RMDF153.UINT16[L/H]
RSCAN0.RMDF153.UINT8[LL/LH/HL/HH]
RSCAN0.RMID54.UINT32
RSCAN0.RMID54.UINT16[L/H]
RSCAN0.RMID54.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR54.UINT32
RSCAN0.RMPTR54.UINT16[L/H]
RSCAN0.RMPTR54.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF054.UINT32
RSCAN0.RMDF054.UINT16[L/H]
RSCAN0.RMDF054.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF154.UINT32
RSCAN0.RMDF154.UINT16[L/H]
RSCAN0.RMDF154.UINT8[LL/LH/HL/HH]
RSCAN0.RMID55.UINT32
RSCAN0.RMID55.UINT16[L/H]
RSCAN0.RMID55.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR55.UINT32
RSCAN0.RMPTR55.UINT16[L/H]
RSCAN0.RMPTR55.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF055.UINT32
RSCAN0.RMDF055.UINT16[L/H]
RSCAN0.RMDF055.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF155.UINT32
RSCAN0.RMDF155.UINT16[L/H]
RSCAN0.RMDF155.UINT8[LL/LH/HL/HH]
RSCAN0.RMID56.UINT32
RSCAN0.RMID56.UINT16[L/H]
RSCAN0.RMID56.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR56.UINT32
RSCAN0.RMPTR56.UINT16[L/H]
RSCAN0.RMPTR56.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF056.UINT32
RSCAN0.RMDF056.UINT16[L/H]
RSCAN0.RMDF056.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF156.UINT32
RSCAN0.RMDF156.UINT16[L/H]
RSCAN0.RMDF156.UINT8[LL/LH/HL/HH]
RSCAN0.RMID57.UINT32
RSCAN0.RMID57.UINT16[L/H]
RSCAN0.RMID57.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR57.UINT32
RSCAN0.RMPTR57.UINT16[L/H]
RSCAN0.RMPTR57.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF057.UINT32
RSCAN0.RMDF057.UINT16[L/H]
RSCAN0.RMDF057.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF157.UINT32
RSCAN0.RMDF157.UINT16[L/H]
RSCAN0.RMDF157.UINT8[LL/LH/HL/HH]
RSCAN0.RMID58.UINT32
RSCAN0.RMID58.UINT16[L/H]
RSCAN0.RMID58.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR58.UINT32
RSCAN0.RMPTR58.UINT16[L/H]
RSCAN0.RMPTR58.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF058.UINT32
RSCAN0.RMDF058.UINT16[L/H]
RSCAN0.RMDF058.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF158.UINT32
RSCAN0.RMDF158.UINT16[L/H]
RSCAN0.RMDF158.UINT8[LL/LH/HL/HH]
RSCAN0.RMID59.UINT32
RSCAN0.RMID59.UINT16[L/H]
RSCAN0.RMID59.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR59.UINT32
RSCAN0.RMPTR59.UINT16[L/H]
RSCAN0.RMPTR59.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF059.UINT32
RSCAN0.RMDF059.UINT16[L/H]
RSCAN0.RMDF059.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF159.UINT32
RSCAN0.RMDF159.UINT16[L/H]
RSCAN0.RMDF159.UINT8[LL/LH/HL/HH]
RSCAN0.RMID60.UINT32
RSCAN0.RMID60.UINT16[L/H]
RSCAN0.RMID60.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR60.UINT32
RSCAN0.RMPTR60.UINT16[L/H]
RSCAN0.RMPTR60.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF060.UINT32
RSCAN0.RMDF060.UINT16[L/H]
RSCAN0.RMDF060.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF160.UINT32
RSCAN0.RMDF160.UINT16[L/H]
RSCAN0.RMDF160.UINT8[LL/LH/HL/HH]
RSCAN0.RMID61.UINT32
RSCAN0.RMID61.UINT16[L/H]
RSCAN0.RMID61.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR61.UINT32
RSCAN0.RMPTR61.UINT16[L/H]
RSCAN0.RMPTR61.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF061.UINT32
RSCAN0.RMDF061.UINT16[L/H]
RSCAN0.RMDF061.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF161.UINT32
RSCAN0.RMDF161.UINT16[L/H]
RSCAN0.RMDF161.UINT8[LL/LH/HL/HH]
RSCAN0.RMID62.UINT32
RSCAN0.RMID62.UINT16[L/H]
RSCAN0.RMID62.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR62.UINT32
RSCAN0.RMPTR62.UINT16[L/H]
RSCAN0.RMPTR62.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF062.UINT32
RSCAN0.RMDF062.UINT16[L/H]
RSCAN0.RMDF062.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF162.UINT32
RSCAN0.RMDF162.UINT16[L/H]
RSCAN0.RMDF162.UINT8[LL/LH/HL/HH]
RSCAN0.RMID63.UINT32
RSCAN0.RMID63.UINT16[L/H]
RSCAN0.RMID63.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR63.UINT32
RSCAN0.RMPTR63.UINT16[L/H]
RSCAN0.RMPTR63.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF063.UINT32
RSCAN0.RMDF063.UINT16[L/H]
RSCAN0.RMDF063.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF163.UINT32
RSCAN0.RMDF163.UINT16[L/H]
RSCAN0.RMDF163.UINT8[LL/LH/HL/HH]
RSCAN0.RMID64.UINT32
RSCAN0.RMID64.UINT16[L/H]
RSCAN0.RMID64.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR64.UINT32
RSCAN0.RMPTR64.UINT16[L/H]
RSCAN0.RMPTR64.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF064.UINT32
RSCAN0.RMDF064.UINT16[L/H]
RSCAN0.RMDF064.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF164.UINT32
RSCAN0.RMDF164.UINT16[L/H]
RSCAN0.RMDF164.UINT8[LL/LH/HL/HH]
RSCAN0.RMID65.UINT32
RSCAN0.RMID65.UINT16[L/H]
RSCAN0.RMID65.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR65.UINT32
RSCAN0.RMPTR65.UINT16[L/H]
RSCAN0.RMPTR65.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF065.UINT32
RSCAN0.RMDF065.UINT16[L/H]
RSCAN0.RMDF065.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF165.UINT32
RSCAN0.RMDF165.UINT16[L/H]
RSCAN0.RMDF165.UINT8[LL/LH/HL/HH]
RSCAN0.RMID66.UINT32
RSCAN0.RMID66.UINT16[L/H]
RSCAN0.RMID66.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR66.UINT32
RSCAN0.RMPTR66.UINT16[L/H]
RSCAN0.RMPTR66.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF066.UINT32
RSCAN0.RMDF066.UINT16[L/H]
RSCAN0.RMDF066.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF166.UINT32
RSCAN0.RMDF166.UINT16[L/H]
RSCAN0.RMDF166.UINT8[LL/LH/HL/HH]
RSCAN0.RMID67.UINT32
RSCAN0.RMID67.UINT16[L/H]
RSCAN0.RMID67.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR67.UINT32
RSCAN0.RMPTR67.UINT16[L/H]
RSCAN0.RMPTR67.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF067.UINT32
RSCAN0.RMDF067.UINT16[L/H]
RSCAN0.RMDF067.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF167.UINT32
RSCAN0.RMDF167.UINT16[L/H]
RSCAN0.RMDF167.UINT8[LL/LH/HL/HH]
RSCAN0.RMID68.UINT32
RSCAN0.RMID68.UINT16[L/H]
RSCAN0.RMID68.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR68.UINT32
RSCAN0.RMPTR68.UINT16[L/H]
RSCAN0.RMPTR68.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF068.UINT32
RSCAN0.RMDF068.UINT16[L/H]
RSCAN0.RMDF068.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF168.UINT32
RSCAN0.RMDF168.UINT16[L/H]
RSCAN0.RMDF168.UINT8[LL/LH/HL/HH]
RSCAN0.RMID69.UINT32
RSCAN0.RMID69.UINT16[L/H]
RSCAN0.RMID69.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR69.UINT32
RSCAN0.RMPTR69.UINT16[L/H]
RSCAN0.RMPTR69.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF069.UINT32
RSCAN0.RMDF069.UINT16[L/H]
RSCAN0.RMDF069.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF169.UINT32
RSCAN0.RMDF169.UINT16[L/H]
RSCAN0.RMDF169.UINT8[LL/LH/HL/HH]
RSCAN0.RMID70.UINT32
RSCAN0.RMID70.UINT16[L/H]
RSCAN0.RMID70.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR70.UINT32
RSCAN0.RMPTR70.UINT16[L/H]
RSCAN0.RMPTR70.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF070.UINT32
RSCAN0.RMDF070.UINT16[L/H]
RSCAN0.RMDF070.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF170.UINT32
RSCAN0.RMDF170.UINT16[L/H]
RSCAN0.RMDF170.UINT8[LL/LH/HL/HH]
RSCAN0.RMID71.UINT32
RSCAN0.RMID71.UINT16[L/H]
RSCAN0.RMID71.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR71.UINT32
RSCAN0.RMPTR71.UINT16[L/H]
RSCAN0.RMPTR71.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF071.UINT32
RSCAN0.RMDF071.UINT16[L/H]
RSCAN0.RMDF071.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF171.UINT32
RSCAN0.RMDF171.UINT16[L/H]
RSCAN0.RMDF171.UINT8[LL/LH/HL/HH]
RSCAN0.RMID72.UINT32
RSCAN0.RMID72.UINT16[L/H]
RSCAN0.RMID72.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR72.UINT32
RSCAN0.RMPTR72.UINT16[L/H]
RSCAN0.RMPTR72.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF072.UINT32
RSCAN0.RMDF072.UINT16[L/H]
RSCAN0.RMDF072.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF172.UINT32
RSCAN0.RMDF172.UINT16[L/H]
RSCAN0.RMDF172.UINT8[LL/LH/HL/HH]
RSCAN0.RMID73.UINT32
RSCAN0.RMID73.UINT16[L/H]
RSCAN0.RMID73.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR73.UINT32
RSCAN0.RMPTR73.UINT16[L/H]
RSCAN0.RMPTR73.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF073.UINT32
RSCAN0.RMDF073.UINT16[L/H]
RSCAN0.RMDF073.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF173.UINT32
RSCAN0.RMDF173.UINT16[L/H]
RSCAN0.RMDF173.UINT8[LL/LH/HL/HH]
RSCAN0.RMID74.UINT32
RSCAN0.RMID74.UINT16[L/H]
RSCAN0.RMID74.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR74.UINT32
RSCAN0.RMPTR74.UINT16[L/H]
RSCAN0.RMPTR74.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF074.UINT32
RSCAN0.RMDF074.UINT16[L/H]
RSCAN0.RMDF074.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF174.UINT32
RSCAN0.RMDF174.UINT16[L/H]
RSCAN0.RMDF174.UINT8[LL/LH/HL/HH]
RSCAN0.RMID75.UINT32
RSCAN0.RMID75.UINT16[L/H]
RSCAN0.RMID75.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR75.UINT32
RSCAN0.RMPTR75.UINT16[L/H]
RSCAN0.RMPTR75.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF075.UINT32
RSCAN0.RMDF075.UINT16[L/H]
RSCAN0.RMDF075.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF175.UINT32
RSCAN0.RMDF175.UINT16[L/H]
RSCAN0.RMDF175.UINT8[LL/LH/HL/HH]
RSCAN0.RMID76.UINT32
RSCAN0.RMID76.UINT16[L/H]
RSCAN0.RMID76.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR76.UINT32
RSCAN0.RMPTR76.UINT16[L/H]
RSCAN0.RMPTR76.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF076.UINT32
RSCAN0.RMDF076.UINT16[L/H]
RSCAN0.RMDF076.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF176.UINT32
RSCAN0.RMDF176.UINT16[L/H]
RSCAN0.RMDF176.UINT8[LL/LH/HL/HH]
RSCAN0.RMID77.UINT32
RSCAN0.RMID77.UINT16[L/H]
RSCAN0.RMID77.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR77.UINT32
RSCAN0.RMPTR77.UINT16[L/H]
RSCAN0.RMPTR77.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF077.UINT32
RSCAN0.RMDF077.UINT16[L/H]
RSCAN0.RMDF077.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF177.UINT32
RSCAN0.RMDF177.UINT16[L/H]
RSCAN0.RMDF177.UINT8[LL/LH/HL/HH]
RSCAN0.RMID78.UINT32
RSCAN0.RMID78.UINT16[L/H]
RSCAN0.RMID78.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR78.UINT32
RSCAN0.RMPTR78.UINT16[L/H]
RSCAN0.RMPTR78.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF078.UINT32
RSCAN0.RMDF078.UINT16[L/H]
RSCAN0.RMDF078.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF178.UINT32
RSCAN0.RMDF178.UINT16[L/H]
RSCAN0.RMDF178.UINT8[LL/LH/HL/HH]
RSCAN0.RMID79.UINT32
RSCAN0.RMID79.UINT16[L/H]
RSCAN0.RMID79.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR79.UINT32
RSCAN0.RMPTR79.UINT16[L/H]
RSCAN0.RMPTR79.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF079.UINT32
RSCAN0.RMDF079.UINT16[L/H]
RSCAN0.RMDF079.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF179.UINT32
RSCAN0.RMDF179.UINT16[L/H]
RSCAN0.RMDF179.UINT8[LL/LH/HL/HH]
RSCAN0.RMID80.UINT32
RSCAN0.RMID80.UINT16[L/H]
RSCAN0.RMID80.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR80.UINT32
RSCAN0.RMPTR80.UINT16[L/H]
RSCAN0.RMPTR80.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF080.UINT32
RSCAN0.RMDF080.UINT16[L/H]
RSCAN0.RMDF080.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF180.UINT32
RSCAN0.RMDF180.UINT16[L/H]
RSCAN0.RMDF180.UINT8[LL/LH/HL/HH]
RSCAN0.RMID81.UINT32
RSCAN0.RMID81.UINT16[L/H]
RSCAN0.RMID81.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR81.UINT32
RSCAN0.RMPTR81.UINT16[L/H]
RSCAN0.RMPTR81.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF081.UINT32
RSCAN0.RMDF081.UINT16[L/H]
RSCAN0.RMDF081.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF181.UINT32
RSCAN0.RMDF181.UINT16[L/H]
RSCAN0.RMDF181.UINT8[LL/LH/HL/HH]
RSCAN0.RMID82.UINT32
RSCAN0.RMID82.UINT16[L/H]
RSCAN0.RMID82.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR82.UINT32
RSCAN0.RMPTR82.UINT16[L/H]
RSCAN0.RMPTR82.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF082.UINT32
RSCAN0.RMDF082.UINT16[L/H]
RSCAN0.RMDF082.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF182.UINT32
RSCAN0.RMDF182.UINT16[L/H]
RSCAN0.RMDF182.UINT8[LL/LH/HL/HH]
RSCAN0.RMID83.UINT32
RSCAN0.RMID83.UINT16[L/H]
RSCAN0.RMID83.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR83.UINT32
RSCAN0.RMPTR83.UINT16[L/H]
RSCAN0.RMPTR83.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF083.UINT32
RSCAN0.RMDF083.UINT16[L/H]
RSCAN0.RMDF083.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF183.UINT32
RSCAN0.RMDF183.UINT16[L/H]
RSCAN0.RMDF183.UINT8[LL/LH/HL/HH]
RSCAN0.RMID84.UINT32
RSCAN0.RMID84.UINT16[L/H]
RSCAN0.RMID84.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR84.UINT32
RSCAN0.RMPTR84.UINT16[L/H]
RSCAN0.RMPTR84.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF084.UINT32
RSCAN0.RMDF084.UINT16[L/H]
RSCAN0.RMDF084.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF184.UINT32
RSCAN0.RMDF184.UINT16[L/H]
RSCAN0.RMDF184.UINT8[LL/LH/HL/HH]
RSCAN0.RMID85.UINT32
RSCAN0.RMID85.UINT16[L/H]
RSCAN0.RMID85.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR85.UINT32
RSCAN0.RMPTR85.UINT16[L/H]
RSCAN0.RMPTR85.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF085.UINT32
RSCAN0.RMDF085.UINT16[L/H]
RSCAN0.RMDF085.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF185.UINT32
RSCAN0.RMDF185.UINT16[L/H]
RSCAN0.RMDF185.UINT8[LL/LH/HL/HH]
RSCAN0.RMID86.UINT32
RSCAN0.RMID86.UINT16[L/H]
RSCAN0.RMID86.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR86.UINT32
RSCAN0.RMPTR86.UINT16[L/H]
RSCAN0.RMPTR86.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF086.UINT32
RSCAN0.RMDF086.UINT16[L/H]
RSCAN0.RMDF086.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF186.UINT32
RSCAN0.RMDF186.UINT16[L/H]
RSCAN0.RMDF186.UINT8[LL/LH/HL/HH]
RSCAN0.RMID87.UINT32
RSCAN0.RMID87.UINT16[L/H]
RSCAN0.RMID87.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR87.UINT32
RSCAN0.RMPTR87.UINT16[L/H]
RSCAN0.RMPTR87.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF087.UINT32
RSCAN0.RMDF087.UINT16[L/H]
RSCAN0.RMDF087.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF187.UINT32
RSCAN0.RMDF187.UINT16[L/H]
RSCAN0.RMDF187.UINT8[LL/LH/HL/HH]
RSCAN0.RMID88.UINT32
RSCAN0.RMID88.UINT16[L/H]
RSCAN0.RMID88.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR88.UINT32
RSCAN0.RMPTR88.UINT16[L/H]
RSCAN0.RMPTR88.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF088.UINT32
RSCAN0.RMDF088.UINT16[L/H]
RSCAN0.RMDF088.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF188.UINT32
RSCAN0.RMDF188.UINT16[L/H]
RSCAN0.RMDF188.UINT8[LL/LH/HL/HH]
RSCAN0.RMID89.UINT32
RSCAN0.RMID89.UINT16[L/H]
RSCAN0.RMID89.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR89.UINT32
RSCAN0.RMPTR89.UINT16[L/H]
RSCAN0.RMPTR89.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF089.UINT32
RSCAN0.RMDF089.UINT16[L/H]
RSCAN0.RMDF089.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF189.UINT32
RSCAN0.RMDF189.UINT16[L/H]
RSCAN0.RMDF189.UINT8[LL/LH/HL/HH]
RSCAN0.RMID90.UINT32
RSCAN0.RMID90.UINT16[L/H]
RSCAN0.RMID90.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR90.UINT32
RSCAN0.RMPTR90.UINT16[L/H]
RSCAN0.RMPTR90.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF090.UINT32
RSCAN0.RMDF090.UINT16[L/H]
RSCAN0.RMDF090.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF190.UINT32
RSCAN0.RMDF190.UINT16[L/H]
RSCAN0.RMDF190.UINT8[LL/LH/HL/HH]
RSCAN0.RMID91.UINT32
RSCAN0.RMID91.UINT16[L/H]
RSCAN0.RMID91.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR91.UINT32
RSCAN0.RMPTR91.UINT16[L/H]
RSCAN0.RMPTR91.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF091.UINT32
RSCAN0.RMDF091.UINT16[L/H]
RSCAN0.RMDF091.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF191.UINT32
RSCAN0.RMDF191.UINT16[L/H]
RSCAN0.RMDF191.UINT8[LL/LH/HL/HH]
RSCAN0.RMID92.UINT32
RSCAN0.RMID92.UINT16[L/H]
RSCAN0.RMID92.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR92.UINT32
RSCAN0.RMPTR92.UINT16[L/H]
RSCAN0.RMPTR92.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF092.UINT32
RSCAN0.RMDF092.UINT16[L/H]
RSCAN0.RMDF092.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF192.UINT32
RSCAN0.RMDF192.UINT16[L/H]
RSCAN0.RMDF192.UINT8[LL/LH/HL/HH]
RSCAN0.RMID93.UINT32
RSCAN0.RMID93.UINT16[L/H]
RSCAN0.RMID93.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR93.UINT32
RSCAN0.RMPTR93.UINT16[L/H]
RSCAN0.RMPTR93.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF093.UINT32
RSCAN0.RMDF093.UINT16[L/H]
RSCAN0.RMDF093.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF193.UINT32
RSCAN0.RMDF193.UINT16[L/H]
RSCAN0.RMDF193.UINT8[LL/LH/HL/HH]
RSCAN0.RMID94.UINT32
RSCAN0.RMID94.UINT16[L/H]
RSCAN0.RMID94.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR94.UINT32
RSCAN0.RMPTR94.UINT16[L/H]
RSCAN0.RMPTR94.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF094.UINT32
RSCAN0.RMDF094.UINT16[L/H]
RSCAN0.RMDF094.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF194.UINT32
RSCAN0.RMDF194.UINT16[L/H]
RSCAN0.RMDF194.UINT8[LL/LH/HL/HH]
RSCAN0.RMID95.UINT32
RSCAN0.RMID95.UINT16[L/H]
RSCAN0.RMID95.UINT8[LL/LH/HL/HH]
RSCAN0.RMPTR95.UINT32
RSCAN0.RMPTR95.UINT16[L/H]
RSCAN0.RMPTR95.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF095.UINT32
RSCAN0.RMDF095.UINT16[L/H]
RSCAN0.RMDF095.UINT8[LL/LH/HL/HH]
RSCAN0.RMDF195.UINT32
RSCAN0.RMDF195.UINT16[L/H]
RSCAN0.RMDF195.UINT8[LL/LH/HL/HH]
RSCAN0.RFID0.UINT32
RSCAN0.RFID0.UINT16[L/H]
RSCAN0.RFID0.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR0.UINT32
RSCAN0.RFPTR0.UINT16[L/H]
RSCAN0.RFPTR0.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF00.UINT32
RSCAN0.RFDF00.UINT16[L/H]
RSCAN0.RFDF00.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF10.UINT32
RSCAN0.RFDF10.UINT16[L/H]
RSCAN0.RFDF10.UINT8[LL/LH/HL/HH]
RSCAN0.RFID1.UINT32
RSCAN0.RFID1.UINT16[L/H]
RSCAN0.RFID1.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR1.UINT32
RSCAN0.RFPTR1.UINT16[L/H]
RSCAN0.RFPTR1.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF01.UINT32
RSCAN0.RFDF01.UINT16[L/H]
RSCAN0.RFDF01.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF11.UINT32
RSCAN0.RFDF11.UINT16[L/H]
RSCAN0.RFDF11.UINT8[LL/LH/HL/HH]
RSCAN0.RFID2.UINT32
RSCAN0.RFID2.UINT16[L/H]
RSCAN0.RFID2.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR2.UINT32
RSCAN0.RFPTR2.UINT16[L/H]
RSCAN0.RFPTR2.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF02.UINT32
RSCAN0.RFDF02.UINT16[L/H]
RSCAN0.RFDF02.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF12.UINT32
RSCAN0.RFDF12.UINT16[L/H]
RSCAN0.RFDF12.UINT8[LL/LH/HL/HH]
RSCAN0.RFID3.UINT32
RSCAN0.RFID3.UINT16[L/H]
RSCAN0.RFID3.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR3.UINT32
RSCAN0.RFPTR3.UINT16[L/H]
RSCAN0.RFPTR3.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF03.UINT32
RSCAN0.RFDF03.UINT16[L/H]
RSCAN0.RFDF03.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF13.UINT32
RSCAN0.RFDF13.UINT16[L/H]
RSCAN0.RFDF13.UINT8[LL/LH/HL/HH]
RSCAN0.RFID4.UINT32
RSCAN0.RFID4.UINT16[L/H]
RSCAN0.RFID4.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR4.UINT32
RSCAN0.RFPTR4.UINT16[L/H]
RSCAN0.RFPTR4.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF04.UINT32
RSCAN0.RFDF04.UINT16[L/H]
RSCAN0.RFDF04.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF14.UINT32
RSCAN0.RFDF14.UINT16[L/H]
RSCAN0.RFDF14.UINT8[LL/LH/HL/HH]
RSCAN0.RFID5.UINT32
RSCAN0.RFID5.UINT16[L/H]
RSCAN0.RFID5.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR5.UINT32
RSCAN0.RFPTR5.UINT16[L/H]
RSCAN0.RFPTR5.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF05.UINT32
RSCAN0.RFDF05.UINT16[L/H]
RSCAN0.RFDF05.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF15.UINT32
RSCAN0.RFDF15.UINT16[L/H]
RSCAN0.RFDF15.UINT8[LL/LH/HL/HH]
RSCAN0.RFID6.UINT32
RSCAN0.RFID6.UINT16[L/H]
RSCAN0.RFID6.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR6.UINT32
RSCAN0.RFPTR6.UINT16[L/H]
RSCAN0.RFPTR6.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF06.UINT32
RSCAN0.RFDF06.UINT16[L/H]
RSCAN0.RFDF06.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF16.UINT32
RSCAN0.RFDF16.UINT16[L/H]
RSCAN0.RFDF16.UINT8[LL/LH/HL/HH]
RSCAN0.RFID7.UINT32
RSCAN0.RFID7.UINT16[L/H]
RSCAN0.RFID7.UINT8[LL/LH/HL/HH]
RSCAN0.RFPTR7.UINT32
RSCAN0.RFPTR7.UINT16[L/H]
RSCAN0.RFPTR7.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF07.UINT32
RSCAN0.RFDF07.UINT16[L/H]
RSCAN0.RFDF07.UINT8[LL/LH/HL/HH]
RSCAN0.RFDF17.UINT32
RSCAN0.RFDF17.UINT16[L/H]
RSCAN0.RFDF17.UINT8[LL/LH/HL/HH]
RSCAN0.CFID0.UINT32
RSCAN0.CFID0.UINT16[L/H]
RSCAN0.CFID0.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR0.UINT32
RSCAN0.CFPTR0.UINT16[L/H]
RSCAN0.CFPTR0.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF00.UINT32
RSCAN0.CFDF00.UINT16[L/H]
RSCAN0.CFDF00.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF10.UINT32
RSCAN0.CFDF10.UINT16[L/H]
RSCAN0.CFDF10.UINT8[LL/LH/HL/HH]
RSCAN0.CFID1.UINT32
RSCAN0.CFID1.UINT16[L/H]
RSCAN0.CFID1.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR1.UINT32
RSCAN0.CFPTR1.UINT16[L/H]
RSCAN0.CFPTR1.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF01.UINT32
RSCAN0.CFDF01.UINT16[L/H]
RSCAN0.CFDF01.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF11.UINT32
RSCAN0.CFDF11.UINT16[L/H]
RSCAN0.CFDF11.UINT8[LL/LH/HL/HH]
RSCAN0.CFID2.UINT32
RSCAN0.CFID2.UINT16[L/H]
RSCAN0.CFID2.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR2.UINT32
RSCAN0.CFPTR2.UINT16[L/H]
RSCAN0.CFPTR2.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF02.UINT32
RSCAN0.CFDF02.UINT16[L/H]
RSCAN0.CFDF02.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF12.UINT32
RSCAN0.CFDF12.UINT16[L/H]
RSCAN0.CFDF12.UINT8[LL/LH/HL/HH]
RSCAN0.CFID3.UINT32
RSCAN0.CFID3.UINT16[L/H]
RSCAN0.CFID3.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR3.UINT32
RSCAN0.CFPTR3.UINT16[L/H]
RSCAN0.CFPTR3.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF03.UINT32
RSCAN0.CFDF03.UINT16[L/H]
RSCAN0.CFDF03.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF13.UINT32
RSCAN0.CFDF13.UINT16[L/H]
RSCAN0.CFDF13.UINT8[LL/LH/HL/HH]
RSCAN0.CFID4.UINT32
RSCAN0.CFID4.UINT16[L/H]
RSCAN0.CFID4.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR4.UINT32
RSCAN0.CFPTR4.UINT16[L/H]
RSCAN0.CFPTR4.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF04.UINT32
RSCAN0.CFDF04.UINT16[L/H]
RSCAN0.CFDF04.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF14.UINT32
RSCAN0.CFDF14.UINT16[L/H]
RSCAN0.CFDF14.UINT8[LL/LH/HL/HH]
RSCAN0.CFID5.UINT32
RSCAN0.CFID5.UINT16[L/H]
RSCAN0.CFID5.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR5.UINT32
RSCAN0.CFPTR5.UINT16[L/H]
RSCAN0.CFPTR5.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF05.UINT32
RSCAN0.CFDF05.UINT16[L/H]
RSCAN0.CFDF05.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF15.UINT32
RSCAN0.CFDF15.UINT16[L/H]
RSCAN0.CFDF15.UINT8[LL/LH/HL/HH]
RSCAN0.CFID6.UINT32
RSCAN0.CFID6.UINT16[L/H]
RSCAN0.CFID6.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR6.UINT32
RSCAN0.CFPTR6.UINT16[L/H]
RSCAN0.CFPTR6.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF06.UINT32
RSCAN0.CFDF06.UINT16[L/H]
RSCAN0.CFDF06.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF16.UINT32
RSCAN0.CFDF16.UINT16[L/H]
RSCAN0.CFDF16.UINT8[LL/LH/HL/HH]
RSCAN0.CFID7.UINT32
RSCAN0.CFID7.UINT16[L/H]
RSCAN0.CFID7.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR7.UINT32
RSCAN0.CFPTR7.UINT16[L/H]
RSCAN0.CFPTR7.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF07.UINT32
RSCAN0.CFDF07.UINT16[L/H]
RSCAN0.CFDF07.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF17.UINT32
RSCAN0.CFDF17.UINT16[L/H]
RSCAN0.CFDF17.UINT8[LL/LH/HL/HH]
RSCAN0.CFID8.UINT32
RSCAN0.CFID8.UINT16[L/H]
RSCAN0.CFID8.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR8.UINT32
RSCAN0.CFPTR8.UINT16[L/H]
RSCAN0.CFPTR8.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF08.UINT32
RSCAN0.CFDF08.UINT16[L/H]
RSCAN0.CFDF08.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF18.UINT32
RSCAN0.CFDF18.UINT16[L/H]
RSCAN0.CFDF18.UINT8[LL/LH/HL/HH]
RSCAN0.CFID9.UINT32
RSCAN0.CFID9.UINT16[L/H]
RSCAN0.CFID9.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR9.UINT32
RSCAN0.CFPTR9.UINT16[L/H]
RSCAN0.CFPTR9.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF09.UINT32
RSCAN0.CFDF09.UINT16[L/H]
RSCAN0.CFDF09.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF19.UINT32
RSCAN0.CFDF19.UINT16[L/H]
RSCAN0.CFDF19.UINT8[LL/LH/HL/HH]
RSCAN0.CFID10.UINT32
RSCAN0.CFID10.UINT16[L/H]
RSCAN0.CFID10.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR10.UINT32
RSCAN0.CFPTR10.UINT16[L/H]
RSCAN0.CFPTR10.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF010.UINT32
RSCAN0.CFDF010.UINT16[L/H]
RSCAN0.CFDF010.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF110.UINT32
RSCAN0.CFDF110.UINT16[L/H]
RSCAN0.CFDF110.UINT8[LL/LH/HL/HH]
RSCAN0.CFID11.UINT32
RSCAN0.CFID11.UINT16[L/H]
RSCAN0.CFID11.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR11.UINT32
RSCAN0.CFPTR11.UINT16[L/H]
RSCAN0.CFPTR11.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF011.UINT32
RSCAN0.CFDF011.UINT16[L/H]
RSCAN0.CFDF011.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF111.UINT32
RSCAN0.CFDF111.UINT16[L/H]
RSCAN0.CFDF111.UINT8[LL/LH/HL/HH]
RSCAN0.CFID12.UINT32
RSCAN0.CFID12.UINT16[L/H]
RSCAN0.CFID12.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR12.UINT32
RSCAN0.CFPTR12.UINT16[L/H]
RSCAN0.CFPTR12.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF012.UINT32
RSCAN0.CFDF012.UINT16[L/H]
RSCAN0.CFDF012.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF112.UINT32
RSCAN0.CFDF112.UINT16[L/H]
RSCAN0.CFDF112.UINT8[LL/LH/HL/HH]
RSCAN0.CFID13.UINT32
RSCAN0.CFID13.UINT16[L/H]
RSCAN0.CFID13.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR13.UINT32
RSCAN0.CFPTR13.UINT16[L/H]
RSCAN0.CFPTR13.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF013.UINT32
RSCAN0.CFDF013.UINT16[L/H]
RSCAN0.CFDF013.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF113.UINT32
RSCAN0.CFDF113.UINT16[L/H]
RSCAN0.CFDF113.UINT8[LL/LH/HL/HH]
RSCAN0.CFID14.UINT32
RSCAN0.CFID14.UINT16[L/H]
RSCAN0.CFID14.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR14.UINT32
RSCAN0.CFPTR14.UINT16[L/H]
RSCAN0.CFPTR14.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF014.UINT32
RSCAN0.CFDF014.UINT16[L/H]
RSCAN0.CFDF014.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF114.UINT32
RSCAN0.CFDF114.UINT16[L/H]
RSCAN0.CFDF114.UINT8[LL/LH/HL/HH]
RSCAN0.CFID15.UINT32
RSCAN0.CFID15.UINT16[L/H]
RSCAN0.CFID15.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR15.UINT32
RSCAN0.CFPTR15.UINT16[L/H]
RSCAN0.CFPTR15.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF015.UINT32
RSCAN0.CFDF015.UINT16[L/H]
RSCAN0.CFDF015.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF115.UINT32
RSCAN0.CFDF115.UINT16[L/H]
RSCAN0.CFDF115.UINT8[LL/LH/HL/HH]
RSCAN0.CFID16.UINT32
RSCAN0.CFID16.UINT16[L/H]
RSCAN0.CFID16.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR16.UINT32
RSCAN0.CFPTR16.UINT16[L/H]
RSCAN0.CFPTR16.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF016.UINT32
RSCAN0.CFDF016.UINT16[L/H]
RSCAN0.CFDF016.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF116.UINT32
RSCAN0.CFDF116.UINT16[L/H]
RSCAN0.CFDF116.UINT8[LL/LH/HL/HH]
RSCAN0.CFID17.UINT32
RSCAN0.CFID17.UINT16[L/H]
RSCAN0.CFID17.UINT8[LL/LH/HL/HH]
RSCAN0.CFPTR17.UINT32
RSCAN0.CFPTR17.UINT16[L/H]
RSCAN0.CFPTR17.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF017.UINT32
RSCAN0.CFDF017.UINT16[L/H]
RSCAN0.CFDF017.UINT8[LL/LH/HL/HH]
RSCAN0.CFDF117.UINT32
RSCAN0.CFDF117.UINT16[L/H]
RSCAN0.CFDF117.UINT8[LL/LH/HL/HH]
RSCAN0.TMID0.UINT32
RSCAN0.TMID0.UINT16[L/H]
RSCAN0.TMID0.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR0.UINT32
RSCAN0.TMPTR0.UINT16[H]
RSCAN0.TMPTR0.UINT8[HL/HH]
RSCAN0.TMDF00.UINT32
RSCAN0.TMDF00.UINT16[L/H]
RSCAN0.TMDF00.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF10.UINT32
RSCAN0.TMDF10.UINT16[L/H]
RSCAN0.TMDF10.UINT8[LL/LH/HL/HH]
RSCAN0.TMID1.UINT32
RSCAN0.TMID1.UINT16[L/H]
RSCAN0.TMID1.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR1.UINT32
RSCAN0.TMPTR1.UINT16[H]
RSCAN0.TMPTR1.UINT8[HL/HH]
RSCAN0.TMDF01.UINT32
RSCAN0.TMDF01.UINT16[L/H]
RSCAN0.TMDF01.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF11.UINT32
RSCAN0.TMDF11.UINT16[L/H]
RSCAN0.TMDF11.UINT8[LL/LH/HL/HH]
RSCAN0.TMID2.UINT32
RSCAN0.TMID2.UINT16[L/H]
RSCAN0.TMID2.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR2.UINT32
RSCAN0.TMPTR2.UINT16[H]
RSCAN0.TMPTR2.UINT8[HL/HH]
RSCAN0.TMDF02.UINT32
RSCAN0.TMDF02.UINT16[L/H]
RSCAN0.TMDF02.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF12.UINT32
RSCAN0.TMDF12.UINT16[L/H]
RSCAN0.TMDF12.UINT8[LL/LH/HL/HH]
RSCAN0.TMID3.UINT32
RSCAN0.TMID3.UINT16[L/H]
RSCAN0.TMID3.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR3.UINT32
RSCAN0.TMPTR3.UINT16[H]
RSCAN0.TMPTR3.UINT8[HL/HH]
RSCAN0.TMDF03.UINT32
RSCAN0.TMDF03.UINT16[L/H]
RSCAN0.TMDF03.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF13.UINT32
RSCAN0.TMDF13.UINT16[L/H]
RSCAN0.TMDF13.UINT8[LL/LH/HL/HH]
RSCAN0.TMID4.UINT32
RSCAN0.TMID4.UINT16[L/H]
RSCAN0.TMID4.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR4.UINT32
RSCAN0.TMPTR4.UINT16[H]
RSCAN0.TMPTR4.UINT8[HL/HH]
RSCAN0.TMDF04.UINT32
RSCAN0.TMDF04.UINT16[L/H]
RSCAN0.TMDF04.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF14.UINT32
RSCAN0.TMDF14.UINT16[L/H]
RSCAN0.TMDF14.UINT8[LL/LH/HL/HH]
RSCAN0.TMID5.UINT32
RSCAN0.TMID5.UINT16[L/H]
RSCAN0.TMID5.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR5.UINT32
RSCAN0.TMPTR5.UINT16[H]
RSCAN0.TMPTR5.UINT8[HL/HH]
RSCAN0.TMDF05.UINT32
RSCAN0.TMDF05.UINT16[L/H]
RSCAN0.TMDF05.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF15.UINT32
RSCAN0.TMDF15.UINT16[L/H]
RSCAN0.TMDF15.UINT8[LL/LH/HL/HH]
RSCAN0.TMID6.UINT32
RSCAN0.TMID6.UINT16[L/H]
RSCAN0.TMID6.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR6.UINT32
RSCAN0.TMPTR6.UINT16[H]
RSCAN0.TMPTR6.UINT8[HL/HH]
RSCAN0.TMDF06.UINT32
RSCAN0.TMDF06.UINT16[L/H]
RSCAN0.TMDF06.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF16.UINT32
RSCAN0.TMDF16.UINT16[L/H]
RSCAN0.TMDF16.UINT8[LL/LH/HL/HH]
RSCAN0.TMID7.UINT32
RSCAN0.TMID7.UINT16[L/H]
RSCAN0.TMID7.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR7.UINT32
RSCAN0.TMPTR7.UINT16[H]
RSCAN0.TMPTR7.UINT8[HL/HH]
RSCAN0.TMDF07.UINT32
RSCAN0.TMDF07.UINT16[L/H]
RSCAN0.TMDF07.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF17.UINT32
RSCAN0.TMDF17.UINT16[L/H]
RSCAN0.TMDF17.UINT8[LL/LH/HL/HH]
RSCAN0.TMID8.UINT32
RSCAN0.TMID8.UINT16[L/H]
RSCAN0.TMID8.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR8.UINT32
RSCAN0.TMPTR8.UINT16[H]
RSCAN0.TMPTR8.UINT8[HL/HH]
RSCAN0.TMDF08.UINT32
RSCAN0.TMDF08.UINT16[L/H]
RSCAN0.TMDF08.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF18.UINT32
RSCAN0.TMDF18.UINT16[L/H]
RSCAN0.TMDF18.UINT8[LL/LH/HL/HH]
RSCAN0.TMID9.UINT32
RSCAN0.TMID9.UINT16[L/H]
RSCAN0.TMID9.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR9.UINT32
RSCAN0.TMPTR9.UINT16[H]
RSCAN0.TMPTR9.UINT8[HL/HH]
RSCAN0.TMDF09.UINT32
RSCAN0.TMDF09.UINT16[L/H]
RSCAN0.TMDF09.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF19.UINT32
RSCAN0.TMDF19.UINT16[L/H]
RSCAN0.TMDF19.UINT8[LL/LH/HL/HH]
RSCAN0.TMID10.UINT32
RSCAN0.TMID10.UINT16[L/H]
RSCAN0.TMID10.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR10.UINT32
RSCAN0.TMPTR10.UINT16[H]
RSCAN0.TMPTR10.UINT8[HL/HH]
RSCAN0.TMDF010.UINT32
RSCAN0.TMDF010.UINT16[L/H]
RSCAN0.TMDF010.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF110.UINT32
RSCAN0.TMDF110.UINT16[L/H]
RSCAN0.TMDF110.UINT8[LL/LH/HL/HH]
RSCAN0.TMID11.UINT32
RSCAN0.TMID11.UINT16[L/H]
RSCAN0.TMID11.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR11.UINT32
RSCAN0.TMPTR11.UINT16[H]
RSCAN0.TMPTR11.UINT8[HL/HH]
RSCAN0.TMDF011.UINT32
RSCAN0.TMDF011.UINT16[L/H]
RSCAN0.TMDF011.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF111.UINT32
RSCAN0.TMDF111.UINT16[L/H]
RSCAN0.TMDF111.UINT8[LL/LH/HL/HH]
RSCAN0.TMID12.UINT32
RSCAN0.TMID12.UINT16[L/H]
RSCAN0.TMID12.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR12.UINT32
RSCAN0.TMPTR12.UINT16[H]
RSCAN0.TMPTR12.UINT8[HL/HH]
RSCAN0.TMDF012.UINT32
RSCAN0.TMDF012.UINT16[L/H]
RSCAN0.TMDF012.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF112.UINT32
RSCAN0.TMDF112.UINT16[L/H]
RSCAN0.TMDF112.UINT8[LL/LH/HL/HH]
RSCAN0.TMID13.UINT32
RSCAN0.TMID13.UINT16[L/H]
RSCAN0.TMID13.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR13.UINT32
RSCAN0.TMPTR13.UINT16[H]
RSCAN0.TMPTR13.UINT8[HL/HH]
RSCAN0.TMDF013.UINT32
RSCAN0.TMDF013.UINT16[L/H]
RSCAN0.TMDF013.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF113.UINT32
RSCAN0.TMDF113.UINT16[L/H]
RSCAN0.TMDF113.UINT8[LL/LH/HL/HH]
RSCAN0.TMID14.UINT32
RSCAN0.TMID14.UINT16[L/H]
RSCAN0.TMID14.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR14.UINT32
RSCAN0.TMPTR14.UINT16[H]
RSCAN0.TMPTR14.UINT8[HL/HH]
RSCAN0.TMDF014.UINT32
RSCAN0.TMDF014.UINT16[L/H]
RSCAN0.TMDF014.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF114.UINT32
RSCAN0.TMDF114.UINT16[L/H]
RSCAN0.TMDF114.UINT8[LL/LH/HL/HH]
RSCAN0.TMID15.UINT32
RSCAN0.TMID15.UINT16[L/H]
RSCAN0.TMID15.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR15.UINT32
RSCAN0.TMPTR15.UINT16[H]
RSCAN0.TMPTR15.UINT8[HL/HH]
RSCAN0.TMDF015.UINT32
RSCAN0.TMDF015.UINT16[L/H]
RSCAN0.TMDF015.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF115.UINT32
RSCAN0.TMDF115.UINT16[L/H]
RSCAN0.TMDF115.UINT8[LL/LH/HL/HH]
RSCAN0.TMID16.UINT32
RSCAN0.TMID16.UINT16[L/H]
RSCAN0.TMID16.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR16.UINT32
RSCAN0.TMPTR16.UINT16[H]
RSCAN0.TMPTR16.UINT8[HL/HH]
RSCAN0.TMDF016.UINT32
RSCAN0.TMDF016.UINT16[L/H]
RSCAN0.TMDF016.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF116.UINT32
RSCAN0.TMDF116.UINT16[L/H]
RSCAN0.TMDF116.UINT8[LL/LH/HL/HH]
RSCAN0.TMID17.UINT32
RSCAN0.TMID17.UINT16[L/H]
RSCAN0.TMID17.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR17.UINT32
RSCAN0.TMPTR17.UINT16[H]
RSCAN0.TMPTR17.UINT8[HL/HH]
RSCAN0.TMDF017.UINT32
RSCAN0.TMDF017.UINT16[L/H]
RSCAN0.TMDF017.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF117.UINT32
RSCAN0.TMDF117.UINT16[L/H]
RSCAN0.TMDF117.UINT8[LL/LH/HL/HH]
RSCAN0.TMID18.UINT32
RSCAN0.TMID18.UINT16[L/H]
RSCAN0.TMID18.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR18.UINT32
RSCAN0.TMPTR18.UINT16[H]
RSCAN0.TMPTR18.UINT8[HL/HH]
RSCAN0.TMDF018.UINT32
RSCAN0.TMDF018.UINT16[L/H]
RSCAN0.TMDF018.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF118.UINT32
RSCAN0.TMDF118.UINT16[L/H]
RSCAN0.TMDF118.UINT8[LL/LH/HL/HH]
RSCAN0.TMID19.UINT32
RSCAN0.TMID19.UINT16[L/H]
RSCAN0.TMID19.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR19.UINT32
RSCAN0.TMPTR19.UINT16[H]
RSCAN0.TMPTR19.UINT8[HL/HH]
RSCAN0.TMDF019.UINT32
RSCAN0.TMDF019.UINT16[L/H]
RSCAN0.TMDF019.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF119.UINT32
RSCAN0.TMDF119.UINT16[L/H]
RSCAN0.TMDF119.UINT8[LL/LH/HL/HH]
RSCAN0.TMID20.UINT32
RSCAN0.TMID20.UINT16[L/H]
RSCAN0.TMID20.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR20.UINT32
RSCAN0.TMPTR20.UINT16[H]
RSCAN0.TMPTR20.UINT8[HL/HH]
RSCAN0.TMDF020.UINT32
RSCAN0.TMDF020.UINT16[L/H]
RSCAN0.TMDF020.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF120.UINT32
RSCAN0.TMDF120.UINT16[L/H]
RSCAN0.TMDF120.UINT8[LL/LH/HL/HH]
RSCAN0.TMID21.UINT32
RSCAN0.TMID21.UINT16[L/H]
RSCAN0.TMID21.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR21.UINT32
RSCAN0.TMPTR21.UINT16[H]
RSCAN0.TMPTR21.UINT8[HL/HH]
RSCAN0.TMDF021.UINT32
RSCAN0.TMDF021.UINT16[L/H]
RSCAN0.TMDF021.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF121.UINT32
RSCAN0.TMDF121.UINT16[L/H]
RSCAN0.TMDF121.UINT8[LL/LH/HL/HH]
RSCAN0.TMID22.UINT32
RSCAN0.TMID22.UINT16[L/H]
RSCAN0.TMID22.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR22.UINT32
RSCAN0.TMPTR22.UINT16[H]
RSCAN0.TMPTR22.UINT8[HL/HH]
RSCAN0.TMDF022.UINT32
RSCAN0.TMDF022.UINT16[L/H]
RSCAN0.TMDF022.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF122.UINT32
RSCAN0.TMDF122.UINT16[L/H]
RSCAN0.TMDF122.UINT8[LL/LH/HL/HH]
RSCAN0.TMID23.UINT32
RSCAN0.TMID23.UINT16[L/H]
RSCAN0.TMID23.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR23.UINT32
RSCAN0.TMPTR23.UINT16[H]
RSCAN0.TMPTR23.UINT8[HL/HH]
RSCAN0.TMDF023.UINT32
RSCAN0.TMDF023.UINT16[L/H]
RSCAN0.TMDF023.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF123.UINT32
RSCAN0.TMDF123.UINT16[L/H]
RSCAN0.TMDF123.UINT8[LL/LH/HL/HH]
RSCAN0.TMID24.UINT32
RSCAN0.TMID24.UINT16[L/H]
RSCAN0.TMID24.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR24.UINT32
RSCAN0.TMPTR24.UINT16[H]
RSCAN0.TMPTR24.UINT8[HL/HH]
RSCAN0.TMDF024.UINT32
RSCAN0.TMDF024.UINT16[L/H]
RSCAN0.TMDF024.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF124.UINT32
RSCAN0.TMDF124.UINT16[L/H]
RSCAN0.TMDF124.UINT8[LL/LH/HL/HH]
RSCAN0.TMID25.UINT32
RSCAN0.TMID25.UINT16[L/H]
RSCAN0.TMID25.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR25.UINT32
RSCAN0.TMPTR25.UINT16[H]
RSCAN0.TMPTR25.UINT8[HL/HH]
RSCAN0.TMDF025.UINT32
RSCAN0.TMDF025.UINT16[L/H]
RSCAN0.TMDF025.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF125.UINT32
RSCAN0.TMDF125.UINT16[L/H]
RSCAN0.TMDF125.UINT8[LL/LH/HL/HH]
RSCAN0.TMID26.UINT32
RSCAN0.TMID26.UINT16[L/H]
RSCAN0.TMID26.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR26.UINT32
RSCAN0.TMPTR26.UINT16[H]
RSCAN0.TMPTR26.UINT8[HL/HH]
RSCAN0.TMDF026.UINT32
RSCAN0.TMDF026.UINT16[L/H]
RSCAN0.TMDF026.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF126.UINT32
RSCAN0.TMDF126.UINT16[L/H]
RSCAN0.TMDF126.UINT8[LL/LH/HL/HH]
RSCAN0.TMID27.UINT32
RSCAN0.TMID27.UINT16[L/H]
RSCAN0.TMID27.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR27.UINT32
RSCAN0.TMPTR27.UINT16[H]
RSCAN0.TMPTR27.UINT8[HL/HH]
RSCAN0.TMDF027.UINT32
RSCAN0.TMDF027.UINT16[L/H]
RSCAN0.TMDF027.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF127.UINT32
RSCAN0.TMDF127.UINT16[L/H]
RSCAN0.TMDF127.UINT8[LL/LH/HL/HH]
RSCAN0.TMID28.UINT32
RSCAN0.TMID28.UINT16[L/H]
RSCAN0.TMID28.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR28.UINT32
RSCAN0.TMPTR28.UINT16[H]
RSCAN0.TMPTR28.UINT8[HL/HH]
RSCAN0.TMDF028.UINT32
RSCAN0.TMDF028.UINT16[L/H]
RSCAN0.TMDF028.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF128.UINT32
RSCAN0.TMDF128.UINT16[L/H]
RSCAN0.TMDF128.UINT8[LL/LH/HL/HH]
RSCAN0.TMID29.UINT32
RSCAN0.TMID29.UINT16[L/H]
RSCAN0.TMID29.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR29.UINT32
RSCAN0.TMPTR29.UINT16[H]
RSCAN0.TMPTR29.UINT8[HL/HH]
RSCAN0.TMDF029.UINT32
RSCAN0.TMDF029.UINT16[L/H]
RSCAN0.TMDF029.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF129.UINT32
RSCAN0.TMDF129.UINT16[L/H]
RSCAN0.TMDF129.UINT8[LL/LH/HL/HH]
RSCAN0.TMID30.UINT32
RSCAN0.TMID30.UINT16[L/H]
RSCAN0.TMID30.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR30.UINT32
RSCAN0.TMPTR30.UINT16[H]
RSCAN0.TMPTR30.UINT8[HL/HH]
RSCAN0.TMDF030.UINT32
RSCAN0.TMDF030.UINT16[L/H]
RSCAN0.TMDF030.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF130.UINT32
RSCAN0.TMDF130.UINT16[L/H]
RSCAN0.TMDF130.UINT8[LL/LH/HL/HH]
RSCAN0.TMID31.UINT32
RSCAN0.TMID31.UINT16[L/H]
RSCAN0.TMID31.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR31.UINT32
RSCAN0.TMPTR31.UINT16[H]
RSCAN0.TMPTR31.UINT8[HL/HH]
RSCAN0.TMDF031.UINT32
RSCAN0.TMDF031.UINT16[L/H]
RSCAN0.TMDF031.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF131.UINT32
RSCAN0.TMDF131.UINT16[L/H]
RSCAN0.TMDF131.UINT8[LL/LH/HL/HH]
RSCAN0.TMID32.UINT32
RSCAN0.TMID32.UINT16[L/H]
RSCAN0.TMID32.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR32.UINT32
RSCAN0.TMPTR32.UINT16[H]
RSCAN0.TMPTR32.UINT8[HL/HH]
RSCAN0.TMDF032.UINT32
RSCAN0.TMDF032.UINT16[L/H]
RSCAN0.TMDF032.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF132.UINT32
RSCAN0.TMDF132.UINT16[L/H]
RSCAN0.TMDF132.UINT8[LL/LH/HL/HH]
RSCAN0.TMID33.UINT32
RSCAN0.TMID33.UINT16[L/H]
RSCAN0.TMID33.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR33.UINT32
RSCAN0.TMPTR33.UINT16[H]
RSCAN0.TMPTR33.UINT8[HL/HH]
RSCAN0.TMDF033.UINT32
RSCAN0.TMDF033.UINT16[L/H]
RSCAN0.TMDF033.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF133.UINT32
RSCAN0.TMDF133.UINT16[L/H]
RSCAN0.TMDF133.UINT8[LL/LH/HL/HH]
RSCAN0.TMID34.UINT32
RSCAN0.TMID34.UINT16[L/H]
RSCAN0.TMID34.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR34.UINT32
RSCAN0.TMPTR34.UINT16[H]
RSCAN0.TMPTR34.UINT8[HL/HH]
RSCAN0.TMDF034.UINT32
RSCAN0.TMDF034.UINT16[L/H]
RSCAN0.TMDF034.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF134.UINT32
RSCAN0.TMDF134.UINT16[L/H]
RSCAN0.TMDF134.UINT8[LL/LH/HL/HH]
RSCAN0.TMID35.UINT32
RSCAN0.TMID35.UINT16[L/H]
RSCAN0.TMID35.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR35.UINT32
RSCAN0.TMPTR35.UINT16[H]
RSCAN0.TMPTR35.UINT8[HL/HH]
RSCAN0.TMDF035.UINT32
RSCAN0.TMDF035.UINT16[L/H]
RSCAN0.TMDF035.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF135.UINT32
RSCAN0.TMDF135.UINT16[L/H]
RSCAN0.TMDF135.UINT8[LL/LH/HL/HH]
RSCAN0.TMID36.UINT32
RSCAN0.TMID36.UINT16[L/H]
RSCAN0.TMID36.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR36.UINT32
RSCAN0.TMPTR36.UINT16[H]
RSCAN0.TMPTR36.UINT8[HL/HH]
RSCAN0.TMDF036.UINT32
RSCAN0.TMDF036.UINT16[L/H]
RSCAN0.TMDF036.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF136.UINT32
RSCAN0.TMDF136.UINT16[L/H]
RSCAN0.TMDF136.UINT8[LL/LH/HL/HH]
RSCAN0.TMID37.UINT32
RSCAN0.TMID37.UINT16[L/H]
RSCAN0.TMID37.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR37.UINT32
RSCAN0.TMPTR37.UINT16[H]
RSCAN0.TMPTR37.UINT8[HL/HH]
RSCAN0.TMDF037.UINT32
RSCAN0.TMDF037.UINT16[L/H]
RSCAN0.TMDF037.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF137.UINT32
RSCAN0.TMDF137.UINT16[L/H]
RSCAN0.TMDF137.UINT8[LL/LH/HL/HH]
RSCAN0.TMID38.UINT32
RSCAN0.TMID38.UINT16[L/H]
RSCAN0.TMID38.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR38.UINT32
RSCAN0.TMPTR38.UINT16[H]
RSCAN0.TMPTR38.UINT8[HL/HH]
RSCAN0.TMDF038.UINT32
RSCAN0.TMDF038.UINT16[L/H]
RSCAN0.TMDF038.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF138.UINT32
RSCAN0.TMDF138.UINT16[L/H]
RSCAN0.TMDF138.UINT8[LL/LH/HL/HH]
RSCAN0.TMID39.UINT32
RSCAN0.TMID39.UINT16[L/H]
RSCAN0.TMID39.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR39.UINT32
RSCAN0.TMPTR39.UINT16[H]
RSCAN0.TMPTR39.UINT8[HL/HH]
RSCAN0.TMDF039.UINT32
RSCAN0.TMDF039.UINT16[L/H]
RSCAN0.TMDF039.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF139.UINT32
RSCAN0.TMDF139.UINT16[L/H]
RSCAN0.TMDF139.UINT8[LL/LH/HL/HH]
RSCAN0.TMID40.UINT32
RSCAN0.TMID40.UINT16[L/H]
RSCAN0.TMID40.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR40.UINT32
RSCAN0.TMPTR40.UINT16[H]
RSCAN0.TMPTR40.UINT8[HL/HH]
RSCAN0.TMDF040.UINT32
RSCAN0.TMDF040.UINT16[L/H]
RSCAN0.TMDF040.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF140.UINT32
RSCAN0.TMDF140.UINT16[L/H]
RSCAN0.TMDF140.UINT8[LL/LH/HL/HH]
RSCAN0.TMID41.UINT32
RSCAN0.TMID41.UINT16[L/H]
RSCAN0.TMID41.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR41.UINT32
RSCAN0.TMPTR41.UINT16[H]
RSCAN0.TMPTR41.UINT8[HL/HH]
RSCAN0.TMDF041.UINT32
RSCAN0.TMDF041.UINT16[L/H]
RSCAN0.TMDF041.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF141.UINT32
RSCAN0.TMDF141.UINT16[L/H]
RSCAN0.TMDF141.UINT8[LL/LH/HL/HH]
RSCAN0.TMID42.UINT32
RSCAN0.TMID42.UINT16[L/H]
RSCAN0.TMID42.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR42.UINT32
RSCAN0.TMPTR42.UINT16[H]
RSCAN0.TMPTR42.UINT8[HL/HH]
RSCAN0.TMDF042.UINT32
RSCAN0.TMDF042.UINT16[L/H]
RSCAN0.TMDF042.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF142.UINT32
RSCAN0.TMDF142.UINT16[L/H]
RSCAN0.TMDF142.UINT8[LL/LH/HL/HH]
RSCAN0.TMID43.UINT32
RSCAN0.TMID43.UINT16[L/H]
RSCAN0.TMID43.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR43.UINT32
RSCAN0.TMPTR43.UINT16[H]
RSCAN0.TMPTR43.UINT8[HL/HH]
RSCAN0.TMDF043.UINT32
RSCAN0.TMDF043.UINT16[L/H]
RSCAN0.TMDF043.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF143.UINT32
RSCAN0.TMDF143.UINT16[L/H]
RSCAN0.TMDF143.UINT8[LL/LH/HL/HH]
RSCAN0.TMID44.UINT32
RSCAN0.TMID44.UINT16[L/H]
RSCAN0.TMID44.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR44.UINT32
RSCAN0.TMPTR44.UINT16[H]
RSCAN0.TMPTR44.UINT8[HL/HH]
RSCAN0.TMDF044.UINT32
RSCAN0.TMDF044.UINT16[L/H]
RSCAN0.TMDF044.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF144.UINT32
RSCAN0.TMDF144.UINT16[L/H]
RSCAN0.TMDF144.UINT8[LL/LH/HL/HH]
RSCAN0.TMID45.UINT32
RSCAN0.TMID45.UINT16[L/H]
RSCAN0.TMID45.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR45.UINT32
RSCAN0.TMPTR45.UINT16[H]
RSCAN0.TMPTR45.UINT8[HL/HH]
RSCAN0.TMDF045.UINT32
RSCAN0.TMDF045.UINT16[L/H]
RSCAN0.TMDF045.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF145.UINT32
RSCAN0.TMDF145.UINT16[L/H]
RSCAN0.TMDF145.UINT8[LL/LH/HL/HH]
RSCAN0.TMID46.UINT32
RSCAN0.TMID46.UINT16[L/H]
RSCAN0.TMID46.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR46.UINT32
RSCAN0.TMPTR46.UINT16[H]
RSCAN0.TMPTR46.UINT8[HL/HH]
RSCAN0.TMDF046.UINT32
RSCAN0.TMDF046.UINT16[L/H]
RSCAN0.TMDF046.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF146.UINT32
RSCAN0.TMDF146.UINT16[L/H]
RSCAN0.TMDF146.UINT8[LL/LH/HL/HH]
RSCAN0.TMID47.UINT32
RSCAN0.TMID47.UINT16[L/H]
RSCAN0.TMID47.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR47.UINT32
RSCAN0.TMPTR47.UINT16[H]
RSCAN0.TMPTR47.UINT8[HL/HH]
RSCAN0.TMDF047.UINT32
RSCAN0.TMDF047.UINT16[L/H]
RSCAN0.TMDF047.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF147.UINT32
RSCAN0.TMDF147.UINT16[L/H]
RSCAN0.TMDF147.UINT8[LL/LH/HL/HH]
RSCAN0.TMID48.UINT32
RSCAN0.TMID48.UINT16[L/H]
RSCAN0.TMID48.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR48.UINT32
RSCAN0.TMPTR48.UINT16[H]
RSCAN0.TMPTR48.UINT8[HL/HH]
RSCAN0.TMDF048.UINT32
RSCAN0.TMDF048.UINT16[L/H]
RSCAN0.TMDF048.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF148.UINT32
RSCAN0.TMDF148.UINT16[L/H]
RSCAN0.TMDF148.UINT8[LL/LH/HL/HH]
RSCAN0.TMID49.UINT32
RSCAN0.TMID49.UINT16[L/H]
RSCAN0.TMID49.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR49.UINT32
RSCAN0.TMPTR49.UINT16[H]
RSCAN0.TMPTR49.UINT8[HL/HH]
RSCAN0.TMDF049.UINT32
RSCAN0.TMDF049.UINT16[L/H]
RSCAN0.TMDF049.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF149.UINT32
RSCAN0.TMDF149.UINT16[L/H]
RSCAN0.TMDF149.UINT8[LL/LH/HL/HH]
RSCAN0.TMID50.UINT32
RSCAN0.TMID50.UINT16[L/H]
RSCAN0.TMID50.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR50.UINT32
RSCAN0.TMPTR50.UINT16[H]
RSCAN0.TMPTR50.UINT8[HL/HH]
RSCAN0.TMDF050.UINT32
RSCAN0.TMDF050.UINT16[L/H]
RSCAN0.TMDF050.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF150.UINT32
RSCAN0.TMDF150.UINT16[L/H]
RSCAN0.TMDF150.UINT8[LL/LH/HL/HH]
RSCAN0.TMID51.UINT32
RSCAN0.TMID51.UINT16[L/H]
RSCAN0.TMID51.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR51.UINT32
RSCAN0.TMPTR51.UINT16[H]
RSCAN0.TMPTR51.UINT8[HL/HH]
RSCAN0.TMDF051.UINT32
RSCAN0.TMDF051.UINT16[L/H]
RSCAN0.TMDF051.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF151.UINT32
RSCAN0.TMDF151.UINT16[L/H]
RSCAN0.TMDF151.UINT8[LL/LH/HL/HH]
RSCAN0.TMID52.UINT32
RSCAN0.TMID52.UINT16[L/H]
RSCAN0.TMID52.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR52.UINT32
RSCAN0.TMPTR52.UINT16[H]
RSCAN0.TMPTR52.UINT8[HL/HH]
RSCAN0.TMDF052.UINT32
RSCAN0.TMDF052.UINT16[L/H]
RSCAN0.TMDF052.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF152.UINT32
RSCAN0.TMDF152.UINT16[L/H]
RSCAN0.TMDF152.UINT8[LL/LH/HL/HH]
RSCAN0.TMID53.UINT32
RSCAN0.TMID53.UINT16[L/H]
RSCAN0.TMID53.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR53.UINT32
RSCAN0.TMPTR53.UINT16[H]
RSCAN0.TMPTR53.UINT8[HL/HH]
RSCAN0.TMDF053.UINT32
RSCAN0.TMDF053.UINT16[L/H]
RSCAN0.TMDF053.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF153.UINT32
RSCAN0.TMDF153.UINT16[L/H]
RSCAN0.TMDF153.UINT8[LL/LH/HL/HH]
RSCAN0.TMID54.UINT32
RSCAN0.TMID54.UINT16[L/H]
RSCAN0.TMID54.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR54.UINT32
RSCAN0.TMPTR54.UINT16[H]
RSCAN0.TMPTR54.UINT8[HL/HH]
RSCAN0.TMDF054.UINT32
RSCAN0.TMDF054.UINT16[L/H]
RSCAN0.TMDF054.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF154.UINT32
RSCAN0.TMDF154.UINT16[L/H]
RSCAN0.TMDF154.UINT8[LL/LH/HL/HH]
RSCAN0.TMID55.UINT32
RSCAN0.TMID55.UINT16[L/H]
RSCAN0.TMID55.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR55.UINT32
RSCAN0.TMPTR55.UINT16[H]
RSCAN0.TMPTR55.UINT8[HL/HH]
RSCAN0.TMDF055.UINT32
RSCAN0.TMDF055.UINT16[L/H]
RSCAN0.TMDF055.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF155.UINT32
RSCAN0.TMDF155.UINT16[L/H]
RSCAN0.TMDF155.UINT8[LL/LH/HL/HH]
RSCAN0.TMID56.UINT32
RSCAN0.TMID56.UINT16[L/H]
RSCAN0.TMID56.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR56.UINT32
RSCAN0.TMPTR56.UINT16[H]
RSCAN0.TMPTR56.UINT8[HL/HH]
RSCAN0.TMDF056.UINT32
RSCAN0.TMDF056.UINT16[L/H]
RSCAN0.TMDF056.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF156.UINT32
RSCAN0.TMDF156.UINT16[L/H]
RSCAN0.TMDF156.UINT8[LL/LH/HL/HH]
RSCAN0.TMID57.UINT32
RSCAN0.TMID57.UINT16[L/H]
RSCAN0.TMID57.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR57.UINT32
RSCAN0.TMPTR57.UINT16[H]
RSCAN0.TMPTR57.UINT8[HL/HH]
RSCAN0.TMDF057.UINT32
RSCAN0.TMDF057.UINT16[L/H]
RSCAN0.TMDF057.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF157.UINT32
RSCAN0.TMDF157.UINT16[L/H]
RSCAN0.TMDF157.UINT8[LL/LH/HL/HH]
RSCAN0.TMID58.UINT32
RSCAN0.TMID58.UINT16[L/H]
RSCAN0.TMID58.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR58.UINT32
RSCAN0.TMPTR58.UINT16[H]
RSCAN0.TMPTR58.UINT8[HL/HH]
RSCAN0.TMDF058.UINT32
RSCAN0.TMDF058.UINT16[L/H]
RSCAN0.TMDF058.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF158.UINT32
RSCAN0.TMDF158.UINT16[L/H]
RSCAN0.TMDF158.UINT8[LL/LH/HL/HH]
RSCAN0.TMID59.UINT32
RSCAN0.TMID59.UINT16[L/H]
RSCAN0.TMID59.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR59.UINT32
RSCAN0.TMPTR59.UINT16[H]
RSCAN0.TMPTR59.UINT8[HL/HH]
RSCAN0.TMDF059.UINT32
RSCAN0.TMDF059.UINT16[L/H]
RSCAN0.TMDF059.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF159.UINT32
RSCAN0.TMDF159.UINT16[L/H]
RSCAN0.TMDF159.UINT8[LL/LH/HL/HH]
RSCAN0.TMID60.UINT32
RSCAN0.TMID60.UINT16[L/H]
RSCAN0.TMID60.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR60.UINT32
RSCAN0.TMPTR60.UINT16[H]
RSCAN0.TMPTR60.UINT8[HL/HH]
RSCAN0.TMDF060.UINT32
RSCAN0.TMDF060.UINT16[L/H]
RSCAN0.TMDF060.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF160.UINT32
RSCAN0.TMDF160.UINT16[L/H]
RSCAN0.TMDF160.UINT8[LL/LH/HL/HH]
RSCAN0.TMID61.UINT32
RSCAN0.TMID61.UINT16[L/H]
RSCAN0.TMID61.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR61.UINT32
RSCAN0.TMPTR61.UINT16[H]
RSCAN0.TMPTR61.UINT8[HL/HH]
RSCAN0.TMDF061.UINT32
RSCAN0.TMDF061.UINT16[L/H]
RSCAN0.TMDF061.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF161.UINT32
RSCAN0.TMDF161.UINT16[L/H]
RSCAN0.TMDF161.UINT8[LL/LH/HL/HH]
RSCAN0.TMID62.UINT32
RSCAN0.TMID62.UINT16[L/H]
RSCAN0.TMID62.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR62.UINT32
RSCAN0.TMPTR62.UINT16[H]
RSCAN0.TMPTR62.UINT8[HL/HH]
RSCAN0.TMDF062.UINT32
RSCAN0.TMDF062.UINT16[L/H]
RSCAN0.TMDF062.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF162.UINT32
RSCAN0.TMDF162.UINT16[L/H]
RSCAN0.TMDF162.UINT8[LL/LH/HL/HH]
RSCAN0.TMID63.UINT32
RSCAN0.TMID63.UINT16[L/H]
RSCAN0.TMID63.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR63.UINT32
RSCAN0.TMPTR63.UINT16[H]
RSCAN0.TMPTR63.UINT8[HL/HH]
RSCAN0.TMDF063.UINT32
RSCAN0.TMDF063.UINT16[L/H]
RSCAN0.TMDF063.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF163.UINT32
RSCAN0.TMDF163.UINT16[L/H]
RSCAN0.TMDF163.UINT8[LL/LH/HL/HH]
RSCAN0.TMID64.UINT32
RSCAN0.TMID64.UINT16[L/H]
RSCAN0.TMID64.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR64.UINT32
RSCAN0.TMPTR64.UINT16[H]
RSCAN0.TMPTR64.UINT8[HL/HH]
RSCAN0.TMDF064.UINT32
RSCAN0.TMDF064.UINT16[L/H]
RSCAN0.TMDF064.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF164.UINT32
RSCAN0.TMDF164.UINT16[L/H]
RSCAN0.TMDF164.UINT8[LL/LH/HL/HH]
RSCAN0.TMID65.UINT32
RSCAN0.TMID65.UINT16[L/H]
RSCAN0.TMID65.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR65.UINT32
RSCAN0.TMPTR65.UINT16[H]
RSCAN0.TMPTR65.UINT8[HL/HH]
RSCAN0.TMDF065.UINT32
RSCAN0.TMDF065.UINT16[L/H]
RSCAN0.TMDF065.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF165.UINT32
RSCAN0.TMDF165.UINT16[L/H]
RSCAN0.TMDF165.UINT8[LL/LH/HL/HH]
RSCAN0.TMID66.UINT32
RSCAN0.TMID66.UINT16[L/H]
RSCAN0.TMID66.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR66.UINT32
RSCAN0.TMPTR66.UINT16[H]
RSCAN0.TMPTR66.UINT8[HL/HH]
RSCAN0.TMDF066.UINT32
RSCAN0.TMDF066.UINT16[L/H]
RSCAN0.TMDF066.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF166.UINT32
RSCAN0.TMDF166.UINT16[L/H]
RSCAN0.TMDF166.UINT8[LL/LH/HL/HH]
RSCAN0.TMID67.UINT32
RSCAN0.TMID67.UINT16[L/H]
RSCAN0.TMID67.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR67.UINT32
RSCAN0.TMPTR67.UINT16[H]
RSCAN0.TMPTR67.UINT8[HL/HH]
RSCAN0.TMDF067.UINT32
RSCAN0.TMDF067.UINT16[L/H]
RSCAN0.TMDF067.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF167.UINT32
RSCAN0.TMDF167.UINT16[L/H]
RSCAN0.TMDF167.UINT8[LL/LH/HL/HH]
RSCAN0.TMID68.UINT32
RSCAN0.TMID68.UINT16[L/H]
RSCAN0.TMID68.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR68.UINT32
RSCAN0.TMPTR68.UINT16[H]
RSCAN0.TMPTR68.UINT8[HL/HH]
RSCAN0.TMDF068.UINT32
RSCAN0.TMDF068.UINT16[L/H]
RSCAN0.TMDF068.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF168.UINT32
RSCAN0.TMDF168.UINT16[L/H]
RSCAN0.TMDF168.UINT8[LL/LH/HL/HH]
RSCAN0.TMID69.UINT32
RSCAN0.TMID69.UINT16[L/H]
RSCAN0.TMID69.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR69.UINT32
RSCAN0.TMPTR69.UINT16[H]
RSCAN0.TMPTR69.UINT8[HL/HH]
RSCAN0.TMDF069.UINT32
RSCAN0.TMDF069.UINT16[L/H]
RSCAN0.TMDF069.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF169.UINT32
RSCAN0.TMDF169.UINT16[L/H]
RSCAN0.TMDF169.UINT8[LL/LH/HL/HH]
RSCAN0.TMID70.UINT32
RSCAN0.TMID70.UINT16[L/H]
RSCAN0.TMID70.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR70.UINT32
RSCAN0.TMPTR70.UINT16[H]
RSCAN0.TMPTR70.UINT8[HL/HH]
RSCAN0.TMDF070.UINT32
RSCAN0.TMDF070.UINT16[L/H]
RSCAN0.TMDF070.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF170.UINT32
RSCAN0.TMDF170.UINT16[L/H]
RSCAN0.TMDF170.UINT8[LL/LH/HL/HH]
RSCAN0.TMID71.UINT32
RSCAN0.TMID71.UINT16[L/H]
RSCAN0.TMID71.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR71.UINT32
RSCAN0.TMPTR71.UINT16[H]
RSCAN0.TMPTR71.UINT8[HL/HH]
RSCAN0.TMDF071.UINT32
RSCAN0.TMDF071.UINT16[L/H]
RSCAN0.TMDF071.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF171.UINT32
RSCAN0.TMDF171.UINT16[L/H]
RSCAN0.TMDF171.UINT8[LL/LH/HL/HH]
RSCAN0.TMID72.UINT32
RSCAN0.TMID72.UINT16[L/H]
RSCAN0.TMID72.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR72.UINT32
RSCAN0.TMPTR72.UINT16[H]
RSCAN0.TMPTR72.UINT8[HL/HH]
RSCAN0.TMDF072.UINT32
RSCAN0.TMDF072.UINT16[L/H]
RSCAN0.TMDF072.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF172.UINT32
RSCAN0.TMDF172.UINT16[L/H]
RSCAN0.TMDF172.UINT8[LL/LH/HL/HH]
RSCAN0.TMID73.UINT32
RSCAN0.TMID73.UINT16[L/H]
RSCAN0.TMID73.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR73.UINT32
RSCAN0.TMPTR73.UINT16[H]
RSCAN0.TMPTR73.UINT8[HL/HH]
RSCAN0.TMDF073.UINT32
RSCAN0.TMDF073.UINT16[L/H]
RSCAN0.TMDF073.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF173.UINT32
RSCAN0.TMDF173.UINT16[L/H]
RSCAN0.TMDF173.UINT8[LL/LH/HL/HH]
RSCAN0.TMID74.UINT32
RSCAN0.TMID74.UINT16[L/H]
RSCAN0.TMID74.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR74.UINT32
RSCAN0.TMPTR74.UINT16[H]
RSCAN0.TMPTR74.UINT8[HL/HH]
RSCAN0.TMDF074.UINT32
RSCAN0.TMDF074.UINT16[L/H]
RSCAN0.TMDF074.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF174.UINT32
RSCAN0.TMDF174.UINT16[L/H]
RSCAN0.TMDF174.UINT8[LL/LH/HL/HH]
RSCAN0.TMID75.UINT32
RSCAN0.TMID75.UINT16[L/H]
RSCAN0.TMID75.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR75.UINT32
RSCAN0.TMPTR75.UINT16[H]
RSCAN0.TMPTR75.UINT8[HL/HH]
RSCAN0.TMDF075.UINT32
RSCAN0.TMDF075.UINT16[L/H]
RSCAN0.TMDF075.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF175.UINT32
RSCAN0.TMDF175.UINT16[L/H]
RSCAN0.TMDF175.UINT8[LL/LH/HL/HH]
RSCAN0.TMID76.UINT32
RSCAN0.TMID76.UINT16[L/H]
RSCAN0.TMID76.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR76.UINT32
RSCAN0.TMPTR76.UINT16[H]
RSCAN0.TMPTR76.UINT8[HL/HH]
RSCAN0.TMDF076.UINT32
RSCAN0.TMDF076.UINT16[L/H]
RSCAN0.TMDF076.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF176.UINT32
RSCAN0.TMDF176.UINT16[L/H]
RSCAN0.TMDF176.UINT8[LL/LH/HL/HH]
RSCAN0.TMID77.UINT32
RSCAN0.TMID77.UINT16[L/H]
RSCAN0.TMID77.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR77.UINT32
RSCAN0.TMPTR77.UINT16[H]
RSCAN0.TMPTR77.UINT8[HL/HH]
RSCAN0.TMDF077.UINT32
RSCAN0.TMDF077.UINT16[L/H]
RSCAN0.TMDF077.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF177.UINT32
RSCAN0.TMDF177.UINT16[L/H]
RSCAN0.TMDF177.UINT8[LL/LH/HL/HH]
RSCAN0.TMID78.UINT32
RSCAN0.TMID78.UINT16[L/H]
RSCAN0.TMID78.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR78.UINT32
RSCAN0.TMPTR78.UINT16[H]
RSCAN0.TMPTR78.UINT8[HL/HH]
RSCAN0.TMDF078.UINT32
RSCAN0.TMDF078.UINT16[L/H]
RSCAN0.TMDF078.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF178.UINT32
RSCAN0.TMDF178.UINT16[L/H]
RSCAN0.TMDF178.UINT8[LL/LH/HL/HH]
RSCAN0.TMID79.UINT32
RSCAN0.TMID79.UINT16[L/H]
RSCAN0.TMID79.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR79.UINT32
RSCAN0.TMPTR79.UINT16[H]
RSCAN0.TMPTR79.UINT8[HL/HH]
RSCAN0.TMDF079.UINT32
RSCAN0.TMDF079.UINT16[L/H]
RSCAN0.TMDF079.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF179.UINT32
RSCAN0.TMDF179.UINT16[L/H]
RSCAN0.TMDF179.UINT8[LL/LH/HL/HH]
RSCAN0.TMID80.UINT32
RSCAN0.TMID80.UINT16[L/H]
RSCAN0.TMID80.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR80.UINT32
RSCAN0.TMPTR80.UINT16[H]
RSCAN0.TMPTR80.UINT8[HL/HH]
RSCAN0.TMDF080.UINT32
RSCAN0.TMDF080.UINT16[L/H]
RSCAN0.TMDF080.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF180.UINT32
RSCAN0.TMDF180.UINT16[L/H]
RSCAN0.TMDF180.UINT8[LL/LH/HL/HH]
RSCAN0.TMID81.UINT32
RSCAN0.TMID81.UINT16[L/H]
RSCAN0.TMID81.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR81.UINT32
RSCAN0.TMPTR81.UINT16[H]
RSCAN0.TMPTR81.UINT8[HL/HH]
RSCAN0.TMDF081.UINT32
RSCAN0.TMDF081.UINT16[L/H]
RSCAN0.TMDF081.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF181.UINT32
RSCAN0.TMDF181.UINT16[L/H]
RSCAN0.TMDF181.UINT8[LL/LH/HL/HH]
RSCAN0.TMID82.UINT32
RSCAN0.TMID82.UINT16[L/H]
RSCAN0.TMID82.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR82.UINT32
RSCAN0.TMPTR82.UINT16[H]
RSCAN0.TMPTR82.UINT8[HL/HH]
RSCAN0.TMDF082.UINT32
RSCAN0.TMDF082.UINT16[L/H]
RSCAN0.TMDF082.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF182.UINT32
RSCAN0.TMDF182.UINT16[L/H]
RSCAN0.TMDF182.UINT8[LL/LH/HL/HH]
RSCAN0.TMID83.UINT32
RSCAN0.TMID83.UINT16[L/H]
RSCAN0.TMID83.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR83.UINT32
RSCAN0.TMPTR83.UINT16[H]
RSCAN0.TMPTR83.UINT8[HL/HH]
RSCAN0.TMDF083.UINT32
RSCAN0.TMDF083.UINT16[L/H]
RSCAN0.TMDF083.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF183.UINT32
RSCAN0.TMDF183.UINT16[L/H]
RSCAN0.TMDF183.UINT8[LL/LH/HL/HH]
RSCAN0.TMID84.UINT32
RSCAN0.TMID84.UINT16[L/H]
RSCAN0.TMID84.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR84.UINT32
RSCAN0.TMPTR84.UINT16[H]
RSCAN0.TMPTR84.UINT8[HL/HH]
RSCAN0.TMDF084.UINT32
RSCAN0.TMDF084.UINT16[L/H]
RSCAN0.TMDF084.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF184.UINT32
RSCAN0.TMDF184.UINT16[L/H]
RSCAN0.TMDF184.UINT8[LL/LH/HL/HH]
RSCAN0.TMID85.UINT32
RSCAN0.TMID85.UINT16[L/H]
RSCAN0.TMID85.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR85.UINT32
RSCAN0.TMPTR85.UINT16[H]
RSCAN0.TMPTR85.UINT8[HL/HH]
RSCAN0.TMDF085.UINT32
RSCAN0.TMDF085.UINT16[L/H]
RSCAN0.TMDF085.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF185.UINT32
RSCAN0.TMDF185.UINT16[L/H]
RSCAN0.TMDF185.UINT8[LL/LH/HL/HH]
RSCAN0.TMID86.UINT32
RSCAN0.TMID86.UINT16[L/H]
RSCAN0.TMID86.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR86.UINT32
RSCAN0.TMPTR86.UINT16[H]
RSCAN0.TMPTR86.UINT8[HL/HH]
RSCAN0.TMDF086.UINT32
RSCAN0.TMDF086.UINT16[L/H]
RSCAN0.TMDF086.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF186.UINT32
RSCAN0.TMDF186.UINT16[L/H]
RSCAN0.TMDF186.UINT8[LL/LH/HL/HH]
RSCAN0.TMID87.UINT32
RSCAN0.TMID87.UINT16[L/H]
RSCAN0.TMID87.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR87.UINT32
RSCAN0.TMPTR87.UINT16[H]
RSCAN0.TMPTR87.UINT8[HL/HH]
RSCAN0.TMDF087.UINT32
RSCAN0.TMDF087.UINT16[L/H]
RSCAN0.TMDF087.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF187.UINT32
RSCAN0.TMDF187.UINT16[L/H]
RSCAN0.TMDF187.UINT8[LL/LH/HL/HH]
RSCAN0.TMID88.UINT32
RSCAN0.TMID88.UINT16[L/H]
RSCAN0.TMID88.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR88.UINT32
RSCAN0.TMPTR88.UINT16[H]
RSCAN0.TMPTR88.UINT8[HL/HH]
RSCAN0.TMDF088.UINT32
RSCAN0.TMDF088.UINT16[L/H]
RSCAN0.TMDF088.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF188.UINT32
RSCAN0.TMDF188.UINT16[L/H]
RSCAN0.TMDF188.UINT8[LL/LH/HL/HH]
RSCAN0.TMID89.UINT32
RSCAN0.TMID89.UINT16[L/H]
RSCAN0.TMID89.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR89.UINT32
RSCAN0.TMPTR89.UINT16[H]
RSCAN0.TMPTR89.UINT8[HL/HH]
RSCAN0.TMDF089.UINT32
RSCAN0.TMDF089.UINT16[L/H]
RSCAN0.TMDF089.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF189.UINT32
RSCAN0.TMDF189.UINT16[L/H]
RSCAN0.TMDF189.UINT8[LL/LH/HL/HH]
RSCAN0.TMID90.UINT32
RSCAN0.TMID90.UINT16[L/H]
RSCAN0.TMID90.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR90.UINT32
RSCAN0.TMPTR90.UINT16[H]
RSCAN0.TMPTR90.UINT8[HL/HH]
RSCAN0.TMDF090.UINT32
RSCAN0.TMDF090.UINT16[L/H]
RSCAN0.TMDF090.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF190.UINT32
RSCAN0.TMDF190.UINT16[L/H]
RSCAN0.TMDF190.UINT8[LL/LH/HL/HH]
RSCAN0.TMID91.UINT32
RSCAN0.TMID91.UINT16[L/H]
RSCAN0.TMID91.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR91.UINT32
RSCAN0.TMPTR91.UINT16[H]
RSCAN0.TMPTR91.UINT8[HL/HH]
RSCAN0.TMDF091.UINT32
RSCAN0.TMDF091.UINT16[L/H]
RSCAN0.TMDF091.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF191.UINT32
RSCAN0.TMDF191.UINT16[L/H]
RSCAN0.TMDF191.UINT8[LL/LH/HL/HH]
RSCAN0.TMID92.UINT32
RSCAN0.TMID92.UINT16[L/H]
RSCAN0.TMID92.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR92.UINT32
RSCAN0.TMPTR92.UINT16[H]
RSCAN0.TMPTR92.UINT8[HL/HH]
RSCAN0.TMDF092.UINT32
RSCAN0.TMDF092.UINT16[L/H]
RSCAN0.TMDF092.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF192.UINT32
RSCAN0.TMDF192.UINT16[L/H]
RSCAN0.TMDF192.UINT8[LL/LH/HL/HH]
RSCAN0.TMID93.UINT32
RSCAN0.TMID93.UINT16[L/H]
RSCAN0.TMID93.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR93.UINT32
RSCAN0.TMPTR93.UINT16[H]
RSCAN0.TMPTR93.UINT8[HL/HH]
RSCAN0.TMDF093.UINT32
RSCAN0.TMDF093.UINT16[L/H]
RSCAN0.TMDF093.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF193.UINT32
RSCAN0.TMDF193.UINT16[L/H]
RSCAN0.TMDF193.UINT8[LL/LH/HL/HH]
RSCAN0.TMID94.UINT32
RSCAN0.TMID94.UINT16[L/H]
RSCAN0.TMID94.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR94.UINT32
RSCAN0.TMPTR94.UINT16[H]
RSCAN0.TMPTR94.UINT8[HL/HH]
RSCAN0.TMDF094.UINT32
RSCAN0.TMDF094.UINT16[L/H]
RSCAN0.TMDF094.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF194.UINT32
RSCAN0.TMDF194.UINT16[L/H]
RSCAN0.TMDF194.UINT8[LL/LH/HL/HH]
RSCAN0.TMID95.UINT32
RSCAN0.TMID95.UINT16[L/H]
RSCAN0.TMID95.UINT8[LL/LH/HL/HH]
RSCAN0.TMPTR95.UINT32
RSCAN0.TMPTR95.UINT16[H]
RSCAN0.TMPTR95.UINT8[HL/HH]
RSCAN0.TMDF095.UINT32
RSCAN0.TMDF095.UINT16[L/H]
RSCAN0.TMDF095.UINT8[LL/LH/HL/HH]
RSCAN0.TMDF195.UINT32
RSCAN0.TMDF195.UINT16[L/H]
RSCAN0.TMDF195.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC0.UINT32
RSCAN0.THLACC0.UINT16[L/H]
RSCAN0.THLACC0.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC1.UINT32
RSCAN0.THLACC1.UINT16[L/H]
RSCAN0.THLACC1.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC2.UINT32
RSCAN0.THLACC2.UINT16[L/H]
RSCAN0.THLACC2.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC3.UINT32
RSCAN0.THLACC3.UINT16[L/H]
RSCAN0.THLACC3.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC4.UINT32
RSCAN0.THLACC4.UINT16[L/H]
RSCAN0.THLACC4.UINT8[LL/LH/HL/HH]
RSCAN0.THLACC5.UINT32
RSCAN0.THLACC5.UINT16[L/H]
RSCAN0.THLACC5.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC0.UINT32
RSCAN0.RPGACC0.UINT16[L/H]
RSCAN0.RPGACC0.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC1.UINT32
RSCAN0.RPGACC1.UINT16[L/H]
RSCAN0.RPGACC1.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC2.UINT32
RSCAN0.RPGACC2.UINT16[L/H]
RSCAN0.RPGACC2.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC3.UINT32
RSCAN0.RPGACC3.UINT16[L/H]
RSCAN0.RPGACC3.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC4.UINT32
RSCAN0.RPGACC4.UINT16[L/H]
RSCAN0.RPGACC4.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC5.UINT32
RSCAN0.RPGACC5.UINT16[L/H]
RSCAN0.RPGACC5.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC6.UINT32
RSCAN0.RPGACC6.UINT16[L/H]
RSCAN0.RPGACC6.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC7.UINT32
RSCAN0.RPGACC7.UINT16[L/H]
RSCAN0.RPGACC7.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC8.UINT32
RSCAN0.RPGACC8.UINT16[L/H]
RSCAN0.RPGACC8.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC9.UINT32
RSCAN0.RPGACC9.UINT16[L/H]
RSCAN0.RPGACC9.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC10.UINT32
RSCAN0.RPGACC10.UINT16[L/H]
RSCAN0.RPGACC10.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC11.UINT32
RSCAN0.RPGACC11.UINT16[L/H]
RSCAN0.RPGACC11.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC12.UINT32
RSCAN0.RPGACC12.UINT16[L/H]
RSCAN0.RPGACC12.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC13.UINT32
RSCAN0.RPGACC13.UINT16[L/H]
RSCAN0.RPGACC13.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC14.UINT32
RSCAN0.RPGACC14.UINT16[L/H]
RSCAN0.RPGACC14.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC15.UINT32
RSCAN0.RPGACC15.UINT16[L/H]
RSCAN0.RPGACC15.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC16.UINT32
RSCAN0.RPGACC16.UINT16[L/H]
RSCAN0.RPGACC16.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC17.UINT32
RSCAN0.RPGACC17.UINT16[L/H]
RSCAN0.RPGACC17.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC18.UINT32
RSCAN0.RPGACC18.UINT16[L/H]
RSCAN0.RPGACC18.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC19.UINT32
RSCAN0.RPGACC19.UINT16[L/H]
RSCAN0.RPGACC19.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC20.UINT32
RSCAN0.RPGACC20.UINT16[L/H]
RSCAN0.RPGACC20.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC21.UINT32
RSCAN0.RPGACC21.UINT16[L/H]
RSCAN0.RPGACC21.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC22.UINT32
RSCAN0.RPGACC22.UINT16[L/H]
RSCAN0.RPGACC22.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC23.UINT32
RSCAN0.RPGACC23.UINT16[L/H]
RSCAN0.RPGACC23.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC24.UINT32
RSCAN0.RPGACC24.UINT16[L/H]
RSCAN0.RPGACC24.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC25.UINT32
RSCAN0.RPGACC25.UINT16[L/H]
RSCAN0.RPGACC25.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC26.UINT32
RSCAN0.RPGACC26.UINT16[L/H]
RSCAN0.RPGACC26.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC27.UINT32
RSCAN0.RPGACC27.UINT16[L/H]
RSCAN0.RPGACC27.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC28.UINT32
RSCAN0.RPGACC28.UINT16[L/H]
RSCAN0.RPGACC28.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC29.UINT32
RSCAN0.RPGACC29.UINT16[L/H]
RSCAN0.RPGACC29.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC30.UINT32
RSCAN0.RPGACC30.UINT16[L/H]
RSCAN0.RPGACC30.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC31.UINT32
RSCAN0.RPGACC31.UINT16[L/H]
RSCAN0.RPGACC31.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC32.UINT32
RSCAN0.RPGACC32.UINT16[L/H]
RSCAN0.RPGACC32.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC33.UINT32
RSCAN0.RPGACC33.UINT16[L/H]
RSCAN0.RPGACC33.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC34.UINT32
RSCAN0.RPGACC34.UINT16[L/H]
RSCAN0.RPGACC34.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC35.UINT32
RSCAN0.RPGACC35.UINT16[L/H]
RSCAN0.RPGACC35.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC36.UINT32
RSCAN0.RPGACC36.UINT16[L/H]
RSCAN0.RPGACC36.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC37.UINT32
RSCAN0.RPGACC37.UINT16[L/H]
RSCAN0.RPGACC37.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC38.UINT32
RSCAN0.RPGACC38.UINT16[L/H]
RSCAN0.RPGACC38.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC39.UINT32
RSCAN0.RPGACC39.UINT16[L/H]
RSCAN0.RPGACC39.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC40.UINT32
RSCAN0.RPGACC40.UINT16[L/H]
RSCAN0.RPGACC40.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC41.UINT32
RSCAN0.RPGACC41.UINT16[L/H]
RSCAN0.RPGACC41.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC42.UINT32
RSCAN0.RPGACC42.UINT16[L/H]
RSCAN0.RPGACC42.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC43.UINT32
RSCAN0.RPGACC43.UINT16[L/H]
RSCAN0.RPGACC43.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC44.UINT32
RSCAN0.RPGACC44.UINT16[L/H]
RSCAN0.RPGACC44.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC45.UINT32
RSCAN0.RPGACC45.UINT16[L/H]
RSCAN0.RPGACC45.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC46.UINT32
RSCAN0.RPGACC46.UINT16[L/H]
RSCAN0.RPGACC46.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC47.UINT32
RSCAN0.RPGACC47.UINT16[L/H]
RSCAN0.RPGACC47.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC48.UINT32
RSCAN0.RPGACC48.UINT16[L/H]
RSCAN0.RPGACC48.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC49.UINT32
RSCAN0.RPGACC49.UINT16[L/H]
RSCAN0.RPGACC49.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC50.UINT32
RSCAN0.RPGACC50.UINT16[L/H]
RSCAN0.RPGACC50.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC51.UINT32
RSCAN0.RPGACC51.UINT16[L/H]
RSCAN0.RPGACC51.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC52.UINT32
RSCAN0.RPGACC52.UINT16[L/H]
RSCAN0.RPGACC52.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC53.UINT32
RSCAN0.RPGACC53.UINT16[L/H]
RSCAN0.RPGACC53.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC54.UINT32
RSCAN0.RPGACC54.UINT16[L/H]
RSCAN0.RPGACC54.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC55.UINT32
RSCAN0.RPGACC55.UINT16[L/H]
RSCAN0.RPGACC55.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC56.UINT32
RSCAN0.RPGACC56.UINT16[L/H]
RSCAN0.RPGACC56.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC57.UINT32
RSCAN0.RPGACC57.UINT16[L/H]
RSCAN0.RPGACC57.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC58.UINT32
RSCAN0.RPGACC58.UINT16[L/H]
RSCAN0.RPGACC58.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC59.UINT32
RSCAN0.RPGACC59.UINT16[L/H]
RSCAN0.RPGACC59.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC60.UINT32
RSCAN0.RPGACC60.UINT16[L/H]
RSCAN0.RPGACC60.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC61.UINT32
RSCAN0.RPGACC61.UINT16[L/H]
RSCAN0.RPGACC61.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC62.UINT32
RSCAN0.RPGACC62.UINT16[L/H]
RSCAN0.RPGACC62.UINT8[LL/LH/HL/HH]
RSCAN0.RPGACC63.UINT32
RSCAN0.RPGACC63.UINT16[L/H]
RSCAN0.RPGACC63.UINT8[LL/LH/HL/HH]
ADCA1.VCR00.UINT32
ADCA1.VCR00.UINT16[L]
ADCA1.VCR00.UINT8[LL/LH]
ADCA1.VCR01.UINT32
ADCA1.VCR01.UINT16[L]
ADCA1.VCR01.UINT8[LL/LH]
ADCA1.VCR02.UINT32
ADCA1.VCR02.UINT16[L]
ADCA1.VCR02.UINT8[LL/LH]
ADCA1.VCR03.UINT32
ADCA1.VCR03.UINT16[L]
ADCA1.VCR03.UINT8[LL/LH]
ADCA1.VCR04.UINT32
ADCA1.VCR04.UINT16[L]
ADCA1.VCR04.UINT8[LL/LH]
ADCA1.VCR05.UINT32
ADCA1.VCR05.UINT16[L]
ADCA1.VCR05.UINT8[LL/LH]
ADCA1.VCR06.UINT32
ADCA1.VCR06.UINT16[L]
ADCA1.VCR06.UINT8[LL/LH]
ADCA1.VCR07.UINT32
ADCA1.VCR07.UINT16[L]
ADCA1.VCR07.UINT8[LL/LH]
ADCA1.VCR08.UINT32
ADCA1.VCR08.UINT16[L]
ADCA1.VCR08.UINT8[LL/LH]
ADCA1.VCR09.UINT32
ADCA1.VCR09.UINT16[L]
ADCA1.VCR09.UINT8[LL/LH]
ADCA1.VCR10.UINT32
ADCA1.VCR10.UINT16[L]
ADCA1.VCR10.UINT8[LL/LH]
ADCA1.VCR11.UINT32
ADCA1.VCR11.UINT16[L]
ADCA1.VCR11.UINT8[LL/LH]
ADCA1.VCR12.UINT32
ADCA1.VCR12.UINT16[L]
ADCA1.VCR12.UINT8[LL/LH]
ADCA1.VCR13.UINT32
ADCA1.VCR13.UINT16[L]
ADCA1.VCR13.UINT8[LL/LH]
ADCA1.VCR14.UINT32
ADCA1.VCR14.UINT16[L]
ADCA1.VCR14.UINT8[LL/LH]
ADCA1.VCR15.UINT32
ADCA1.VCR15.UINT16[L]
ADCA1.VCR15.UINT8[LL/LH]
ADCA1.VCR16.UINT32
ADCA1.VCR16.UINT16[L]
ADCA1.VCR16.UINT8[LL/LH]
ADCA1.VCR17.UINT32
ADCA1.VCR17.UINT16[L]
ADCA1.VCR17.UINT8[LL/LH]
ADCA1.VCR18.UINT32
ADCA1.VCR18.UINT16[L]
ADCA1.VCR18.UINT8[LL/LH]
ADCA1.VCR19.UINT32
ADCA1.VCR19.UINT16[L]
ADCA1.VCR19.UINT8[LL/LH]
ADCA1.VCR20.UINT32
ADCA1.VCR20.UINT16[L]
ADCA1.VCR20.UINT8[LL/LH]
ADCA1.VCR21.UINT32
ADCA1.VCR21.UINT16[L]
ADCA1.VCR21.UINT8[LL/LH]
ADCA1.VCR22.UINT32
ADCA1.VCR22.UINT16[L]
ADCA1.VCR22.UINT8[LL/LH]
ADCA1.VCR23.UINT32
ADCA1.VCR23.UINT16[L]
ADCA1.VCR23.UINT8[LL/LH]
ADCA1.VCR24.UINT32
ADCA1.VCR24.UINT16[L]
ADCA1.VCR24.UINT8[LL/LH]
ADCA1.VCR25.UINT32
ADCA1.VCR25.UINT16[L]
ADCA1.VCR25.UINT8[LL/LH]
ADCA1.VCR26.UINT32
ADCA1.VCR26.UINT16[L]
ADCA1.VCR26.UINT8[LL/LH]
ADCA1.VCR27.UINT32
ADCA1.VCR27.UINT16[L]
ADCA1.VCR27.UINT8[LL/LH]
ADCA1.VCR28.UINT32
ADCA1.VCR28.UINT16[L]
ADCA1.VCR28.UINT8[LL/LH]
ADCA1.VCR29.UINT32
ADCA1.VCR29.UINT16[L]
ADCA1.VCR29.UINT8[LL/LH]
ADCA1.VCR30.UINT32
ADCA1.VCR30.UINT16[L]
ADCA1.VCR30.UINT8[LL/LH]
ADCA1.VCR31.UINT32
ADCA1.VCR31.UINT16[L]
ADCA1.VCR31.UINT8[LL/LH]
ADCA1.VCR32.UINT32
ADCA1.VCR32.UINT16[L]
ADCA1.VCR32.UINT8[LL/LH]
ADCA1.VCR33.UINT32
ADCA1.VCR33.UINT16[L]
ADCA1.VCR33.UINT8[LL/LH]
ADCA1.VCR34.UINT32
ADCA1.VCR34.UINT16[L]
ADCA1.VCR34.UINT8[LL/LH]
ADCA1.VCR35.UINT32
ADCA1.VCR35.UINT16[L]
ADCA1.VCR35.UINT8[LL/LH]
ADCA1.PWDVCR.UINT32
ADCA1.PWDVCR.UINT16[L]
ADCA1.PWDVCR.UINT8[LL/LH]
ADCA1.DR00.UINT32
ADCA1.DR00.UINT16[L/H]
ADCA1.DR02.UINT32
ADCA1.DR02.UINT16[L/H]
ADCA1.DR04.UINT32
ADCA1.DR04.UINT16[L/H]
ADCA1.DR06.UINT32
ADCA1.DR06.UINT16[L/H]
ADCA1.DR08.UINT32
ADCA1.DR08.UINT16[L/H]
ADCA1.DR10.UINT32
ADCA1.DR10.UINT16[L/H]
ADCA1.DR12.UINT32
ADCA1.DR12.UINT16[L/H]
ADCA1.DR14.UINT32
ADCA1.DR14.UINT16[L/H]
ADCA1.DR16.UINT32
ADCA1.DR16.UINT16[L/H]
ADCA1.DR18.UINT32
ADCA1.DR18.UINT16[L/H]
ADCA1.DR20.UINT32
ADCA1.DR20.UINT16[L/H]
ADCA1.DR22.UINT32
ADCA1.DR22.UINT16[L/H]
ADCA1.DR24.UINT32
ADCA1.DR24.UINT16[L/H]
ADCA1.DR26.UINT32
ADCA1.DR26.UINT16[L/H]
ADCA1.DR28.UINT32
ADCA1.DR28.UINT16[L/H]
ADCA1.DR30.UINT32
ADCA1.DR30.UINT16[L/H]
ADCA1.DR32.UINT32
ADCA1.DR32.UINT16[L/H]
ADCA1.DR34.UINT32
ADCA1.DR34.UINT16[L/H]
ADCA1.PWDTSNDR.UINT32
ADCA1.PWDTSNDR.UINT16[H]
ADCA1.DIR00 ... ADCA1.DIR35
ADCA1.PWDDIR
ADCA1.ADHALTR.UINT32
ADCA1.ADHALTR.UINT16[L]
ADCA1.ADHALTR.UINT8[LL]
ADCA1.ADCR.UINT32
ADCA1.ADCR.UINT16[L]
ADCA1.ADCR.UINT8[LL]
ADCA1.SGSTR.UINT32
ADCA1.SGSTR.UINT16[L]
ADCA1.SFTCR.UINT32
ADCA1.SFTCR.UINT16[L]
ADCA1.SFTCR.UINT8[LL]
ADCA1.ULLMTBR0.UINT32
ADCA1.ULLMTBR0.UINT16[L/H]
ADCA1.ULLMTBR1.UINT32
ADCA1.ULLMTBR1.UINT16[L/H]
ADCA1.ULLMTBR2.UINT32
ADCA1.ULLMTBR2.UINT16[L/H]
ADCA1.ECR.UINT32
ADCA1.ECR.UINT16[L]
ADCA1.ECR.UINT8[LL]
ADCA1.ULER.UINT32
ADCA1.ULER.UINT16[L]
ADCA1.ULER.UINT8[LL/LH]
ADCA1.OWER.UINT32
ADCA1.OWER.UINT16[L]
ADCA1.OWER.UINT8[LL]
ADCA1.DGCTL0.UINT32
ADCA1.DGCTL0.UINT16[L]
ADCA1.DGCTL0.UINT8[LL]
ADCA1.DGCTL1.UINT32
ADCA1.DGCTL1.UINT16[L]
ADCA1.PDCTL1.UINT32
ADCA1.PDCTL1.UINT16[L]
ADCA1.PDCTL2.UINT32
ADCA1.PDCTL2.UINT16[L]
ADCA1.PDCTL2.UINT8[LL]
ADCA1.SMPCR.UINT32
ADCA1.SMPCR.UINT16[L]
ADCA1.SMPCR.UINT8[LL]
ADCA1.EMU
ADCA1.SGSTCR1.UINT32
ADCA1.SGSTCR1.UINT16[L]
ADCA1.SGSTCR1.UINT8[LL]
ADCA1.SGCR1.UINT32
ADCA1.SGCR1.UINT16[L]
ADCA1.SGCR1.UINT8[LL]
ADCA1.SGVCSP1.UINT32
ADCA1.SGVCSP1.UINT16[L]
ADCA1.SGVCSP1.UINT8[LL]
ADCA1.SGVCEP1.UINT32
ADCA1.SGVCEP1.UINT16[L]
ADCA1.SGVCEP1.UINT8[LL]
ADCA1.SGMCYCR1.UINT32
ADCA1.SGMCYCR1.UINT16[L]
ADCA1.SGMCYCR1.UINT8[LL]
ADCA1.SGSEFCR1.UINT32
ADCA1.SGSEFCR1.UINT16[L]
ADCA1.SGSEFCR1.UINT8[LL]
ADCA1.SGTSEL1.UINT32
ADCA1.SGTSEL1.UINT16[L]
ADCA1.SGSTCR2.UINT32
ADCA1.SGSTCR2.UINT16[L]
ADCA1.SGSTCR2.UINT8[LL]
ADCA1.SGCR2.UINT32
ADCA1.SGCR2.UINT16[L]
ADCA1.SGCR2.UINT8[LL]
ADCA1.SGVCSP2.UINT32
ADCA1.SGVCSP2.UINT16[L]
ADCA1.SGVCSP2.UINT8[LL]
ADCA1.SGVCEP2.UINT32
ADCA1.SGVCEP2.UINT16[L]
ADCA1.SGVCEP2.UINT8[LL]
ADCA1.SGMCYCR2.UINT32
ADCA1.SGMCYCR2.UINT16[L]
ADCA1.SGMCYCR2.UINT8[LL]
ADCA1.SGSEFCR2.UINT32
ADCA1.SGSEFCR2.UINT16[L]
ADCA1.SGSEFCR2.UINT8[LL]
ADCA1.SGTSEL2.UINT32
ADCA1.SGTSEL2.UINT16[L]
ADCA1.SGSTCR3.UINT32
ADCA1.SGSTCR3.UINT16[L]
ADCA1.SGSTCR3.UINT8[LL]
ADCA1.SGCR3.UINT32
ADCA1.SGCR3.UINT16[L]
ADCA1.SGCR3.UINT8[LL]
ADCA1.SGVCSP3.UINT32
ADCA1.SGVCSP3.UINT16[L]
ADCA1.SGVCSP3.UINT8[LL]
ADCA1.SGVCEP3.UINT32
ADCA1.SGVCEP3.UINT16[L]
ADCA1.SGVCEP3.UINT8[LL]
ADCA1.SGMCYCR3.UINT32
ADCA1.SGMCYCR3.UINT16[L]
ADCA1.SGMCYCR3.UINT8[LL]
ADCA1.SGSEFCR3.UINT32
ADCA1.SGSEFCR3.UINT16[L]
ADCA1.SGSEFCR3.UINT8[LL]
ADCA1.SGTSEL3.UINT32
ADCA1.SGTSEL3.UINT16[L]
ADCA1.PWDSGCR.UINT32
ADCA1.PWDSGCR.UINT16[L]
ADCA1.PWDSGCR.UINT8[LL]
ADCA1.PWDSGSEFCR.UINT32
ADCA1.PWDSGSEFCR.UINT16[L]
ADCA1.PWDSGSEFCR.UINT8[LL]
OSTM0.CMP
OSTM0.CNT
OSTM0.TE
OSTM0.TS
OSTM0.TT
OSTM0.CTL
OSTM0.EMU
OSTM1.CMP
OSTM1.CNT
OSTM1.TE
OSTM1.TS
OSTM1.TT
OSTM1.CTL
OSTM1.EMU
OSTM2.CMP
OSTM2.CNT
OSTM2.TE
OSTM2.TS
OSTM2.TT
OSTM2.CTL
OSTM2.EMU
OSTM3.CMP
OSTM3.CNT
OSTM3.TE
OSTM3.TS
OSTM3.TT
OSTM3.CTL
OSTM3.EMU
OSTM4.CMP
OSTM4.CNT
OSTM4.TE
OSTM4.TS
OSTM4.TT
OSTM4.CTL
OSTM4.EMU
CSIH0.CTL0
CSIH0.STR0
CSIH0.STCR0
CSIH0.CTL1
CSIH0.CTL2
CSIH0.EMU.UINT8
CSIH0.EMU.BIT.SVSDIS
CSIH0.MCTL1
CSIH0.MCTL2
CSIH0.TX0W
CSIH0.TX0H
CSIH0.RX0W
CSIH0.RX0H
CSIH0.MRWP0
CSIH0.MCTL0
CSIH0.CFG0 ... CSIH0.CFG7
CSIH0.BRS0 ... CSIH0.BRS3
CSIH1.CTL0
CSIH1.STR0
CSIH1.STCR0
CSIH1.CTL1
CSIH1.CTL2
CSIH1.EMU.UINT8
CSIH1.EMU.BIT.SVSDIS
CSIH1.MCTL1
CSIH1.MCTL2
CSIH1.TX0W
CSIH1.TX0H
CSIH1.RX0W
CSIH1.RX0H
CSIH1.MRWP0
CSIH1.MCTL0
CSIH1.CFG0 ... CSIH1.CFG5
CSIH1.BRS0 ... CSIH1.BRS3
CSIH2.CTL0
CSIH2.STR0
CSIH2.STCR0
CSIH2.CTL1
CSIH2.CTL2
CSIH2.EMU.UINT8
CSIH2.EMU.BIT.SVSDIS
CSIH2.MCTL1
CSIH2.MCTL2
CSIH2.TX0W
CSIH2.TX0H
CSIH2.RX0W
CSIH2.RX0H
CSIH2.MRWP0
CSIH2.MCTL0
CSIH2.CFG0 ... CSIH2.CFG5
CSIH2.BRS0 ... CSIH2.BRS3
CSIH3.CTL0
CSIH3.STR0
CSIH3.STCR0
CSIH3.CTL1
CSIH3.CTL2
CSIH3.EMU.UINT8
CSIH3.EMU.BIT.SVSDIS
CSIH3.MCTL1
CSIH3.MCTL2
CSIH3.TX0W
CSIH3.TX0H
CSIH3.RX0W
CSIH3.RX0H
CSIH3.MRWP0
CSIH3.MCTL0
CSIH3.CFG0 ... CSIH3.CFG3
CSIH3.BRS0 ... CSIH3.BRS3
CSIG0.CTL0
CSIG0.STR0
CSIG0.STCR0
CSIG0.CTL1
CSIG0.CTL2
CSIG0.EMU.UINT8
CSIG0.EMU.BIT.SVSDIS
CSIG0.BCTL0.UINT8
CSIG0.BCTL0.BIT.SCE
CSIG0.TX0W
CSIG0.TX0H
CSIG0.RX0
CSIG0.CFG0
CSIG1.CTL0
CSIG1.STR0
CSIG1.STCR0
CSIG1.CTL1
CSIG1.CTL2
CSIG1.EMU.UINT8
CSIG1.EMU.BIT.SVSDIS
CSIG1.BCTL0.UINT8
CSIG1.BCTL0.BIT.SCE
CSIG1.TX0W
CSIG1.TX0H
CSIG1.RX0
CSIG1.CFG0
PIC0.SST
PIC0.SSER0
PIC0.SSER2
PIC0.HIZCEN0
PIC0.ADTEN400 ... PIC0.ADTEN402
PIC0.REG200 ... PIC0.REG203
PIC0.REG30
PIC0.REG31
PBG20.FSGD02PROT0.UINT32
PBG20.FSGD02PROT0.UINT16[L/H]
PBG20.FSGD02PROT0.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT1.UINT32
PBG20.FSGD02PROT1.UINT16[L/H]
PBG20.FSGD02PROT1.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT2.UINT32
PBG20.FSGD02PROT2.UINT16[L/H]
PBG20.FSGD02PROT2.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT3.UINT32
PBG20.FSGD02PROT3.UINT16[L/H]
PBG20.FSGD02PROT3.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT4.UINT32
PBG20.FSGD02PROT4.UINT16[L/H]
PBG20.FSGD02PROT4.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT5.UINT32
PBG20.FSGD02PROT5.UINT16[L/H]
PBG20.FSGD02PROT5.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT6.UINT32
PBG20.FSGD02PROT6.UINT16[L/H]
PBG20.FSGD02PROT6.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT8.UINT32
PBG20.FSGD02PROT8.UINT16[L/H]
PBG20.FSGD02PROT8.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT9.UINT32
PBG20.FSGD02PROT9.UINT16[L/H]
PBG20.FSGD02PROT9.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT10.UINT32
PBG20.FSGD02PROT10.UINT16[L/H]
PBG20.FSGD02PROT10.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT11.UINT32
PBG20.FSGD02PROT11.UINT16[L/H]
PBG20.FSGD02PROT11.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT12.UINT32
PBG20.FSGD02PROT12.UINT16[L/H]
PBG20.FSGD02PROT12.UINT8[LL/LH/HL/HH]
PBG20.FSGD02PROT14.UINT32
PBG20.FSGD02PROT14.UINT16[L/H]
PBG20.FSGD02PROT14.UINT8[LL/LH/HL/HH]
PBG20.ERRSLV02CTL.UINT32
PBG20.ERRSLV02CTL.UINT16[L]
PBG20.ERRSLV02CTL.UINT8[LL]
PBG20.ERRSLV02STAT.UINT32
PBG20.ERRSLV02STAT.UINT16[L]
PBG20.ERRSLV02STAT.UINT8[LL]
PBG20.ERRSLV02ADDR
PBG20.ERRSLV02TYPE.UINT32
PBG20.ERRSLV02TYPE.UINT16[L]
PBG21.FSGD09PROT0.UINT32
PBG21.FSGD09PROT0.UINT16[L/H]
PBG21.FSGD09PROT0.UINT8[LL/LH/HL/HH]
PBG21.FSGD09PROT1.UINT32
PBG21.FSGD09PROT1.UINT16[L/H]
PBG21.FSGD09PROT1.UINT8[LL/LH/HL/HH]
PBG21.ERRSLV09CTL.UINT32
PBG21.ERRSLV09CTL.UINT16[L]
PBG21.ERRSLV09CTL.UINT8[LL]
PBG21.ERRSLV09STAT.UINT32
PBG21.ERRSLV09STAT.UINT16[L]
PBG21.ERRSLV09STAT.UINT8[LL]
PBG21.ERRSLV09ADDR
PBG21.ERRSLV09TYPE.UINT32
PBG21.ERRSLV09TYPE.UINT16[L]
TAUD0.CDR0 ... TAUD0.CDR15
TAUD0.TOL
TAUD0.RDT
TAUD0.RSF
TAUD0.TRO
TAUD0.TME
TAUD0.TDL
TAUD0.TO
TAUD0.TOE
TAUD0.CNT0 ... TAUD0.CNT15
TAUD0.CMUR0 ... TAUD0.CMUR15
TAUD0.CSR0 ... TAUD0.CSR15
TAUD0.CSC0 ... TAUD0.CSC15
TAUD0.TE
TAUD0.TS
TAUD0.TT
TAUD0.CMOR0 ... TAUD0.CMOR15
TAUD0.TPS
TAUD0.BRS
TAUD0.TOM
TAUD0.TOC
TAUD0.TDE
TAUD0.TDM
TAUD0.TRE
TAUD0.TRC
TAUD0.RDE
TAUD0.RDM
TAUD0.RDS
TAUD0.RDC
TAUD0.EMU
SL_TAUD0.SELB_TAUD0I
TAUB0.CDR0 ... TAUB0.CDR15
TAUB0.TOL
TAUB0.RDT
TAUB0.RSF
TAUB0.TDL
TAUB0.TO
TAUB0.TOE
TAUB0.CNT0 ... TAUB0.CNT15
TAUB0.CMUR0 ... TAUB0.CMUR15
TAUB0.CSR0 ... TAUB0.CSR15
TAUB0.CSC0 ... TAUB0.CSC15
TAUB0.TE
TAUB0.TS
TAUB0.TT
TAUB0.CMOR0 ... TAUB0.CMOR15
TAUB0.TPS
TAUB0.TOM
TAUB0.TOC
TAUB0.TDE
TAUB0.RDE
TAUB0.RDM
TAUB0.RDS
TAUB0.RDC
TAUB0.EMU
TAUJ0.CDR0 ... TAUJ0.CDR3
TAUJ0.CNT0 ... TAUJ0.CNT3
TAUJ0.CMUR0 ... TAUJ0.CMUR3
TAUJ0.CSR0 ... TAUJ0.CSR3
TAUJ0.CSC0 ... TAUJ0.CSC3
TAUJ0.TE
TAUJ0.TS
TAUJ0.TT
TAUJ0.TO
TAUJ0.TOE
TAUJ0.TOL
TAUJ0.RDT
TAUJ0.RSF
TAUJ0.CMOR0 ... TAUJ0.CMOR3
TAUJ0.TPS
TAUJ0.BRS
TAUJ0.TOM
TAUJ0.TOC
TAUJ0.RDE
TAUJ0.RDM
TAUJ0.EMU
TAUJ1.CDR0 ... TAUJ1.CDR3
TAUJ1.CNT0 ... TAUJ1.CNT3
TAUJ1.CMUR0 ... TAUJ1.CMUR3
TAUJ1.CSR0 ... TAUJ1.CSR3
TAUJ1.CSC0 ... TAUJ1.CSC3
TAUJ1.TE
TAUJ1.TS
TAUJ1.TT
TAUJ1.TO
TAUJ1.TOE
TAUJ1.TOL
TAUJ1.RDT
TAUJ1.RSF
TAUJ1.CMOR0 ... TAUJ1.CMOR3
TAUJ1.TPS
TAUJ1.BRS
TAUJ1.TOM
TAUJ1.TOC
TAUJ1.RDE
TAUJ1.RDM
TAUJ1.EMU
SL_TAUJ0.SELB_TAUJ0I
PWSA0.CTL
PWSA0.STR
PWSA0.STC
PWSA0.EMU
PWSA0.QUE0 ... PWSA0.QUE7
PWSA0.PVCR00_01
PWSA0.PVCR02_03
PWSA0.PVCR04_05
PWSA0.PVCR06_07
PWSA0.PVCR08_09
PWSA0.PVCR10_11
PWSA0.PVCR12_13
PWSA0.PVCR14_15
PWSA0.PVCR16_17
PWSA0.PVCR18_19
PWSA0.PVCR20_21
PWSA0.PVCR22_23
PWSA0.PVCR24_25
PWSA0.PVCR26_27
PWSA0.PVCR28_29
PWSA0.PVCR30_31
PWSA0.PVCR32_33
PWSA0.PVCR34_35
PWSA0.PVCR36_37
PWSA0.PVCR38_39
PWSA0.PVCR40_41
PWSA0.PVCR42_43
PWSA0.PVCR44_45
PWSA0.PVCR46_47
PWSA0.PVCR48_49
PWSA0.PVCR50_51
PWSA0.PVCR52_53
PWSA0.PVCR54_55
PWSA0.PVCR56_57
PWSA0.PVCR58_59
PWSA0.PVCR60_61
PWSA0.PVCR62_63
PWGA0.CSDR
PWGA0.CRDR
PWGA0.CTDR
PWGA0.RDT
PWGA0.RSF
PWGA0.CNT
PWGA0.CTL
PWGA0.CSBR
PWGA0.CRBR
PWGA0.CTBR
PWGA1.CSDR
PWGA1.CRDR
PWGA1.CTDR
PWGA1.RDT
PWGA1.RSF
PWGA1.CNT
PWGA1.CTL
PWGA1.CSBR
PWGA1.CRBR
PWGA1.CTBR
PWGA2.CSDR
PWGA2.CRDR
PWGA2.CTDR
PWGA2.RDT
PWGA2.RSF
PWGA2.CNT
PWGA2.CTL
PWGA2.CSBR
PWGA2.CRBR
PWGA2.CTBR
PWGA3.CSDR
PWGA3.CRDR
PWGA3.CTDR
PWGA3.RDT
PWGA3.RSF
PWGA3.CNT
PWGA3.CTL
PWGA3.CSBR
PWGA3.CRBR
PWGA3.CTBR
PWGA4.CSDR
PWGA4.CRDR
PWGA4.CTDR
PWGA4.RDT
PWGA4.RSF
PWGA4.CNT
PWGA4.CTL
PWGA4.CSBR
PWGA4.CRBR
PWGA4.CTBR
PWGA5.CSDR
PWGA5.CRDR
PWGA5.CTDR
PWGA5.RDT
PWGA5.RSF
PWGA5.CNT
PWGA5.CTL
PWGA5.CSBR
PWGA5.CRBR
PWGA5.CTBR
PWGA6.CSDR
PWGA6.CRDR
PWGA6.CTDR
PWGA6.RDT
PWGA6.RSF
PWGA6.CNT
PWGA6.CTL
PWGA6.CSBR
PWGA6.CRBR
PWGA6.CTBR
PWGA7.CSDR
PWGA7.CRDR
PWGA7.CTDR
PWGA7.RDT
PWGA7.RSF
PWGA7.CNT
PWGA7.CTL
PWGA7.CSBR
PWGA7.CRBR
PWGA7.CTBR
PWGA8.CSDR
PWGA8.CRDR
PWGA8.CTDR
PWGA8.RDT
PWGA8.RSF
PWGA8.CNT
PWGA8.CTL
PWGA8.CSBR
PWGA8.CRBR
PWGA8.CTBR
PWGA9.CSDR
PWGA9.CRDR
PWGA9.CTDR
PWGA9.RDT
PWGA9.RSF
PWGA9.CNT
PWGA9.CTL
PWGA9.CSBR
PWGA9.CRBR
PWGA9.CTBR
PWGA10.CSDR
PWGA10.CRDR
PWGA10.CTDR
PWGA10.RDT
PWGA10.RSF
PWGA10.CNT
PWGA10.CTL
PWGA10.CSBR
PWGA10.CRBR
PWGA10.CTBR
PWGA11.CSDR
PWGA11.CRDR
PWGA11.CTDR
PWGA11.RDT
PWGA11.RSF
PWGA11.CNT
PWGA11.CTL
PWGA11.CSBR
PWGA11.CRBR
PWGA11.CTBR
PWGA12.CSDR
PWGA12.CRDR
PWGA12.CTDR
PWGA12.RDT
PWGA12.RSF
PWGA12.CNT
PWGA12.CTL
PWGA12.CSBR
PWGA12.CRBR
PWGA12.CTBR
PWGA13.CSDR
PWGA13.CRDR
PWGA13.CTDR
PWGA13.RDT
PWGA13.RSF
PWGA13.CNT
PWGA13.CTL
PWGA13.CSBR
PWGA13.CRBR
PWGA13.CTBR
PWGA14.CSDR
PWGA14.CRDR
PWGA14.CTDR
PWGA14.RDT
PWGA14.RSF
PWGA14.CNT
PWGA14.CTL
PWGA14.CSBR
PWGA14.CRBR
PWGA14.CTBR
PWGA15.CSDR
PWGA15.CRDR
PWGA15.CTDR
PWGA15.RDT
PWGA15.RSF
PWGA15.CNT
PWGA15.CTL
PWGA15.CSBR
PWGA15.CRBR
PWGA15.CTBR
PWGA16.CSDR
PWGA16.CRDR
PWGA16.CTDR
PWGA16.RDT
PWGA16.RSF
PWGA16.CNT
PWGA16.CTL
PWGA16.CSBR
PWGA16.CRBR
PWGA16.CTBR
PWGA17.CSDR
PWGA17.CRDR
PWGA17.CTDR
PWGA17.RDT
PWGA17.RSF
PWGA17.CNT
PWGA17.CTL
PWGA17.CSBR
PWGA17.CRBR
PWGA17.CTBR
PWGA18.CSDR
PWGA18.CRDR
PWGA18.CTDR
PWGA18.RDT
PWGA18.RSF
PWGA18.CNT
PWGA18.CTL
PWGA18.CSBR
PWGA18.CRBR
PWGA18.CTBR
PWGA19.CSDR
PWGA19.CRDR
PWGA19.CTDR
PWGA19.RDT
PWGA19.RSF
PWGA19.CNT
PWGA19.CTL
PWGA19.CSBR
PWGA19.CRBR
PWGA19.CTBR
PWGA20.CSDR
PWGA20.CRDR
PWGA20.CTDR
PWGA20.RDT
PWGA20.RSF
PWGA20.CNT
PWGA20.CTL
PWGA20.CSBR
PWGA20.CRBR
PWGA20.CTBR
PWGA21.CSDR
PWGA21.CRDR
PWGA21.CTDR
PWGA21.RDT
PWGA21.RSF
PWGA21.CNT
PWGA21.CTL
PWGA21.CSBR
PWGA21.CRBR
PWGA21.CTBR
PWGA22.CSDR
PWGA22.CRDR
PWGA22.CTDR
PWGA22.RDT
PWGA22.RSF
PWGA22.CNT
PWGA22.CTL
PWGA22.CSBR
PWGA22.CRBR
PWGA22.CTBR
PWGA23.CSDR
PWGA23.CRDR
PWGA23.CTDR
PWGA23.RDT
PWGA23.RSF
PWGA23.CNT
PWGA23.CTL
PWGA23.CSBR
PWGA23.CRBR
PWGA23.CTBR
PWGA24.CSDR
PWGA24.CRDR
PWGA24.CTDR
PWGA24.RDT
PWGA24.RSF
PWGA24.CNT
PWGA24.CTL
PWGA24.CSBR
PWGA24.CRBR
PWGA24.CTBR
PWGA25.CSDR
PWGA25.CRDR
PWGA25.CTDR
PWGA25.RDT
PWGA25.RSF
PWGA25.CNT
PWGA25.CTL
PWGA25.CSBR
PWGA25.CRBR
PWGA25.CTBR
PWGA26.CSDR
PWGA26.CRDR
PWGA26.CTDR
PWGA26.RDT
PWGA26.RSF
PWGA26.CNT
PWGA26.CTL
PWGA26.CSBR
PWGA26.CRBR
PWGA26.CTBR
PWGA27.CSDR
PWGA27.CRDR
PWGA27.CTDR
PWGA27.RDT
PWGA27.RSF
PWGA27.CNT
PWGA27.CTL
PWGA27.CSBR
PWGA27.CRBR
PWGA27.CTBR
PWGA28.CSDR
PWGA28.CRDR
PWGA28.CTDR
PWGA28.RDT
PWGA28.RSF
PWGA28.CNT
PWGA28.CTL
PWGA28.CSBR
PWGA28.CRBR
PWGA28.CTBR
PWGA29.CSDR
PWGA29.CRDR
PWGA29.CTDR
PWGA29.RDT
PWGA29.RSF
PWGA29.CNT
PWGA29.CTL
PWGA29.CSBR
PWGA29.CRBR
PWGA29.CTBR
PWGA30.CSDR
PWGA30.CRDR
PWGA30.CTDR
PWGA30.RDT
PWGA30.RSF
PWGA30.CNT
PWGA30.CTL
PWGA30.CSBR
PWGA30.CRBR
PWGA30.CTBR
PWGA31.CSDR
PWGA31.CRDR
PWGA31.CTDR
PWGA31.RDT
PWGA31.RSF
PWGA31.CNT
PWGA31.CTL
PWGA31.CSBR
PWGA31.CRBR
PWGA31.CTBR
PWGA32.CSDR
PWGA32.CRDR
PWGA32.CTDR
PWGA32.RDT
PWGA32.RSF
PWGA32.CNT
PWGA32.CTL
PWGA32.CSBR
PWGA32.CRBR
PWGA32.CTBR
PWGA33.CSDR
PWGA33.CRDR
PWGA33.CTDR
PWGA33.RDT
PWGA33.RSF
PWGA33.CNT
PWGA33.CTL
PWGA33.CSBR
PWGA33.CRBR
PWGA33.CTBR
PWGA34.CSDR
PWGA34.CRDR
PWGA34.CTDR
PWGA34.RDT
PWGA34.RSF
PWGA34.CNT
PWGA34.CTL
PWGA34.CSBR
PWGA34.CRBR
PWGA34.CTBR
PWGA35.CSDR
PWGA35.CRDR
PWGA35.CTDR
PWGA35.RDT
PWGA35.RSF
PWGA35.CNT
PWGA35.CTL
PWGA35.CSBR
PWGA35.CRBR
PWGA35.CTBR
PWGA36.CSDR
PWGA36.CRDR
PWGA36.CTDR
PWGA36.RDT
PWGA36.RSF
PWGA36.CNT
PWGA36.CTL
PWGA36.CSBR
PWGA36.CRBR
PWGA36.CTBR
PWGA37.CSDR
PWGA37.CRDR
PWGA37.CTDR
PWGA37.RDT
PWGA37.RSF
PWGA37.CNT
PWGA37.CTL
PWGA37.CSBR
PWGA37.CRBR
PWGA37.CTBR
PWGA38.CSDR
PWGA38.CRDR
PWGA38.CTDR
PWGA38.RDT
PWGA38.RSF
PWGA38.CNT
PWGA38.CTL
PWGA38.CSBR
PWGA38.CRBR
PWGA38.CTBR
PWGA39.CSDR
PWGA39.CRDR
PWGA39.CTDR
PWGA39.RDT
PWGA39.RSF
PWGA39.CNT
PWGA39.CTL
PWGA39.CSBR
PWGA39.CRBR
PWGA39.CTBR
PWGA40.CSDR
PWGA40.CRDR
PWGA40.CTDR
PWGA40.RDT
PWGA40.RSF
PWGA40.CNT
PWGA40.CTL
PWGA40.CSBR
PWGA40.CRBR
PWGA40.CTBR
PWGA41.CSDR
PWGA41.CRDR
PWGA41.CTDR
PWGA41.RDT
PWGA41.RSF
PWGA41.CNT
PWGA41.CTL
PWGA41.CSBR
PWGA41.CRBR
PWGA41.CTBR
PWGA42.CSDR
PWGA42.CRDR
PWGA42.CTDR
PWGA42.RDT
PWGA42.RSF
PWGA42.CNT
PWGA42.CTL
PWGA42.CSBR
PWGA42.CRBR
PWGA42.CTBR
PWGA43.CSDR
PWGA43.CRDR
PWGA43.CTDR
PWGA43.RDT
PWGA43.RSF
PWGA43.CNT
PWGA43.CTL
PWGA43.CSBR
PWGA43.CRBR
PWGA43.CTBR
PWGA44.CSDR
PWGA44.CRDR
PWGA44.CTDR
PWGA44.RDT
PWGA44.RSF
PWGA44.CNT
PWGA44.CTL
PWGA44.CSBR
PWGA44.CRBR
PWGA44.CTBR
PWGA45.CSDR
PWGA45.CRDR
PWGA45.CTDR
PWGA45.RDT
PWGA45.RSF
PWGA45.CNT
PWGA45.CTL
PWGA45.CSBR
PWGA45.CRBR
PWGA45.CTBR
PWGA46.CSDR
PWGA46.CRDR
PWGA46.CTDR
PWGA46.RDT
PWGA46.RSF
PWGA46.CNT
PWGA46.CTL
PWGA46.CSBR
PWGA46.CRBR
PWGA46.CTBR
PWGA47.CSDR
PWGA47.CRDR
PWGA47.CTDR
PWGA47.RDT
PWGA47.RSF
PWGA47.CNT
PWGA47.CTL
PWGA47.CSBR
PWGA47.CRBR
PWGA47.CTBR
PWGA48.CSDR
PWGA48.CRDR
PWGA48.CTDR
PWGA48.RDT
PWGA48.RSF
PWGA48.CNT
PWGA48.CTL
PWGA48.CSBR
PWGA48.CRBR
PWGA48.CTBR
PWGA49.CSDR
PWGA49.CRDR
PWGA49.CTDR
PWGA49.RDT
PWGA49.RSF
PWGA49.CNT
PWGA49.CTL
PWGA49.CSBR
PWGA49.CRBR
PWGA49.CTBR
PWGA50.CSDR
PWGA50.CRDR
PWGA50.CTDR
PWGA50.RDT
PWGA50.RSF
PWGA50.CNT
PWGA50.CTL
PWGA50.CSBR
PWGA50.CRBR
PWGA50.CTBR
PWGA51.CSDR
PWGA51.CRDR
PWGA51.CTDR
PWGA51.RDT
PWGA51.RSF
PWGA51.CNT
PWGA51.CTL
PWGA51.CSBR
PWGA51.CRBR
PWGA51.CTBR
PWGA52.CSDR
PWGA52.CRDR
PWGA52.CTDR
PWGA52.RDT
PWGA52.RSF
PWGA52.CNT
PWGA52.CTL
PWGA52.CSBR
PWGA52.CRBR
PWGA52.CTBR
PWGA53.CSDR
PWGA53.CRDR
PWGA53.CTDR
PWGA53.RDT
PWGA53.RSF
PWGA53.CNT
PWGA53.CTL
PWGA53.CSBR
PWGA53.CRBR
PWGA53.CTBR
PWGA54.CSDR
PWGA54.CRDR
PWGA54.CTDR
PWGA54.RDT
PWGA54.RSF
PWGA54.CNT
PWGA54.CTL
PWGA54.CSBR
PWGA54.CRBR
PWGA54.CTBR
PWGA55.CSDR
PWGA55.CRDR
PWGA55.CTDR
PWGA55.RDT
PWGA55.RSF
PWGA55.CNT
PWGA55.CTL
PWGA55.CSBR
PWGA55.CRBR
PWGA55.CTBR
PWGA56.CSDR
PWGA56.CRDR
PWGA56.CTDR
PWGA56.RDT
PWGA56.RSF
PWGA56.CNT
PWGA56.CTL
PWGA56.CSBR
PWGA56.CRBR
PWGA56.CTBR
PWGA57.CSDR
PWGA57.CRDR
PWGA57.CTDR
PWGA57.RDT
PWGA57.RSF
PWGA57.CNT
PWGA57.CTL
PWGA57.CSBR
PWGA57.CRBR
PWGA57.CTBR
PWGA58.CSDR
PWGA58.CRDR
PWGA58.CTDR
PWGA58.RDT
PWGA58.RSF
PWGA58.CNT
PWGA58.CTL
PWGA58.CSBR
PWGA58.CRBR
PWGA58.CTBR
PWGA59.CSDR
PWGA59.CRDR
PWGA59.CTDR
PWGA59.RDT
PWGA59.RSF
PWGA59.CNT
PWGA59.CTL
PWGA59.CSBR
PWGA59.CRBR
PWGA59.CTBR
PWGA60.CSDR
PWGA60.CRDR
PWGA60.CTDR
PWGA60.RDT
PWGA60.RSF
PWGA60.CNT
PWGA60.CTL
PWGA60.CSBR
PWGA60.CRBR
PWGA60.CTBR
PWGA61.CSDR
PWGA61.CRDR
PWGA61.CTDR
PWGA61.RDT
PWGA61.RSF
PWGA61.CNT
PWGA61.CTL
PWGA61.CSBR
PWGA61.CRBR
PWGA61.CTBR
PWGA62.CSDR
PWGA62.CRDR
PWGA62.CTDR
PWGA62.RDT
PWGA62.RSF
PWGA62.CNT
PWGA62.CTL
PWGA62.CSBR
PWGA62.CRBR
PWGA62.CTBR
PWGA63.CSDR
PWGA63.CRDR
PWGA63.CTDR
PWGA63.RDT
PWGA63.RSF
PWGA63.CNT
PWGA63.CTL
PWGA63.CSBR
PWGA63.CRBR
PWGA63.CTBR
PWBA0.BRS0 ... PWBA0.BRS3
PWBA0.TE
PWBA0.TS
PWBA0.TT
PWBA0.EMU
SLPWG.A0
SLPWG.A1
RTCA0.CTL0.UINT8
RTCA0.CTL0.BIT.SLSB
RTCA0.CTL0.BIT.AMPM
RTCA0.CTL0.BIT.CEST
RTCA0.CTL0.BIT.CE
RTCA0.CTL1.UINT8
RTCA0.CTL1.BIT.CT0 ... RTCA0.CTL1.BIT.CT2
RTCA0.CTL1.BIT.EN1S
RTCA0.CTL1.BIT.ENALM
RTCA0.CTL1.BIT.EN1HZ
RTCA0.CTL2.UINT8
RTCA0.CTL2.BIT.WAIT
RTCA0.CTL2.BIT.WST
RTCA0.CTL2.BIT.RSUB
RTCA0.CTL2.BIT.RSST
RTCA0.CTL2.BIT.WSST
RTCA0.CTL2.BIT.WUST
RTCA0.SUBC
RTCA0.SRBU
RTCA0.SEC
RTCA0.MIN
RTCA0.HOUR
RTCA0.WEEK
RTCA0.DAY
RTCA0.MONTH
RTCA0.YEAR
RTCA0.TIME
RTCA0.CAL
RTCA0.SUBU
RTCA0.SCMP
RTCA0.ALM
RTCA0.ALH
RTCA0.ALW
RTCA0.SECC
RTCA0.MINC
RTCA0.HOURC
RTCA0.WEEKC
RTCA0.DAYC
RTCA0.MONC
RTCA0.YEARC
RTCA0.TIMEC
RTCA0.CALC
RTCA0.EMU.UINT8
RTCA0.EMU.BIT.SVSDIS
ENCA0.CCR0
ENCA0.CCR1
ENCA0.CNT
ENCA0.FLG
ENCA0.FGC
ENCA0.TE
ENCA0.TS
ENCA0.TT
ENCA0.IOC0
ENCA0.CTL
ENCA0.IOC1
ENCA0.EMU
TAPA0.FLG
TAPA0.ACWE
TAPA0.ACTS
TAPA0.ACTT
TAPA0.OPHS
TAPA0.OPHT
TAPA0.CTL0
TAPA0.CTL1
TAPA0.EMU
WDTA0.WDTE
WDTA0.EVAC
WDTA0.REF
WDTA0.MD
WDTA1.WDTE
WDTA1.EVAC
WDTA1.REF
WDTA1.MD
ADCA0.VCR00.UINT32
ADCA0.VCR00.UINT16[L]
ADCA0.VCR00.UINT8[LL/LH]
ADCA0.VCR01.UINT32
ADCA0.VCR01.UINT16[L]
ADCA0.VCR01.UINT8[LL/LH]
ADCA0.VCR02.UINT32
ADCA0.VCR02.UINT16[L]
ADCA0.VCR02.UINT8[LL/LH]
ADCA0.VCR03.UINT32
ADCA0.VCR03.UINT16[L]
ADCA0.VCR03.UINT8[LL/LH]
ADCA0.VCR04.UINT32
ADCA0.VCR04.UINT16[L]
ADCA0.VCR04.UINT8[LL/LH]
ADCA0.VCR05.UINT32
ADCA0.VCR05.UINT16[L]
ADCA0.VCR05.UINT8[LL/LH]
ADCA0.VCR06.UINT32
ADCA0.VCR06.UINT16[L]
ADCA0.VCR06.UINT8[LL/LH]
ADCA0.VCR07.UINT32
ADCA0.VCR07.UINT16[L]
ADCA0.VCR07.UINT8[LL/LH]
ADCA0.VCR08.UINT32
ADCA0.VCR08.UINT16[L]
ADCA0.VCR08.UINT8[LL/LH]
ADCA0.VCR09.UINT32
ADCA0.VCR09.UINT16[L]
ADCA0.VCR09.UINT8[LL/LH]
ADCA0.VCR10.UINT32
ADCA0.VCR10.UINT16[L]
ADCA0.VCR10.UINT8[LL/LH]
ADCA0.VCR11.UINT32
ADCA0.VCR11.UINT16[L]
ADCA0.VCR11.UINT8[LL/LH]
ADCA0.VCR12.UINT32
ADCA0.VCR12.UINT16[L]
ADCA0.VCR12.UINT8[LL/LH]
ADCA0.VCR13.UINT32
ADCA0.VCR13.UINT16[L]
ADCA0.VCR13.UINT8[LL/LH]
ADCA0.VCR14.UINT32
ADCA0.VCR14.UINT16[L]
ADCA0.VCR14.UINT8[LL/LH]
ADCA0.VCR15.UINT32
ADCA0.VCR15.UINT16[L]
ADCA0.VCR15.UINT8[LL/LH]
ADCA0.VCR16.UINT32
ADCA0.VCR16.UINT16[L]
ADCA0.VCR16.UINT8[LL/LH]
ADCA0.VCR17.UINT32
ADCA0.VCR17.UINT16[L]
ADCA0.VCR17.UINT8[LL/LH]
ADCA0.VCR18.UINT32
ADCA0.VCR18.UINT16[L]
ADCA0.VCR18.UINT8[LL/LH]
ADCA0.VCR19.UINT32
ADCA0.VCR19.UINT16[L]
ADCA0.VCR19.UINT8[LL/LH]
ADCA0.VCR20.UINT32
ADCA0.VCR20.UINT16[L]
ADCA0.VCR20.UINT8[LL/LH]
ADCA0.VCR21.UINT32
ADCA0.VCR21.UINT16[L]
ADCA0.VCR21.UINT8[LL/LH]
ADCA0.VCR22.UINT32
ADCA0.VCR22.UINT16[L]
ADCA0.VCR22.UINT8[LL/LH]
ADCA0.VCR23.UINT32
ADCA0.VCR23.UINT16[L]
ADCA0.VCR23.UINT8[LL/LH]
ADCA0.VCR24.UINT32
ADCA0.VCR24.UINT16[L]
ADCA0.VCR24.UINT8[LL/LH]
ADCA0.VCR25.UINT32
ADCA0.VCR25.UINT16[L]
ADCA0.VCR25.UINT8[LL/LH]
ADCA0.VCR26.UINT32
ADCA0.VCR26.UINT16[L]
ADCA0.VCR26.UINT8[LL/LH]
ADCA0.VCR27.UINT32
ADCA0.VCR27.UINT16[L]
ADCA0.VCR27.UINT8[LL/LH]
ADCA0.VCR28.UINT32
ADCA0.VCR28.UINT16[L]
ADCA0.VCR28.UINT8[LL/LH]
ADCA0.VCR29.UINT32
ADCA0.VCR29.UINT16[L]
ADCA0.VCR29.UINT8[LL/LH]
ADCA0.VCR30.UINT32
ADCA0.VCR30.UINT16[L]
ADCA0.VCR30.UINT8[LL/LH]
ADCA0.VCR31.UINT32
ADCA0.VCR31.UINT16[L]
ADCA0.VCR31.UINT8[LL/LH]
ADCA0.VCR32.UINT32
ADCA0.VCR32.UINT16[L]
ADCA0.VCR32.UINT8[LL/LH]
ADCA0.VCR33.UINT32
ADCA0.VCR33.UINT16[L]
ADCA0.VCR33.UINT8[LL/LH]
ADCA0.VCR34.UINT32
ADCA0.VCR34.UINT16[L]
ADCA0.VCR34.UINT8[LL/LH]
ADCA0.VCR35.UINT32
ADCA0.VCR35.UINT16[L]
ADCA0.VCR35.UINT8[LL/LH]
ADCA0.VCR36.UINT32
ADCA0.VCR36.UINT16[L]
ADCA0.VCR36.UINT8[LL/LH]
ADCA0.VCR37.UINT32
ADCA0.VCR37.UINT16[L]
ADCA0.VCR37.UINT8[LL/LH]
ADCA0.VCR38.UINT32
ADCA0.VCR38.UINT16[L]
ADCA0.VCR38.UINT8[LL/LH]
ADCA0.VCR39.UINT32
ADCA0.VCR39.UINT16[L]
ADCA0.VCR39.UINT8[LL/LH]
ADCA0.VCR40.UINT32
ADCA0.VCR40.UINT16[L]
ADCA0.VCR40.UINT8[LL/LH]
ADCA0.VCR41.UINT32
ADCA0.VCR41.UINT16[L]
ADCA0.VCR41.UINT8[LL/LH]
ADCA0.VCR42.UINT32
ADCA0.VCR42.UINT16[L]
ADCA0.VCR42.UINT8[LL/LH]
ADCA0.VCR43.UINT32
ADCA0.VCR43.UINT16[L]
ADCA0.VCR43.UINT8[LL/LH]
ADCA0.VCR44.UINT32
ADCA0.VCR44.UINT16[L]
ADCA0.VCR44.UINT8[LL/LH]
ADCA0.VCR45.UINT32
ADCA0.VCR45.UINT16[L]
ADCA0.VCR45.UINT8[LL/LH]
ADCA0.VCR46.UINT32
ADCA0.VCR46.UINT16[L]
ADCA0.VCR46.UINT8[LL/LH]
ADCA0.VCR47.UINT32
ADCA0.VCR47.UINT16[L]
ADCA0.VCR47.UINT8[LL/LH]
ADCA0.VCR48.UINT32
ADCA0.VCR48.UINT16[L]
ADCA0.VCR48.UINT8[LL/LH]
ADCA0.VCR49.UINT32
ADCA0.VCR49.UINT16[L]
ADCA0.VCR49.UINT8[LL/LH]
ADCA0.PWDVCR.UINT32
ADCA0.PWDVCR.UINT16[L]
ADCA0.PWDVCR.UINT8[LL/LH]
ADCA0.DR00.UINT32
ADCA0.DR00.UINT16[L/H]
ADCA0.DR02.UINT32
ADCA0.DR02.UINT16[L/H]
ADCA0.DR04.UINT32
ADCA0.DR04.UINT16[L/H]
ADCA0.DR06.UINT32
ADCA0.DR06.UINT16[L/H]
ADCA0.DR08.UINT32
ADCA0.DR08.UINT16[L/H]
ADCA0.DR10.UINT32
ADCA0.DR10.UINT16[L/H]
ADCA0.DR12.UINT32
ADCA0.DR12.UINT16[L/H]
ADCA0.DR14.UINT32
ADCA0.DR14.UINT16[L/H]
ADCA0.DR16.UINT32
ADCA0.DR16.UINT16[L/H]
ADCA0.DR18.UINT32
ADCA0.DR18.UINT16[L/H]
ADCA0.DR20.UINT32
ADCA0.DR20.UINT16[L/H]
ADCA0.DR22.UINT32
ADCA0.DR22.UINT16[L/H]
ADCA0.DR24.UINT32
ADCA0.DR24.UINT16[L/H]
ADCA0.DR26.UINT32
ADCA0.DR26.UINT16[L/H]
ADCA0.DR28.UINT32
ADCA0.DR28.UINT16[L/H]
ADCA0.DR30.UINT32
ADCA0.DR30.UINT16[L/H]
ADCA0.DR32.UINT32
ADCA0.DR32.UINT16[L/H]
ADCA0.DR34.UINT32
ADCA0.DR34.UINT16[L/H]
ADCA0.DR36.UINT32
ADCA0.DR36.UINT16[L/H]
ADCA0.DR38.UINT32
ADCA0.DR38.UINT16[L/H]
ADCA0.DR40.UINT32
ADCA0.DR40.UINT16[L/H]
ADCA0.DR42.UINT32
ADCA0.DR42.UINT16[L/H]
ADCA0.DR44.UINT32
ADCA0.DR44.UINT16[L/H]
ADCA0.DR46.UINT32
ADCA0.DR46.UINT16[L/H]
ADCA0.DR48.UINT32
ADCA0.DR48.UINT16[L/H]
ADCA0.PWDTSNDR.UINT32
ADCA0.PWDTSNDR.UINT16[H]
ADCA0.DIR00 ... ADCA0.DIR49
ADCA0.PWDDIR
ADCA0.ADHALTR.UINT32
ADCA0.ADHALTR.UINT16[L]
ADCA0.ADHALTR.UINT8[LL]
ADCA0.ADCR.UINT32
ADCA0.ADCR.UINT16[L]
ADCA0.ADCR.UINT8[LL]
ADCA0.SGSTR.UINT32
ADCA0.SGSTR.UINT16[L]
ADCA0.MPXCURR.UINT32
ADCA0.MPXCURR.UINT16[L]
ADCA0.MPXCURR.UINT8[LL]
ADCA0.THSMPSTCR.UINT32
ADCA0.THSMPSTCR.UINT16[L]
ADCA0.THSMPSTCR.UINT8[LL]
ADCA0.THCR.UINT32
ADCA0.THCR.UINT16[L]
ADCA0.THCR.UINT8[LL]
ADCA0.THAHLDSTCR.UINT32
ADCA0.THAHLDSTCR.UINT16[L]
ADCA0.THAHLDSTCR.UINT8[LL]
ADCA0.THBHLDSTCR.UINT32
ADCA0.THBHLDSTCR.UINT16[L]
ADCA0.THBHLDSTCR.UINT8[LL]
ADCA0.THACR.UINT32
ADCA0.THACR.UINT16[L]
ADCA0.THACR.UINT8[LL]
ADCA0.THBCR.UINT32
ADCA0.THBCR.UINT16[L]
ADCA0.THBCR.UINT8[LL]
ADCA0.THER.UINT32
ADCA0.THER.UINT16[L]
ADCA0.THER.UINT8[LL]
ADCA0.THGSR.UINT32
ADCA0.THGSR.UINT16[L]
ADCA0.THGSR.UINT8[LL]
ADCA0.SFTCR.UINT32
ADCA0.SFTCR.UINT16[L]
ADCA0.SFTCR.UINT8[LL]
ADCA0.ULLMTBR0.UINT32
ADCA0.ULLMTBR0.UINT16[L/H]
ADCA0.ULLMTBR1.UINT32
ADCA0.ULLMTBR1.UINT16[L/H]
ADCA0.ULLMTBR2.UINT32
ADCA0.ULLMTBR2.UINT16[L/H]
ADCA0.ECR.UINT32
ADCA0.ECR.UINT16[L]
ADCA0.ECR.UINT8[LL]
ADCA0.ULER.UINT32
ADCA0.ULER.UINT16[L]
ADCA0.ULER.UINT8[LL/LH]
ADCA0.OWER.UINT32
ADCA0.OWER.UINT16[L]
ADCA0.OWER.UINT8[LL]
ADCA0.DGCTL0.UINT32
ADCA0.DGCTL0.UINT16[L]
ADCA0.DGCTL0.UINT8[LL]
ADCA0.DGCTL1.UINT32
ADCA0.DGCTL1.UINT16[L]
ADCA0.PDCTL1.UINT32
ADCA0.PDCTL1.UINT16[L]
ADCA0.PDCTL2.UINT32
ADCA0.PDCTL2.UINT16[L/H]
ADCA0.PDCTL2.UINT8[LL/LH/HL]
ADCA0.SMPCR.UINT32
ADCA0.SMPCR.UINT16[L]
ADCA0.SMPCR.UINT8[LL]
ADCA0.EMU
ADCA0.SGSTCR1.UINT32
ADCA0.SGSTCR1.UINT16[L]
ADCA0.SGSTCR1.UINT8[LL]
ADCA0.SGCR1.UINT32
ADCA0.SGCR1.UINT16[L]
ADCA0.SGCR1.UINT8[LL]
ADCA0.SGVCSP1.UINT32
ADCA0.SGVCSP1.UINT16[L]
ADCA0.SGVCSP1.UINT8[LL]
ADCA0.SGVCEP1.UINT32
ADCA0.SGVCEP1.UINT16[L]
ADCA0.SGVCEP1.UINT8[LL]
ADCA0.SGMCYCR1.UINT32
ADCA0.SGMCYCR1.UINT16[L]
ADCA0.SGMCYCR1.UINT8[LL]
ADCA0.SGSEFCR1.UINT32
ADCA0.SGSEFCR1.UINT16[L]
ADCA0.SGSEFCR1.UINT8[LL]
ADCA0.SGTSEL1.UINT32
ADCA0.SGTSEL1.UINT16[L]
ADCA0.SGSTCR2.UINT32
ADCA0.SGSTCR2.UINT16[L]
ADCA0.SGSTCR2.UINT8[LL]
ADCA0.SGCR2.UINT32
ADCA0.SGCR2.UINT16[L]
ADCA0.SGCR2.UINT8[LL]
ADCA0.SGVCSP2.UINT32
ADCA0.SGVCSP2.UINT16[L]
ADCA0.SGVCSP2.UINT8[LL]
ADCA0.SGVCEP2.UINT32
ADCA0.SGVCEP2.UINT16[L]
ADCA0.SGVCEP2.UINT8[LL]
ADCA0.SGMCYCR2.UINT32
ADCA0.SGMCYCR2.UINT16[L]
ADCA0.SGMCYCR2.UINT8[LL]
ADCA0.SGSEFCR2.UINT32
ADCA0.SGSEFCR2.UINT16[L]
ADCA0.SGSEFCR2.UINT8[LL]
ADCA0.SGTSEL2.UINT32
ADCA0.SGTSEL2.UINT16[L]
ADCA0.SGSTCR3.UINT32
ADCA0.SGSTCR3.UINT16[L]
ADCA0.SGSTCR3.UINT8[LL]
ADCA0.SGCR3.UINT32
ADCA0.SGCR3.UINT16[L]
ADCA0.SGCR3.UINT8[LL]
ADCA0.SGVCSP3.UINT32
ADCA0.SGVCSP3.UINT16[L]
ADCA0.SGVCSP3.UINT8[LL]
ADCA0.SGVCEP3.UINT32
ADCA0.SGVCEP3.UINT16[L]
ADCA0.SGVCEP3.UINT8[LL]
ADCA0.SGMCYCR3.UINT32
ADCA0.SGMCYCR3.UINT16[L]
ADCA0.SGMCYCR3.UINT8[LL]
ADCA0.SGSEFCR3.UINT32
ADCA0.SGSEFCR3.UINT16[L]
ADCA0.SGSEFCR3.UINT8[LL]
ADCA0.SGTSEL3.UINT32
ADCA0.SGTSEL3.UINT16[L]
ADCA0.PWDSGCR.UINT32
ADCA0.PWDSGCR.UINT16[L]
ADCA0.PWDSGCR.UINT8[LL]
ADCA0.PWDSGSEFCR.UINT32
ADCA0.PWDSGSEFCR.UINT16[L]
ADCA0.PWDSGSEFCR.UINT8[LL]
DCRA0.CIN
DCRA0.COUT
DCRA0.CTL
DCRA1.CIN
DCRA1.COUT
DCRA1.CTL
DCRA2.CIN
DCRA2.COUT
DCRA2.CTL
DCRA3.CIN
DCRA3.COUT
DCRA3.CTL
KR0.KRM.UINT8
KR0.KRM.BIT.KRM0 ... KR0.KRM.BIT.KRM7
WPROTR.PROTCMD0
WPROTR.PROTS0
WPROTR.PROTCMD1
WPROTR.PROTS1
STBC0.PSC
STBC0.STPT
STBC_WUF0.WUF0
STBC_WUF0.WUFMSK0
STBC_WUF0.WUFC0
STBC_WUF20.WUF20
STBC_WUF20.WUFMSK20
STBC_WUF20.WUFC20
RESCTL.RESF
RESCTL.RESFC
RESCTL.RESFR
RESCTL.RESFCR
RESCTL.SWRESA
RESCTL.CYCRBASE
SVM.VLVF
SVM.VLVFC
SVM.LVICNT
SVM.CVMF
SVM.CVMDE
SVM.CVMDIAG
SVM.PROTCMDCVM
SVM.PROTSCVM
STBC_IOHOLD.IOHOLD
CLKCTL.ROSCE
CLKCTL.ROSCS
CLKCTL.ROSCSTPM
CLKCTL.ROSCUT
CLKCTL.MOSCE
CLKCTL.MOSCS
CLKCTL.MOSCC
CLKCTL.MOSCST
CLKCTL.MOSCSTPM
CLKCTL.MOSCM
CLKCTL.SOSCE
CLKCTL.SOSCS
CLKCTL.SOSCST
CLKCTL.CKSC_AWDTAD_CTL
CLKCTL.CKSC_AWDTAD_ACT
CLKCTL.CKSC_AWDTAD_STPM
CLKCTL.CKSC_ATAUJS_CTL
CLKCTL.CKSC_ATAUJS_ACT
CLKCTL.CKSC_ATAUJD_CTL
CLKCTL.CKSC_ATAUJD_ACT
CLKCTL.CKSC_ATAUJD_STPM
CLKCTL.CKSC_ARTCAS_CTL
CLKCTL.CKSC_ARTCAS_ACT
CLKCTL.CKSC_ARTCAD_CTL
CLKCTL.CKSC_ARTCAD_ACT
CLKCTL.CKSC_ARTCAD_STPM
CLKCTL.CKSC_AADCAS_CTL
CLKCTL.CKSC_AADCAS_ACT
CLKCTL.CKSC_AADCAD_CTL
CLKCTL.CKSC_AADCAD_ACT
CLKCTL.CKSC_AADCAD_STPM
CLKCTL.CKSC_AFOUTS_CTL
CLKCTL.CKSC_AFOUTS_ACT
CLKCTL.CKSC_AFOUTS_STPM
CLKCTL.FOUTDIV
CLKCTL.FOUTSTAT
CLKCTL.PLLE
CLKCTL.PLLS
CLKCTL.PLLC
CLKCTL.CKSC_CPUCLKS_CTL
CLKCTL.CKSC_CPUCLKS_ACT
CLKCTL.CKSC_PPLLCLKS_CTL
CLKCTL.CKSC_PPLLCLKS_ACT
CLKCTL.CKSC_CPUCLKD_CTL
CLKCTL.CKSC_CPUCLKD_ACT
CLKCTL.CKSC_IPERI1S_CTL
CLKCTL.CKSC_IPERI1S_ACT
CLKCTL.CKSC_IPERI2S_CTL
CLKCTL.CKSC_IPERI2S_ACT
CLKCTL.CKSC_ILINS_CTL
CLKCTL.CKSC_ILINS_ACT
CLKCTL.CKSC_IADCAS_CTL
CLKCTL.CKSC_IADCAS_ACT
CLKCTL.CKSC_IADCAD_CTL
CLKCTL.CKSC_IADCAD_ACT
CLKCTL.CKSC_PLLIS_CTL
CLKCTL.CKSC_PLLIS_ACT
CLKCTL.CKSC_ILIND_CTL
CLKCTL.CKSC_ILIND_ACT
CLKCTL.CKSC_ILIND_STPM
CLKCTL.CKSC_ICANS_CTL
CLKCTL.CKSC_ICANS_ACT
CLKCTL.CKSC_ICANS_STPM
CLKCTL.CKSC_ICANOSCD_CTL
CLKCTL.CKSC_ICANOSCD_ACT
CLKCTL.CKSC_ICANOSCD_STPM
CLKCTL.CKSC_ICSIS_CTL
CLKCTL.CKSC_ICSIS_ACT
CLKCTL.CKSC_IIICS_CTL
CLKCTL.CKSC_IIICS_ACT
LPS0.SCTLR
LPS0.EVFR
LPS0.DPSELR0
LPS0.DPSELRM.UINT32
LPS0.DPSELRM.UINT16[L/H]
LPS0.DPSELRM.UINT8[LL/LH/HL/HH]
LPS0.DPSELRM.REGS8.DPSELR1.UINT8
LPS0.DPSELRM.REGS8.DPSELR2.UINT8
LPS0.DPSELRM.REGS8.DPSELR3.UINT8
LPS0.DPSELRM.REGS8.DPSELR4.UINT8
LPS0.DPSELRH.UINT32
LPS0.DPSELRH.UINT16[L/H]
LPS0.DPSELRH.UINT8[LL/LH/HL]
LPS0.DPSELRH.REGS8.DPSELR5.UINT8
LPS0.DPSELRH.REGS8.DPSELR6.UINT8
LPS0.DPSELRH.REGS8.DPSELR7.UINT8
LPS0.DPDSR0
LPS0.DPDSRM.UINT32
LPS0.DPDSRM.UINT16[L/H]
LPS0.DPDSRM.UINT8[LL/LH/HL/HH]
LPS0.DPDSRM.REGS8.DPDSR1.UINT8
LPS0.DPDSRM.REGS8.DPDSR2.UINT8
LPS0.DPDSRM.REGS8.DPDSR3.UINT8
LPS0.DPDSRM.REGS8.DPDSR4.UINT8
LPS0.DPDSRH.UINT32
LPS0.DPDSRH.UINT16[L/H]
LPS0.DPDSRH.UINT8[LL/LH/HL]
LPS0.DPDSRH.REGS8.DPDSR5.UINT8
LPS0.DPDSRH.REGS8.DPDSR6.UINT8
LPS0.DPDSRH.REGS8.DPDSR7.UINT8
LPS0.DPDIMR0 ... LPS0.DPDIMR7
LPS0.CNTVAL
LPS0.SOSTR
STBC_WUFISO.WUF_ISO0
STBC_WUFISO.WUFMSK_ISO0
STBC_WUFISO.WUFC_ISO0
CLMA0.CTL0
CLMA0.CMPL
CLMA0.CMPH
CLMA0.PCMD
CLMA0.PS
CLMA0.EMU0
CLMA.TEST
CLMA.TESTS
CLMA.PROTCMDCLMA
CLMA.PROTSCLMA
CLMA1.CTL0
CLMA1.CMPL
CLMA1.CMPH
CLMA1.PCMD
CLMA1.PS
CLMA1.EMU0
CLMA2.CTL0
CLMA2.CMPL
CLMA2.CMPH
CLMA2.PCMD
CLMA2.PS
CLMA2.EMU0
PBG50.FSGD06PROT0.UINT32
PBG50.FSGD06PROT0.UINT16[L/H]
PBG50.FSGD06PROT0.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT1.UINT32
PBG50.FSGD06PROT1.UINT16[L/H]
PBG50.FSGD06PROT1.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT4.UINT32
PBG50.FSGD06PROT4.UINT16[L/H]
PBG50.FSGD06PROT4.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT5.UINT32
PBG50.FSGD06PROT5.UINT16[L/H]
PBG50.FSGD06PROT5.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT6.UINT32
PBG50.FSGD06PROT6.UINT16[L/H]
PBG50.FSGD06PROT6.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT7.UINT32
PBG50.FSGD06PROT7.UINT16[L/H]
PBG50.FSGD06PROT7.UINT8[LL/LH/HL/HH]
PBG50.FSGD06PROT8.UINT32
PBG50.FSGD06PROT8.UINT16[L/H]
PBG50.FSGD06PROT8.UINT8[LL/LH/HL/HH]
PBG50.ERRSLV06CTL.UINT32
PBG50.ERRSLV06CTL.UINT16[L]
PBG50.ERRSLV06CTL.UINT8[LL]
PBG50.ERRSLV06STAT.UINT32
PBG50.ERRSLV06STAT.UINT16[L]
PBG50.ERRSLV06STAT.UINT8[LL]
PBG50.ERRSLV06ADDR
PBG50.ERRSLV06TYPE.UINT32
PBG50.ERRSLV06TYPE.UINT16[L]
PBG30.FSGD03PROT0.UINT32
PBG30.FSGD03PROT0.UINT16[L/H]
PBG30.FSGD03PROT0.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT1.UINT32
PBG30.FSGD03PROT1.UINT16[L/H]
PBG30.FSGD03PROT1.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT2.UINT32
PBG30.FSGD03PROT2.UINT16[L/H]
PBG30.FSGD03PROT2.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT3.UINT32
PBG30.FSGD03PROT3.UINT16[L/H]
PBG30.FSGD03PROT3.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT4.UINT32
PBG30.FSGD03PROT4.UINT16[L/H]
PBG30.FSGD03PROT4.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT5.UINT32
PBG30.FSGD03PROT5.UINT16[L/H]
PBG30.FSGD03PROT5.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT6.UINT32
PBG30.FSGD03PROT6.UINT16[L/H]
PBG30.FSGD03PROT6.UINT8[LL/LH/HL/HH]
PBG30.FSGD03PROT12.UINT32
PBG30.FSGD03PROT12.UINT16[L/H]
PBG30.FSGD03PROT12.UINT8[LL/LH/HL/HH]
PBG30.ERRSLV03CTL.UINT32
PBG30.ERRSLV03CTL.UINT16[L]
PBG30.ERRSLV03CTL.UINT8[LL]
PBG30.ERRSLV03STAT.UINT32
PBG30.ERRSLV03STAT.UINT16[L]
PBG30.ERRSLV03STAT.UINT8[LL]
PBG30.ERRSLV03ADDR
PBG30.ERRSLV03TYPE.UINT32
PBG30.ERRSLV03TYPE.UINT16[L]
PBG31.FSGD04PROT0.UINT32
PBG31.FSGD04PROT0.UINT16[L/H]
PBG31.FSGD04PROT0.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT1.UINT32
PBG31.FSGD04PROT1.UINT16[L/H]
PBG31.FSGD04PROT1.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT4.UINT32
PBG31.FSGD04PROT4.UINT16[L/H]
PBG31.FSGD04PROT4.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT5.UINT32
PBG31.FSGD04PROT5.UINT16[L/H]
PBG31.FSGD04PROT5.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT6.UINT32
PBG31.FSGD04PROT6.UINT16[L/H]
PBG31.FSGD04PROT6.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT7.UINT32
PBG31.FSGD04PROT7.UINT16[L/H]
PBG31.FSGD04PROT7.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT8.UINT32
PBG31.FSGD04PROT8.UINT16[L/H]
PBG31.FSGD04PROT8.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT10.UINT32
PBG31.FSGD04PROT10.UINT16[L/H]
PBG31.FSGD04PROT10.UINT8[LL/LH/HL/HH]
PBG31.FSGD04PROT11.UINT32
PBG31.FSGD04PROT11.UINT16[L/H]
PBG31.FSGD04PROT11.UINT8[LL/LH/HL/HH]
PBG31.ERRSLV04CTL.UINT32
PBG31.ERRSLV04CTL.UINT16[L]
PBG31.ERRSLV04CTL.UINT8[LL]
PBG31.ERRSLV04STAT.UINT32
PBG31.ERRSLV04STAT.UINT16[L]
PBG31.ERRSLV04STAT.UINT8[LL]
PBG31.ERRSLV04ADDR
PBG31.ERRSLV04TYPE.UINT32
PBG31.ERRSLV04TYPE.UINT16[L]
PBG32.FSGD05PROT0.UINT32
PBG32.FSGD05PROT0.UINT16[L/H]
PBG32.FSGD05PROT0.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT1.UINT32
PBG32.FSGD05PROT1.UINT16[L/H]
PBG32.FSGD05PROT1.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT2.UINT32
PBG32.FSGD05PROT2.UINT16[L/H]
PBG32.FSGD05PROT2.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT3.UINT32
PBG32.FSGD05PROT3.UINT16[L/H]
PBG32.FSGD05PROT3.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT4.UINT32
PBG32.FSGD05PROT4.UINT16[L/H]
PBG32.FSGD05PROT4.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT5.UINT32
PBG32.FSGD05PROT5.UINT16[L/H]
PBG32.FSGD05PROT5.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT6.UINT32
PBG32.FSGD05PROT6.UINT16[L/H]
PBG32.FSGD05PROT6.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT7.UINT32
PBG32.FSGD05PROT7.UINT16[L/H]
PBG32.FSGD05PROT7.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT8.UINT32
PBG32.FSGD05PROT8.UINT16[L/H]
PBG32.FSGD05PROT8.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT9.UINT32
PBG32.FSGD05PROT9.UINT16[L/H]
PBG32.FSGD05PROT9.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT10.UINT32
PBG32.FSGD05PROT10.UINT16[L/H]
PBG32.FSGD05PROT10.UINT8[LL/LH/HL/HH]
PBG32.FSGD05PROT11.UINT32
PBG32.FSGD05PROT11.UINT16[L/H]
PBG32.FSGD05PROT11.UINT8[LL/LH/HL/HH]
PBG32.ERRSLV05CTL.UINT32
PBG32.ERRSLV05CTL.UINT16[L]
PBG32.ERRSLV05CTL.UINT8[LL]
PBG32.ERRSLV05STAT.UINT32
PBG32.ERRSLV05STAT.UINT16[L]
PBG32.ERRSLV05STAT.UINT8[LL]
PBG32.ERRSLV05ADDR
PBG32.ERRSLV05TYPE.UINT32
PBG32.ERRSLV05TYPE.UINT16[L]
PEG.SP.UINT32
PEG.SP.UINT16[L]
PEG.SP.UINT8[LL]
PEG.G0MK.UINT32
PEG.G0MK.UINT16[L/H]
PEG.G0MK.UINT8[LH/HL/HH]
PEG.G0BA.UINT32
PEG.G0BA.UINT16[L/H]
PEG.G0BA.UINT8[LL/LH/HL/HH]
PEG.G1MK.UINT32
PEG.G1MK.UINT16[L/H]
PEG.G1MK.UINT8[LH/HL/HH]
PEG.G1BA.UINT32
PEG.G1BA.UINT16[L/H]
PEG.G1BA.UINT8[LL/LH/HL/HH]
PEG.G2MK.UINT32
PEG.G2MK.UINT16[L/H]
PEG.G2MK.UINT8[LH/HL/HH]
PEG.G2BA.UINT32
PEG.G2BA.UINT16[L/H]
PEG.G2BA.UINT8[LL/LH/HL/HH]
PEG.G3MK.UINT32
PEG.G3MK.UINT16[L/H]
PEG.G3MK.UINT8[LH/HL/HH]
PEG.G3BA.UINT32
PEG.G3BA.UINT16[L/H]
PEG.G3BA.UINT8[LL/LH/HL/HH]
SEG.CONT
SEG.FLAG
SEG.ADDR
INTC1.ICCSIH2IC_1.UINT16
INTC1.ICCSIH2IC_1.UINT16
INTC1.ICCSIH2IC_1.UINT8[L/H]
INTC1.ICCSIH2IC_1.REGS8.ICCSIH2ICL_1.UINT8
INTC1.ICCSIH2IC_1.REGS8.ICTAUD0I0L.UINT8
INTC1.ICCSIH2IC_1.REGS8.ICCSIH2ICH_1.UINT8
INTC1.ICCSIH2IC_1.REGS8.ICTAUD0I0H.UINT8
INTC1.ICCSIH2IC_1.BIT.P0CSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.P0TAUD0I0
INTC1.ICCSIH2IC_1.BIT.P1CSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.P1TAUD0I0
INTC1.ICCSIH2IC_1.BIT.P2CSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.P2TAUD0I0
INTC1.ICCSIH2IC_1.BIT.P3CSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.P3TAUD0I0
INTC1.ICCSIH2IC_1.BIT.TBCSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.TBTAUD0I0
INTC1.ICCSIH2IC_1.BIT.MKCSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.MKTAUD0I0
INTC1.ICCSIH2IC_1.BIT.RFCSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.RFTAUD0I0
INTC1.ICCSIH2IC_1.BIT.CTCSIH2IC_1
INTC1.ICCSIH2IC_1.BIT.CTTAUD0I0
INTC1.ICCSIH3IC_1.UINT16
INTC1.ICCSIH3IC_1.UINT16
INTC1.ICCSIH3IC_1.UINT8[L/H]
INTC1.ICCSIH3IC_1.REGS8.ICCSIH3ICL_1.UINT8
INTC1.ICCSIH3IC_1.REGS8.ICTAUD0I2L.UINT8
INTC1.ICCSIH3IC_1.REGS8.ICCSIH3ICH_1.UINT8
INTC1.ICCSIH3IC_1.REGS8.ICTAUD0I2H.UINT8
INTC1.ICCSIH3IC_1.BIT.P0CSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.P0TAUD0I2
INTC1.ICCSIH3IC_1.BIT.P1CSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.P1TAUD0I2
INTC1.ICCSIH3IC_1.BIT.P2CSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.P2TAUD0I2
INTC1.ICCSIH3IC_1.BIT.P3CSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.P3TAUD0I2
INTC1.ICCSIH3IC_1.BIT.TBCSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.TBTAUD0I2
INTC1.ICCSIH3IC_1.BIT.MKCSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.MKTAUD0I2
INTC1.ICCSIH3IC_1.BIT.RFCSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.RFTAUD0I2
INTC1.ICCSIH3IC_1.BIT.CTCSIH3IC_1
INTC1.ICCSIH3IC_1.BIT.CTTAUD0I2
INTC1.ICCSIH2IR_1.UINT16
INTC1.ICCSIH2IR_1.UINT16
INTC1.ICCSIH2IR_1.UINT8[L/H]
INTC1.ICCSIH2IR_1.REGS8.ICCSIH2IRL_1.UINT8
INTC1.ICCSIH2IR_1.REGS8.ICTAUD0I4L.UINT8
INTC1.ICCSIH2IR_1.REGS8.ICCSIH2IRH_1.UINT8
INTC1.ICCSIH2IR_1.REGS8.ICTAUD0I4H.UINT8
INTC1.ICCSIH2IR_1.BIT.P0CSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.P0TAUD0I4
INTC1.ICCSIH2IR_1.BIT.P1CSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.P1TAUD0I4
INTC1.ICCSIH2IR_1.BIT.P2CSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.P2TAUD0I4
INTC1.ICCSIH2IR_1.BIT.P3CSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.P3TAUD0I4
INTC1.ICCSIH2IR_1.BIT.TBCSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.TBTAUD0I4
INTC1.ICCSIH2IR_1.BIT.MKCSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.MKTAUD0I4
INTC1.ICCSIH2IR_1.BIT.RFCSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.RFTAUD0I4
INTC1.ICCSIH2IR_1.BIT.CTCSIH2IR_1
INTC1.ICCSIH2IR_1.BIT.CTTAUD0I4
INTC1.ICCSIH2IRE_1.UINT16
INTC1.ICCSIH2IRE_1.UINT16
INTC1.ICCSIH2IRE_1.UINT8[L/H]
INTC1.ICCSIH2IRE_1.REGS8.ICCSIH2IREL_1.UINT8
INTC1.ICCSIH2IRE_1.REGS8.ICTAUD0I6L.UINT8
INTC1.ICCSIH2IRE_1.REGS8.ICCSIH2IREH_1.UINT8
INTC1.ICCSIH2IRE_1.REGS8.ICTAUD0I6H.UINT8
INTC1.ICCSIH2IRE_1.BIT.P0CSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.P0TAUD0I6
INTC1.ICCSIH2IRE_1.BIT.P1CSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.P1TAUD0I6
INTC1.ICCSIH2IRE_1.BIT.P2CSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.P2TAUD0I6
INTC1.ICCSIH2IRE_1.BIT.P3CSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.P3TAUD0I6
INTC1.ICCSIH2IRE_1.BIT.TBCSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.TBTAUD0I6
INTC1.ICCSIH2IRE_1.BIT.MKCSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.MKTAUD0I6
INTC1.ICCSIH2IRE_1.BIT.RFCSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.RFTAUD0I6
INTC1.ICCSIH2IRE_1.BIT.CTCSIH2IRE_1
INTC1.ICCSIH2IRE_1.BIT.CTTAUD0I6
INTC1.ICCSIH2IJC_1.UINT16
INTC1.ICCSIH2IJC_1.UINT16
INTC1.ICCSIH2IJC_1.UINT8[L/H]
INTC1.ICCSIH2IJC_1.REGS8.ICCSIH2IJCL_1.UINT8
INTC1.ICCSIH2IJC_1.REGS8.ICTAUD0I8L.UINT8
INTC1.ICCSIH2IJC_1.REGS8.ICCSIH2IJCH_1.UINT8
INTC1.ICCSIH2IJC_1.REGS8.ICTAUD0I8H.UINT8
INTC1.ICCSIH2IJC_1.BIT.P0CSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.P0TAUD0I8
INTC1.ICCSIH2IJC_1.BIT.P1CSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.P1TAUD0I8
INTC1.ICCSIH2IJC_1.BIT.P2CSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.P2TAUD0I8
INTC1.ICCSIH2IJC_1.BIT.P3CSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.P3TAUD0I8
INTC1.ICCSIH2IJC_1.BIT.TBCSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.TBTAUD0I8
INTC1.ICCSIH2IJC_1.BIT.MKCSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.MKTAUD0I8
INTC1.ICCSIH2IJC_1.BIT.RFCSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.RFTAUD0I8
INTC1.ICCSIH2IJC_1.BIT.CTCSIH2IJC_1
INTC1.ICCSIH2IJC_1.BIT.CTTAUD0I8
INTC1.ICCSIH3IR_1.UINT16
INTC1.ICCSIH3IR_1.UINT16
INTC1.ICCSIH3IR_1.UINT8[L/H]
INTC1.ICCSIH3IR_1.REGS8.ICCSIH3IRL_1.UINT8
INTC1.ICCSIH3IR_1.REGS8.ICTAUD0I10L.UINT8
INTC1.ICCSIH3IR_1.REGS8.ICCSIH3IRH_1.UINT8
INTC1.ICCSIH3IR_1.REGS8.ICTAUD0I10H.UINT8
INTC1.ICCSIH3IR_1.BIT.P0CSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.P0TAUD0I10
INTC1.ICCSIH3IR_1.BIT.P1CSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.P1TAUD0I10
INTC1.ICCSIH3IR_1.BIT.P2CSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.P2TAUD0I10
INTC1.ICCSIH3IR_1.BIT.P3CSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.P3TAUD0I10
INTC1.ICCSIH3IR_1.BIT.TBCSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.TBTAUD0I10
INTC1.ICCSIH3IR_1.BIT.MKCSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.MKTAUD0I10
INTC1.ICCSIH3IR_1.BIT.RFCSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.RFTAUD0I10
INTC1.ICCSIH3IR_1.BIT.CTCSIH3IR_1
INTC1.ICCSIH3IR_1.BIT.CTTAUD0I10
INTC1.ICCSIH3IRE_1.UINT16
INTC1.ICCSIH3IRE_1.UINT16
INTC1.ICCSIH3IRE_1.UINT8[L/H]
INTC1.ICCSIH3IRE_1.REGS8.ICCSIH3IREL_1.UINT8
INTC1.ICCSIH3IRE_1.REGS8.ICTAUD0I12L.UINT8
INTC1.ICCSIH3IRE_1.REGS8.ICCSIH3IREH_1.UINT8
INTC1.ICCSIH3IRE_1.REGS8.ICTAUD0I12H.UINT8
INTC1.ICCSIH3IRE_1.BIT.P0CSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.P0TAUD0I12
INTC1.ICCSIH3IRE_1.BIT.P1CSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.P1TAUD0I12
INTC1.ICCSIH3IRE_1.BIT.P2CSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.P2TAUD0I12
INTC1.ICCSIH3IRE_1.BIT.P3CSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.P3TAUD0I12
INTC1.ICCSIH3IRE_1.BIT.TBCSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.TBTAUD0I12
INTC1.ICCSIH3IRE_1.BIT.MKCSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.MKTAUD0I12
INTC1.ICCSIH3IRE_1.BIT.RFCSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.RFTAUD0I12
INTC1.ICCSIH3IRE_1.BIT.CTCSIH3IRE_1
INTC1.ICCSIH3IRE_1.BIT.CTTAUD0I12
INTC1.ICCSIH3IJC_1.UINT16
INTC1.ICCSIH3IJC_1.UINT16
INTC1.ICCSIH3IJC_1.UINT8[L/H]
INTC1.ICCSIH3IJC_1.REGS8.ICCSIH3IJCL_1.UINT8
INTC1.ICCSIH3IJC_1.REGS8.ICTAUD0I14L.UINT8
INTC1.ICCSIH3IJC_1.REGS8.ICCSIH3IJCH_1.UINT8
INTC1.ICCSIH3IJC_1.REGS8.ICTAUD0I14H.UINT8
INTC1.ICCSIH3IJC_1.BIT.P0CSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.P0TAUD0I14
INTC1.ICCSIH3IJC_1.BIT.P1CSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.P1TAUD0I14
INTC1.ICCSIH3IJC_1.BIT.P2CSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.P2TAUD0I14
INTC1.ICCSIH3IJC_1.BIT.P3CSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.P3TAUD0I14
INTC1.ICCSIH3IJC_1.BIT.TBCSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.TBTAUD0I14
INTC1.ICCSIH3IJC_1.BIT.MKCSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.MKTAUD0I14
INTC1.ICCSIH3IJC_1.BIT.RFCSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.RFTAUD0I14
INTC1.ICCSIH3IJC_1.BIT.CTCSIH3IJC_1
INTC1.ICCSIH3IJC_1.BIT.CTTAUD0I14
INTC1.ICCSIH1IC_1.UINT16
INTC1.ICCSIH1IC_1.UINT16
INTC1.ICCSIH1IC_1.UINT8[L/H]
INTC1.ICCSIH1IC_1.REGS8.ICCSIH1ICL_1.UINT8
INTC1.ICCSIH1IC_1.REGS8.ICTAPA0IPEK0L.UINT8
INTC1.ICCSIH1IC_1.REGS8.ICCSIH1ICH_1.UINT8
INTC1.ICCSIH1IC_1.REGS8.ICTAPA0IPEK0H.UINT8
INTC1.ICCSIH1IC_1.BIT.P0CSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.P0TAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.P1CSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.P1TAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.P2CSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.P2TAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.P3CSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.P3TAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.TBCSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.TBTAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.MKCSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.MKTAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.RFCSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.RFTAPA0IPEK0
INTC1.ICCSIH1IC_1.BIT.CTCSIH1IC_1
INTC1.ICCSIH1IC_1.BIT.CTTAPA0IPEK0
INTC1.ICCSIH1IR_1.UINT16
INTC1.ICCSIH1IR_1.UINT16
INTC1.ICCSIH1IR_1.UINT8[L/H]
INTC1.ICCSIH1IR_1.REGS8.ICCSIH1IRL_1.UINT8
INTC1.ICCSIH1IR_1.REGS8.ICTAPA0IVLY0L.UINT8
INTC1.ICCSIH1IR_1.REGS8.ICCSIH1IRH_1.UINT8
INTC1.ICCSIH1IR_1.REGS8.ICTAPA0IVLY0H.UINT8
INTC1.ICCSIH1IR_1.BIT.P0CSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.P0TAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.P1CSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.P1TAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.P2CSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.P2TAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.P3CSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.P3TAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.TBCSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.TBTAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.MKCSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.MKTAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.RFCSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.RFTAPA0IVLY0
INTC1.ICCSIH1IR_1.BIT.CTCSIH1IR_1
INTC1.ICCSIH1IR_1.BIT.CTTAPA0IVLY0
INTC1.ICADCA0I0.UINT16
INTC1.ICADCA0I0.UINT8[L/H]
INTC1.ICADCA0I0.BIT.P0ADCA0I0
INTC1.ICADCA0I0.BIT.P1ADCA0I0
INTC1.ICADCA0I0.BIT.P2ADCA0I0
INTC1.ICADCA0I0.BIT.P3ADCA0I0
INTC1.ICADCA0I0.BIT.TBADCA0I0
INTC1.ICADCA0I0.BIT.MKADCA0I0
INTC1.ICADCA0I0.BIT.RFADCA0I0
INTC1.ICADCA0I0.BIT.CTADCA0I0
INTC1.ICADCA0I1.UINT16
INTC1.ICADCA0I1.UINT8[L/H]
INTC1.ICADCA0I1.BIT.P0ADCA0I1
INTC1.ICADCA0I1.BIT.P1ADCA0I1
INTC1.ICADCA0I1.BIT.P2ADCA0I1
INTC1.ICADCA0I1.BIT.P3ADCA0I1
INTC1.ICADCA0I1.BIT.TBADCA0I1
INTC1.ICADCA0I1.BIT.MKADCA0I1
INTC1.ICADCA0I1.BIT.RFADCA0I1
INTC1.ICADCA0I1.BIT.CTADCA0I1
INTC1.ICADCA0I2.UINT16
INTC1.ICADCA0I2.UINT16
INTC1.ICADCA0I2.UINT8[L/H]
INTC1.ICADCA0I2.REGS8.ICCSIH0IJCL_1.UINT8
INTC1.ICADCA0I2.REGS8.ICCSIH0IJCH_1.UINT8
INTC1.ICADCA0I2.BIT.P0ADCA0I2
INTC1.ICADCA0I2.BIT.P0CSIH0IJC_1
INTC1.ICADCA0I2.BIT.P1ADCA0I2
INTC1.ICADCA0I2.BIT.P1CSIH0IJC_1
INTC1.ICADCA0I2.BIT.P2ADCA0I2
INTC1.ICADCA0I2.BIT.P2CSIH0IJC_1
INTC1.ICADCA0I2.BIT.P3ADCA0I2
INTC1.ICADCA0I2.BIT.P3CSIH0IJC_1
INTC1.ICADCA0I2.BIT.TBADCA0I2
INTC1.ICADCA0I2.BIT.TBCSIH0IJC_1
INTC1.ICADCA0I2.BIT.MKADCA0I2
INTC1.ICADCA0I2.BIT.MKCSIH0IJC_1
INTC1.ICADCA0I2.BIT.RFADCA0I2
INTC1.ICADCA0I2.BIT.RFCSIH0IJC_1
INTC1.ICADCA0I2.BIT.CTADCA0I2
INTC1.ICADCA0I2.BIT.CTCSIH0IJC_1
INTC1.ICDCUTDI.UINT16
INTC1.ICDCUTDI.UINT8[L/H]
INTC1.ICDCUTDI.BIT.P0DCUTDI
INTC1.ICDCUTDI.BIT.P1DCUTDI
INTC1.ICDCUTDI.BIT.P2DCUTDI
INTC1.ICDCUTDI.BIT.P3DCUTDI
INTC1.ICDCUTDI.BIT.TBDCUTDI
INTC1.ICDCUTDI.BIT.MKDCUTDI
INTC1.ICDCUTDI.BIT.RFDCUTDI
INTC1.ICDCUTDI.BIT.CTDCUTDI
INTC1.ICRCANGERR0.UINT16
INTC1.ICRCANGERR0.UINT8[L/H]
INTC1.ICRCANGERR0.BIT.P0RCANGERR0
INTC1.ICRCANGERR0.BIT.P1RCANGERR0
INTC1.ICRCANGERR0.BIT.P2RCANGERR0
INTC1.ICRCANGERR0.BIT.P3RCANGERR0
INTC1.ICRCANGERR0.BIT.TBRCANGERR0
INTC1.ICRCANGERR0.BIT.MKRCANGERR0
INTC1.ICRCANGERR0.BIT.RFRCANGERR0
INTC1.ICRCANGERR0.BIT.CTRCANGERR0
INTC1.ICRCANGRECC0.UINT16
INTC1.ICRCANGRECC0.UINT8[L/H]
INTC1.ICRCANGRECC0.BIT.P0RCANGRECC0
INTC1.ICRCANGRECC0.BIT.P1RCANGRECC0
INTC1.ICRCANGRECC0.BIT.P2RCANGRECC0
INTC1.ICRCANGRECC0.BIT.P3RCANGRECC0
INTC1.ICRCANGRECC0.BIT.TBRCANGRECC0
INTC1.ICRCANGRECC0.BIT.MKRCANGRECC0
INTC1.ICRCANGRECC0.BIT.RFRCANGRECC0
INTC1.ICRCANGRECC0.BIT.CTRCANGRECC0
INTC1.ICRCAN0ERR.UINT16
INTC1.ICRCAN0ERR.UINT8[L/H]
INTC1.ICRCAN0ERR.BIT.P0RCAN0ERR
INTC1.ICRCAN0ERR.BIT.P1RCAN0ERR
INTC1.ICRCAN0ERR.BIT.P2RCAN0ERR
INTC1.ICRCAN0ERR.BIT.P3RCAN0ERR
INTC1.ICRCAN0ERR.BIT.TBRCAN0ERR
INTC1.ICRCAN0ERR.BIT.MKRCAN0ERR
INTC1.ICRCAN0ERR.BIT.RFRCAN0ERR
INTC1.ICRCAN0ERR.BIT.CTRCAN0ERR
INTC1.ICRCAN0REC.UINT16
INTC1.ICRCAN0REC.UINT8[L/H]
INTC1.ICRCAN0REC.BIT.P0RCAN0REC
INTC1.ICRCAN0REC.BIT.P1RCAN0REC
INTC1.ICRCAN0REC.BIT.P2RCAN0REC
INTC1.ICRCAN0REC.BIT.P3RCAN0REC
INTC1.ICRCAN0REC.BIT.TBRCAN0REC
INTC1.ICRCAN0REC.BIT.MKRCAN0REC
INTC1.ICRCAN0REC.BIT.RFRCAN0REC
INTC1.ICRCAN0REC.BIT.CTRCAN0REC
INTC1.ICRCAN0TRX.UINT16
INTC1.ICRCAN0TRX.UINT8[L/H]
INTC1.ICRCAN0TRX.BIT.P0RCAN0TRX
INTC1.ICRCAN0TRX.BIT.P1RCAN0TRX
INTC1.ICRCAN0TRX.BIT.P2RCAN0TRX
INTC1.ICRCAN0TRX.BIT.P3RCAN0TRX
INTC1.ICRCAN0TRX.BIT.TBRCAN0TRX
INTC1.ICRCAN0TRX.BIT.MKRCAN0TRX
INTC1.ICRCAN0TRX.BIT.RFRCAN0TRX
INTC1.ICRCAN0TRX.BIT.CTRCAN0TRX
INTC1.ICCSIG0IC.UINT16
INTC1.ICCSIG0IC.UINT16
INTC1.ICCSIG0IC.UINT8[L/H]
INTC1.ICCSIG0IC.REGS8.ICCSIH1IREL_1.UINT8
INTC1.ICCSIG0IC.REGS8.ICCSIH1IREH_1.UINT8
INTC1.ICCSIG0IC.BIT.P0CSIG0IC
INTC1.ICCSIG0IC.BIT.P0CSIH1IRE_1
INTC1.ICCSIG0IC.BIT.P1CSIG0IC
INTC1.ICCSIG0IC.BIT.P1CSIH1IRE_1
INTC1.ICCSIG0IC.BIT.P2CSIG0IC
INTC1.ICCSIG0IC.BIT.P2CSIH1IRE_1
INTC1.ICCSIG0IC.BIT.P3CSIG0IC
INTC1.ICCSIG0IC.BIT.P3CSIH1IRE_1
INTC1.ICCSIG0IC.BIT.TBCSIG0IC
INTC1.ICCSIG0IC.BIT.TBCSIH1IRE_1
INTC1.ICCSIG0IC.BIT.MKCSIG0IC
INTC1.ICCSIG0IC.BIT.MKCSIH1IRE_1
INTC1.ICCSIG0IC.BIT.RFCSIG0IC
INTC1.ICCSIG0IC.BIT.RFCSIH1IRE_1
INTC1.ICCSIG0IC.BIT.CTCSIG0IC
INTC1.ICCSIG0IC.BIT.CTCSIH1IRE_1
INTC1.ICCSIG0IR.UINT16
INTC1.ICCSIG0IR.UINT16
INTC1.ICCSIG0IR.UINT8[L/H]
INTC1.ICCSIG0IR.REGS8.ICCSIH1IJCL_1.UINT8
INTC1.ICCSIG0IR.REGS8.ICCSIH1IJCH_1.UINT8
INTC1.ICCSIG0IR.BIT.P0CSIG0IR
INTC1.ICCSIG0IR.BIT.P0CSIH1IJC_1
INTC1.ICCSIG0IR.BIT.P1CSIG0IR
INTC1.ICCSIG0IR.BIT.P1CSIH1IJC_1
INTC1.ICCSIG0IR.BIT.P2CSIG0IR
INTC1.ICCSIG0IR.BIT.P2CSIH1IJC_1
INTC1.ICCSIG0IR.BIT.P3CSIG0IR
INTC1.ICCSIG0IR.BIT.P3CSIH1IJC_1
INTC1.ICCSIG0IR.BIT.TBCSIG0IR
INTC1.ICCSIG0IR.BIT.TBCSIH1IJC_1
INTC1.ICCSIG0IR.BIT.MKCSIG0IR
INTC1.ICCSIG0IR.BIT.MKCSIH1IJC_1
INTC1.ICCSIG0IR.BIT.RFCSIG0IR
INTC1.ICCSIG0IR.BIT.RFCSIH1IJC_1
INTC1.ICCSIG0IR.BIT.CTCSIG0IR
INTC1.ICCSIG0IR.BIT.CTCSIH1IJC_1
INTC1.ICCSIH0IC.UINT16
INTC1.ICCSIH0IC.UINT8[L/H]
INTC1.ICCSIH0IC.BIT.P0CSIH0IC
INTC1.ICCSIH0IC.BIT.P1CSIH0IC
INTC1.ICCSIH0IC.BIT.P2CSIH0IC
INTC1.ICCSIH0IC.BIT.P3CSIH0IC
INTC1.ICCSIH0IC.BIT.TBCSIH0IC
INTC1.ICCSIH0IC.BIT.MKCSIH0IC
INTC1.ICCSIH0IC.BIT.RFCSIH0IC
INTC1.ICCSIH0IC.BIT.CTCSIH0IC
INTC1.ICCSIH0IR.UINT16
INTC1.ICCSIH0IR.UINT8[L/H]
INTC1.ICCSIH0IR.BIT.P0CSIH0IR
INTC1.ICCSIH0IR.BIT.P1CSIH0IR
INTC1.ICCSIH0IR.BIT.P2CSIH0IR
INTC1.ICCSIH0IR.BIT.P3CSIH0IR
INTC1.ICCSIH0IR.BIT.TBCSIH0IR
INTC1.ICCSIH0IR.BIT.MKCSIH0IR
INTC1.ICCSIH0IR.BIT.RFCSIH0IR
INTC1.ICCSIH0IR.BIT.CTCSIH0IR
INTC1.ICCSIH0IRE.UINT16
INTC1.ICCSIH0IRE.UINT8[L/H]
INTC1.ICCSIH0IRE.BIT.P0CSIH0IRE
INTC1.ICCSIH0IRE.BIT.P1CSIH0IRE
INTC1.ICCSIH0IRE.BIT.P2CSIH0IRE
INTC1.ICCSIH0IRE.BIT.P3CSIH0IRE
INTC1.ICCSIH0IRE.BIT.TBCSIH0IRE
INTC1.ICCSIH0IRE.BIT.MKCSIH0IRE
INTC1.ICCSIH0IRE.BIT.RFCSIH0IRE
INTC1.ICCSIH0IRE.BIT.CTCSIH0IRE
INTC1.FNC.UINT16
INTC1.FNC.UINT8[H]
INTC1.FNC.BIT.FNRF
INTC1.FIC.UINT16
INTC1.FIC.UINT8[H]
INTC1.FIC.BIT.FIRF
INTC1.IMR0.UINT32
INTC1.IMR0.UINT16[L/H]
INTC1.IMR0.UINT8[LH/HL/HH]
INTC1.IMR0.BIT.IMR0EIMK8 ... INTC1.IMR0.BIT.IMR0EIMK31
DMAC.TL
DMAC.ER
DMAC.DM0CMV
DMAC.DM1CMV
DMAC.CMVC
DMAC.DM00CM
DMAC.DM01CM
DMAC.DM02CM
DMAC.DM03CM
DMAC.DM04CM
DMAC.DM05CM
DMAC.DM06CM
DMAC.DM07CM
DMAC.DM10CM
DMAC.DM11CM
DMAC.DM12CM
DMAC.DM13CM
DMAC.DM14CM
DMAC.DM15CM
DMAC.DM16CM
DMAC.DM17CM
DMAC.DSA0
DMAC.DDA0
DMAC.DTC0
DMAC.DTCT0
DMAC.DRSA0
DMAC.DRDA0
DMAC.DRTC0
DMAC.DCEN0
DMAC.DCST0
DMAC.DCSTS0
DMAC.DCSTC0
DMAC.DTFR0
DMAC.DTFRRQ0
DMAC.DTFRRQC0
DMAC.DSA1
DMAC.DDA1
DMAC.DTC1
DMAC.DTCT1
DMAC.DRSA1
DMAC.DRDA1
DMAC.DRTC1
DMAC.DCEN1
DMAC.DCST1
DMAC.DCSTS1
DMAC.DCSTC1
DMAC.DTFR1
DMAC.DTFRRQ1
DMAC.DTFRRQC1
DMAC.DSA2
DMAC.DDA2
DMAC.DTC2
DMAC.DTCT2
DMAC.DRSA2
DMAC.DRDA2
DMAC.DRTC2
DMAC.DCEN2
DMAC.DCST2
DMAC.DCSTS2
DMAC.DCSTC2
DMAC.DTFR2
DMAC.DTFRRQ2
DMAC.DTFRRQC2
DMAC.DSA3
DMAC.DDA3
DMAC.DTC3
DMAC.DTCT3
DMAC.DRSA3
DMAC.DRDA3
DMAC.DRTC3
DMAC.DCEN3
DMAC.DCST3
DMAC.DCSTS3
DMAC.DCSTC3
DMAC.DTFR3
DMAC.DTFRRQ3
DMAC.DTFRRQC3
DMAC.DSA4
DMAC.DDA4
DMAC.DTC4
DMAC.DTCT4
DMAC.DRSA4
DMAC.DRDA4
DMAC.DRTC4
DMAC.DCEN4
DMAC.DCST4
DMAC.DCSTS4
DMAC.DCSTC4
DMAC.DTFR4
DMAC.DTFRRQ4
DMAC.DTFRRQC4
DMAC.DSA5
DMAC.DDA5
DMAC.DTC5
DMAC.DTCT5
DMAC.DRSA5
DMAC.DRDA5
DMAC.DRTC5
DMAC.DCEN5
DMAC.DCST5
DMAC.DCSTS5
DMAC.DCSTC5
DMAC.DTFR5
DMAC.DTFRRQ5
DMAC.DTFRRQC5
DMAC.DSA6
DMAC.DDA6
DMAC.DTC6
DMAC.DTCT6
DMAC.DRSA6
DMAC.DRDA6
DMAC.DRTC6
DMAC.DCEN6
DMAC.DCST6
DMAC.DCSTS6
DMAC.DCSTC6
DMAC.DTFR6
DMAC.DTFRRQ6
DMAC.DTFRRQC6
DMAC.DSA7
DMAC.DDA7
DMAC.DTC7
DMAC.DTCT7
DMAC.DRSA7
DMAC.DRDA7
DMAC.DRTC7
DMAC.DCEN7
DMAC.DCST7
DMAC.DCSTS7
DMAC.DCSTC7
DMAC.DTFR7
DMAC.DTFRRQ7
DMAC.DTFRRQC7
DMAC.DSA8
DMAC.DDA8
DMAC.DTC8
DMAC.DTCT8
DMAC.DRSA8
DMAC.DRDA8
DMAC.DRTC8
DMAC.DCEN8
DMAC.DCST8
DMAC.DCSTS8
DMAC.DCSTC8
DMAC.DTFR8
DMAC.DTFRRQ8
DMAC.DTFRRQC8
DMAC.DSA9
DMAC.DDA9
DMAC.DTC9
DMAC.DTCT9
DMAC.DRSA9
DMAC.DRDA9
DMAC.DRTC9
DMAC.DCEN9
DMAC.DCST9
DMAC.DCSTS9
DMAC.DCSTC9
DMAC.DTFR9
DMAC.DTFRRQ9
DMAC.DTFRRQC9
DMAC.DSA10
DMAC.DDA10
DMAC.DTC10
DMAC.DTCT10
DMAC.DRSA10
DMAC.DRDA10
DMAC.DRTC10
DMAC.DCEN10
DMAC.DCST10
DMAC.DCSTS10
DMAC.DCSTC10
DMAC.DTFR10
DMAC.DTFRRQ10
DMAC.DTFRRQC10
DMAC.DSA11
DMAC.DDA11
DMAC.DTC11
DMAC.DTCT11
DMAC.DRSA11
DMAC.DRDA11
DMAC.DRTC11
DMAC.DCEN11
DMAC.DCST11
DMAC.DCSTS11
DMAC.DCSTC11
DMAC.DTFR11
DMAC.DTFRRQ11
DMAC.DTFRRQC11
DMAC.DSA12
DMAC.DDA12
DMAC.DTC12
DMAC.DTCT12
DMAC.DRSA12
DMAC.DRDA12
DMAC.DRTC12
DMAC.DCEN12
DMAC.DCST12
DMAC.DCSTS12
DMAC.DCSTC12
DMAC.DTFR12
DMAC.DTFRRQ12
DMAC.DTFRRQC12
DMAC.DSA13
DMAC.DDA13
DMAC.DTC13
DMAC.DTCT13
DMAC.DRSA13
DMAC.DRDA13
DMAC.DRTC13
DMAC.DCEN13
DMAC.DCST13
DMAC.DCSTS13
DMAC.DCSTC13
DMAC.DTFR13
DMAC.DTFRRQ13
DMAC.DTFRRQC13
DMAC.DSA14
DMAC.DDA14
DMAC.DTC14
DMAC.DTCT14
DMAC.DRSA14
DMAC.DRDA14
DMAC.DRTC14
DMAC.DCEN14
DMAC.DCST14
DMAC.DCSTS14
DMAC.DCSTC14
DMAC.DTFR14
DMAC.DTFRRQ14
DMAC.DTFRRQC14
DMAC.DSA15
DMAC.DDA15
DMAC.DTC15
DMAC.DTCT15
DMAC.DRSA15
DMAC.DRDA15
DMAC.DRTC15
DMAC.DCEN15
DMAC.DCST15
DMAC.DCSTS15
DMAC.DCSTC15
DMAC.DTFR15
DMAC.DTFRRQ15
DMAC.DTFRRQC15
INTC2.ICADCA0I2_2.UINT16
INTC2.ICADCA0I2_2.UINT16
INTC2.ICADCA0I2_2.UINT8[L/H]
INTC2.ICADCA0I2_2.REGS8.ICADCA0I2L_2.UINT8
INTC2.ICADCA0I2_2.REGS8.ICCSIH0IJCL.UINT8
INTC2.ICADCA0I2_2.REGS8.ICADCA0I2H_2.UINT8
INTC2.ICADCA0I2_2.REGS8.ICCSIH0IJCH.UINT8
INTC2.ICADCA0I2_2.BIT.P0ADCA0I2_2
INTC2.ICADCA0I2_2.BIT.P0CSIH0IJC
INTC2.ICADCA0I2_2.BIT.P1ADCA0I2_2
INTC2.ICADCA0I2_2.BIT.P1CSIH0IJC
INTC2.ICADCA0I2_2.BIT.P2ADCA0I2_2
INTC2.ICADCA0I2_2.BIT.P2CSIH0IJC
INTC2.ICADCA0I2_2.BIT.P3ADCA0I2_2
INTC2.ICADCA0I2_2.BIT.P3CSIH0IJC
INTC2.ICADCA0I2_2.BIT.TBADCA0I2_2
INTC2.ICADCA0I2_2.BIT.TBCSIH0IJC
INTC2.ICADCA0I2_2.BIT.MKADCA0I2_2
INTC2.ICADCA0I2_2.BIT.MKCSIH0IJC
INTC2.ICADCA0I2_2.BIT.RFADCA0I2_2
INTC2.ICADCA0I2_2.BIT.RFCSIH0IJC
INTC2.ICADCA0I2_2.BIT.CTADCA0I2_2
INTC2.ICADCA0I2_2.BIT.CTCSIH0IJC
INTC2.ICRLIN30.UINT16
INTC2.ICRLIN30.UINT8[L/H]
INTC2.ICRLIN30.BIT.P0RLIN30
INTC2.ICRLIN30.BIT.P1RLIN30
INTC2.ICRLIN30.BIT.P2RLIN30
INTC2.ICRLIN30.BIT.P3RLIN30
INTC2.ICRLIN30.BIT.TBRLIN30
INTC2.ICRLIN30.BIT.MKRLIN30
INTC2.ICRLIN30.BIT.RFRLIN30
INTC2.ICRLIN30.BIT.CTRLIN30
INTC2.ICRLIN30UR0.UINT16
INTC2.ICRLIN30UR0.UINT8[L/H]
INTC2.ICRLIN30UR0.BIT.P0RLIN30UR0
INTC2.ICRLIN30UR0.BIT.P1RLIN30UR0
INTC2.ICRLIN30UR0.BIT.P2RLIN30UR0
INTC2.ICRLIN30UR0.BIT.P3RLIN30UR0
INTC2.ICRLIN30UR0.BIT.TBRLIN30UR0
INTC2.ICRLIN30UR0.BIT.MKRLIN30UR0
INTC2.ICRLIN30UR0.BIT.RFRLIN30UR0
INTC2.ICRLIN30UR0.BIT.CTRLIN30UR0
INTC2.ICRLIN30UR1.UINT16
INTC2.ICRLIN30UR1.UINT8[L/H]
INTC2.ICRLIN30UR1.BIT.P0RLIN30UR1
INTC2.ICRLIN30UR1.BIT.P1RLIN30UR1
INTC2.ICRLIN30UR1.BIT.P2RLIN30UR1
INTC2.ICRLIN30UR1.BIT.P3RLIN30UR1
INTC2.ICRLIN30UR1.BIT.TBRLIN30UR1
INTC2.ICRLIN30UR1.BIT.MKRLIN30UR1
INTC2.ICRLIN30UR1.BIT.RFRLIN30UR1
INTC2.ICRLIN30UR1.BIT.CTRLIN30UR1
INTC2.ICRLIN30UR2.UINT16
INTC2.ICRLIN30UR2.UINT8[L/H]
INTC2.ICRLIN30UR2.BIT.P0RLIN30UR2
INTC2.ICRLIN30UR2.BIT.P1RLIN30UR2
INTC2.ICRLIN30UR2.BIT.P2RLIN30UR2
INTC2.ICRLIN30UR2.BIT.P3RLIN30UR2
INTC2.ICRLIN30UR2.BIT.TBRLIN30UR2
INTC2.ICRLIN30UR2.BIT.MKRLIN30UR2
INTC2.ICRLIN30UR2.BIT.RFRLIN30UR2
INTC2.ICRLIN30UR2.BIT.CTRLIN30UR2
INTC2.ICP0.UINT16
INTC2.ICP0.UINT8[L/H]
INTC2.ICP0.BIT.P0P0
INTC2.ICP0.BIT.P1P0
INTC2.ICP0.BIT.P2P0
INTC2.ICP0.BIT.P3P0
INTC2.ICP0.BIT.TBP0
INTC2.ICP0.BIT.MKP0
INTC2.ICP0.BIT.RFP0
INTC2.ICP0.BIT.CTP0
INTC2.ICP1.UINT16
INTC2.ICP1.UINT8[L/H]
INTC2.ICP1.BIT.P0P1
INTC2.ICP1.BIT.P1P1
INTC2.ICP1.BIT.P2P1
INTC2.ICP1.BIT.P3P1
INTC2.ICP1.BIT.TBP1
INTC2.ICP1.BIT.MKP1
INTC2.ICP1.BIT.RFP1
INTC2.ICP1.BIT.CTP1
INTC2.ICP2.UINT16
INTC2.ICP2.UINT8[L/H]
INTC2.ICP2.BIT.P0P2
INTC2.ICP2.BIT.P1P2
INTC2.ICP2.BIT.P2P2
INTC2.ICP2.BIT.P3P2
INTC2.ICP2.BIT.TBP2
INTC2.ICP2.BIT.MKP2
INTC2.ICP2.BIT.RFP2
INTC2.ICP2.BIT.CTP2
INTC2.ICWDTA0.UINT16
INTC2.ICWDTA0.UINT8[L/H]
INTC2.ICWDTA0.BIT.P0WDTA0
INTC2.ICWDTA0.BIT.P1WDTA0
INTC2.ICWDTA0.BIT.P2WDTA0
INTC2.ICWDTA0.BIT.P3WDTA0
INTC2.ICWDTA0.BIT.TBWDTA0
INTC2.ICWDTA0.BIT.MKWDTA0
INTC2.ICWDTA0.BIT.RFWDTA0
INTC2.ICWDTA0.BIT.CTWDTA0
INTC2.ICWDTA1.UINT16
INTC2.ICWDTA1.UINT8[L/H]
INTC2.ICWDTA1.BIT.P0WDTA1
INTC2.ICWDTA1.BIT.P1WDTA1
INTC2.ICWDTA1.BIT.P2WDTA1
INTC2.ICWDTA1.BIT.P3WDTA1
INTC2.ICWDTA1.BIT.TBWDTA1
INTC2.ICWDTA1.BIT.MKWDTA1
INTC2.ICWDTA1.BIT.RFWDTA1
INTC2.ICWDTA1.BIT.CTWDTA1
INTC2.ICP3.UINT16
INTC2.ICP3.UINT8[L/H]
INTC2.ICP3.BIT.P0P3
INTC2.ICP3.BIT.P1P3
INTC2.ICP3.BIT.P2P3
INTC2.ICP3.BIT.P3P3
INTC2.ICP3.BIT.TBP3
INTC2.ICP3.BIT.MKP3
INTC2.ICP3.BIT.RFP3
INTC2.ICP3.BIT.CTP3
INTC2.ICP4.UINT16
INTC2.ICP4.UINT8[L/H]
INTC2.ICP4.BIT.P0P4
INTC2.ICP4.BIT.P1P4
INTC2.ICP4.BIT.P2P4
INTC2.ICP4.BIT.P3P4
INTC2.ICP4.BIT.TBP4
INTC2.ICP4.BIT.MKP4
INTC2.ICP4.BIT.RFP4
INTC2.ICP4.BIT.CTP4
INTC2.ICP5.UINT16
INTC2.ICP5.UINT8[L/H]
INTC2.ICP5.BIT.P0P5
INTC2.ICP5.BIT.P1P5
INTC2.ICP5.BIT.P2P5
INTC2.ICP5.BIT.P3P5
INTC2.ICP5.BIT.TBP5
INTC2.ICP5.BIT.MKP5
INTC2.ICP5.BIT.RFP5
INTC2.ICP5.BIT.CTP5
INTC2.ICP10.UINT16
INTC2.ICP10.UINT8[L/H]
INTC2.ICP10.BIT.P0P10
INTC2.ICP10.BIT.P1P10
INTC2.ICP10.BIT.P2P10
INTC2.ICP10.BIT.P3P10
INTC2.ICP10.BIT.TBP10
INTC2.ICP10.BIT.MKP10
INTC2.ICP10.BIT.RFP10
INTC2.ICP10.BIT.CTP10
INTC2.ICP11.UINT16
INTC2.ICP11.UINT8[L/H]
INTC2.ICP11.BIT.P0P11
INTC2.ICP11.BIT.P1P11
INTC2.ICP11.BIT.P2P11
INTC2.ICP11.BIT.P3P11
INTC2.ICP11.BIT.TBP11
INTC2.ICP11.BIT.MKP11
INTC2.ICP11.BIT.RFP11
INTC2.ICP11.BIT.CTP11
INTC2.ICTAUD0I1.UINT16
INTC2.ICTAUD0I1.UINT8[L/H]
INTC2.ICTAUD0I1.BIT.P0TAUD0I1
INTC2.ICTAUD0I1.BIT.P1TAUD0I1
INTC2.ICTAUD0I1.BIT.P2TAUD0I1
INTC2.ICTAUD0I1.BIT.P3TAUD0I1
INTC2.ICTAUD0I1.BIT.TBTAUD0I1
INTC2.ICTAUD0I1.BIT.MKTAUD0I1
INTC2.ICTAUD0I1.BIT.RFTAUD0I1
INTC2.ICTAUD0I1.BIT.CTTAUD0I1
INTC2.ICTAUD0I3.UINT16
INTC2.ICTAUD0I3.UINT8[L/H]
INTC2.ICTAUD0I3.BIT.P0TAUD0I3
INTC2.ICTAUD0I3.BIT.P1TAUD0I3
INTC2.ICTAUD0I3.BIT.P2TAUD0I3
INTC2.ICTAUD0I3.BIT.P3TAUD0I3
INTC2.ICTAUD0I3.BIT.TBTAUD0I3
INTC2.ICTAUD0I3.BIT.MKTAUD0I3
INTC2.ICTAUD0I3.BIT.RFTAUD0I3
INTC2.ICTAUD0I3.BIT.CTTAUD0I3
INTC2.ICTAUD0I5.UINT16
INTC2.ICTAUD0I5.UINT8[L/H]
INTC2.ICTAUD0I5.BIT.P0TAUD0I5
INTC2.ICTAUD0I5.BIT.P1TAUD0I5
INTC2.ICTAUD0I5.BIT.P2TAUD0I5
INTC2.ICTAUD0I5.BIT.P3TAUD0I5
INTC2.ICTAUD0I5.BIT.TBTAUD0I5
INTC2.ICTAUD0I5.BIT.MKTAUD0I5
INTC2.ICTAUD0I5.BIT.RFTAUD0I5
INTC2.ICTAUD0I5.BIT.CTTAUD0I5
INTC2.ICTAUD0I7.UINT16
INTC2.ICTAUD0I7.UINT8[L/H]
INTC2.ICTAUD0I7.BIT.P0TAUD0I7
INTC2.ICTAUD0I7.BIT.P1TAUD0I7
INTC2.ICTAUD0I7.BIT.P2TAUD0I7
INTC2.ICTAUD0I7.BIT.P3TAUD0I7
INTC2.ICTAUD0I7.BIT.TBTAUD0I7
INTC2.ICTAUD0I7.BIT.MKTAUD0I7
INTC2.ICTAUD0I7.BIT.RFTAUD0I7
INTC2.ICTAUD0I7.BIT.CTTAUD0I7
INTC2.ICTAUD0I9.UINT16
INTC2.ICTAUD0I9.UINT8[L/H]
INTC2.ICTAUD0I9.BIT.P0TAUD0I9
INTC2.ICTAUD0I9.BIT.P1TAUD0I9
INTC2.ICTAUD0I9.BIT.P2TAUD0I9
INTC2.ICTAUD0I9.BIT.P3TAUD0I9
INTC2.ICTAUD0I9.BIT.TBTAUD0I9
INTC2.ICTAUD0I9.BIT.MKTAUD0I9
INTC2.ICTAUD0I9.BIT.RFTAUD0I9
INTC2.ICTAUD0I9.BIT.CTTAUD0I9
INTC2.ICTAUD0I11.UINT16
INTC2.ICTAUD0I11.UINT8[L/H]
INTC2.ICTAUD0I11.BIT.P0TAUD0I11
INTC2.ICTAUD0I11.BIT.P1TAUD0I11
INTC2.ICTAUD0I11.BIT.P2TAUD0I11
INTC2.ICTAUD0I11.BIT.P3TAUD0I11
INTC2.ICTAUD0I11.BIT.TBTAUD0I11
INTC2.ICTAUD0I11.BIT.MKTAUD0I11
INTC2.ICTAUD0I11.BIT.RFTAUD0I11
INTC2.ICTAUD0I11.BIT.CTTAUD0I11
INTC2.ICTAUD0I13.UINT16
INTC2.ICTAUD0I13.UINT8[L/H]
INTC2.ICTAUD0I13.BIT.P0TAUD0I13
INTC2.ICTAUD0I13.BIT.P1TAUD0I13
INTC2.ICTAUD0I13.BIT.P2TAUD0I13
INTC2.ICTAUD0I13.BIT.P3TAUD0I13
INTC2.ICTAUD0I13.BIT.TBTAUD0I13
INTC2.ICTAUD0I13.BIT.MKTAUD0I13
INTC2.ICTAUD0I13.BIT.RFTAUD0I13
INTC2.ICTAUD0I13.BIT.CTTAUD0I13
INTC2.ICTAUD0I15.UINT16
INTC2.ICTAUD0I15.UINT8[L/H]
INTC2.ICTAUD0I15.BIT.P0TAUD0I15
INTC2.ICTAUD0I15.BIT.P1TAUD0I15
INTC2.ICTAUD0I15.BIT.P2TAUD0I15
INTC2.ICTAUD0I15.BIT.P3TAUD0I15
INTC2.ICTAUD0I15.BIT.TBTAUD0I15
INTC2.ICTAUD0I15.BIT.MKTAUD0I15
INTC2.ICTAUD0I15.BIT.RFTAUD0I15
INTC2.ICTAUD0I15.BIT.CTTAUD0I15
INTC2.ICADCA0ERR.UINT16
INTC2.ICADCA0ERR.UINT8[L/H]
INTC2.ICADCA0ERR.BIT.P0ADCA0ERR
INTC2.ICADCA0ERR.BIT.P1ADCA0ERR
INTC2.ICADCA0ERR.BIT.P2ADCA0ERR
INTC2.ICADCA0ERR.BIT.P3ADCA0ERR
INTC2.ICADCA0ERR.BIT.TBADCA0ERR
INTC2.ICADCA0ERR.BIT.MKADCA0ERR
INTC2.ICADCA0ERR.BIT.RFADCA0ERR
INTC2.ICADCA0ERR.BIT.CTADCA0ERR
INTC2.ICCSIG0IRE.UINT16
INTC2.ICCSIG0IRE.UINT8[L/H]
INTC2.ICCSIG0IRE.BIT.P0CSIG0IRE
INTC2.ICCSIG0IRE.BIT.P1CSIG0IRE
INTC2.ICCSIG0IRE.BIT.P2CSIG0IRE
INTC2.ICCSIG0IRE.BIT.P3CSIG0IRE
INTC2.ICCSIG0IRE.BIT.TBCSIG0IRE
INTC2.ICCSIG0IRE.BIT.MKCSIG0IRE
INTC2.ICCSIG0IRE.BIT.RFCSIG0IRE
INTC2.ICCSIG0IRE.BIT.CTCSIG0IRE
INTC2.ICRLIN20.UINT16
INTC2.ICRLIN20.UINT8[L/H]
INTC2.ICRLIN20.BIT.P0RLIN20
INTC2.ICRLIN20.BIT.P1RLIN20
INTC2.ICRLIN20.BIT.P2RLIN20
INTC2.ICRLIN20.BIT.P3RLIN20
INTC2.ICRLIN20.BIT.TBRLIN20
INTC2.ICRLIN20.BIT.MKRLIN20
INTC2.ICRLIN20.BIT.RFRLIN20
INTC2.ICRLIN20.BIT.CTRLIN20
INTC2.ICRLIN21.UINT16
INTC2.ICRLIN21.UINT8[L/H]
INTC2.ICRLIN21.BIT.P0RLIN21
INTC2.ICRLIN21.BIT.P1RLIN21
INTC2.ICRLIN21.BIT.P2RLIN21
INTC2.ICRLIN21.BIT.P3RLIN21
INTC2.ICRLIN21.BIT.TBRLIN21
INTC2.ICRLIN21.BIT.MKRLIN21
INTC2.ICRLIN21.BIT.RFRLIN21
INTC2.ICRLIN21.BIT.CTRLIN21
INTC2.ICDMA0.UINT16
INTC2.ICDMA0.UINT8[L/H]
INTC2.ICDMA0.BIT.P0DMA0
INTC2.ICDMA0.BIT.P1DMA0
INTC2.ICDMA0.BIT.P2DMA0
INTC2.ICDMA0.BIT.P3DMA0
INTC2.ICDMA0.BIT.TBDMA0
INTC2.ICDMA0.BIT.MKDMA0
INTC2.ICDMA0.BIT.RFDMA0
INTC2.ICDMA0.BIT.CTDMA0
INTC2.ICDMA1.UINT16
INTC2.ICDMA1.UINT8[L/H]
INTC2.ICDMA1.BIT.P0DMA1
INTC2.ICDMA1.BIT.P1DMA1
INTC2.ICDMA1.BIT.P2DMA1
INTC2.ICDMA1.BIT.P3DMA1
INTC2.ICDMA1.BIT.TBDMA1
INTC2.ICDMA1.BIT.MKDMA1
INTC2.ICDMA1.BIT.RFDMA1
INTC2.ICDMA1.BIT.CTDMA1
INTC2.ICDMA2.UINT16
INTC2.ICDMA2.UINT8[L/H]
INTC2.ICDMA2.BIT.P0DMA2
INTC2.ICDMA2.BIT.P1DMA2
INTC2.ICDMA2.BIT.P2DMA2
INTC2.ICDMA2.BIT.P3DMA2
INTC2.ICDMA2.BIT.TBDMA2
INTC2.ICDMA2.BIT.MKDMA2
INTC2.ICDMA2.BIT.RFDMA2
INTC2.ICDMA2.BIT.CTDMA2
INTC2.ICDMA3.UINT16
INTC2.ICDMA3.UINT8[L/H]
INTC2.ICDMA3.BIT.P0DMA3
INTC2.ICDMA3.BIT.P1DMA3
INTC2.ICDMA3.BIT.P2DMA3
INTC2.ICDMA3.BIT.P3DMA3
INTC2.ICDMA3.BIT.TBDMA3
INTC2.ICDMA3.BIT.MKDMA3
INTC2.ICDMA3.BIT.RFDMA3
INTC2.ICDMA3.BIT.CTDMA3
INTC2.ICDMA4.UINT16
INTC2.ICDMA4.UINT8[L/H]
INTC2.ICDMA4.BIT.P0DMA4
INTC2.ICDMA4.BIT.P1DMA4
INTC2.ICDMA4.BIT.P2DMA4
INTC2.ICDMA4.BIT.P3DMA4
INTC2.ICDMA4.BIT.TBDMA4
INTC2.ICDMA4.BIT.MKDMA4
INTC2.ICDMA4.BIT.RFDMA4
INTC2.ICDMA4.BIT.CTDMA4
INTC2.ICDMA5.UINT16
INTC2.ICDMA5.UINT8[L/H]
INTC2.ICDMA5.BIT.P0DMA5
INTC2.ICDMA5.BIT.P1DMA5
INTC2.ICDMA5.BIT.P2DMA5
INTC2.ICDMA5.BIT.P3DMA5
INTC2.ICDMA5.BIT.TBDMA5
INTC2.ICDMA5.BIT.MKDMA5
INTC2.ICDMA5.BIT.RFDMA5
INTC2.ICDMA5.BIT.CTDMA5
INTC2.ICDMA6.UINT16
INTC2.ICDMA6.UINT8[L/H]
INTC2.ICDMA6.BIT.P0DMA6
INTC2.ICDMA6.BIT.P1DMA6
INTC2.ICDMA6.BIT.P2DMA6
INTC2.ICDMA6.BIT.P3DMA6
INTC2.ICDMA6.BIT.TBDMA6
INTC2.ICDMA6.BIT.MKDMA6
INTC2.ICDMA6.BIT.RFDMA6
INTC2.ICDMA6.BIT.CTDMA6
INTC2.ICDMA7.UINT16
INTC2.ICDMA7.UINT8[L/H]
INTC2.ICDMA7.BIT.P0DMA7
INTC2.ICDMA7.BIT.P1DMA7
INTC2.ICDMA7.BIT.P2DMA7
INTC2.ICDMA7.BIT.P3DMA7
INTC2.ICDMA7.BIT.TBDMA7
INTC2.ICDMA7.BIT.MKDMA7
INTC2.ICDMA7.BIT.RFDMA7
INTC2.ICDMA7.BIT.CTDMA7
INTC2.ICDMA8.UINT16
INTC2.ICDMA8.UINT8[L/H]
INTC2.ICDMA8.BIT.P0DMA8
INTC2.ICDMA8.BIT.P1DMA8
INTC2.ICDMA8.BIT.P2DMA8
INTC2.ICDMA8.BIT.P3DMA8
INTC2.ICDMA8.BIT.TBDMA8
INTC2.ICDMA8.BIT.MKDMA8
INTC2.ICDMA8.BIT.RFDMA8
INTC2.ICDMA8.BIT.CTDMA8
INTC2.ICDMA9.UINT16
INTC2.ICDMA9.UINT8[L/H]
INTC2.ICDMA9.BIT.P0DMA9
INTC2.ICDMA9.BIT.P1DMA9
INTC2.ICDMA9.BIT.P2DMA9
INTC2.ICDMA9.BIT.P3DMA9
INTC2.ICDMA9.BIT.TBDMA9
INTC2.ICDMA9.BIT.MKDMA9
INTC2.ICDMA9.BIT.RFDMA9
INTC2.ICDMA9.BIT.CTDMA9
INTC2.ICDMA10.UINT16
INTC2.ICDMA10.UINT8[L/H]
INTC2.ICDMA10.BIT.P0DMA10
INTC2.ICDMA10.BIT.P1DMA10
INTC2.ICDMA10.BIT.P2DMA10
INTC2.ICDMA10.BIT.P3DMA10
INTC2.ICDMA10.BIT.TBDMA10
INTC2.ICDMA10.BIT.MKDMA10
INTC2.ICDMA10.BIT.RFDMA10
INTC2.ICDMA10.BIT.CTDMA10
INTC2.ICDMA11.UINT16
INTC2.ICDMA11.UINT8[L/H]
INTC2.ICDMA11.BIT.P0DMA11
INTC2.ICDMA11.BIT.P1DMA11
INTC2.ICDMA11.BIT.P2DMA11
INTC2.ICDMA11.BIT.P3DMA11
INTC2.ICDMA11.BIT.TBDMA11
INTC2.ICDMA11.BIT.MKDMA11
INTC2.ICDMA11.BIT.RFDMA11
INTC2.ICDMA11.BIT.CTDMA11
INTC2.ICDMA12.UINT16
INTC2.ICDMA12.UINT8[L/H]
INTC2.ICDMA12.BIT.P0DMA12
INTC2.ICDMA12.BIT.P1DMA12
INTC2.ICDMA12.BIT.P2DMA12
INTC2.ICDMA12.BIT.P3DMA12
INTC2.ICDMA12.BIT.TBDMA12
INTC2.ICDMA12.BIT.MKDMA12
INTC2.ICDMA12.BIT.RFDMA12
INTC2.ICDMA12.BIT.CTDMA12
INTC2.ICDMA13.UINT16
INTC2.ICDMA13.UINT8[L/H]
INTC2.ICDMA13.BIT.P0DMA13
INTC2.ICDMA13.BIT.P1DMA13
INTC2.ICDMA13.BIT.P2DMA13
INTC2.ICDMA13.BIT.P3DMA13
INTC2.ICDMA13.BIT.TBDMA13
INTC2.ICDMA13.BIT.MKDMA13
INTC2.ICDMA13.BIT.RFDMA13
INTC2.ICDMA13.BIT.CTDMA13
INTC2.ICDMA14.UINT16
INTC2.ICDMA14.UINT8[L/H]
INTC2.ICDMA14.BIT.P0DMA14
INTC2.ICDMA14.BIT.P1DMA14
INTC2.ICDMA14.BIT.P2DMA14
INTC2.ICDMA14.BIT.P3DMA14
INTC2.ICDMA14.BIT.TBDMA14
INTC2.ICDMA14.BIT.MKDMA14
INTC2.ICDMA14.BIT.RFDMA14
INTC2.ICDMA14.BIT.CTDMA14
INTC2.ICDMA15.UINT16
INTC2.ICDMA15.UINT8[L/H]
INTC2.ICDMA15.BIT.P0DMA15
INTC2.ICDMA15.BIT.P1DMA15
INTC2.ICDMA15.BIT.P2DMA15
INTC2.ICDMA15.BIT.P3DMA15
INTC2.ICDMA15.BIT.TBDMA15
INTC2.ICDMA15.BIT.MKDMA15
INTC2.ICDMA15.BIT.RFDMA15
INTC2.ICDMA15.BIT.CTDMA15
INTC2.ICRIIC0TI.UINT16
INTC2.ICRIIC0TI.UINT8[L/H]
INTC2.ICRIIC0TI.BIT.P0RIIC0TI
INTC2.ICRIIC0TI.BIT.P1RIIC0TI
INTC2.ICRIIC0TI.BIT.P2RIIC0TI
INTC2.ICRIIC0TI.BIT.P3RIIC0TI
INTC2.ICRIIC0TI.BIT.TBRIIC0TI
INTC2.ICRIIC0TI.BIT.MKRIIC0TI
INTC2.ICRIIC0TI.BIT.RFRIIC0TI
INTC2.ICRIIC0TI.BIT.CTRIIC0TI
INTC2.ICRIIC0EE.UINT16
INTC2.ICRIIC0EE.UINT8[L/H]
INTC2.ICRIIC0EE.BIT.P0RIIC0EE
INTC2.ICRIIC0EE.BIT.P1RIIC0EE
INTC2.ICRIIC0EE.BIT.P2RIIC0EE
INTC2.ICRIIC0EE.BIT.P3RIIC0EE
INTC2.ICRIIC0EE.BIT.TBRIIC0EE
INTC2.ICRIIC0EE.BIT.MKRIIC0EE
INTC2.ICRIIC0EE.BIT.RFRIIC0EE
INTC2.ICRIIC0EE.BIT.CTRIIC0EE
INTC2.ICRIIC0RI.UINT16
INTC2.ICRIIC0RI.UINT8[L/H]
INTC2.ICRIIC0RI.BIT.P0RIIC0RI
INTC2.ICRIIC0RI.BIT.P1RIIC0RI
INTC2.ICRIIC0RI.BIT.P2RIIC0RI
INTC2.ICRIIC0RI.BIT.P3RIIC0RI
INTC2.ICRIIC0RI.BIT.TBRIIC0RI
INTC2.ICRIIC0RI.BIT.MKRIIC0RI
INTC2.ICRIIC0RI.BIT.RFRIIC0RI
INTC2.ICRIIC0RI.BIT.CTRIIC0RI
INTC2.ICRIIC0TEI.UINT16
INTC2.ICRIIC0TEI.UINT8[L/H]
INTC2.ICRIIC0TEI.BIT.P0RIIC0TEI
INTC2.ICRIIC0TEI.BIT.P1RIIC0TEI
INTC2.ICRIIC0TEI.BIT.P2RIIC0TEI
INTC2.ICRIIC0TEI.BIT.P3RIIC0TEI
INTC2.ICRIIC0TEI.BIT.TBRIIC0TEI
INTC2.ICRIIC0TEI.BIT.MKRIIC0TEI
INTC2.ICRIIC0TEI.BIT.RFRIIC0TEI
INTC2.ICRIIC0TEI.BIT.CTRIIC0TEI
INTC2.ICTAUJ0I0.UINT16
INTC2.ICTAUJ0I0.UINT8[L/H]
INTC2.ICTAUJ0I0.BIT.P0TAUJ0I0
INTC2.ICTAUJ0I0.BIT.P1TAUJ0I0
INTC2.ICTAUJ0I0.BIT.P2TAUJ0I0
INTC2.ICTAUJ0I0.BIT.P3TAUJ0I0
INTC2.ICTAUJ0I0.BIT.TBTAUJ0I0
INTC2.ICTAUJ0I0.BIT.MKTAUJ0I0
INTC2.ICTAUJ0I0.BIT.RFTAUJ0I0
INTC2.ICTAUJ0I0.BIT.CTTAUJ0I0
INTC2.ICTAUJ0I1.UINT16
INTC2.ICTAUJ0I1.UINT8[L/H]
INTC2.ICTAUJ0I1.BIT.P0TAUJ0I1
INTC2.ICTAUJ0I1.BIT.P1TAUJ0I1
INTC2.ICTAUJ0I1.BIT.P2TAUJ0I1
INTC2.ICTAUJ0I1.BIT.P3TAUJ0I1
INTC2.ICTAUJ0I1.BIT.TBTAUJ0I1
INTC2.ICTAUJ0I1.BIT.MKTAUJ0I1
INTC2.ICTAUJ0I1.BIT.RFTAUJ0I1
INTC2.ICTAUJ0I1.BIT.CTTAUJ0I1
INTC2.ICTAUJ0I2.UINT16
INTC2.ICTAUJ0I2.UINT8[L/H]
INTC2.ICTAUJ0I2.BIT.P0TAUJ0I2
INTC2.ICTAUJ0I2.BIT.P1TAUJ0I2
INTC2.ICTAUJ0I2.BIT.P2TAUJ0I2
INTC2.ICTAUJ0I2.BIT.P3TAUJ0I2
INTC2.ICTAUJ0I2.BIT.TBTAUJ0I2
INTC2.ICTAUJ0I2.BIT.MKTAUJ0I2
INTC2.ICTAUJ0I2.BIT.RFTAUJ0I2
INTC2.ICTAUJ0I2.BIT.CTTAUJ0I2
INTC2.ICTAUJ0I3.UINT16
INTC2.ICTAUJ0I3.UINT8[L/H]
INTC2.ICTAUJ0I3.BIT.P0TAUJ0I3
INTC2.ICTAUJ0I3.BIT.P1TAUJ0I3
INTC2.ICTAUJ0I3.BIT.P2TAUJ0I3
INTC2.ICTAUJ0I3.BIT.P3TAUJ0I3
INTC2.ICTAUJ0I3.BIT.TBTAUJ0I3
INTC2.ICTAUJ0I3.BIT.MKTAUJ0I3
INTC2.ICTAUJ0I3.BIT.RFTAUJ0I3
INTC2.ICTAUJ0I3.BIT.CTTAUJ0I3
INTC2.ICOSTM0.UINT16
INTC2.ICOSTM0.UINT8[L/H]
INTC2.ICOSTM0.BIT.P0OSTM0
INTC2.ICOSTM0.BIT.P1OSTM0
INTC2.ICOSTM0.BIT.P2OSTM0
INTC2.ICOSTM0.BIT.P3OSTM0
INTC2.ICOSTM0.BIT.TBOSTM0
INTC2.ICOSTM0.BIT.MKOSTM0
INTC2.ICOSTM0.BIT.RFOSTM0
INTC2.ICOSTM0.BIT.CTOSTM0
INTC2.ICENCA0IOV.UINT16
INTC2.ICENCA0IOV.UINT16
INTC2.ICENCA0IOV.UINT8[L/H]
INTC2.ICENCA0IOV.REGS8.ICPWGA4L.UINT8
INTC2.ICENCA0IOV.REGS8.ICPWGA4H.UINT8
INTC2.ICENCA0IOV.BIT.P0ENCA0IOV
INTC2.ICENCA0IOV.BIT.P0PWGA4
INTC2.ICENCA0IOV.BIT.P1ENCA0IOV
INTC2.ICENCA0IOV.BIT.P1PWGA4
INTC2.ICENCA0IOV.BIT.P2ENCA0IOV
INTC2.ICENCA0IOV.BIT.P2PWGA4
INTC2.ICENCA0IOV.BIT.P3ENCA0IOV
INTC2.ICENCA0IOV.BIT.P3PWGA4
INTC2.ICENCA0IOV.BIT.TBENCA0IOV
INTC2.ICENCA0IOV.BIT.TBPWGA4
INTC2.ICENCA0IOV.BIT.MKENCA0IOV
INTC2.ICENCA0IOV.BIT.MKPWGA4
INTC2.ICENCA0IOV.BIT.RFENCA0IOV
INTC2.ICENCA0IOV.BIT.RFPWGA4
INTC2.ICENCA0IOV.BIT.CTENCA0IOV
INTC2.ICENCA0IOV.BIT.CTPWGA4
INTC2.ICENCA0IUD.UINT16
INTC2.ICENCA0IUD.UINT16
INTC2.ICENCA0IUD.UINT8[L/H]
INTC2.ICENCA0IUD.REGS8.ICPWGA5L.UINT8
INTC2.ICENCA0IUD.REGS8.ICPWGA5H.UINT8
INTC2.ICENCA0IUD.BIT.P0ENCA0IUD
INTC2.ICENCA0IUD.BIT.P0PWGA5
INTC2.ICENCA0IUD.BIT.P1ENCA0IUD
INTC2.ICENCA0IUD.BIT.P1PWGA5
INTC2.ICENCA0IUD.BIT.P2ENCA0IUD
INTC2.ICENCA0IUD.BIT.P2PWGA5
INTC2.ICENCA0IUD.BIT.P3ENCA0IUD
INTC2.ICENCA0IUD.BIT.P3PWGA5
INTC2.ICENCA0IUD.BIT.TBENCA0IUD
INTC2.ICENCA0IUD.BIT.TBPWGA5
INTC2.ICENCA0IUD.BIT.MKENCA0IUD
INTC2.ICENCA0IUD.BIT.MKPWGA5
INTC2.ICENCA0IUD.BIT.RFENCA0IUD
INTC2.ICENCA0IUD.BIT.RFPWGA5
INTC2.ICENCA0IUD.BIT.CTENCA0IUD
INTC2.ICENCA0IUD.BIT.CTPWGA5
INTC2.ICENCA0I0.UINT16
INTC2.ICENCA0I0.UINT16
INTC2.ICENCA0I0.UINT8[L/H]
INTC2.ICENCA0I0.REGS8.ICPWGA6L.UINT8
INTC2.ICENCA0I0.REGS8.ICPWGA6H.UINT8
INTC2.ICENCA0I0.BIT.P0ENCA0I0
INTC2.ICENCA0I0.BIT.P0PWGA6
INTC2.ICENCA0I0.BIT.P1ENCA0I0
INTC2.ICENCA0I0.BIT.P1PWGA6
INTC2.ICENCA0I0.BIT.P2ENCA0I0
INTC2.ICENCA0I0.BIT.P2PWGA6
INTC2.ICENCA0I0.BIT.P3ENCA0I0
INTC2.ICENCA0I0.BIT.P3PWGA6
INTC2.ICENCA0I0.BIT.TBENCA0I0
INTC2.ICENCA0I0.BIT.TBPWGA6
INTC2.ICENCA0I0.BIT.MKENCA0I0
INTC2.ICENCA0I0.BIT.MKPWGA6
INTC2.ICENCA0I0.BIT.RFENCA0I0
INTC2.ICENCA0I0.BIT.RFPWGA6
INTC2.ICENCA0I0.BIT.CTENCA0I0
INTC2.ICENCA0I0.BIT.CTPWGA6
INTC2.ICENCA0I1.UINT16
INTC2.ICENCA0I1.UINT16
INTC2.ICENCA0I1.UINT8[L/H]
INTC2.ICENCA0I1.REGS8.ICPWGA7L.UINT8
INTC2.ICENCA0I1.REGS8.ICPWGA7H.UINT8
INTC2.ICENCA0I1.BIT.P0ENCA0I1
INTC2.ICENCA0I1.BIT.P0PWGA7
INTC2.ICENCA0I1.BIT.P1ENCA0I1
INTC2.ICENCA0I1.BIT.P1PWGA7
INTC2.ICENCA0I1.BIT.P2ENCA0I1
INTC2.ICENCA0I1.BIT.P2PWGA7
INTC2.ICENCA0I1.BIT.P3ENCA0I1
INTC2.ICENCA0I1.BIT.P3PWGA7
INTC2.ICENCA0I1.BIT.TBENCA0I1
INTC2.ICENCA0I1.BIT.TBPWGA7
INTC2.ICENCA0I1.BIT.MKENCA0I1
INTC2.ICENCA0I1.BIT.MKPWGA7
INTC2.ICENCA0I1.BIT.RFENCA0I1
INTC2.ICENCA0I1.BIT.RFPWGA7
INTC2.ICENCA0I1.BIT.CTENCA0I1
INTC2.ICENCA0I1.BIT.CTPWGA7
INTC2.ICENCA0IEC.UINT16
INTC2.ICENCA0IEC.UINT8[L/H]
INTC2.ICENCA0IEC.BIT.P0ENCA0IEC
INTC2.ICENCA0IEC.BIT.P1ENCA0IEC
INTC2.ICENCA0IEC.BIT.P2ENCA0IEC
INTC2.ICENCA0IEC.BIT.P3ENCA0IEC
INTC2.ICENCA0IEC.BIT.TBENCA0IEC
INTC2.ICENCA0IEC.BIT.MKENCA0IEC
INTC2.ICENCA0IEC.BIT.RFENCA0IEC
INTC2.ICENCA0IEC.BIT.CTENCA0IEC
INTC2.ICKR0.UINT16
INTC2.ICKR0.UINT8[L/H]
INTC2.ICKR0.BIT.P0KR0
INTC2.ICKR0.BIT.P1KR0
INTC2.ICKR0.BIT.P2KR0
INTC2.ICKR0.BIT.P3KR0
INTC2.ICKR0.BIT.TBKR0
INTC2.ICKR0.BIT.MKKR0
INTC2.ICKR0.BIT.RFKR0
INTC2.ICKR0.BIT.CTKR0
INTC2.ICQFULL.UINT16
INTC2.ICQFULL.UINT8[L/H]
INTC2.ICQFULL.BIT.P0QFULL
INTC2.ICQFULL.BIT.P1QFULL
INTC2.ICQFULL.BIT.P2QFULL
INTC2.ICQFULL.BIT.P3QFULL
INTC2.ICQFULL.BIT.TBQFULL
INTC2.ICQFULL.BIT.MKQFULL
INTC2.ICQFULL.BIT.RFQFULL
INTC2.ICQFULL.BIT.CTQFULL
INTC2.ICPWGA0.UINT16
INTC2.ICPWGA0.UINT8[L/H]
INTC2.ICPWGA0.BIT.P0PWGA0
INTC2.ICPWGA0.BIT.P1PWGA0
INTC2.ICPWGA0.BIT.P2PWGA0
INTC2.ICPWGA0.BIT.P3PWGA0
INTC2.ICPWGA0.BIT.TBPWGA0
INTC2.ICPWGA0.BIT.MKPWGA0
INTC2.ICPWGA0.BIT.RFPWGA0
INTC2.ICPWGA0.BIT.CTPWGA0
INTC2.ICPWGA1.UINT16
INTC2.ICPWGA1.UINT8[L/H]
INTC2.ICPWGA1.BIT.P0PWGA1
INTC2.ICPWGA1.BIT.P1PWGA1
INTC2.ICPWGA1.BIT.P2PWGA1
INTC2.ICPWGA1.BIT.P3PWGA1
INTC2.ICPWGA1.BIT.TBPWGA1
INTC2.ICPWGA1.BIT.MKPWGA1
INTC2.ICPWGA1.BIT.RFPWGA1
INTC2.ICPWGA1.BIT.CTPWGA1
INTC2.ICPWGA2.UINT16
INTC2.ICPWGA2.UINT8[L/H]
INTC2.ICPWGA2.BIT.P0PWGA2
INTC2.ICPWGA2.BIT.P1PWGA2
INTC2.ICPWGA2.BIT.P2PWGA2
INTC2.ICPWGA2.BIT.P3PWGA2
INTC2.ICPWGA2.BIT.TBPWGA2
INTC2.ICPWGA2.BIT.MKPWGA2
INTC2.ICPWGA2.BIT.RFPWGA2
INTC2.ICPWGA2.BIT.CTPWGA2
INTC2.ICPWGA3.UINT16
INTC2.ICPWGA3.UINT8[L/H]
INTC2.ICPWGA3.BIT.P0PWGA3
INTC2.ICPWGA3.BIT.P1PWGA3
INTC2.ICPWGA3.BIT.P2PWGA3
INTC2.ICPWGA3.BIT.P3PWGA3
INTC2.ICPWGA3.BIT.TBPWGA3
INTC2.ICPWGA3.BIT.MKPWGA3
INTC2.ICPWGA3.BIT.RFPWGA3
INTC2.ICPWGA3.BIT.CTPWGA3
INTC2.ICPWGA8.UINT16
INTC2.ICPWGA8.UINT8[L/H]
INTC2.ICPWGA8.BIT.P0PWGA8
INTC2.ICPWGA8.BIT.P1PWGA8
INTC2.ICPWGA8.BIT.P2PWGA8
INTC2.ICPWGA8.BIT.P3PWGA8
INTC2.ICPWGA8.BIT.TBPWGA8
INTC2.ICPWGA8.BIT.MKPWGA8
INTC2.ICPWGA8.BIT.RFPWGA8
INTC2.ICPWGA8.BIT.CTPWGA8
INTC2.ICPWGA9.UINT16
INTC2.ICPWGA9.UINT8[L/H]
INTC2.ICPWGA9.BIT.P0PWGA9
INTC2.ICPWGA9.BIT.P1PWGA9
INTC2.ICPWGA9.BIT.P2PWGA9
INTC2.ICPWGA9.BIT.P3PWGA9
INTC2.ICPWGA9.BIT.TBPWGA9
INTC2.ICPWGA9.BIT.MKPWGA9
INTC2.ICPWGA9.BIT.RFPWGA9
INTC2.ICPWGA9.BIT.CTPWGA9
INTC2.ICPWGA10.UINT16
INTC2.ICPWGA10.UINT8[L/H]
INTC2.ICPWGA10.BIT.P0PWGA10
INTC2.ICPWGA10.BIT.P1PWGA10
INTC2.ICPWGA10.BIT.P2PWGA10
INTC2.ICPWGA10.BIT.P3PWGA10
INTC2.ICPWGA10.BIT.TBPWGA10
INTC2.ICPWGA10.BIT.MKPWGA10
INTC2.ICPWGA10.BIT.RFPWGA10
INTC2.ICPWGA10.BIT.CTPWGA10
INTC2.ICPWGA11.UINT16
INTC2.ICPWGA11.UINT8[L/H]
INTC2.ICPWGA11.BIT.P0PWGA11
INTC2.ICPWGA11.BIT.P1PWGA11
INTC2.ICPWGA11.BIT.P2PWGA11
INTC2.ICPWGA11.BIT.P3PWGA11
INTC2.ICPWGA11.BIT.TBPWGA11
INTC2.ICPWGA11.BIT.MKPWGA11
INTC2.ICPWGA11.BIT.RFPWGA11
INTC2.ICPWGA11.BIT.CTPWGA11
INTC2.ICPWGA12.UINT16
INTC2.ICPWGA12.UINT8[L/H]
INTC2.ICPWGA12.BIT.P0PWGA12
INTC2.ICPWGA12.BIT.P1PWGA12
INTC2.ICPWGA12.BIT.P2PWGA12
INTC2.ICPWGA12.BIT.P3PWGA12
INTC2.ICPWGA12.BIT.TBPWGA12
INTC2.ICPWGA12.BIT.MKPWGA12
INTC2.ICPWGA12.BIT.RFPWGA12
INTC2.ICPWGA12.BIT.CTPWGA12
INTC2.ICPWGA13.UINT16
INTC2.ICPWGA13.UINT8[L/H]
INTC2.ICPWGA13.BIT.P0PWGA13
INTC2.ICPWGA13.BIT.P1PWGA13
INTC2.ICPWGA13.BIT.P2PWGA13
INTC2.ICPWGA13.BIT.P3PWGA13
INTC2.ICPWGA13.BIT.TBPWGA13
INTC2.ICPWGA13.BIT.MKPWGA13
INTC2.ICPWGA13.BIT.RFPWGA13
INTC2.ICPWGA13.BIT.CTPWGA13
INTC2.ICPWGA14.UINT16
INTC2.ICPWGA14.UINT8[L/H]
INTC2.ICPWGA14.BIT.P0PWGA14
INTC2.ICPWGA14.BIT.P1PWGA14
INTC2.ICPWGA14.BIT.P2PWGA14
INTC2.ICPWGA14.BIT.P3PWGA14
INTC2.ICPWGA14.BIT.TBPWGA14
INTC2.ICPWGA14.BIT.MKPWGA14
INTC2.ICPWGA14.BIT.RFPWGA14
INTC2.ICPWGA14.BIT.CTPWGA14
INTC2.ICPWGA15.UINT16
INTC2.ICPWGA15.UINT8[L/H]
INTC2.ICPWGA15.BIT.P0PWGA15
INTC2.ICPWGA15.BIT.P1PWGA15
INTC2.ICPWGA15.BIT.P2PWGA15
INTC2.ICPWGA15.BIT.P3PWGA15
INTC2.ICPWGA15.BIT.TBPWGA15
INTC2.ICPWGA15.BIT.MKPWGA15
INTC2.ICPWGA15.BIT.RFPWGA15
INTC2.ICPWGA15.BIT.CTPWGA15
INTC2.ICFLERR.UINT16
INTC2.ICFLERR.UINT8[L/H]
INTC2.ICFLERR.BIT.P0FLERR
INTC2.ICFLERR.BIT.P1FLERR
INTC2.ICFLERR.BIT.P2FLERR
INTC2.ICFLERR.BIT.P3FLERR
INTC2.ICFLERR.BIT.TBFLERR
INTC2.ICFLERR.BIT.MKFLERR
INTC2.ICFLERR.BIT.RFFLERR
INTC2.ICFLERR.BIT.CTFLERR
INTC2.ICFLENDNM.UINT16
INTC2.ICFLENDNM.UINT8[L/H]
INTC2.ICFLENDNM.BIT.P0FLENDNM
INTC2.ICFLENDNM.BIT.P1FLENDNM
INTC2.ICFLENDNM.BIT.P2FLENDNM
INTC2.ICFLENDNM.BIT.P3FLENDNM
INTC2.ICFLENDNM.BIT.TBFLENDNM
INTC2.ICFLENDNM.BIT.MKFLENDNM
INTC2.ICFLENDNM.BIT.RFFLENDNM
INTC2.ICFLENDNM.BIT.CTFLENDNM
INTC2.ICCWEND.UINT16
INTC2.ICCWEND.UINT8[L/H]
INTC2.ICCWEND.BIT.P0CWEND
INTC2.ICCWEND.BIT.P1CWEND
INTC2.ICCWEND.BIT.P2CWEND
INTC2.ICCWEND.BIT.P3CWEND
INTC2.ICCWEND.BIT.TBCWEND
INTC2.ICCWEND.BIT.MKCWEND
INTC2.ICCWEND.BIT.RFCWEND
INTC2.ICCWEND.BIT.CTCWEND
INTC2.ICRCAN1ERR.UINT16
INTC2.ICRCAN1ERR.UINT8[L/H]
INTC2.ICRCAN1ERR.BIT.P0RCAN1ERR
INTC2.ICRCAN1ERR.BIT.P1RCAN1ERR
INTC2.ICRCAN1ERR.BIT.P2RCAN1ERR
INTC2.ICRCAN1ERR.BIT.P3RCAN1ERR
INTC2.ICRCAN1ERR.BIT.TBRCAN1ERR
INTC2.ICRCAN1ERR.BIT.MKRCAN1ERR
INTC2.ICRCAN1ERR.BIT.RFRCAN1ERR
INTC2.ICRCAN1ERR.BIT.CTRCAN1ERR
INTC2.ICRCAN1REC.UINT16
INTC2.ICRCAN1REC.UINT8[L/H]
INTC2.ICRCAN1REC.BIT.P0RCAN1REC
INTC2.ICRCAN1REC.BIT.P1RCAN1REC
INTC2.ICRCAN1REC.BIT.P2RCAN1REC
INTC2.ICRCAN1REC.BIT.P3RCAN1REC
INTC2.ICRCAN1REC.BIT.TBRCAN1REC
INTC2.ICRCAN1REC.BIT.MKRCAN1REC
INTC2.ICRCAN1REC.BIT.RFRCAN1REC
INTC2.ICRCAN1REC.BIT.CTRCAN1REC
INTC2.ICRCAN1TRX.UINT16
INTC2.ICRCAN1TRX.UINT8[L/H]
INTC2.ICRCAN1TRX.BIT.P0RCAN1TRX
INTC2.ICRCAN1TRX.BIT.P1RCAN1TRX
INTC2.ICRCAN1TRX.BIT.P2RCAN1TRX
INTC2.ICRCAN1TRX.BIT.P3RCAN1TRX
INTC2.ICRCAN1TRX.BIT.TBRCAN1TRX
INTC2.ICRCAN1TRX.BIT.MKRCAN1TRX
INTC2.ICRCAN1TRX.BIT.RFRCAN1TRX
INTC2.ICRCAN1TRX.BIT.CTRCAN1TRX
INTC2.ICCSIH1IC.UINT16
INTC2.ICCSIH1IC.UINT16
INTC2.ICCSIH1IC.UINT8[L/H]
INTC2.ICCSIH1IC.REGS8.ICTAPA0IPEK0L_2.UINT8
INTC2.ICCSIH1IC.REGS8.ICTAPA0IPEK0H_2.UINT8
INTC2.ICCSIH1IC.BIT.P0CSIH1IC
INTC2.ICCSIH1IC.BIT.P0TAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.P1CSIH1IC
INTC2.ICCSIH1IC.BIT.P1TAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.P2CSIH1IC
INTC2.ICCSIH1IC.BIT.P2TAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.P3CSIH1IC
INTC2.ICCSIH1IC.BIT.P3TAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.TBCSIH1IC
INTC2.ICCSIH1IC.BIT.TBTAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.MKCSIH1IC
INTC2.ICCSIH1IC.BIT.MKTAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.RFCSIH1IC
INTC2.ICCSIH1IC.BIT.RFTAPA0IPEK0_2
INTC2.ICCSIH1IC.BIT.CTCSIH1IC
INTC2.ICCSIH1IC.BIT.CTTAPA0IPEK0_2
INTC2.ICCSIH1IR.UINT16
INTC2.ICCSIH1IR.UINT16
INTC2.ICCSIH1IR.UINT8[L/H]
INTC2.ICCSIH1IR.REGS8.ICTAPA0IVLY0L_2.UINT8
INTC2.ICCSIH1IR.REGS8.ICTAPA0IVLY0H_2.UINT8
INTC2.ICCSIH1IR.BIT.P0CSIH1IR
INTC2.ICCSIH1IR.BIT.P0TAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.P1CSIH1IR
INTC2.ICCSIH1IR.BIT.P1TAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.P2CSIH1IR
INTC2.ICCSIH1IR.BIT.P2TAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.P3CSIH1IR
INTC2.ICCSIH1IR.BIT.P3TAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.TBCSIH1IR
INTC2.ICCSIH1IR.BIT.TBTAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.MKCSIH1IR
INTC2.ICCSIH1IR.BIT.MKTAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.RFCSIH1IR
INTC2.ICCSIH1IR.BIT.RFTAPA0IVLY0_2
INTC2.ICCSIH1IR.BIT.CTCSIH1IR
INTC2.ICCSIH1IR.BIT.CTTAPA0IVLY0_2
INTC2.ICCSIG0IC_2.UINT16
INTC2.ICCSIG0IC_2.UINT16
INTC2.ICCSIG0IC_2.UINT8[L/H]
INTC2.ICCSIG0IC_2.REGS8.ICCSIG0ICL_2.UINT8
INTC2.ICCSIG0IC_2.REGS8.ICCSIH1IREL.UINT8
INTC2.ICCSIG0IC_2.REGS8.ICCSIG0ICH_2.UINT8
INTC2.ICCSIG0IC_2.REGS8.ICCSIH1IREH.UINT8
INTC2.ICCSIG0IC_2.BIT.P0CSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.P0CSIH1IRE
INTC2.ICCSIG0IC_2.BIT.P1CSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.P1CSIH1IRE
INTC2.ICCSIG0IC_2.BIT.P2CSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.P2CSIH1IRE
INTC2.ICCSIG0IC_2.BIT.P3CSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.P3CSIH1IRE
INTC2.ICCSIG0IC_2.BIT.TBCSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.TBCSIH1IRE
INTC2.ICCSIG0IC_2.BIT.MKCSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.MKCSIH1IRE
INTC2.ICCSIG0IC_2.BIT.RFCSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.RFCSIH1IRE
INTC2.ICCSIG0IC_2.BIT.CTCSIG0IC_2
INTC2.ICCSIG0IC_2.BIT.CTCSIH1IRE
INTC2.ICCSIG0IR_2.UINT16
INTC2.ICCSIG0IR_2.UINT16
INTC2.ICCSIG0IR_2.UINT8[L/H]
INTC2.ICCSIG0IR_2.REGS8.ICCSIG0IRL_2.UINT8
INTC2.ICCSIG0IR_2.REGS8.ICCSIH1IJCL.UINT8
INTC2.ICCSIG0IR_2.REGS8.ICCSIG0IRH_2.UINT8
INTC2.ICCSIG0IR_2.REGS8.ICCSIH1IJCH.UINT8
INTC2.ICCSIG0IR_2.BIT.P0CSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.P0CSIH1IJC
INTC2.ICCSIG0IR_2.BIT.P1CSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.P1CSIH1IJC
INTC2.ICCSIG0IR_2.BIT.P2CSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.P2CSIH1IJC
INTC2.ICCSIG0IR_2.BIT.P3CSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.P3CSIH1IJC
INTC2.ICCSIG0IR_2.BIT.TBCSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.TBCSIH1IJC
INTC2.ICCSIG0IR_2.BIT.MKCSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.MKCSIH1IJC
INTC2.ICCSIG0IR_2.BIT.RFCSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.RFCSIH1IJC
INTC2.ICCSIG0IR_2.BIT.CTCSIG0IR_2
INTC2.ICCSIG0IR_2.BIT.CTCSIH1IJC
INTC2.ICRLIN31.UINT16
INTC2.ICRLIN31.UINT8[L/H]
INTC2.ICRLIN31.BIT.P0RLIN31
INTC2.ICRLIN31.BIT.P1RLIN31
INTC2.ICRLIN31.BIT.P2RLIN31
INTC2.ICRLIN31.BIT.P3RLIN31
INTC2.ICRLIN31.BIT.TBRLIN31
INTC2.ICRLIN31.BIT.MKRLIN31
INTC2.ICRLIN31.BIT.RFRLIN31
INTC2.ICRLIN31.BIT.CTRLIN31
INTC2.ICRLIN31UR0.UINT16
INTC2.ICRLIN31UR0.UINT8[L/H]
INTC2.ICRLIN31UR0.BIT.P0RLIN31UR0
INTC2.ICRLIN31UR0.BIT.P1RLIN31UR0
INTC2.ICRLIN31UR0.BIT.P2RLIN31UR0
INTC2.ICRLIN31UR0.BIT.P3RLIN31UR0
INTC2.ICRLIN31UR0.BIT.TBRLIN31UR0
INTC2.ICRLIN31UR0.BIT.MKRLIN31UR0
INTC2.ICRLIN31UR0.BIT.RFRLIN31UR0
INTC2.ICRLIN31UR0.BIT.CTRLIN31UR0
INTC2.ICRLIN31UR1.UINT16
INTC2.ICRLIN31UR1.UINT8[L/H]
INTC2.ICRLIN31UR1.BIT.P0RLIN31UR1
INTC2.ICRLIN31UR1.BIT.P1RLIN31UR1
INTC2.ICRLIN31UR1.BIT.P2RLIN31UR1
INTC2.ICRLIN31UR1.BIT.P3RLIN31UR1
INTC2.ICRLIN31UR1.BIT.TBRLIN31UR1
INTC2.ICRLIN31UR1.BIT.MKRLIN31UR1
INTC2.ICRLIN31UR1.BIT.RFRLIN31UR1
INTC2.ICRLIN31UR1.BIT.CTRLIN31UR1
INTC2.ICRLIN31UR2.UINT16
INTC2.ICRLIN31UR2.UINT8[L/H]
INTC2.ICRLIN31UR2.BIT.P0RLIN31UR2
INTC2.ICRLIN31UR2.BIT.P1RLIN31UR2
INTC2.ICRLIN31UR2.BIT.P2RLIN31UR2
INTC2.ICRLIN31UR2.BIT.P3RLIN31UR2
INTC2.ICRLIN31UR2.BIT.TBRLIN31UR2
INTC2.ICRLIN31UR2.BIT.MKRLIN31UR2
INTC2.ICRLIN31UR2.BIT.RFRLIN31UR2
INTC2.ICRLIN31UR2.BIT.CTRLIN31UR2
INTC2.ICPWGA20.UINT16
INTC2.ICPWGA20.UINT8[L/H]
INTC2.ICPWGA20.BIT.P0PWGA20
INTC2.ICPWGA20.BIT.P1PWGA20
INTC2.ICPWGA20.BIT.P2PWGA20
INTC2.ICPWGA20.BIT.P3PWGA20
INTC2.ICPWGA20.BIT.TBPWGA20
INTC2.ICPWGA20.BIT.MKPWGA20
INTC2.ICPWGA20.BIT.RFPWGA20
INTC2.ICPWGA20.BIT.CTPWGA20
INTC2.ICPWGA21.UINT16
INTC2.ICPWGA21.UINT8[L/H]
INTC2.ICPWGA21.BIT.P0PWGA21
INTC2.ICPWGA21.BIT.P1PWGA21
INTC2.ICPWGA21.BIT.P2PWGA21
INTC2.ICPWGA21.BIT.P3PWGA21
INTC2.ICPWGA21.BIT.TBPWGA21
INTC2.ICPWGA21.BIT.MKPWGA21
INTC2.ICPWGA21.BIT.RFPWGA21
INTC2.ICPWGA21.BIT.CTPWGA21
INTC2.ICPWGA22.UINT16
INTC2.ICPWGA22.UINT8[L/H]
INTC2.ICPWGA22.BIT.P0PWGA22
INTC2.ICPWGA22.BIT.P1PWGA22
INTC2.ICPWGA22.BIT.P2PWGA22
INTC2.ICPWGA22.BIT.P3PWGA22
INTC2.ICPWGA22.BIT.TBPWGA22
INTC2.ICPWGA22.BIT.MKPWGA22
INTC2.ICPWGA22.BIT.RFPWGA22
INTC2.ICPWGA22.BIT.CTPWGA22
INTC2.ICPWGA23.UINT16
INTC2.ICPWGA23.UINT8[L/H]
INTC2.ICPWGA23.BIT.P0PWGA23
INTC2.ICPWGA23.BIT.P1PWGA23
INTC2.ICPWGA23.BIT.P2PWGA23
INTC2.ICPWGA23.BIT.P3PWGA23
INTC2.ICPWGA23.BIT.TBPWGA23
INTC2.ICPWGA23.BIT.MKPWGA23
INTC2.ICPWGA23.BIT.RFPWGA23
INTC2.ICPWGA23.BIT.CTPWGA23
INTC2.ICP6.UINT16
INTC2.ICP6.UINT8[L/H]
INTC2.ICP6.BIT.P0P6
INTC2.ICP6.BIT.P1P6
INTC2.ICP6.BIT.P2P6
INTC2.ICP6.BIT.P3P6
INTC2.ICP6.BIT.TBP6
INTC2.ICP6.BIT.MKP6
INTC2.ICP6.BIT.RFP6
INTC2.ICP6.BIT.CTP6
INTC2.ICP7.UINT16
INTC2.ICP7.UINT8[L/H]
INTC2.ICP7.BIT.P0P7
INTC2.ICP7.BIT.P1P7
INTC2.ICP7.BIT.P2P7
INTC2.ICP7.BIT.P3P7
INTC2.ICP7.BIT.TBP7
INTC2.ICP7.BIT.MKP7
INTC2.ICP7.BIT.RFP7
INTC2.ICP7.BIT.CTP7
INTC2.ICP8.UINT16
INTC2.ICP8.UINT8[L/H]
INTC2.ICP8.BIT.P0P8
INTC2.ICP8.BIT.P1P8
INTC2.ICP8.BIT.P2P8
INTC2.ICP8.BIT.P3P8
INTC2.ICP8.BIT.TBP8
INTC2.ICP8.BIT.MKP8
INTC2.ICP8.BIT.RFP8
INTC2.ICP8.BIT.CTP8
INTC2.ICP12.UINT16
INTC2.ICP12.UINT8[L/H]
INTC2.ICP12.BIT.P0P12
INTC2.ICP12.BIT.P1P12
INTC2.ICP12.BIT.P2P12
INTC2.ICP12.BIT.P3P12
INTC2.ICP12.BIT.TBP12
INTC2.ICP12.BIT.MKP12
INTC2.ICP12.BIT.RFP12
INTC2.ICP12.BIT.CTP12
INTC2.ICCSIH2IC.UINT16
INTC2.ICCSIH2IC.UINT16
INTC2.ICCSIH2IC.UINT8[L/H]
INTC2.ICCSIH2IC.REGS8.ICTAUD0I0L_2.UINT8
INTC2.ICCSIH2IC.REGS8.ICTAUD0I0H_2.UINT8
INTC2.ICCSIH2IC.BIT.P0CSIH2IC
INTC2.ICCSIH2IC.BIT.P0TAUD0I0_2
INTC2.ICCSIH2IC.BIT.P1CSIH2IC
INTC2.ICCSIH2IC.BIT.P1TAUD0I0_2
INTC2.ICCSIH2IC.BIT.P2CSIH2IC
INTC2.ICCSIH2IC.BIT.P2TAUD0I0_2
INTC2.ICCSIH2IC.BIT.P3CSIH2IC
INTC2.ICCSIH2IC.BIT.P3TAUD0I0_2
INTC2.ICCSIH2IC.BIT.TBCSIH2IC
INTC2.ICCSIH2IC.BIT.TBTAUD0I0_2
INTC2.ICCSIH2IC.BIT.MKCSIH2IC
INTC2.ICCSIH2IC.BIT.MKTAUD0I0_2
INTC2.ICCSIH2IC.BIT.RFCSIH2IC
INTC2.ICCSIH2IC.BIT.RFTAUD0I0_2
INTC2.ICCSIH2IC.BIT.CTCSIH2IC
INTC2.ICCSIH2IC.BIT.CTTAUD0I0_2
INTC2.ICCSIH2IR.UINT16
INTC2.ICCSIH2IR.UINT16
INTC2.ICCSIH2IR.UINT8[L/H]
INTC2.ICCSIH2IR.REGS8.ICTAUD0I4L_2.UINT8
INTC2.ICCSIH2IR.REGS8.ICTAUD0I4H_2.UINT8
INTC2.ICCSIH2IR.BIT.P0CSIH2IR
INTC2.ICCSIH2IR.BIT.P0TAUD0I4_2
INTC2.ICCSIH2IR.BIT.P1CSIH2IR
INTC2.ICCSIH2IR.BIT.P1TAUD0I4_2
INTC2.ICCSIH2IR.BIT.P2CSIH2IR
INTC2.ICCSIH2IR.BIT.P2TAUD0I4_2
INTC2.ICCSIH2IR.BIT.P3CSIH2IR
INTC2.ICCSIH2IR.BIT.P3TAUD0I4_2
INTC2.ICCSIH2IR.BIT.TBCSIH2IR
INTC2.ICCSIH2IR.BIT.TBTAUD0I4_2
INTC2.ICCSIH2IR.BIT.MKCSIH2IR
INTC2.ICCSIH2IR.BIT.MKTAUD0I4_2
INTC2.ICCSIH2IR.BIT.RFCSIH2IR
INTC2.ICCSIH2IR.BIT.RFTAUD0I4_2
INTC2.ICCSIH2IR.BIT.CTCSIH2IR
INTC2.ICCSIH2IR.BIT.CTTAUD0I4_2
INTC2.ICCSIH2IRE.UINT16
INTC2.ICCSIH2IRE.UINT16
INTC2.ICCSIH2IRE.UINT8[L/H]
INTC2.ICCSIH2IRE.REGS8.ICTAUD0I6L_2.UINT8
INTC2.ICCSIH2IRE.REGS8.ICTAUD0I6H_2.UINT8
INTC2.ICCSIH2IRE.BIT.P0CSIH2IRE
INTC2.ICCSIH2IRE.BIT.P0TAUD0I6_2
INTC2.ICCSIH2IRE.BIT.P1CSIH2IRE
INTC2.ICCSIH2IRE.BIT.P1TAUD0I6_2
INTC2.ICCSIH2IRE.BIT.P2CSIH2IRE
INTC2.ICCSIH2IRE.BIT.P2TAUD0I6_2
INTC2.ICCSIH2IRE.BIT.P3CSIH2IRE
INTC2.ICCSIH2IRE.BIT.P3TAUD0I6_2
INTC2.ICCSIH2IRE.BIT.TBCSIH2IRE
INTC2.ICCSIH2IRE.BIT.TBTAUD0I6_2
INTC2.ICCSIH2IRE.BIT.MKCSIH2IRE
INTC2.ICCSIH2IRE.BIT.MKTAUD0I6_2
INTC2.ICCSIH2IRE.BIT.RFCSIH2IRE
INTC2.ICCSIH2IRE.BIT.RFTAUD0I6_2
INTC2.ICCSIH2IRE.BIT.CTCSIH2IRE
INTC2.ICCSIH2IRE.BIT.CTTAUD0I6_2
INTC2.ICCSIH2IJC.UINT16
INTC2.ICCSIH2IJC.UINT16
INTC2.ICCSIH2IJC.UINT8[L/H]
INTC2.ICCSIH2IJC.REGS8.ICTAUD0I8L_2.UINT8
INTC2.ICCSIH2IJC.REGS8.ICTAUD0I8H_2.UINT8
INTC2.ICCSIH2IJC.BIT.P0CSIH2IJC
INTC2.ICCSIH2IJC.BIT.P0TAUD0I8_2
INTC2.ICCSIH2IJC.BIT.P1CSIH2IJC
INTC2.ICCSIH2IJC.BIT.P1TAUD0I8_2
INTC2.ICCSIH2IJC.BIT.P2CSIH2IJC
INTC2.ICCSIH2IJC.BIT.P2TAUD0I8_2
INTC2.ICCSIH2IJC.BIT.P3CSIH2IJC
INTC2.ICCSIH2IJC.BIT.P3TAUD0I8_2
INTC2.ICCSIH2IJC.BIT.TBCSIH2IJC
INTC2.ICCSIH2IJC.BIT.TBTAUD0I8_2
INTC2.ICCSIH2IJC.BIT.MKCSIH2IJC
INTC2.ICCSIH2IJC.BIT.MKTAUD0I8_2
INTC2.ICCSIH2IJC.BIT.RFCSIH2IJC
INTC2.ICCSIH2IJC.BIT.RFTAUD0I8_2
INTC2.ICCSIH2IJC.BIT.CTCSIH2IJC
INTC2.ICCSIH2IJC.BIT.CTTAUD0I8_2
INTC2.ICTAUB0I0.UINT16
INTC2.ICTAUB0I0.UINT8[L/H]
INTC2.ICTAUB0I0.BIT.P0TAUB0I0
INTC2.ICTAUB0I0.BIT.P1TAUB0I0
INTC2.ICTAUB0I0.BIT.P2TAUB0I0
INTC2.ICTAUB0I0.BIT.P3TAUB0I0
INTC2.ICTAUB0I0.BIT.TBTAUB0I0
INTC2.ICTAUB0I0.BIT.MKTAUB0I0
INTC2.ICTAUB0I0.BIT.RFTAUB0I0
INTC2.ICTAUB0I0.BIT.CTTAUB0I0
INTC2.ICTAUB0I1.UINT16
INTC2.ICTAUB0I1.UINT8[L/H]
INTC2.ICTAUB0I1.BIT.P0TAUB0I1
INTC2.ICTAUB0I1.BIT.P1TAUB0I1
INTC2.ICTAUB0I1.BIT.P2TAUB0I1
INTC2.ICTAUB0I1.BIT.P3TAUB0I1
INTC2.ICTAUB0I1.BIT.TBTAUB0I1
INTC2.ICTAUB0I1.BIT.MKTAUB0I1
INTC2.ICTAUB0I1.BIT.RFTAUB0I1
INTC2.ICTAUB0I1.BIT.CTTAUB0I1
INTC2.ICTAUB0I2.UINT16
INTC2.ICTAUB0I2.UINT8[L/H]
INTC2.ICTAUB0I2.BIT.P0TAUB0I2
INTC2.ICTAUB0I2.BIT.P1TAUB0I2
INTC2.ICTAUB0I2.BIT.P2TAUB0I2
INTC2.ICTAUB0I2.BIT.P3TAUB0I2
INTC2.ICTAUB0I2.BIT.TBTAUB0I2
INTC2.ICTAUB0I2.BIT.MKTAUB0I2
INTC2.ICTAUB0I2.BIT.RFTAUB0I2
INTC2.ICTAUB0I2.BIT.CTTAUB0I2
INTC2.ICPWGA16.UINT16
INTC2.ICPWGA16.UINT16
INTC2.ICPWGA16.UINT8[L/H]
INTC2.ICPWGA16.REGS8.ICTAUB0I3L.UINT8
INTC2.ICPWGA16.REGS8.ICTAUB0I3H.UINT8
INTC2.ICPWGA16.BIT.P0PWGA16
INTC2.ICPWGA16.BIT.P0TAUB0I3
INTC2.ICPWGA16.BIT.P1PWGA16
INTC2.ICPWGA16.BIT.P1TAUB0I3
INTC2.ICPWGA16.BIT.P2PWGA16
INTC2.ICPWGA16.BIT.P2TAUB0I3
INTC2.ICPWGA16.BIT.P3PWGA16
INTC2.ICPWGA16.BIT.P3TAUB0I3
INTC2.ICPWGA16.BIT.TBPWGA16
INTC2.ICPWGA16.BIT.TBTAUB0I3
INTC2.ICPWGA16.BIT.MKPWGA16
INTC2.ICPWGA16.BIT.MKTAUB0I3
INTC2.ICPWGA16.BIT.RFPWGA16
INTC2.ICPWGA16.BIT.RFTAUB0I3
INTC2.ICPWGA16.BIT.CTPWGA16
INTC2.ICPWGA16.BIT.CTTAUB0I3
INTC2.ICTAUB0I4.UINT16
INTC2.ICTAUB0I4.UINT8[L/H]
INTC2.ICTAUB0I4.BIT.P0TAUB0I4
INTC2.ICTAUB0I4.BIT.P1TAUB0I4
INTC2.ICTAUB0I4.BIT.P2TAUB0I4
INTC2.ICTAUB0I4.BIT.P3TAUB0I4
INTC2.ICTAUB0I4.BIT.TBTAUB0I4
INTC2.ICTAUB0I4.BIT.MKTAUB0I4
INTC2.ICTAUB0I4.BIT.RFTAUB0I4
INTC2.ICTAUB0I4.BIT.CTTAUB0I4
INTC2.ICPWGA17.UINT16
INTC2.ICPWGA17.UINT16
INTC2.ICPWGA17.UINT8[L/H]
INTC2.ICPWGA17.REGS8.ICTAUB0I5L.UINT8
INTC2.ICPWGA17.REGS8.ICTAUB0I5H.UINT8
INTC2.ICPWGA17.BIT.P0PWGA17
INTC2.ICPWGA17.BIT.P0TAUB0I5
INTC2.ICPWGA17.BIT.P1PWGA17
INTC2.ICPWGA17.BIT.P1TAUB0I5
INTC2.ICPWGA17.BIT.P2PWGA17
INTC2.ICPWGA17.BIT.P2TAUB0I5
INTC2.ICPWGA17.BIT.P3PWGA17
INTC2.ICPWGA17.BIT.P3TAUB0I5
INTC2.ICPWGA17.BIT.TBPWGA17
INTC2.ICPWGA17.BIT.TBTAUB0I5
INTC2.ICPWGA17.BIT.MKPWGA17
INTC2.ICPWGA17.BIT.MKTAUB0I5
INTC2.ICPWGA17.BIT.RFPWGA17
INTC2.ICPWGA17.BIT.RFTAUB0I5
INTC2.ICPWGA17.BIT.CTPWGA17
INTC2.ICPWGA17.BIT.CTTAUB0I5
INTC2.ICTAUB0I6.UINT16
INTC2.ICTAUB0I6.UINT8[L/H]
INTC2.ICTAUB0I6.BIT.P0TAUB0I6
INTC2.ICTAUB0I6.BIT.P1TAUB0I6
INTC2.ICTAUB0I6.BIT.P2TAUB0I6
INTC2.ICTAUB0I6.BIT.P3TAUB0I6
INTC2.ICTAUB0I6.BIT.TBTAUB0I6
INTC2.ICTAUB0I6.BIT.MKTAUB0I6
INTC2.ICTAUB0I6.BIT.RFTAUB0I6
INTC2.ICTAUB0I6.BIT.CTTAUB0I6
INTC2.ICPWGA18.UINT16
INTC2.ICPWGA18.UINT16
INTC2.ICPWGA18.UINT8[L/H]
INTC2.ICPWGA18.REGS8.ICTAUB0I7L.UINT8
INTC2.ICPWGA18.REGS8.ICTAUB0I7H.UINT8
INTC2.ICPWGA18.BIT.P0PWGA18
INTC2.ICPWGA18.BIT.P0TAUB0I7
INTC2.ICPWGA18.BIT.P1PWGA18
INTC2.ICPWGA18.BIT.P1TAUB0I7
INTC2.ICPWGA18.BIT.P2PWGA18
INTC2.ICPWGA18.BIT.P2TAUB0I7
INTC2.ICPWGA18.BIT.P3PWGA18
INTC2.ICPWGA18.BIT.P3TAUB0I7
INTC2.ICPWGA18.BIT.TBPWGA18
INTC2.ICPWGA18.BIT.TBTAUB0I7
INTC2.ICPWGA18.BIT.MKPWGA18
INTC2.ICPWGA18.BIT.MKTAUB0I7
INTC2.ICPWGA18.BIT.RFPWGA18
INTC2.ICPWGA18.BIT.RFTAUB0I7
INTC2.ICPWGA18.BIT.CTPWGA18
INTC2.ICPWGA18.BIT.CTTAUB0I7
INTC2.ICTAUB0I8.UINT16
INTC2.ICTAUB0I8.UINT8[L/H]
INTC2.ICTAUB0I8.BIT.P0TAUB0I8
INTC2.ICTAUB0I8.BIT.P1TAUB0I8
INTC2.ICTAUB0I8.BIT.P2TAUB0I8
INTC2.ICTAUB0I8.BIT.P3TAUB0I8
INTC2.ICTAUB0I8.BIT.TBTAUB0I8
INTC2.ICTAUB0I8.BIT.MKTAUB0I8
INTC2.ICTAUB0I8.BIT.RFTAUB0I8
INTC2.ICTAUB0I8.BIT.CTTAUB0I8
INTC2.ICPWGA19.UINT16
INTC2.ICPWGA19.UINT16
INTC2.ICPWGA19.UINT8[L/H]
INTC2.ICPWGA19.REGS8.ICTAUB0I9L.UINT8
INTC2.ICPWGA19.REGS8.ICTAUB0I9H.UINT8
INTC2.ICPWGA19.BIT.P0PWGA19
INTC2.ICPWGA19.BIT.P0TAUB0I9
INTC2.ICPWGA19.BIT.P1PWGA19
INTC2.ICPWGA19.BIT.P1TAUB0I9
INTC2.ICPWGA19.BIT.P2PWGA19
INTC2.ICPWGA19.BIT.P2TAUB0I9
INTC2.ICPWGA19.BIT.P3PWGA19
INTC2.ICPWGA19.BIT.P3TAUB0I9
INTC2.ICPWGA19.BIT.TBPWGA19
INTC2.ICPWGA19.BIT.TBTAUB0I9
INTC2.ICPWGA19.BIT.MKPWGA19
INTC2.ICPWGA19.BIT.MKTAUB0I9
INTC2.ICPWGA19.BIT.RFPWGA19
INTC2.ICPWGA19.BIT.RFTAUB0I9
INTC2.ICPWGA19.BIT.CTPWGA19
INTC2.ICPWGA19.BIT.CTTAUB0I9
INTC2.ICTAUB0I10.UINT16
INTC2.ICTAUB0I10.UINT8[L/H]
INTC2.ICTAUB0I10.BIT.P0TAUB0I10
INTC2.ICTAUB0I10.BIT.P1TAUB0I10
INTC2.ICTAUB0I10.BIT.P2TAUB0I10
INTC2.ICTAUB0I10.BIT.P3TAUB0I10
INTC2.ICTAUB0I10.BIT.TBTAUB0I10
INTC2.ICTAUB0I10.BIT.MKTAUB0I10
INTC2.ICTAUB0I10.BIT.RFTAUB0I10
INTC2.ICTAUB0I10.BIT.CTTAUB0I10
INTC2.ICPWGA26.UINT16
INTC2.ICPWGA26.UINT16
INTC2.ICPWGA26.UINT8[L/H]
INTC2.ICPWGA26.REGS8.ICTAUB0I11L.UINT8
INTC2.ICPWGA26.REGS8.ICTAUB0I11H.UINT8
INTC2.ICPWGA26.BIT.P0PWGA26
INTC2.ICPWGA26.BIT.P0TAUB0I11
INTC2.ICPWGA26.BIT.P1PWGA26
INTC2.ICPWGA26.BIT.P1TAUB0I11
INTC2.ICPWGA26.BIT.P2PWGA26
INTC2.ICPWGA26.BIT.P2TAUB0I11
INTC2.ICPWGA26.BIT.P3PWGA26
INTC2.ICPWGA26.BIT.P3TAUB0I11
INTC2.ICPWGA26.BIT.TBPWGA26
INTC2.ICPWGA26.BIT.TBTAUB0I11
INTC2.ICPWGA26.BIT.MKPWGA26
INTC2.ICPWGA26.BIT.MKTAUB0I11
INTC2.ICPWGA26.BIT.RFPWGA26
INTC2.ICPWGA26.BIT.RFTAUB0I11
INTC2.ICPWGA26.BIT.CTPWGA26
INTC2.ICPWGA26.BIT.CTTAUB0I11
INTC2.ICTAUB0I12.UINT16
INTC2.ICTAUB0I12.UINT8[L/H]
INTC2.ICTAUB0I12.BIT.P0TAUB0I12
INTC2.ICTAUB0I12.BIT.P1TAUB0I12
INTC2.ICTAUB0I12.BIT.P2TAUB0I12
INTC2.ICTAUB0I12.BIT.P3TAUB0I12
INTC2.ICTAUB0I12.BIT.TBTAUB0I12
INTC2.ICTAUB0I12.BIT.MKTAUB0I12
INTC2.ICTAUB0I12.BIT.RFTAUB0I12
INTC2.ICTAUB0I12.BIT.CTTAUB0I12
INTC2.ICPWGA30.UINT16
INTC2.ICPWGA30.UINT16
INTC2.ICPWGA30.UINT8[L/H]
INTC2.ICPWGA30.REGS8.ICTAUB0I13L.UINT8
INTC2.ICPWGA30.REGS8.ICTAUB0I13H.UINT8
INTC2.ICPWGA30.BIT.P0PWGA30
INTC2.ICPWGA30.BIT.P0TAUB0I13
INTC2.ICPWGA30.BIT.P1PWGA30
INTC2.ICPWGA30.BIT.P1TAUB0I13
INTC2.ICPWGA30.BIT.P2PWGA30
INTC2.ICPWGA30.BIT.P2TAUB0I13
INTC2.ICPWGA30.BIT.P3PWGA30
INTC2.ICPWGA30.BIT.P3TAUB0I13
INTC2.ICPWGA30.BIT.TBPWGA30
INTC2.ICPWGA30.BIT.TBTAUB0I13
INTC2.ICPWGA30.BIT.MKPWGA30
INTC2.ICPWGA30.BIT.MKTAUB0I13
INTC2.ICPWGA30.BIT.RFPWGA30
INTC2.ICPWGA30.BIT.RFTAUB0I13
INTC2.ICPWGA30.BIT.CTPWGA30
INTC2.ICPWGA30.BIT.CTTAUB0I13
INTC2.ICTAUB0I14.UINT16
INTC2.ICTAUB0I14.UINT8[L/H]
INTC2.ICTAUB0I14.BIT.P0TAUB0I14
INTC2.ICTAUB0I14.BIT.P1TAUB0I14
INTC2.ICTAUB0I14.BIT.P2TAUB0I14
INTC2.ICTAUB0I14.BIT.P3TAUB0I14
INTC2.ICTAUB0I14.BIT.TBTAUB0I14
INTC2.ICTAUB0I14.BIT.MKTAUB0I14
INTC2.ICTAUB0I14.BIT.RFTAUB0I14
INTC2.ICTAUB0I14.BIT.CTTAUB0I14
INTC2.ICPWGA31.UINT16
INTC2.ICPWGA31.UINT16
INTC2.ICPWGA31.UINT8[L/H]
INTC2.ICPWGA31.REGS8.ICTAUB0I15L.UINT8
INTC2.ICPWGA31.REGS8.ICTAUB0I15H.UINT8
INTC2.ICPWGA31.BIT.P0PWGA31
INTC2.ICPWGA31.BIT.P0TAUB0I15
INTC2.ICPWGA31.BIT.P1PWGA31
INTC2.ICPWGA31.BIT.P1TAUB0I15
INTC2.ICPWGA31.BIT.P2PWGA31
INTC2.ICPWGA31.BIT.P2TAUB0I15
INTC2.ICPWGA31.BIT.P3PWGA31
INTC2.ICPWGA31.BIT.P3TAUB0I15
INTC2.ICPWGA31.BIT.TBPWGA31
INTC2.ICPWGA31.BIT.TBTAUB0I15
INTC2.ICPWGA31.BIT.MKPWGA31
INTC2.ICPWGA31.BIT.MKTAUB0I15
INTC2.ICPWGA31.BIT.RFPWGA31
INTC2.ICPWGA31.BIT.RFTAUB0I15
INTC2.ICPWGA31.BIT.CTPWGA31
INTC2.ICPWGA31.BIT.CTTAUB0I15
INTC2.ICCSIH3IC.UINT16
INTC2.ICCSIH3IC.UINT16
INTC2.ICCSIH3IC.UINT8[L/H]
INTC2.ICCSIH3IC.REGS8.ICTAUD0I2L_2.UINT8
INTC2.ICCSIH3IC.REGS8.ICTAUD0I2H_2.UINT8
INTC2.ICCSIH3IC.BIT.P0CSIH3IC
INTC2.ICCSIH3IC.BIT.P0TAUD0I2_2
INTC2.ICCSIH3IC.BIT.P1CSIH3IC
INTC2.ICCSIH3IC.BIT.P1TAUD0I2_2
INTC2.ICCSIH3IC.BIT.P2CSIH3IC
INTC2.ICCSIH3IC.BIT.P2TAUD0I2_2
INTC2.ICCSIH3IC.BIT.P3CSIH3IC
INTC2.ICCSIH3IC.BIT.P3TAUD0I2_2
INTC2.ICCSIH3IC.BIT.TBCSIH3IC
INTC2.ICCSIH3IC.BIT.TBTAUD0I2_2
INTC2.ICCSIH3IC.BIT.MKCSIH3IC
INTC2.ICCSIH3IC.BIT.MKTAUD0I2_2
INTC2.ICCSIH3IC.BIT.RFCSIH3IC
INTC2.ICCSIH3IC.BIT.RFTAUD0I2_2
INTC2.ICCSIH3IC.BIT.CTCSIH3IC
INTC2.ICCSIH3IC.BIT.CTTAUD0I2_2
INTC2.ICCSIH3IR.UINT16
INTC2.ICCSIH3IR.UINT16
INTC2.ICCSIH3IR.UINT8[L/H]
INTC2.ICCSIH3IR.REGS8.ICTAUD0I10L_2.UINT8
INTC2.ICCSIH3IR.REGS8.ICTAUD0I10H_2.UINT8
INTC2.ICCSIH3IR.BIT.P0CSIH3IR
INTC2.ICCSIH3IR.BIT.P0TAUD0I10_2
INTC2.ICCSIH3IR.BIT.P1CSIH3IR
INTC2.ICCSIH3IR.BIT.P1TAUD0I10_2
INTC2.ICCSIH3IR.BIT.P2CSIH3IR
INTC2.ICCSIH3IR.BIT.P2TAUD0I10_2
INTC2.ICCSIH3IR.BIT.P3CSIH3IR
INTC2.ICCSIH3IR.BIT.P3TAUD0I10_2
INTC2.ICCSIH3IR.BIT.TBCSIH3IR
INTC2.ICCSIH3IR.BIT.TBTAUD0I10_2
INTC2.ICCSIH3IR.BIT.MKCSIH3IR
INTC2.ICCSIH3IR.BIT.MKTAUD0I10_2
INTC2.ICCSIH3IR.BIT.RFCSIH3IR
INTC2.ICCSIH3IR.BIT.RFTAUD0I10_2
INTC2.ICCSIH3IR.BIT.CTCSIH3IR
INTC2.ICCSIH3IR.BIT.CTTAUD0I10_2
INTC2.ICCSIH3IRE.UINT16
INTC2.ICCSIH3IRE.UINT16
INTC2.ICCSIH3IRE.UINT8[L/H]
INTC2.ICCSIH3IRE.REGS8.ICTAUD0I12L_2.UINT8
INTC2.ICCSIH3IRE.REGS8.ICTAUD0I12H_2.UINT8
INTC2.ICCSIH3IRE.BIT.P0CSIH3IRE
INTC2.ICCSIH3IRE.BIT.P0TAUD0I12_2
INTC2.ICCSIH3IRE.BIT.P1CSIH3IRE
INTC2.ICCSIH3IRE.BIT.P1TAUD0I12_2
INTC2.ICCSIH3IRE.BIT.P2CSIH3IRE
INTC2.ICCSIH3IRE.BIT.P2TAUD0I12_2
INTC2.ICCSIH3IRE.BIT.P3CSIH3IRE
INTC2.ICCSIH3IRE.BIT.P3TAUD0I12_2
INTC2.ICCSIH3IRE.BIT.TBCSIH3IRE
INTC2.ICCSIH3IRE.BIT.TBTAUD0I12_2
INTC2.ICCSIH3IRE.BIT.MKCSIH3IRE
INTC2.ICCSIH3IRE.BIT.MKTAUD0I12_2
INTC2.ICCSIH3IRE.BIT.RFCSIH3IRE
INTC2.ICCSIH3IRE.BIT.RFTAUD0I12_2
INTC2.ICCSIH3IRE.BIT.CTCSIH3IRE
INTC2.ICCSIH3IRE.BIT.CTTAUD0I12_2
INTC2.ICCSIH3IJC.UINT16
INTC2.ICCSIH3IJC.UINT16
INTC2.ICCSIH3IJC.UINT8[L/H]
INTC2.ICCSIH3IJC.REGS8.ICTAUD0I14L_2.UINT8
INTC2.ICCSIH3IJC.REGS8.ICTAUD0I14H_2.UINT8
INTC2.ICCSIH3IJC.BIT.P0CSIH3IJC
INTC2.ICCSIH3IJC.BIT.P0TAUD0I14_2
INTC2.ICCSIH3IJC.BIT.P1CSIH3IJC
INTC2.ICCSIH3IJC.BIT.P1TAUD0I14_2
INTC2.ICCSIH3IJC.BIT.P2CSIH3IJC
INTC2.ICCSIH3IJC.BIT.P2TAUD0I14_2
INTC2.ICCSIH3IJC.BIT.P3CSIH3IJC
INTC2.ICCSIH3IJC.BIT.P3TAUD0I14_2
INTC2.ICCSIH3IJC.BIT.TBCSIH3IJC
INTC2.ICCSIH3IJC.BIT.TBTAUD0I14_2
INTC2.ICCSIH3IJC.BIT.MKCSIH3IJC
INTC2.ICCSIH3IJC.BIT.MKTAUD0I14_2
INTC2.ICCSIH3IJC.BIT.RFCSIH3IJC
INTC2.ICCSIH3IJC.BIT.RFTAUD0I14_2
INTC2.ICCSIH3IJC.BIT.CTCSIH3IJC
INTC2.ICCSIH3IJC.BIT.CTTAUD0I14_2
INTC2.ICRLIN22.UINT16
INTC2.ICRLIN22.UINT8[L/H]
INTC2.ICRLIN22.BIT.P0RLIN22
INTC2.ICRLIN22.BIT.P1RLIN22
INTC2.ICRLIN22.BIT.P2RLIN22
INTC2.ICRLIN22.BIT.P3RLIN22
INTC2.ICRLIN22.BIT.TBRLIN22
INTC2.ICRLIN22.BIT.MKRLIN22
INTC2.ICRLIN22.BIT.RFRLIN22
INTC2.ICRLIN22.BIT.CTRLIN22
INTC2.ICRLIN23.UINT16
INTC2.ICRLIN23.UINT8[L/H]
INTC2.ICRLIN23.BIT.P0RLIN23
INTC2.ICRLIN23.BIT.P1RLIN23
INTC2.ICRLIN23.BIT.P2RLIN23
INTC2.ICRLIN23.BIT.P3RLIN23
INTC2.ICRLIN23.BIT.TBRLIN23
INTC2.ICRLIN23.BIT.MKRLIN23
INTC2.ICRLIN23.BIT.RFRLIN23
INTC2.ICRLIN23.BIT.CTRLIN23
INTC2.ICRLIN32.UINT16
INTC2.ICRLIN32.UINT8[L/H]
INTC2.ICRLIN32.BIT.P0RLIN32
INTC2.ICRLIN32.BIT.P1RLIN32
INTC2.ICRLIN32.BIT.P2RLIN32
INTC2.ICRLIN32.BIT.P3RLIN32
INTC2.ICRLIN32.BIT.TBRLIN32
INTC2.ICRLIN32.BIT.MKRLIN32
INTC2.ICRLIN32.BIT.RFRLIN32
INTC2.ICRLIN32.BIT.CTRLIN32
INTC2.ICRLIN32UR0.UINT16
INTC2.ICRLIN32UR0.UINT8[L/H]
INTC2.ICRLIN32UR0.BIT.P0RLIN32UR0
INTC2.ICRLIN32UR0.BIT.P1RLIN32UR0
INTC2.ICRLIN32UR0.BIT.P2RLIN32UR0
INTC2.ICRLIN32UR0.BIT.P3RLIN32UR0
INTC2.ICRLIN32UR0.BIT.TBRLIN32UR0
INTC2.ICRLIN32UR0.BIT.MKRLIN32UR0
INTC2.ICRLIN32UR0.BIT.RFRLIN32UR0
INTC2.ICRLIN32UR0.BIT.CTRLIN32UR0
INTC2.ICRLIN32UR1.UINT16
INTC2.ICRLIN32UR1.UINT8[L/H]
INTC2.ICRLIN32UR1.BIT.P0RLIN32UR1
INTC2.ICRLIN32UR1.BIT.P1RLIN32UR1
INTC2.ICRLIN32UR1.BIT.P2RLIN32UR1
INTC2.ICRLIN32UR1.BIT.P3RLIN32UR1
INTC2.ICRLIN32UR1.BIT.TBRLIN32UR1
INTC2.ICRLIN32UR1.BIT.MKRLIN32UR1
INTC2.ICRLIN32UR1.BIT.RFRLIN32UR1
INTC2.ICRLIN32UR1.BIT.CTRLIN32UR1
INTC2.ICRLIN32UR2.UINT16
INTC2.ICRLIN32UR2.UINT8[L/H]
INTC2.ICRLIN32UR2.BIT.P0RLIN32UR2
INTC2.ICRLIN32UR2.BIT.P1RLIN32UR2
INTC2.ICRLIN32UR2.BIT.P2RLIN32UR2
INTC2.ICRLIN32UR2.BIT.P3RLIN32UR2
INTC2.ICRLIN32UR2.BIT.TBRLIN32UR2
INTC2.ICRLIN32UR2.BIT.MKRLIN32UR2
INTC2.ICRLIN32UR2.BIT.RFRLIN32UR2
INTC2.ICRLIN32UR2.BIT.CTRLIN32UR2
INTC2.ICTAUJ1I0.UINT16
INTC2.ICTAUJ1I0.UINT8[L/H]
INTC2.ICTAUJ1I0.BIT.P0TAUJ1I0
INTC2.ICTAUJ1I0.BIT.P1TAUJ1I0
INTC2.ICTAUJ1I0.BIT.P2TAUJ1I0
INTC2.ICTAUJ1I0.BIT.P3TAUJ1I0
INTC2.ICTAUJ1I0.BIT.TBTAUJ1I0
INTC2.ICTAUJ1I0.BIT.MKTAUJ1I0
INTC2.ICTAUJ1I0.BIT.RFTAUJ1I0
INTC2.ICTAUJ1I0.BIT.CTTAUJ1I0
INTC2.ICTAUJ1I1.UINT16
INTC2.ICTAUJ1I1.UINT8[L/H]
INTC2.ICTAUJ1I1.BIT.P0TAUJ1I1
INTC2.ICTAUJ1I1.BIT.P1TAUJ1I1
INTC2.ICTAUJ1I1.BIT.P2TAUJ1I1
INTC2.ICTAUJ1I1.BIT.P3TAUJ1I1
INTC2.ICTAUJ1I1.BIT.TBTAUJ1I1
INTC2.ICTAUJ1I1.BIT.MKTAUJ1I1
INTC2.ICTAUJ1I1.BIT.RFTAUJ1I1
INTC2.ICTAUJ1I1.BIT.CTTAUJ1I1
INTC2.ICTAUJ1I2.UINT16
INTC2.ICTAUJ1I2.UINT8[L/H]
INTC2.ICTAUJ1I2.BIT.P0TAUJ1I2
INTC2.ICTAUJ1I2.BIT.P1TAUJ1I2
INTC2.ICTAUJ1I2.BIT.P2TAUJ1I2
INTC2.ICTAUJ1I2.BIT.P3TAUJ1I2
INTC2.ICTAUJ1I2.BIT.TBTAUJ1I2
INTC2.ICTAUJ1I2.BIT.MKTAUJ1I2
INTC2.ICTAUJ1I2.BIT.RFTAUJ1I2
INTC2.ICTAUJ1I2.BIT.CTTAUJ1I2
INTC2.ICTAUJ1I3.UINT16
INTC2.ICTAUJ1I3.UINT8[L/H]
INTC2.ICTAUJ1I3.BIT.P0TAUJ1I3
INTC2.ICTAUJ1I3.BIT.P1TAUJ1I3
INTC2.ICTAUJ1I3.BIT.P2TAUJ1I3
INTC2.ICTAUJ1I3.BIT.P3TAUJ1I3
INTC2.ICTAUJ1I3.BIT.TBTAUJ1I3
INTC2.ICTAUJ1I3.BIT.MKTAUJ1I3
INTC2.ICTAUJ1I3.BIT.RFTAUJ1I3
INTC2.ICTAUJ1I3.BIT.CTTAUJ1I3
INTC2.ICPWGA24.UINT16
INTC2.ICPWGA24.UINT8[L/H]
INTC2.ICPWGA24.BIT.P0PWGA24
INTC2.ICPWGA24.BIT.P1PWGA24
INTC2.ICPWGA24.BIT.P2PWGA24
INTC2.ICPWGA24.BIT.P3PWGA24
INTC2.ICPWGA24.BIT.TBPWGA24
INTC2.ICPWGA24.BIT.MKPWGA24
INTC2.ICPWGA24.BIT.RFPWGA24
INTC2.ICPWGA24.BIT.CTPWGA24
INTC2.ICPWGA25.UINT16
INTC2.ICPWGA25.UINT8[L/H]
INTC2.ICPWGA25.BIT.P0PWGA25
INTC2.ICPWGA25.BIT.P1PWGA25
INTC2.ICPWGA25.BIT.P2PWGA25
INTC2.ICPWGA25.BIT.P3PWGA25
INTC2.ICPWGA25.BIT.TBPWGA25
INTC2.ICPWGA25.BIT.MKPWGA25
INTC2.ICPWGA25.BIT.RFPWGA25
INTC2.ICPWGA25.BIT.CTPWGA25
INTC2.ICPWGA27.UINT16
INTC2.ICPWGA27.UINT8[L/H]
INTC2.ICPWGA27.BIT.P0PWGA27
INTC2.ICPWGA27.BIT.P1PWGA27
INTC2.ICPWGA27.BIT.P2PWGA27
INTC2.ICPWGA27.BIT.P3PWGA27
INTC2.ICPWGA27.BIT.TBPWGA27
INTC2.ICPWGA27.BIT.MKPWGA27
INTC2.ICPWGA27.BIT.RFPWGA27
INTC2.ICPWGA27.BIT.CTPWGA27
INTC2.ICPWGA28.UINT16
INTC2.ICPWGA28.UINT8[L/H]
INTC2.ICPWGA28.BIT.P0PWGA28
INTC2.ICPWGA28.BIT.P1PWGA28
INTC2.ICPWGA28.BIT.P2PWGA28
INTC2.ICPWGA28.BIT.P3PWGA28
INTC2.ICPWGA28.BIT.TBPWGA28
INTC2.ICPWGA28.BIT.MKPWGA28
INTC2.ICPWGA28.BIT.RFPWGA28
INTC2.ICPWGA28.BIT.CTPWGA28
INTC2.ICPWGA29.UINT16
INTC2.ICPWGA29.UINT8[L/H]
INTC2.ICPWGA29.BIT.P0PWGA29
INTC2.ICPWGA29.BIT.P1PWGA29
INTC2.ICPWGA29.BIT.P2PWGA29
INTC2.ICPWGA29.BIT.P3PWGA29
INTC2.ICPWGA29.BIT.TBPWGA29
INTC2.ICPWGA29.BIT.MKPWGA29
INTC2.ICPWGA29.BIT.RFPWGA29
INTC2.ICPWGA29.BIT.CTPWGA29
INTC2.ICPWGA32.UINT16
INTC2.ICPWGA32.UINT8[L/H]
INTC2.ICPWGA32.BIT.P0PWGA32
INTC2.ICPWGA32.BIT.P1PWGA32
INTC2.ICPWGA32.BIT.P2PWGA32
INTC2.ICPWGA32.BIT.P3PWGA32
INTC2.ICPWGA32.BIT.TBPWGA32
INTC2.ICPWGA32.BIT.MKPWGA32
INTC2.ICPWGA32.BIT.RFPWGA32
INTC2.ICPWGA32.BIT.CTPWGA32
INTC2.ICPWGA33.UINT16
INTC2.ICPWGA33.UINT8[L/H]
INTC2.ICPWGA33.BIT.P0PWGA33
INTC2.ICPWGA33.BIT.P1PWGA33
INTC2.ICPWGA33.BIT.P2PWGA33
INTC2.ICPWGA33.BIT.P3PWGA33
INTC2.ICPWGA33.BIT.TBPWGA33
INTC2.ICPWGA33.BIT.MKPWGA33
INTC2.ICPWGA33.BIT.RFPWGA33
INTC2.ICPWGA33.BIT.CTPWGA33
INTC2.ICPWGA34.UINT16
INTC2.ICPWGA34.UINT8[L/H]
INTC2.ICPWGA34.BIT.P0PWGA34
INTC2.ICPWGA34.BIT.P1PWGA34
INTC2.ICPWGA34.BIT.P2PWGA34
INTC2.ICPWGA34.BIT.P3PWGA34
INTC2.ICPWGA34.BIT.TBPWGA34
INTC2.ICPWGA34.BIT.MKPWGA34
INTC2.ICPWGA34.BIT.RFPWGA34
INTC2.ICPWGA34.BIT.CTPWGA34
INTC2.ICPWGA35.UINT16
INTC2.ICPWGA35.UINT8[L/H]
INTC2.ICPWGA35.BIT.P0PWGA35
INTC2.ICPWGA35.BIT.P1PWGA35
INTC2.ICPWGA35.BIT.P2PWGA35
INTC2.ICPWGA35.BIT.P3PWGA35
INTC2.ICPWGA35.BIT.TBPWGA35
INTC2.ICPWGA35.BIT.MKPWGA35
INTC2.ICPWGA35.BIT.RFPWGA35
INTC2.ICPWGA35.BIT.CTPWGA35
INTC2.ICPWGA36.UINT16
INTC2.ICPWGA36.UINT8[L/H]
INTC2.ICPWGA36.BIT.P0PWGA36
INTC2.ICPWGA36.BIT.P1PWGA36
INTC2.ICPWGA36.BIT.P2PWGA36
INTC2.ICPWGA36.BIT.P3PWGA36
INTC2.ICPWGA36.BIT.TBPWGA36
INTC2.ICPWGA36.BIT.MKPWGA36
INTC2.ICPWGA36.BIT.RFPWGA36
INTC2.ICPWGA36.BIT.CTPWGA36
INTC2.ICPWGA37.UINT16
INTC2.ICPWGA37.UINT8[L/H]
INTC2.ICPWGA37.BIT.P0PWGA37
INTC2.ICPWGA37.BIT.P1PWGA37
INTC2.ICPWGA37.BIT.P2PWGA37
INTC2.ICPWGA37.BIT.P3PWGA37
INTC2.ICPWGA37.BIT.TBPWGA37
INTC2.ICPWGA37.BIT.MKPWGA37
INTC2.ICPWGA37.BIT.RFPWGA37
INTC2.ICPWGA37.BIT.CTPWGA37
INTC2.ICPWGA38.UINT16
INTC2.ICPWGA38.UINT8[L/H]
INTC2.ICPWGA38.BIT.P0PWGA38
INTC2.ICPWGA38.BIT.P1PWGA38
INTC2.ICPWGA38.BIT.P2PWGA38
INTC2.ICPWGA38.BIT.P3PWGA38
INTC2.ICPWGA38.BIT.TBPWGA38
INTC2.ICPWGA38.BIT.MKPWGA38
INTC2.ICPWGA38.BIT.RFPWGA38
INTC2.ICPWGA38.BIT.CTPWGA38
INTC2.ICPWGA39.UINT16
INTC2.ICPWGA39.UINT8[L/H]
INTC2.ICPWGA39.BIT.P0PWGA39
INTC2.ICPWGA39.BIT.P1PWGA39
INTC2.ICPWGA39.BIT.P2PWGA39
INTC2.ICPWGA39.BIT.P3PWGA39
INTC2.ICPWGA39.BIT.TBPWGA39
INTC2.ICPWGA39.BIT.MKPWGA39
INTC2.ICPWGA39.BIT.RFPWGA39
INTC2.ICPWGA39.BIT.CTPWGA39
INTC2.ICPWGA40.UINT16
INTC2.ICPWGA40.UINT8[L/H]
INTC2.ICPWGA40.BIT.P0PWGA40
INTC2.ICPWGA40.BIT.P1PWGA40
INTC2.ICPWGA40.BIT.P2PWGA40
INTC2.ICPWGA40.BIT.P3PWGA40
INTC2.ICPWGA40.BIT.TBPWGA40
INTC2.ICPWGA40.BIT.MKPWGA40
INTC2.ICPWGA40.BIT.RFPWGA40
INTC2.ICPWGA40.BIT.CTPWGA40
INTC2.ICPWGA41.UINT16
INTC2.ICPWGA41.UINT8[L/H]
INTC2.ICPWGA41.BIT.P0PWGA41
INTC2.ICPWGA41.BIT.P1PWGA41
INTC2.ICPWGA41.BIT.P2PWGA41
INTC2.ICPWGA41.BIT.P3PWGA41
INTC2.ICPWGA41.BIT.TBPWGA41
INTC2.ICPWGA41.BIT.MKPWGA41
INTC2.ICPWGA41.BIT.RFPWGA41
INTC2.ICPWGA41.BIT.CTPWGA41
INTC2.ICPWGA42.UINT16
INTC2.ICPWGA42.UINT8[L/H]
INTC2.ICPWGA42.BIT.P0PWGA42
INTC2.ICPWGA42.BIT.P1PWGA42
INTC2.ICPWGA42.BIT.P2PWGA42
INTC2.ICPWGA42.BIT.P3PWGA42
INTC2.ICPWGA42.BIT.TBPWGA42
INTC2.ICPWGA42.BIT.MKPWGA42
INTC2.ICPWGA42.BIT.RFPWGA42
INTC2.ICPWGA42.BIT.CTPWGA42
INTC2.ICPWGA43.UINT16
INTC2.ICPWGA43.UINT8[L/H]
INTC2.ICPWGA43.BIT.P0PWGA43
INTC2.ICPWGA43.BIT.P1PWGA43
INTC2.ICPWGA43.BIT.P2PWGA43
INTC2.ICPWGA43.BIT.P3PWGA43
INTC2.ICPWGA43.BIT.TBPWGA43
INTC2.ICPWGA43.BIT.MKPWGA43
INTC2.ICPWGA43.BIT.RFPWGA43
INTC2.ICPWGA43.BIT.CTPWGA43
INTC2.ICPWGA44.UINT16
INTC2.ICPWGA44.UINT8[L/H]
INTC2.ICPWGA44.BIT.P0PWGA44
INTC2.ICPWGA44.BIT.P1PWGA44
INTC2.ICPWGA44.BIT.P2PWGA44
INTC2.ICPWGA44.BIT.P3PWGA44
INTC2.ICPWGA44.BIT.TBPWGA44
INTC2.ICPWGA44.BIT.MKPWGA44
INTC2.ICPWGA44.BIT.RFPWGA44
INTC2.ICPWGA44.BIT.CTPWGA44
INTC2.ICPWGA45.UINT16
INTC2.ICPWGA45.UINT8[L/H]
INTC2.ICPWGA45.BIT.P0PWGA45
INTC2.ICPWGA45.BIT.P1PWGA45
INTC2.ICPWGA45.BIT.P2PWGA45
INTC2.ICPWGA45.BIT.P3PWGA45
INTC2.ICPWGA45.BIT.TBPWGA45
INTC2.ICPWGA45.BIT.MKPWGA45
INTC2.ICPWGA45.BIT.RFPWGA45
INTC2.ICPWGA45.BIT.CTPWGA45
INTC2.ICPWGA46.UINT16
INTC2.ICPWGA46.UINT8[L/H]
INTC2.ICPWGA46.BIT.P0PWGA46
INTC2.ICPWGA46.BIT.P1PWGA46
INTC2.ICPWGA46.BIT.P2PWGA46
INTC2.ICPWGA46.BIT.P3PWGA46
INTC2.ICPWGA46.BIT.TBPWGA46
INTC2.ICPWGA46.BIT.MKPWGA46
INTC2.ICPWGA46.BIT.RFPWGA46
INTC2.ICPWGA46.BIT.CTPWGA46
INTC2.ICPWGA47.UINT16
INTC2.ICPWGA47.UINT8[L/H]
INTC2.ICPWGA47.BIT.P0PWGA47
INTC2.ICPWGA47.BIT.P1PWGA47
INTC2.ICPWGA47.BIT.P2PWGA47
INTC2.ICPWGA47.BIT.P3PWGA47
INTC2.ICPWGA47.BIT.TBPWGA47
INTC2.ICPWGA47.BIT.MKPWGA47
INTC2.ICPWGA47.BIT.RFPWGA47
INTC2.ICPWGA47.BIT.CTPWGA47
INTC2.ICP9.UINT16
INTC2.ICP9.UINT8[L/H]
INTC2.ICP9.BIT.P0P9
INTC2.ICP9.BIT.P1P9
INTC2.ICP9.BIT.P2P9
INTC2.ICP9.BIT.P3P9
INTC2.ICP9.BIT.TBP9
INTC2.ICP9.BIT.MKP9
INTC2.ICP9.BIT.RFP9
INTC2.ICP9.BIT.CTP9
INTC2.ICP13.UINT16
INTC2.ICP13.UINT8[L/H]
INTC2.ICP13.BIT.P0P13
INTC2.ICP13.BIT.P1P13
INTC2.ICP13.BIT.P2P13
INTC2.ICP13.BIT.P3P13
INTC2.ICP13.BIT.TBP13
INTC2.ICP13.BIT.MKP13
INTC2.ICP13.BIT.RFP13
INTC2.ICP13.BIT.CTP13
INTC2.ICP14.UINT16
INTC2.ICP14.UINT8[L/H]
INTC2.ICP14.BIT.P0P14
INTC2.ICP14.BIT.P1P14
INTC2.ICP14.BIT.P2P14
INTC2.ICP14.BIT.P3P14
INTC2.ICP14.BIT.TBP14
INTC2.ICP14.BIT.MKP14
INTC2.ICP14.BIT.RFP14
INTC2.ICP14.BIT.CTP14
INTC2.ICP15.UINT16
INTC2.ICP15.UINT8[L/H]
INTC2.ICP15.BIT.P0P15
INTC2.ICP15.BIT.P1P15
INTC2.ICP15.BIT.P2P15
INTC2.ICP15.BIT.P3P15
INTC2.ICP15.BIT.TBP15
INTC2.ICP15.BIT.MKP15
INTC2.ICP15.BIT.RFP15
INTC2.ICP15.BIT.CTP15
INTC2.ICRTCA01S.UINT16
INTC2.ICRTCA01S.UINT8[L/H]
INTC2.ICRTCA01S.BIT.P0RTCA01S
INTC2.ICRTCA01S.BIT.P1RTCA01S
INTC2.ICRTCA01S.BIT.P2RTCA01S
INTC2.ICRTCA01S.BIT.P3RTCA01S
INTC2.ICRTCA01S.BIT.TBRTCA01S
INTC2.ICRTCA01S.BIT.MKRTCA01S
INTC2.ICRTCA01S.BIT.RFRTCA01S
INTC2.ICRTCA01S.BIT.CTRTCA01S
INTC2.ICRTCA0AL.UINT16
INTC2.ICRTCA0AL.UINT8[L/H]
INTC2.ICRTCA0AL.BIT.P0RTCA0AL
INTC2.ICRTCA0AL.BIT.P1RTCA0AL
INTC2.ICRTCA0AL.BIT.P2RTCA0AL
INTC2.ICRTCA0AL.BIT.P3RTCA0AL
INTC2.ICRTCA0AL.BIT.TBRTCA0AL
INTC2.ICRTCA0AL.BIT.MKRTCA0AL
INTC2.ICRTCA0AL.BIT.RFRTCA0AL
INTC2.ICRTCA0AL.BIT.CTRTCA0AL
INTC2.ICRTCA0R.UINT16
INTC2.ICRTCA0R.UINT8[L/H]
INTC2.ICRTCA0R.BIT.P0RTCA0R
INTC2.ICRTCA0R.BIT.P1RTCA0R
INTC2.ICRTCA0R.BIT.P2RTCA0R
INTC2.ICRTCA0R.BIT.P3RTCA0R
INTC2.ICRTCA0R.BIT.TBRTCA0R
INTC2.ICRTCA0R.BIT.MKRTCA0R
INTC2.ICRTCA0R.BIT.RFRTCA0R
INTC2.ICRTCA0R.BIT.CTRTCA0R
INTC2.ICADCA1ERR.UINT16
INTC2.ICADCA1ERR.UINT8[L/H]
INTC2.ICADCA1ERR.BIT.P0ADCA1ERR
INTC2.ICADCA1ERR.BIT.P1ADCA1ERR
INTC2.ICADCA1ERR.BIT.P2ADCA1ERR
INTC2.ICADCA1ERR.BIT.P3ADCA1ERR
INTC2.ICADCA1ERR.BIT.TBADCA1ERR
INTC2.ICADCA1ERR.BIT.MKADCA1ERR
INTC2.ICADCA1ERR.BIT.RFADCA1ERR
INTC2.ICADCA1ERR.BIT.CTADCA1ERR
INTC2.ICADCA1I0.UINT16
INTC2.ICADCA1I0.UINT8[L/H]
INTC2.ICADCA1I0.BIT.P0ADCA1I0
INTC2.ICADCA1I0.BIT.P1ADCA1I0
INTC2.ICADCA1I0.BIT.P2ADCA1I0
INTC2.ICADCA1I0.BIT.P3ADCA1I0
INTC2.ICADCA1I0.BIT.TBADCA1I0
INTC2.ICADCA1I0.BIT.MKADCA1I0
INTC2.ICADCA1I0.BIT.RFADCA1I0
INTC2.ICADCA1I0.BIT.CTADCA1I0
INTC2.ICADCA1I1.UINT16
INTC2.ICADCA1I1.UINT8[L/H]
INTC2.ICADCA1I1.BIT.P0ADCA1I1
INTC2.ICADCA1I1.BIT.P1ADCA1I1
INTC2.ICADCA1I1.BIT.P2ADCA1I1
INTC2.ICADCA1I1.BIT.P3ADCA1I1
INTC2.ICADCA1I1.BIT.TBADCA1I1
INTC2.ICADCA1I1.BIT.MKADCA1I1
INTC2.ICADCA1I1.BIT.RFADCA1I1
INTC2.ICADCA1I1.BIT.CTADCA1I1
INTC2.ICADCA1I2.UINT16
INTC2.ICADCA1I2.UINT8[L/H]
INTC2.ICADCA1I2.BIT.P0ADCA1I2
INTC2.ICADCA1I2.BIT.P1ADCA1I2
INTC2.ICADCA1I2.BIT.P2ADCA1I2
INTC2.ICADCA1I2.BIT.P3ADCA1I2
INTC2.ICADCA1I2.BIT.TBADCA1I2
INTC2.ICADCA1I2.BIT.MKADCA1I2
INTC2.ICADCA1I2.BIT.RFADCA1I2
INTC2.ICADCA1I2.BIT.CTADCA1I2
INTC2.ICRCAN2ERR.UINT16
INTC2.ICRCAN2ERR.UINT8[L/H]
INTC2.ICRCAN2ERR.BIT.P0RCAN2ERR
INTC2.ICRCAN2ERR.BIT.P1RCAN2ERR
INTC2.ICRCAN2ERR.BIT.P2RCAN2ERR
INTC2.ICRCAN2ERR.BIT.P3RCAN2ERR
INTC2.ICRCAN2ERR.BIT.TBRCAN2ERR
INTC2.ICRCAN2ERR.BIT.MKRCAN2ERR
INTC2.ICRCAN2ERR.BIT.RFRCAN2ERR
INTC2.ICRCAN2ERR.BIT.CTRCAN2ERR
INTC2.ICRCAN2REC.UINT16
INTC2.ICRCAN2REC.UINT8[L/H]
INTC2.ICRCAN2REC.BIT.P0RCAN2REC
INTC2.ICRCAN2REC.BIT.P1RCAN2REC
INTC2.ICRCAN2REC.BIT.P2RCAN2REC
INTC2.ICRCAN2REC.BIT.P3RCAN2REC
INTC2.ICRCAN2REC.BIT.TBRCAN2REC
INTC2.ICRCAN2REC.BIT.MKRCAN2REC
INTC2.ICRCAN2REC.BIT.RFRCAN2REC
INTC2.ICRCAN2REC.BIT.CTRCAN2REC
INTC2.ICRCAN2TRX.UINT16
INTC2.ICRCAN2TRX.UINT8[L/H]
INTC2.ICRCAN2TRX.BIT.P0RCAN2TRX
INTC2.ICRCAN2TRX.BIT.P1RCAN2TRX
INTC2.ICRCAN2TRX.BIT.P2RCAN2TRX
INTC2.ICRCAN2TRX.BIT.P3RCAN2TRX
INTC2.ICRCAN2TRX.BIT.TBRCAN2TRX
INTC2.ICRCAN2TRX.BIT.MKRCAN2TRX
INTC2.ICRCAN2TRX.BIT.RFRCAN2TRX
INTC2.ICRCAN2TRX.BIT.CTRCAN2TRX
INTC2.ICRCAN3ERR.UINT16
INTC2.ICRCAN3ERR.UINT8[L/H]
INTC2.ICRCAN3ERR.BIT.P0RCAN3ERR
INTC2.ICRCAN3ERR.BIT.P1RCAN3ERR
INTC2.ICRCAN3ERR.BIT.P2RCAN3ERR
INTC2.ICRCAN3ERR.BIT.P3RCAN3ERR
INTC2.ICRCAN3ERR.BIT.TBRCAN3ERR
INTC2.ICRCAN3ERR.BIT.MKRCAN3ERR
INTC2.ICRCAN3ERR.BIT.RFRCAN3ERR
INTC2.ICRCAN3ERR.BIT.CTRCAN3ERR
INTC2.ICRCAN3REC.UINT16
INTC2.ICRCAN3REC.UINT8[L/H]
INTC2.ICRCAN3REC.BIT.P0RCAN3REC
INTC2.ICRCAN3REC.BIT.P1RCAN3REC
INTC2.ICRCAN3REC.BIT.P2RCAN3REC
INTC2.ICRCAN3REC.BIT.P3RCAN3REC
INTC2.ICRCAN3REC.BIT.TBRCAN3REC
INTC2.ICRCAN3REC.BIT.MKRCAN3REC
INTC2.ICRCAN3REC.BIT.RFRCAN3REC
INTC2.ICRCAN3REC.BIT.CTRCAN3REC
INTC2.ICRCAN3TRX.UINT16
INTC2.ICRCAN3TRX.UINT8[L/H]
INTC2.ICRCAN3TRX.BIT.P0RCAN3TRX
INTC2.ICRCAN3TRX.BIT.P1RCAN3TRX
INTC2.ICRCAN3TRX.BIT.P2RCAN3TRX
INTC2.ICRCAN3TRX.BIT.P3RCAN3TRX
INTC2.ICRCAN3TRX.BIT.TBRCAN3TRX
INTC2.ICRCAN3TRX.BIT.MKRCAN3TRX
INTC2.ICRCAN3TRX.BIT.RFRCAN3TRX
INTC2.ICRCAN3TRX.BIT.CTRCAN3TRX
INTC2.ICCSIG1IC.UINT16
INTC2.ICCSIG1IC.UINT8[L/H]
INTC2.ICCSIG1IC.BIT.P0CSIG1IC
INTC2.ICCSIG1IC.BIT.P1CSIG1IC
INTC2.ICCSIG1IC.BIT.P2CSIG1IC
INTC2.ICCSIG1IC.BIT.P3CSIG1IC
INTC2.ICCSIG1IC.BIT.TBCSIG1IC
INTC2.ICCSIG1IC.BIT.MKCSIG1IC
INTC2.ICCSIG1IC.BIT.RFCSIG1IC
INTC2.ICCSIG1IC.BIT.CTCSIG1IC
INTC2.ICCSIG1IR.UINT16
INTC2.ICCSIG1IR.UINT8[L/H]
INTC2.ICCSIG1IR.BIT.P0CSIG1IR
INTC2.ICCSIG1IR.BIT.P1CSIG1IR
INTC2.ICCSIG1IR.BIT.P2CSIG1IR
INTC2.ICCSIG1IR.BIT.P3CSIG1IR
INTC2.ICCSIG1IR.BIT.TBCSIG1IR
INTC2.ICCSIG1IR.BIT.MKCSIG1IR
INTC2.ICCSIG1IR.BIT.RFCSIG1IR
INTC2.ICCSIG1IR.BIT.CTCSIG1IR
INTC2.ICCSIG1IRE.UINT16
INTC2.ICCSIG1IRE.UINT8[L/H]
INTC2.ICCSIG1IRE.BIT.P0CSIG1IRE
INTC2.ICCSIG1IRE.BIT.P1CSIG1IRE
INTC2.ICCSIG1IRE.BIT.P2CSIG1IRE
INTC2.ICCSIG1IRE.BIT.P3CSIG1IRE
INTC2.ICCSIG1IRE.BIT.TBCSIG1IRE
INTC2.ICCSIG1IRE.BIT.MKCSIG1IRE
INTC2.ICCSIG1IRE.BIT.RFCSIG1IRE
INTC2.ICCSIG1IRE.BIT.CTCSIG1IRE
INTC2.ICRLIN24.UINT16
INTC2.ICRLIN24.UINT8[L/H]
INTC2.ICRLIN24.BIT.P0RLIN24
INTC2.ICRLIN24.BIT.P1RLIN24
INTC2.ICRLIN24.BIT.P2RLIN24
INTC2.ICRLIN24.BIT.P3RLIN24
INTC2.ICRLIN24.BIT.TBRLIN24
INTC2.ICRLIN24.BIT.MKRLIN24
INTC2.ICRLIN24.BIT.RFRLIN24
INTC2.ICRLIN24.BIT.CTRLIN24
INTC2.ICRLIN25.UINT16
INTC2.ICRLIN25.UINT8[L/H]
INTC2.ICRLIN25.BIT.P0RLIN25
INTC2.ICRLIN25.BIT.P1RLIN25
INTC2.ICRLIN25.BIT.P2RLIN25
INTC2.ICRLIN25.BIT.P3RLIN25
INTC2.ICRLIN25.BIT.TBRLIN25
INTC2.ICRLIN25.BIT.MKRLIN25
INTC2.ICRLIN25.BIT.RFRLIN25
INTC2.ICRLIN25.BIT.CTRLIN25
INTC2.ICRLIN33.UINT16
INTC2.ICRLIN33.UINT8[L/H]
INTC2.ICRLIN33.BIT.P0RLIN33
INTC2.ICRLIN33.BIT.P1RLIN33
INTC2.ICRLIN33.BIT.P2RLIN33
INTC2.ICRLIN33.BIT.P3RLIN33
INTC2.ICRLIN33.BIT.TBRLIN33
INTC2.ICRLIN33.BIT.MKRLIN33
INTC2.ICRLIN33.BIT.RFRLIN33
INTC2.ICRLIN33.BIT.CTRLIN33
INTC2.ICRLIN33UR0.UINT16
INTC2.ICRLIN33UR0.UINT8[L/H]
INTC2.ICRLIN33UR0.BIT.P0RLIN33UR0
INTC2.ICRLIN33UR0.BIT.P1RLIN33UR0
INTC2.ICRLIN33UR0.BIT.P2RLIN33UR0
INTC2.ICRLIN33UR0.BIT.P3RLIN33UR0
INTC2.ICRLIN33UR0.BIT.TBRLIN33UR0
INTC2.ICRLIN33UR0.BIT.MKRLIN33UR0
INTC2.ICRLIN33UR0.BIT.RFRLIN33UR0
INTC2.ICRLIN33UR0.BIT.CTRLIN33UR0
INTC2.ICRLIN33UR1.UINT16
INTC2.ICRLIN33UR1.UINT8[L/H]
INTC2.ICRLIN33UR1.BIT.P0RLIN33UR1
INTC2.ICRLIN33UR1.BIT.P1RLIN33UR1
INTC2.ICRLIN33UR1.BIT.P2RLIN33UR1
INTC2.ICRLIN33UR1.BIT.P3RLIN33UR1
INTC2.ICRLIN33UR1.BIT.TBRLIN33UR1
INTC2.ICRLIN33UR1.BIT.MKRLIN33UR1
INTC2.ICRLIN33UR1.BIT.RFRLIN33UR1
INTC2.ICRLIN33UR1.BIT.CTRLIN33UR1
INTC2.ICRLIN33UR2.UINT16
INTC2.ICRLIN33UR2.UINT8[L/H]
INTC2.ICRLIN33UR2.BIT.P0RLIN33UR2
INTC2.ICRLIN33UR2.BIT.P1RLIN33UR2
INTC2.ICRLIN33UR2.BIT.P2RLIN33UR2
INTC2.ICRLIN33UR2.BIT.P3RLIN33UR2
INTC2.ICRLIN33UR2.BIT.TBRLIN33UR2
INTC2.ICRLIN33UR2.BIT.MKRLIN33UR2
INTC2.ICRLIN33UR2.BIT.RFRLIN33UR2
INTC2.ICRLIN33UR2.BIT.CTRLIN33UR2
INTC2.ICRLIN34.UINT16
INTC2.ICRLIN34.UINT8[L/H]
INTC2.ICRLIN34.BIT.P0RLIN34
INTC2.ICRLIN34.BIT.P1RLIN34
INTC2.ICRLIN34.BIT.P2RLIN34
INTC2.ICRLIN34.BIT.P3RLIN34
INTC2.ICRLIN34.BIT.TBRLIN34
INTC2.ICRLIN34.BIT.MKRLIN34
INTC2.ICRLIN34.BIT.RFRLIN34
INTC2.ICRLIN34.BIT.CTRLIN34
INTC2.ICRLIN34UR0.UINT16
INTC2.ICRLIN34UR0.UINT8[L/H]
INTC2.ICRLIN34UR0.BIT.P0RLIN34UR0
INTC2.ICRLIN34UR0.BIT.P1RLIN34UR0
INTC2.ICRLIN34UR0.BIT.P2RLIN34UR0
INTC2.ICRLIN34UR0.BIT.P3RLIN34UR0
INTC2.ICRLIN34UR0.BIT.TBRLIN34UR0
INTC2.ICRLIN34UR0.BIT.MKRLIN34UR0
INTC2.ICRLIN34UR0.BIT.RFRLIN34UR0
INTC2.ICRLIN34UR0.BIT.CTRLIN34UR0
INTC2.ICRLIN34UR1.UINT16
INTC2.ICRLIN34UR1.UINT8[L/H]
INTC2.ICRLIN34UR1.BIT.P0RLIN34UR1
INTC2.ICRLIN34UR1.BIT.P1RLIN34UR1
INTC2.ICRLIN34UR1.BIT.P2RLIN34UR1
INTC2.ICRLIN34UR1.BIT.P3RLIN34UR1
INTC2.ICRLIN34UR1.BIT.TBRLIN34UR1
INTC2.ICRLIN34UR1.BIT.MKRLIN34UR1
INTC2.ICRLIN34UR1.BIT.RFRLIN34UR1
INTC2.ICRLIN34UR1.BIT.CTRLIN34UR1
INTC2.ICRLIN34UR2.UINT16
INTC2.ICRLIN34UR2.UINT8[L/H]
INTC2.ICRLIN34UR2.BIT.P0RLIN34UR2
INTC2.ICRLIN34UR2.BIT.P1RLIN34UR2
INTC2.ICRLIN34UR2.BIT.P2RLIN34UR2
INTC2.ICRLIN34UR2.BIT.P3RLIN34UR2
INTC2.ICRLIN34UR2.BIT.TBRLIN34UR2
INTC2.ICRLIN34UR2.BIT.MKRLIN34UR2
INTC2.ICRLIN34UR2.BIT.RFRLIN34UR2
INTC2.ICRLIN34UR2.BIT.CTRLIN34UR2
INTC2.ICRLIN35.UINT16
INTC2.ICRLIN35.UINT8[L/H]
INTC2.ICRLIN35.BIT.P0RLIN35
INTC2.ICRLIN35.BIT.P1RLIN35
INTC2.ICRLIN35.BIT.P2RLIN35
INTC2.ICRLIN35.BIT.P3RLIN35
INTC2.ICRLIN35.BIT.TBRLIN35
INTC2.ICRLIN35.BIT.MKRLIN35
INTC2.ICRLIN35.BIT.RFRLIN35
INTC2.ICRLIN35.BIT.CTRLIN35
INTC2.ICRLIN35UR0.UINT16
INTC2.ICRLIN35UR0.UINT8[L/H]
INTC2.ICRLIN35UR0.BIT.P0RLIN35UR0
INTC2.ICRLIN35UR0.BIT.P1RLIN35UR0
INTC2.ICRLIN35UR0.BIT.P2RLIN35UR0
INTC2.ICRLIN35UR0.BIT.P3RLIN35UR0
INTC2.ICRLIN35UR0.BIT.TBRLIN35UR0
INTC2.ICRLIN35UR0.BIT.MKRLIN35UR0
INTC2.ICRLIN35UR0.BIT.RFRLIN35UR0
INTC2.ICRLIN35UR0.BIT.CTRLIN35UR0
INTC2.ICRLIN35UR1.UINT16
INTC2.ICRLIN35UR1.UINT8[L/H]
INTC2.ICRLIN35UR1.BIT.P0RLIN35UR1
INTC2.ICRLIN35UR1.BIT.P1RLIN35UR1
INTC2.ICRLIN35UR1.BIT.P2RLIN35UR1
INTC2.ICRLIN35UR1.BIT.P3RLIN35UR1
INTC2.ICRLIN35UR1.BIT.TBRLIN35UR1
INTC2.ICRLIN35UR1.BIT.MKRLIN35UR1
INTC2.ICRLIN35UR1.BIT.RFRLIN35UR1
INTC2.ICRLIN35UR1.BIT.CTRLIN35UR1
INTC2.ICRLIN35UR2.UINT16
INTC2.ICRLIN35UR2.UINT8[L/H]
INTC2.ICRLIN35UR2.BIT.P0RLIN35UR2
INTC2.ICRLIN35UR2.BIT.P1RLIN35UR2
INTC2.ICRLIN35UR2.BIT.P2RLIN35UR2
INTC2.ICRLIN35UR2.BIT.P3RLIN35UR2
INTC2.ICRLIN35UR2.BIT.TBRLIN35UR2
INTC2.ICRLIN35UR2.BIT.MKRLIN35UR2
INTC2.ICRLIN35UR2.BIT.RFRLIN35UR2
INTC2.ICRLIN35UR2.BIT.CTRLIN35UR2
INTC2.ICPWGA48.UINT16
INTC2.ICPWGA48.UINT8[L/H]
INTC2.ICPWGA48.BIT.P0PWGA48
INTC2.ICPWGA48.BIT.P1PWGA48
INTC2.ICPWGA48.BIT.P2PWGA48
INTC2.ICPWGA48.BIT.P3PWGA48
INTC2.ICPWGA48.BIT.TBPWGA48
INTC2.ICPWGA48.BIT.MKPWGA48
INTC2.ICPWGA48.BIT.RFPWGA48
INTC2.ICPWGA48.BIT.CTPWGA48
INTC2.ICPWGA49.UINT16
INTC2.ICPWGA49.UINT8[L/H]
INTC2.ICPWGA49.BIT.P0PWGA49
INTC2.ICPWGA49.BIT.P1PWGA49
INTC2.ICPWGA49.BIT.P2PWGA49
INTC2.ICPWGA49.BIT.P3PWGA49
INTC2.ICPWGA49.BIT.TBPWGA49
INTC2.ICPWGA49.BIT.MKPWGA49
INTC2.ICPWGA49.BIT.RFPWGA49
INTC2.ICPWGA49.BIT.CTPWGA49
INTC2.ICPWGA50.UINT16
INTC2.ICPWGA50.UINT8[L/H]
INTC2.ICPWGA50.BIT.P0PWGA50
INTC2.ICPWGA50.BIT.P1PWGA50
INTC2.ICPWGA50.BIT.P2PWGA50
INTC2.ICPWGA50.BIT.P3PWGA50
INTC2.ICPWGA50.BIT.TBPWGA50
INTC2.ICPWGA50.BIT.MKPWGA50
INTC2.ICPWGA50.BIT.RFPWGA50
INTC2.ICPWGA50.BIT.CTPWGA50
INTC2.ICPWGA51.UINT16
INTC2.ICPWGA51.UINT8[L/H]
INTC2.ICPWGA51.BIT.P0PWGA51
INTC2.ICPWGA51.BIT.P1PWGA51
INTC2.ICPWGA51.BIT.P2PWGA51
INTC2.ICPWGA51.BIT.P3PWGA51
INTC2.ICPWGA51.BIT.TBPWGA51
INTC2.ICPWGA51.BIT.MKPWGA51
INTC2.ICPWGA51.BIT.RFPWGA51
INTC2.ICPWGA51.BIT.CTPWGA51
INTC2.ICPWGA52.UINT16
INTC2.ICPWGA52.UINT8[L/H]
INTC2.ICPWGA52.BIT.P0PWGA52
INTC2.ICPWGA52.BIT.P1PWGA52
INTC2.ICPWGA52.BIT.P2PWGA52
INTC2.ICPWGA52.BIT.P3PWGA52
INTC2.ICPWGA52.BIT.TBPWGA52
INTC2.ICPWGA52.BIT.MKPWGA52
INTC2.ICPWGA52.BIT.RFPWGA52
INTC2.ICPWGA52.BIT.CTPWGA52
INTC2.ICPWGA53.UINT16
INTC2.ICPWGA53.UINT8[L/H]
INTC2.ICPWGA53.BIT.P0PWGA53
INTC2.ICPWGA53.BIT.P1PWGA53
INTC2.ICPWGA53.BIT.P2PWGA53
INTC2.ICPWGA53.BIT.P3PWGA53
INTC2.ICPWGA53.BIT.TBPWGA53
INTC2.ICPWGA53.BIT.MKPWGA53
INTC2.ICPWGA53.BIT.RFPWGA53
INTC2.ICPWGA53.BIT.CTPWGA53
INTC2.ICPWGA54.UINT16
INTC2.ICPWGA54.UINT8[L/H]
INTC2.ICPWGA54.BIT.P0PWGA54
INTC2.ICPWGA54.BIT.P1PWGA54
INTC2.ICPWGA54.BIT.P2PWGA54
INTC2.ICPWGA54.BIT.P3PWGA54
INTC2.ICPWGA54.BIT.TBPWGA54
INTC2.ICPWGA54.BIT.MKPWGA54
INTC2.ICPWGA54.BIT.RFPWGA54
INTC2.ICPWGA54.BIT.CTPWGA54
INTC2.ICPWGA55.UINT16
INTC2.ICPWGA55.UINT8[L/H]
INTC2.ICPWGA55.BIT.P0PWGA55
INTC2.ICPWGA55.BIT.P1PWGA55
INTC2.ICPWGA55.BIT.P2PWGA55
INTC2.ICPWGA55.BIT.P3PWGA55
INTC2.ICPWGA55.BIT.TBPWGA55
INTC2.ICPWGA55.BIT.MKPWGA55
INTC2.ICPWGA55.BIT.RFPWGA55
INTC2.ICPWGA55.BIT.CTPWGA55
INTC2.ICPWGA56.UINT16
INTC2.ICPWGA56.UINT8[L/H]
INTC2.ICPWGA56.BIT.P0PWGA56
INTC2.ICPWGA56.BIT.P1PWGA56
INTC2.ICPWGA56.BIT.P2PWGA56
INTC2.ICPWGA56.BIT.P3PWGA56
INTC2.ICPWGA56.BIT.TBPWGA56
INTC2.ICPWGA56.BIT.MKPWGA56
INTC2.ICPWGA56.BIT.RFPWGA56
INTC2.ICPWGA56.BIT.CTPWGA56
INTC2.ICPWGA57.UINT16
INTC2.ICPWGA57.UINT8[L/H]
INTC2.ICPWGA57.BIT.P0PWGA57
INTC2.ICPWGA57.BIT.P1PWGA57
INTC2.ICPWGA57.BIT.P2PWGA57
INTC2.ICPWGA57.BIT.P3PWGA57
INTC2.ICPWGA57.BIT.TBPWGA57
INTC2.ICPWGA57.BIT.MKPWGA57
INTC2.ICPWGA57.BIT.RFPWGA57
INTC2.ICPWGA57.BIT.CTPWGA57
INTC2.ICPWGA58.UINT16
INTC2.ICPWGA58.UINT8[L/H]
INTC2.ICPWGA58.BIT.P0PWGA58
INTC2.ICPWGA58.BIT.P1PWGA58
INTC2.ICPWGA58.BIT.P2PWGA58
INTC2.ICPWGA58.BIT.P3PWGA58
INTC2.ICPWGA58.BIT.TBPWGA58
INTC2.ICPWGA58.BIT.MKPWGA58
INTC2.ICPWGA58.BIT.RFPWGA58
INTC2.ICPWGA58.BIT.CTPWGA58
INTC2.ICPWGA59.UINT16
INTC2.ICPWGA59.UINT8[L/H]
INTC2.ICPWGA59.BIT.P0PWGA59
INTC2.ICPWGA59.BIT.P1PWGA59
INTC2.ICPWGA59.BIT.P2PWGA59
INTC2.ICPWGA59.BIT.P3PWGA59
INTC2.ICPWGA59.BIT.TBPWGA59
INTC2.ICPWGA59.BIT.MKPWGA59
INTC2.ICPWGA59.BIT.RFPWGA59
INTC2.ICPWGA59.BIT.CTPWGA59
INTC2.ICPWGA60.UINT16
INTC2.ICPWGA60.UINT8[L/H]
INTC2.ICPWGA60.BIT.P0PWGA60
INTC2.ICPWGA60.BIT.P1PWGA60
INTC2.ICPWGA60.BIT.P2PWGA60
INTC2.ICPWGA60.BIT.P3PWGA60
INTC2.ICPWGA60.BIT.TBPWGA60
INTC2.ICPWGA60.BIT.MKPWGA60
INTC2.ICPWGA60.BIT.RFPWGA60
INTC2.ICPWGA60.BIT.CTPWGA60
INTC2.ICPWGA61.UINT16
INTC2.ICPWGA61.UINT8[L/H]
INTC2.ICPWGA61.BIT.P0PWGA61
INTC2.ICPWGA61.BIT.P1PWGA61
INTC2.ICPWGA61.BIT.P2PWGA61
INTC2.ICPWGA61.BIT.P3PWGA61
INTC2.ICPWGA61.BIT.TBPWGA61
INTC2.ICPWGA61.BIT.MKPWGA61
INTC2.ICPWGA61.BIT.RFPWGA61
INTC2.ICPWGA61.BIT.CTPWGA61
INTC2.ICPWGA62.UINT16
INTC2.ICPWGA62.UINT8[L/H]
INTC2.ICPWGA62.BIT.P0PWGA62
INTC2.ICPWGA62.BIT.P1PWGA62
INTC2.ICPWGA62.BIT.P2PWGA62
INTC2.ICPWGA62.BIT.P3PWGA62
INTC2.ICPWGA62.BIT.TBPWGA62
INTC2.ICPWGA62.BIT.MKPWGA62
INTC2.ICPWGA62.BIT.RFPWGA62
INTC2.ICPWGA62.BIT.CTPWGA62
INTC2.ICPWGA63.UINT16
INTC2.ICPWGA63.UINT8[L/H]
INTC2.ICPWGA63.BIT.P0PWGA63
INTC2.ICPWGA63.BIT.P1PWGA63
INTC2.ICPWGA63.BIT.P2PWGA63
INTC2.ICPWGA63.BIT.P3PWGA63
INTC2.ICPWGA63.BIT.TBPWGA63
INTC2.ICPWGA63.BIT.MKPWGA63
INTC2.ICPWGA63.BIT.RFPWGA63
INTC2.ICPWGA63.BIT.CTPWGA63
INTC2.ICRCAN4ERR.UINT16
INTC2.ICRCAN4ERR.UINT8[L/H]
INTC2.ICRCAN4ERR.BIT.P0RCAN4ERR
INTC2.ICRCAN4ERR.BIT.P1RCAN4ERR
INTC2.ICRCAN4ERR.BIT.P2RCAN4ERR
INTC2.ICRCAN4ERR.BIT.P3RCAN4ERR
INTC2.ICRCAN4ERR.BIT.TBRCAN4ERR
INTC2.ICRCAN4ERR.BIT.MKRCAN4ERR
INTC2.ICRCAN4ERR.BIT.RFRCAN4ERR
INTC2.ICRCAN4ERR.BIT.CTRCAN4ERR
INTC2.ICRCAN4REC.UINT16
INTC2.ICRCAN4REC.UINT8[L/H]
INTC2.ICRCAN4REC.BIT.P0RCAN4REC
INTC2.ICRCAN4REC.BIT.P1RCAN4REC
INTC2.ICRCAN4REC.BIT.P2RCAN4REC
INTC2.ICRCAN4REC.BIT.P3RCAN4REC
INTC2.ICRCAN4REC.BIT.TBRCAN4REC
INTC2.ICRCAN4REC.BIT.MKRCAN4REC
INTC2.ICRCAN4REC.BIT.RFRCAN4REC
INTC2.ICRCAN4REC.BIT.CTRCAN4REC
INTC2.ICRCAN4TRX.UINT16
INTC2.ICRCAN4TRX.UINT8[L/H]
INTC2.ICRCAN4TRX.BIT.P0RCAN4TRX
INTC2.ICRCAN4TRX.BIT.P1RCAN4TRX
INTC2.ICRCAN4TRX.BIT.P2RCAN4TRX
INTC2.ICRCAN4TRX.BIT.P3RCAN4TRX
INTC2.ICRCAN4TRX.BIT.TBRCAN4TRX
INTC2.ICRCAN4TRX.BIT.MKRCAN4TRX
INTC2.ICRCAN4TRX.BIT.RFRCAN4TRX
INTC2.ICRCAN4TRX.BIT.CTRCAN4TRX
INTC2.ICRCAN5ERR.UINT16
INTC2.ICRCAN5ERR.UINT8[L/H]
INTC2.ICRCAN5ERR.BIT.P0RCAN5ERR
INTC2.ICRCAN5ERR.BIT.P1RCAN5ERR
INTC2.ICRCAN5ERR.BIT.P2RCAN5ERR
INTC2.ICRCAN5ERR.BIT.P3RCAN5ERR
INTC2.ICRCAN5ERR.BIT.TBRCAN5ERR
INTC2.ICRCAN5ERR.BIT.MKRCAN5ERR
INTC2.ICRCAN5ERR.BIT.RFRCAN5ERR
INTC2.ICRCAN5ERR.BIT.CTRCAN5ERR
INTC2.ICRCAN5REC.UINT16
INTC2.ICRCAN5REC.UINT8[L/H]
INTC2.ICRCAN5REC.BIT.P0RCAN5REC
INTC2.ICRCAN5REC.BIT.P1RCAN5REC
INTC2.ICRCAN5REC.BIT.P2RCAN5REC
INTC2.ICRCAN5REC.BIT.P3RCAN5REC
INTC2.ICRCAN5REC.BIT.TBRCAN5REC
INTC2.ICRCAN5REC.BIT.MKRCAN5REC
INTC2.ICRCAN5REC.BIT.RFRCAN5REC
INTC2.ICRCAN5REC.BIT.CTRCAN5REC
INTC2.ICRCAN5TRX.UINT16
INTC2.ICRCAN5TRX.UINT8[L/H]
INTC2.ICRCAN5TRX.BIT.P0RCAN5TRX
INTC2.ICRCAN5TRX.BIT.P1RCAN5TRX
INTC2.ICRCAN5TRX.BIT.P2RCAN5TRX
INTC2.ICRCAN5TRX.BIT.P3RCAN5TRX
INTC2.ICRCAN5TRX.BIT.TBRCAN5TRX
INTC2.ICRCAN5TRX.BIT.MKRCAN5TRX
INTC2.ICRCAN5TRX.BIT.RFRCAN5TRX
INTC2.ICRCAN5TRX.BIT.CTRCAN5TRX
INTC2.ICDPE.UINT16
INTC2.ICDPE.UINT8[L/H]
INTC2.ICDPE.BIT.P0DPE
INTC2.ICDPE.BIT.P1DPE
INTC2.ICDPE.BIT.P2DPE
INTC2.ICDPE.BIT.P3DPE
INTC2.ICDPE.BIT.TBDPE
INTC2.ICDPE.BIT.MKDPE
INTC2.ICDPE.BIT.RFDPE
INTC2.ICDPE.BIT.CTDPE
INTC2.ICAPE.UINT16
INTC2.ICAPE.UINT8[L/H]
INTC2.ICAPE.BIT.P0APE
INTC2.ICAPE.BIT.P1APE
INTC2.ICAPE.BIT.P2APE
INTC2.ICAPE.BIT.P3APE
INTC2.ICAPE.BIT.TBAPE
INTC2.ICAPE.BIT.MKAPE
INTC2.ICAPE.BIT.RFAPE
INTC2.ICAPE.BIT.CTAPE
INTC2.IMR1.UINT32
INTC2.IMR1.UINT16[L/H]
INTC2.IMR1.UINT8[LL/LH/HL/HH]
INTC2.IMR1.BIT.IMR1EIMK32 ... INTC2.IMR1.BIT.IMR1EIMK41
INTC2.IMR1.BIT.IMR1EIMK43 ... INTC2.IMR1.BIT.IMR1EIMK63
INTC2.IMR2.UINT32
INTC2.IMR2.UINT16[L/H]
INTC2.IMR2.UINT8[LL/LH/HL/HH]
INTC2.IMR2.BIT.IMR2EIMK64 ... INTC2.IMR2.BIT.IMR2EIMK95
INTC2.IMR3.UINT32
INTC2.IMR3.UINT16[L/H]
INTC2.IMR3.UINT8[LL/LH/HL/HH]
INTC2.IMR3.BIT.IMR3EIMK96 ... INTC2.IMR3.BIT.IMR3EIMK103
INTC2.IMR3.BIT.IMR3EIMK110 ... INTC2.IMR3.BIT.IMR3EIMK127
INTC2.IMR4.UINT32
INTC2.IMR4.UINT16[L/H]
INTC2.IMR4.UINT8[LL/LH/HL/HH]
INTC2.IMR4.BIT.IMR4EIMK128 ... INTC2.IMR4.BIT.IMR4EIMK135
INTC2.IMR4.BIT.IMR4EIMK142 ... INTC2.IMR4.BIT.IMR4EIMK159
INTC2.IMR5.UINT32
INTC2.IMR5.UINT16[L/H]
INTC2.IMR5.UINT8[LL/LH/HH]
INTC2.IMR5.BIT.IMR5EIMK160 ... INTC2.IMR5.BIT.IMR5EIMK171
INTC2.IMR5.BIT.IMR5EIMK184 ... INTC2.IMR5.BIT.IMR5EIMK191
INTC2.IMR6.UINT32
INTC2.IMR6.UINT16[L/H]
INTC2.IMR6.UINT8[LL/LH/HL/HH]
INTC2.IMR6.BIT.IMR6EIMK192 ... INTC2.IMR6.BIT.IMR6EIMK215
INTC2.IMR6.BIT.IMR6EIMK217 ... INTC2.IMR6.BIT.IMR6EIMK223
INTC2.IMR7.UINT32
INTC2.IMR7.UINT16[L/H]
INTC2.IMR7.UINT8[LL/LH/HL/HH]
INTC2.IMR7.BIT.IMR7EIMK224 ... INTC2.IMR7.BIT.IMR7EIMK255
INTC2.IMR8.UINT32
INTC2.IMR8.UINT16[H]
INTC2.IMR8.UINT8[HL/HH]
INTC2.IMR8.BIT.IMR8EIMK272 ... INTC2.IMR8.BIT.IMR8EIMK274
INTC2.IMR8.BIT.IMR8EIMK287
INTC2.IMR9.UINT32
INTC2.IMR9.UINT16[L]
INTC2.IMR9.UINT8[LL]
INTC2.IMR9.BIT.IMR9EIMK288
INTC2.IMR9.BIT.IMR9EIMK289
INTC2.IMR11.UINT32
INTC2.IMR11.UINT16[L]
INTC2.IMR11.UINT8[LL]
INTC2.IMR11.BIT.IMR11EIMK356
INTC2.IMR11.BIT.IMR11EIMK357
*/
#endif
