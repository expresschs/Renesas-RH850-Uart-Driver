#include <stddef.h>

#include "r_cg_macrodriver.h"
#include "iodefine.h"
#include "queue.h"
#include "hw_timer.h"
#include "hw_uart.h"

static queue_type g_ch2TxQueue;
static queue_type g_ch2RxQueue;
static uint8_t g_ch2TxBuf[1024];
static uint8_t g_ch2RxBuf[128];

static queue_type g_ch3TxQueue;
static queue_type g_ch3RxQueue;
static uint8_t g_ch3TxBuf[128];
static uint8_t g_ch3RxBuf[128];

static void _ch2_port_init(void)
{
    /* Set RLIN32RX pin */
    PORT.PIBC0 &= _PORT_CLEAR_BIT13;
    PORT.PBDC0 &= _PORT_CLEAR_BIT13;
    PORT.PM0 |= _PORT_SET_BIT13;  
    PORT.PMC0 &= _PORT_CLEAR_BIT13;
    PORT.PIPC0 &= _PORT_CLEAR_BIT13;
    PORT.PFC0 |= _PORT_SET_BIT13;  
    PORT.PFCE0 &= _PORT_CLEAR_BIT13;
    PORT.PFCAE0 |= _PORT_SET_BIT13;  
    PORT.PMC0 |= _PORT_SET_BIT13;  
    /* Set RLIN32TX pin */
    PORT.PIBC0 &= _PORT_CLEAR_BIT14;
    PORT.PBDC0 &= _PORT_CLEAR_BIT14;
    PORT.PM0 |= _PORT_SET_BIT14;  
    PORT.PMC0 &= _PORT_CLEAR_BIT14;
    PORT.PIPC0 &= _PORT_CLEAR_BIT14;
    PORT.PFC0 &= _PORT_CLEAR_BIT14;
    PORT.PFCE0 &= _PORT_CLEAR_BIT14;
    PORT.PFCAE0 &= _PORT_CLEAR_BIT14;
    PORT.PMC0 |= _PORT_SET_BIT14;  
    PORT.PM0 &= _PORT_CLEAR_BIT14;

    return;
}

static void _ch3_port_init(void)
{
    /* Set RLIN33RX pin */
    PORT.PIBC1 &= _PORT_CLEAR_BIT0;
    PORT.PBDC1 &= _PORT_CLEAR_BIT0;
    PORT.PM1 |= _PORT_SET_BIT0;  
    PORT.PMC1 &= _PORT_CLEAR_BIT0;
    PORT.PFC1 &= _PORT_CLEAR_BIT0;
    PORT.PFCE1 |= _PORT_SET_BIT0;  
    PORT.PFCAE1 |= _PORT_SET_BIT0;  
    PORT.PMC1 |= _PORT_SET_BIT0;  
    /* Set RLIN33TX pin */
    PORT.PIBC1 &= _PORT_CLEAR_BIT1;
    PORT.PBDC1 &= _PORT_CLEAR_BIT1;
    PORT.PM1 |= _PORT_SET_BIT1;  
    PORT.PMC1 &= _PORT_CLEAR_BIT1;
    PORT.PMC1 |= _PORT_SET_BIT1;  
    PORT.PM1 &= _PORT_CLEAR_BIT1;

    return;
}

static void _ch2_start(void)
{
    /* Enable UART2 operation */
    RLN32.LUOER |= _UART_RECEPTION_ENABLED | _UART_TRABSMISSION_ENABLED;
    /* Clear ICRLIN32UR0 interrupt request and enable operation */
    INTC2.ICRLIN32UR0.BIT.RFRLIN32UR0 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN32UR0.BIT.MKRLIN32UR0 = _INT_PROCESSING_ENABLED;    
    /* Clear ICRLIN32UR1 interrupt request and enable operation */
    INTC2.ICRLIN32UR1.BIT.RFRLIN32UR1 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN32UR1.BIT.MKRLIN32UR1 = _INT_PROCESSING_ENABLED;    
    /* Clear ICRLIN32UR2 interrupt request and enable operation */
    INTC2.ICRLIN32UR2.BIT.RFRLIN32UR2 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN32UR2.BIT.MKRLIN32UR2 = _INT_PROCESSING_ENABLED;    

    return;
}

