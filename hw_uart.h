#ifndef _HW_UART_H
#define _HW_UART_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    UART mode register (RLN3n.LMD)
*/
/* UART Reception Data Noise Filtering Disable (LRDNFS) */
#define _UART_NOISE_FILTER_ENABLED                (0x00U) /* The noise filter is enabled */
#define _UART_NOISE_FILTER_DISABLED               (0x20U) /* The noise filter is disabled */
/* LIN OR UART Mode Select (LMD[1:0]) */
#define _UART_MODE_SELECT                         (0x01U) /* UART mode */

/*
    UART configuration register (RLN3n.LBFC)
*/
/* UART Output Polarity Switch (UTPS) */
#define _UART_TRANSMISSION_NORMAL                 (0x00U) /* Transmit data normal output */
#define _UART_TRANSMITSSION_INVERTED              (0x40U) /* Transmit data with inversion output */
/* UART Input Polarity Switch (URPS) */
#define _UART_RECEPTION_NORMAL                    (0x00U) /* Reception data normal output */
#define _UART_RECEPTION_INVERTED                  (0x20U) /* Reception data with inversion output */
/* UART Parity Select (UPS[1:0]) */
#define _UART_PARITY_PROHIBITED                   (0x00U) /* Parity prohibited */
#define _UART_PARITY_EVEN                         (0x08U) /* Even Parity */
#define _UART_PARITY_ZERO                         (0x10U) /* 0 Parity */
#define _UART_PARITY_ODD                          (0x18U) /* Odd parity */
/* UART Stop Bit length Select (USBLS) */
#define _UART_STOP_BIT_1                          (0x00U) /* Stop bit:1 bit */
#define _UART_STOP_BIT_2                          (0x04U) /* Stop bit: 2 bits */
/* UART Transfer Format Order Select (UBOS) */
#define _UART_LSB                                 (0x00U) /* LSB First */
#define _UART_MSB                                 (0x02U) /* MSB First */
/* UART Character Length Select (UBLS) */
#define _UART_LENGTH_8                            (0x00U) /* UART 8 bits communication */
#define _UART_LENGTH_7                            (0x01U) /* UART 7 bits communication */

/*
    UART error detection enable register (RLN3n.LEDE)
*/
/* Framing Error Detection Enable (FERE) */
#define _UART_FRAMING_ERROR_DETECTED              (0x08U) /* Enables framing error detection */
/* Overrun Error Detection Enable (OERE) */
#define _UART_OVERRUN_ERROR_DETECTED              (0x04U) /* Enables overrun error detection */
/* Bit Error Detection Enable (BERE) */
#define _UART_BIT_ERROR_DETECTED                  (0x01U) /* Enables bit error detection */

/*
    UART transmission control register (RLN3n.LTRC)
*/
/* UART Buffer Transmission Start (RTS) */
#define _UART_BUFFER_TRANSMISSION_IS_STOPPED      (0x00U) /* UART Buffer transmission is stopped */
#define _UART_BUFFER_TRANSMISSION_IS_STARTED      (0x02U) /* UART Buffer transmission is started */

/*
    UART status register (RLN3n.LST)
*/
/* Reception Status Flag (URS) */
#define _UART_RECEPTION_ISNOT_OPERATED            (0x00U) /* Reception is not operated */
#define _UART_RECEPTION_OPERATED                  (0x20U) /* Reception is operated */
/* Transmission Status Flag (UTS) */
#define _UART_TRANSMISSION_ISNOT_OPERATED         (0x00U) /* Transmission is not operated */
#define _UART_TRANSMISSION_OPERATED               (0x10U) /* Transmission is operated */
/* Error Detection Flag (ERR) */
#define _UART_REC_NO_ERROR_DETECTED               (0x00U) /* No error has been detected */
#define _UART_RECEPTION_ERROR_DETECTED            (0x08U) /* Error has been detected */
/* Successful UART Buffer Transmission Flag (FTC) */
#define _UART_BUFFER_TRANSMIT_NOT_COMPLETED       (0x00U) /* UART buffer transmission has not been completed */
#define _UART_TRANSMISSION_COMPLETED              (0x01U) /* UART buffer transmission has been completed */

/*
    UART error status register (RLN3n.LEST)
*/
/* Parity Error Flag (UPER) */
#define _UART_PARITY_ERROR_NOT_DETECTED           (0x00U) /* Parity error has not been detected */
#define _UART_PARITY_ERROR_FLAG                   (0x40U) /* Parity error has been detected */
/* Framing Error Flag (FER) */
#define _UART_FRAMING_ERROR_NOT_DETECTED          (0x00U) /* Framing error has not been detected */
#define _UART_FRAMING_ERROR_FLAG                  (0x08U) /* Framing error has been detected */
/* Overrun Error Flag (OER) */
#define _UART_OVERRUN_ERROR_NOT_DETECTED          (0x00U) /* Overrun error has not been detected */
#define _UART_OVERRUN_ERROR_FLAG                  (0x04U) /* Overrun error has been detected */
/* Bit Error Flag (BER) */
#define _UART_BIT_ERROR_NOT_DETECTED              (0x00U) /* Bit error has not been detected */
#define _UART_BIT_ERROR_FLAG                      (0x01U) /* Bit error has been detected */

