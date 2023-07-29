#include "hw_uart.h"
#include "main.h"

uint8_t rbuf[64] = {0};
uint16_t len = 0;

void main(void)
{
    R_CGC_Create();
    HwTimerInit();

    uart_init(2, 115200);
    uart_init(3, 9600);

    while (1) {
        if (uart_recv(2, rbuf, &len)) {
            uart_send(2, rbuf, len);
        }
        if (uart_recv(3, rbuf, &len)) {
            uart_send(3, rbuf, len);
        }
    }

}