static void _ch3_start(void)
{
    /* Enable UART3 operation */
    RLN33.LUOER |= _UART_RECEPTION_ENABLED | _UART_TRABSMISSION_ENABLED;
    /* Clear ICRLIN33UR0 interrupt request and enable operation */
    INTC2.ICRLIN33UR0.BIT.RFRLIN33UR0 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN33UR0.BIT.MKRLIN33UR0 = _INT_PROCESSING_ENABLED;    
    /* Clear ICRLIN33UR1 interrupt request and enable operation */
    INTC2.ICRLIN33UR1.BIT.RFRLIN33UR1 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN33UR1.BIT.MKRLIN33UR1 = _INT_PROCESSING_ENABLED;    
    /* Clear ICRLIN33UR2 interrupt request and enable operation */
    INTC2.ICRLIN33UR2.BIT.RFRLIN33UR2 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICRLIN33UR2.BIT.MKRLIN33UR2 = _INT_PROCESSING_ENABLED;

    return;
}

uint8_t uart_init(uint8_t ch, uint32_t baud)
{
    uint8_t ret = 1;
    volatile uint32_t dummy_read = 0;

    if (ch > 5) {
        return ret;
    }

    if (1 == ch) {
        /* TODO */
    } else if (1 == ch) {
        /* TODO */
    } else if (2 == ch) {
        QueueInit(&g_ch2TxQueue, g_ch2TxBuf, 1, sizeof(g_ch2TxBuf));
        QueueInit(&g_ch2RxQueue, g_ch2RxBuf, 1, sizeof(g_ch2RxBuf));
        /* Set LIN reset mode */
        RLN32.LCUC = _UART_LIN_RESET_MODE_CAUSED;
        /* Disable ICRLIN32UR0 operation and clear request */
        INTC2.ICRLIN32UR0.BIT.MKRLIN32UR0 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN32UR0.BIT.RFRLIN32UR0 = _INT_REQUEST_NOT_OCCUR;
        /* Disable ICRLIN32UR1 operation and clear request */
        INTC2.ICRLIN32UR1.BIT.MKRLIN32UR1 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN32UR1.BIT.RFRLIN32UR1 = _INT_REQUEST_NOT_OCCUR;
        /* Disable ICRLIN32UR2 operation and clear request */
        INTC2.ICRLIN32UR2.BIT.MKRLIN32UR2 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN32UR2.BIT.RFRLIN32UR2 = _INT_REQUEST_NOT_OCCUR;
        /* Set ICRLIN32UR0 table method */
        INTC2.ICRLIN32UR0.BIT.TBRLIN32UR0 = _INT_TABLE_VECTOR;
        /* Set ICRLIN32UR0 priority */
        INTC2.ICRLIN32UR0.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set ICRLIN32UR1 table method */
        INTC2.ICRLIN32UR1.BIT.TBRLIN32UR1 = _INT_TABLE_VECTOR;
        /* Set ICRLIN32UR1 priority */
        INTC2.ICRLIN32UR1.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set ICRLIN32UR2 table method */
        INTC2.ICRLIN32UR2.BIT.TBRLIN32UR2 = _INT_TABLE_VECTOR;
        /* Set ICRLIN32UR2 priority */
        INTC2.ICRLIN32UR2.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set UART2 setting */
        if (baud  == 19200) {
            RLN32.LWBR = _UART_6_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_1;
            RLN32.LBRP01.UINT16 = 0x015AU;
        } else if (baud == 9600) {
            RLN32.LWBR = _UART_9_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_1;
            RLN32.LBRP01.UINT16 = 0x01CEU;
        } else {
            /* default baud:115200 */
            RLN32.LWBR = _UART_6_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_2;
            RLN32.LBRP01.UINT16 = 0x001CU;
        }

        RLN32.LMD = _UART_NOISE_FILTER_ENABLED | _UART_MODE_SELECT;
        /* Do not set this register when the NSPB bits in the RLN3nLWBR register are 0101B (6 samplings) and the LRDNFS bit in the RLN3nLMD register is 0 (noise filtering is enabled). */
        RLN32.LEDE = _UART_FRAMING_ERROR_DETECTED | _UART_OVERRUN_ERROR_DETECTED;// | _UART_BIT_ERROR_DETECTED;
        RLN32.LBFC = _UART_TRANSMISSION_NORMAL | _UART_RECEPTION_NORMAL | _UART_PARITY_PROHIBITED | _UART_STOP_BIT_1 | 
                     _UART_LSB | _UART_LENGTH_8;
        RLN32.LCUC = _UART_LIN_RESET_MODE_CANCELED;
        /* Synchronization processing */
        dummy_read = RLN32.LCUC;
        __syncp(); 
        /* port init */
        _ch2_port_init();
        /* start transmit */
        _ch2_start();
        ret = 0;
    }else if (3 == ch) {
        QueueInit(&g_ch3TxQueue, g_ch3TxBuf, 1, sizeof(g_ch3TxBuf));
        QueueInit(&g_ch3RxQueue, g_ch3RxBuf, 1, sizeof(g_ch3RxBuf));
        /* Set LIN reset mode */
        RLN33.LCUC = _UART_LIN_RESET_MODE_CAUSED;
        /* Disable ICRLIN33UR0 operation and clear request */
        INTC2.ICRLIN33UR0.BIT.MKRLIN33UR0 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN33UR0.BIT.RFRLIN33UR0 = _INT_REQUEST_NOT_OCCUR;
        /* Disable ICRLIN33UR1 operation and clear request */
        INTC2.ICRLIN33UR1.BIT.MKRLIN33UR1 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN33UR1.BIT.RFRLIN33UR1 = _INT_REQUEST_NOT_OCCUR;
        /* Disable ICRLIN33UR2 operation and clear request */
        INTC2.ICRLIN33UR2.BIT.MKRLIN33UR2 = _INT_PROCESSING_DISABLED;
        INTC2.ICRLIN33UR2.BIT.RFRLIN33UR2 = _INT_REQUEST_NOT_OCCUR;
        /* Set ICRLIN33UR0 table method */
        INTC2.ICRLIN33UR0.BIT.TBRLIN33UR0 = _INT_TABLE_VECTOR;
        /* Set ICRLIN33UR0 priority */
        INTC2.ICRLIN33UR0.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set ICRLIN33UR1 table method */
        INTC2.ICRLIN33UR1.BIT.TBRLIN33UR1 = _INT_TABLE_VECTOR;
        /* Set ICRLIN33UR1 priority */
        INTC2.ICRLIN33UR1.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set ICRLIN33UR2 table method */
        INTC2.ICRLIN33UR2.BIT.TBRLIN33UR2 = _INT_TABLE_VECTOR;
        /* Set ICRLIN33UR2 priority */
        INTC2.ICRLIN33UR2.UINT16 &= _INT_PRIORITY_LOWEST;
        /* Set UART3 setting */
        if (baud  == 19200) {
            RLN33.LWBR = _UART_6_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_1;
            RLN33.LBRP01.UINT16 = 0x015AU;
        } else if (baud == 9600) {
            RLN33.LWBR = _UART_9_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_1;
            RLN33.LBRP01.UINT16 = 0x01CEU;
        } else {
            /* default baud:115200 */
            RLN33.LWBR = _UART_6_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_2;
            RLN33.LBRP01.UINT16 = 0x001CU;
        }
        RLN33.LMD = _UART_NOISE_FILTER_ENABLED | _UART_MODE_SELECT;
        /* Do not set this register when the NSPB bits in the RLN3nLWBR register are 0101B (6 samplings) and the LRDNFS bit in the RLN3nLMD register is 0 (noise filtering is enabled). */
        RLN33.LEDE = _UART_FRAMING_ERROR_DETECTED | _UART_OVERRUN_ERROR_DETECTED;// | _UART_BIT_ERROR_DETECTED;
        RLN33.LBFC = _UART_TRANSMISSION_NORMAL | _UART_RECEPTION_NORMAL | _UART_PARITY_PROHIBITED | _UART_STOP_BIT_1 | 
                     _UART_LSB | _UART_LENGTH_8;
        RLN33.LCUC = _UART_LIN_RESET_MODE_CANCELED;
        /* Synchronization processing */
        dummy_read = RLN33.LCUC;
        __syncp(); 
        /* port init */
        _ch3_port_init();
        /* start transmit */
        _ch3_start();
        ret = 0;
    } else if (4 == ch) {
        /* TODO */
    } else if (5 == ch) {
        /* TODO */
    }else {
        /* NTD */
    }

    return ret;
}

