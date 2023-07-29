#ifndef _HW_TIMER_H_
#define _HW_TIMER_H_

void HwTimerInit(void);
void TimerRun(uint32_t us);
uint8_t IsTimerOut(void);

#endif

