  /******************************************************************************
 *
 * [FILE NAME]: <os.c>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <03/11/2022>
 *
 * [DESCRIPTION]: <Source file for OS Scheduler>
 *
 *******************************************************************************/

#include "os.h"
#include "AppTask.h"
#include "Button.h"
#include "SysTick.h"
#include "Led.h"   

 
/* Macro Used to Enable Interrupts  */
#define Enable_Interrupts()    __asm("CPSIE I")

/* Disable IRQ Interrupts ... This Macro disables IRQ interrupts by setting the I-bit in the PRIMASK. */
#define Disable_Interrupts()   __asm("CPSID I")

/* Global variable store the Os Time */
static volatile uint32 Timer_Tick_Count = 0;

/* Global variable to indicate the the timer has a new tick */
static volatile  uint8 Timer_Tick_Flag = 0;

/************************************************************************************
* Service Name: Os_start
* Reentrancy: Non-Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Intialize the System .
************************************************************************************/
void Os_start(void)
{
    /* Global Interrupts Enabled */
    Enable_Interrupts();
    
    /*  Makes callback function to call OS_Timer_Reschedule Every Timer Tick*/
    SysTick_SetCallBack(OS_Timer_Reschedule);
    
    /* To make timer tick every 20 MS */
    SysTick_Start(TIMER_BASE);

   /* To initalize the system*/
    Init_Task();

    /* Start the Scheduler */
    Os_Scheduler();
}


/************************************************************************************
* Service Name: OS_Timer_Reschedule
* Reentrancy: Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: This function is a timer tick handler for a software timer in an operating system.
************************************************************************************/
void OS_Timer_Reschedule(void)
{
     /*increment both counter to indicate the number Of Timer Ticks*/
   Timer_Tick_Count   += TIMER_BASE;
    /* Raising the timer flag to indicate the timr tick */
    Timer_Tick_Flag = 1;
}

/************************************************************************************
* Service Name: Os_Scheduler
* Reentrancy: Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Scheduler Task.
************************************************************************************/
void Os_Scheduler(void)
{
        while(1)
    {
	/* Code is only executed in case there is a new timer tick */
	if(Timer_Tick_Flag == 1)
	{
	    switch(Timer_Tick_Count)
            {
		case 20:
		case 100:
			    Button_Task();
			    Timer_Tick_Flag = 0;
			    break;
		case 40:
		case 80:
			    Button_Task();
			    Led_Task();
			    Timer_Tick_Flag = 0;
			    break;
		case 60:
			    Button_Task();
			    App_Task();
			    Timer_Tick_Flag = 0;
			    break;
		case 120:
			    Button_Task();
			    App_Task();
			    Led_Task();
			    Timer_Tick_Flag = 0;
			    Timer_Tick_Count = 0;
			    break;
            }
	}
    }

}