uint8_t uart_send(uint8_t ch, uint8_t *data, uint16_t len)
{
    uint8_t ret = 1;
    uint16_t i = 0;
    uint8_t c= 0;

    if (len < 1 || ch > 5 || data == NULL) {
        return ret;
    }

    if (0 == ch) {
        /* TDOO */
    } else if (1 == ch) {
        /* TODO */
    } else if (2 == ch) {
        for (i = 0; i < len; i++) {
            ret = queue_put(&g_ch2TxQueue, data + i);
        }
        if ((RLN32.LST & _UART_TRANSMISSION_OPERATED) == 0U) {
            queue_get(&g_ch2TxQueue, &c);
            RLN32.LUTDR.UINT16 = c;
        }
        ret = 0;
    } else if (3 == ch) {
        for (i = 0; i < len; i++) {
            ret = queue_put(&g_ch3TxQueue, data + i);
        }
        if ((RLN33.LST & _UART_TRANSMISSION_OPERATED) == 0U) {
            queue_get(&g_ch3TxQueue, &c);
            RLN33.LUTDR.UINT16 = c;
        }
        ret = 0;
    } else if (4 == ch) {
        /* TODO */
    } else if (5 == ch) {
        /* TODO */
    } else {
        /* NTD */
    }

    return ret;
}