/*
    UART operation enable register (RLN3n.LUOER)
*/
/* Reception Enable (UROE) */
#define _UART_RECEPTION_DISABLED                  (0x00U) /* Disables reception */
#define _UART_RECEPTION_ENABLED                   (0x02U) /* Enables reception */
/* Transmission Enable (UTOE) */
#define _UART_TRANSMISSION_DISABLED               (0x00U) /* Disables transmission */
#define _UART_TRABSMISSION_ENABLED                (0x01U) /* Enables transmission */

/*
    UART option register 1 (RLN3n.LUOR1)
*/
/* Transmission Interrupt Generation Timing Select (UTIGTS) */
#define _UART_INT_TRANSMISSION_START              (0x00U) /* INT is generated at the start of transmission */
#define _UART_INT_TRANSMISSION_END                (0x08U) /* INT is generated at the completion of transmission */

/*
    UART control register (RLN3n.LCUC)
*/
/* LIN Reset (OM0) */
#define _UART_LIN_RESET_MODE_CAUSED               (0x00U) /* LIN reset mode is caused */
#define _UART_LIN_RESET_MODE_CANCELED             (0x01U) /* LIN reset mode is canceled. */

/*
    LIN wake-up baud Rate select register (RLN3n.LWBR)
*/
/* Bit Sampling Count Select (NSPB[3:0]) */
#define _UART_6_SAMPLING                          (0x50U) /* 6 sampling */
#define _UART_7_SAMPLING                          (0x60U) /* 7 sampling */
#define _UART_8_SAMPLING                          (0x70U) /* 8 sampling */
#define _UART_9_SAMPLING                          (0x80U) /* 9 sampling */
#define _UART_10_SAMPLING                         (0x90U) /* 10 sampling */
#define _UART_11_SAMPLING                         (0xA0U) /* 11 sampling */
#define _UART_12_SAMPLING                         (0xB0U) /* 12 sampling */
#define _UART_13_SAMPLING                         (0xC0U) /* 13 sampling */
#define _UART_14_SAMPLING                         (0xD0U) /* 14 sampling */
#define _UART_15_SAMPLING                         (0xE0U) /* 15 sampling */
#define _UART_16_SAMPLING                         (0xF0U) /* 16 sampling */
/* Prescaler clock select (LPRS[2:0]) */
#define _UART_PRESCALER_CLOCK_SELECT_1            (0x00U) /* Prescaler clock select 1/1 */
#define _UART_PRESCALER_CLOCK_SELECT_2            (0x02U) /* Prescaler clock select 1/2 */
#define _UART_PRESCALER_CLOCK_SELECT_4            (0x04U) /* Prescaler clock select 1/4 */
#define _UART_PRESCALER_CLOCK_SELECT_8            (0x06U) /* Prescaler clock select 1/8 */
#define _UART_PRESCALER_CLOCK_SELECT_16           (0x08U) /* Prescaler clock select 1/16 */
#define _UART_PRESCALER_CLOCK_SELECT_32           (0x0AU) /* Prescaler clock select 1/32 */
#define _UART_PRESCALER_CLOCK_SELECT_64           (0x0CU) /* Prescaler clock select 1/64 */
#define _UART_PRESCALER_CLOCK_SELECT_128          (0x0EU) /* Prescaler clock select 1/128 */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _UART0_BUFFER_ADDRESS                     (0xFFCE2000UL)
#define _UART1_BUFFER_ADDRESS                     (0xFFCE2040UL)
#define _UART2_BUFFER_ADDRESS                     (0xFFCE2080UL)
#define _UART3_BUFFER_ADDRESS                     (0xFFCE20C0UL)
#define _UART4_BUFFER_ADDRESS                     (0xFFCE2100UL)
#define _UART5_BUFFER_ADDRESS                     (0xFFCE2140UL)
#define _UART_CLEAR_ERROR_FLAG                    (0x7DU)
//#define _UART2_BAUD_RATE_PRESCALER                (0x01CEU)

/* ch:0 1 2 53 4 5   baudrate::9600 19200 115200   defalut baudrate:115200 */
uint8_t uart_init(uint8_t ch, uint32_t baud);
uint8_t uart_send(uint8_t ch, uint8_t *data, uint16_t len);
uint8_t uart_recv(uint8_t ch, uint8_t *data, uint16_t *len);
uint8_t uart_deinit(uint8_t ch);


#endif

