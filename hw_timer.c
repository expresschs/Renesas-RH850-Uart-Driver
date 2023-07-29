#include "r_cg_macrodriver.h"
#include "r_cg_tauj.h"
#include "hw_timer.h"

void HwTimerInit(void)
{
    R_TAUJ1_Create();
}

volatile uint32_t timeout_cnt = 0;
void TimerRun(uint32_t us)
{
    timeout_cnt = us * 80;
    R_TAUJ1_Channel1_Start();
    timeout_cnt = timeout_cnt;
}

uint8_t IsTimerOut(void)
{
    if ((TAUJ1.CDR1 - TAUJ1.CNT1) < timeout_cnt) {
        return 0;
    } else {
        R_TAUJ1_Channel1_Stop();
        return 1;
    }
}

