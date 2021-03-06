/*
 * File: PICconfig.h
 *
 * PIC24 Mikromedia  default microcontroller configuration
 */

#include <xc.h>

// this is the default configuration for all book's projects 
_CONFIG1( JTAGEN_OFF        // disable JTAG interface
        & GCP_OFF           // disable general code protection
        & GWRP_OFF          // disable flash write protection
        & ICS_PGx2          // ICSP interface (2=default)
        & FWDTEN_OFF)       // disable watchdog timer

_CONFIG2( PLL_96MHZ_ON      // enable USB PLL module
        & PLLDIV_DIV2       // 8MHz/2 = 4Mhz input to USB PLL
        & IESO_OFF          // two speed start up disabled
        & FCKSM_CSDCMD      // disable clock-switching/monitor
        & FNOSC_PRIPLL      // primary oscillator: enable PLL 
        & POSCMOD_XT)       // primary oscillator: XT mode
