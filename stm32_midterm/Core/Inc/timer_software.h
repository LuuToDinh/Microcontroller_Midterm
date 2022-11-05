/*
 * software_timer.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Dinh Luu
 */
#include "global.h"


#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_counter;
extern int timer1_flag;
extern int timer2_counter;
extern int timer2_flag;

extern int timerX_counter;
extern int timerX_flag;
extern int timerY_counter;
extern int timerY_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimerX(int duration);
void setTimerY(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