uint8_t uart_recv(uint8_t ch, uint8_t *data, uint16_t *len)
{
    uint8_t ret = 1;
    uint16_t _len = 0;
    uint16_t i = 0;

    if (len == NULL || ch > 5 || data == NULL) {
        return ret;
    }

    if (0 == ch) {
        /* TDOO */
    } else if (1 == ch) {
        /* TODO */
    } else if (2 == ch) {
        if (1 == IsTimerOut()) {
            _len =  queue_get_size(&g_ch2RxQueue);
            for(i = 0; i < _len; i++){
                queue_get(&g_ch2RxQueue, data + i);
            }
            *len = _len;
            ret = 0;
        }
    } else if (3 == ch) {
        //if (1 == IsTimerOut()) {
            _len =  queue_get_size(&g_ch3RxQueue);
            for(i = 0; i < _len; i++){
                queue_get(&g_ch3RxQueue, data + i);
            }
            *len = _len;
            ret = 0;
        //}
    } else if (4 == ch) {
        /* TODO */
    } else if (5 == ch) {
        /* TODO */
    } else {
        /* NTD */
    }

    return ret;
}

uint8_t uart_deinit(uint8_t ch)
{
    uint8_t ret = 1;

    /* TODO */

    return ret;
}


#pragma interrupt r_uart2_interrupt_receive(enable=false, channel=166, fpu=true, callt=false)
void r_uart2_interrupt_receive(void)
{
    uint8_t c = 0;

    c = RLN32.LURDR.UINT16;

    queue_put(&g_ch2RxQueue, &c);
    /* 1000us to separate single frame */
    TimerRun(1000);
}

#pragma interrupt r_uart2_interrupt_error(enable=false, channel=167, fpu=true, callt=false)
void r_uart2_interrupt_error(void)
{
    /* RESET ERROR */
    RLN32.LEST &= (uint8_t) ~_UART_CLEAR_ERROR_FLAG;
}

#pragma interrupt r_uart2_interrupt_send(enable=false, channel=165, fpu=true, callt=false)
void r_uart2_interrupt_send(void)
{
    uint8_t c = 0;

    if (queue_get(&g_ch2TxQueue, &c) == 1) {
        RLN32.LUTDR.UINT16 = c;
    } else {
        /* NTD */
    }
}

#pragma interrupt r_uart3_interrupt_receive(enable=false, channel=230, fpu=true, callt=false)
void r_uart3_interrupt_receive(void)
{
    uint8_t c = 0;

    c = RLN33.LURDR.UINT16;

    queue_put(&g_ch3RxQueue, &c);
    //TimerRun(1000);
}

#pragma interrupt r_uart3_interrupt_error(enable=false, channel=231, fpu=true, callt=false)
void r_uart3_interrupt_error(void)
{
    RLN33.LEST &= (uint8_t) ~_UART_CLEAR_ERROR_FLAG;
}

#pragma interrupt r_uart3_interrupt_send(enable=false, channel=229, fpu=true, callt=false)
void r_uart3_interrupt_send(void)
{
    uint8_t c = 0;

    if (queue_get(&g_ch3TxQueue, &c) == 1) {
        RLN33.LUTDR.UINT16 = c;
    } else {
        /* NTD */
    }
}


