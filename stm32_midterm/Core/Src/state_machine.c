/*
 * normal_press.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Dinh Luu
 */

#include "state_machine.h"
#include "global.h"

void initState(){
	counter = 0;
	status = 0;
	longPressedBtn3 = 0;
	longPressedBtn2 = 0;
	HAL_GPIO_WritePin(LED_BLINKY_GPIO_Port, LED_BLINKY_Pin, GPIO_PIN_RESET);
	display7SEG(0);
	setTimer1(COUNTER_COUNT_DOWN);
	setTimer2(LED_TIME);
//	setTimerX(INTERVAL_COUNT_DOWN);
	setTimerY(INTERVAL_LONG_PRESS);
}

void ledBlinky(){
	if(timer2_flag == 1){
		setTimer2(LED_TIME);
		HAL_GPIO_TogglePin(LED_BLINKY_GPIO_Port, LED_BLINKY_Pin);
	}
}

void modifyCounter(){
	if(counter > 9){
		counter = 0;
	}
	if(counter < 0){
		counter = 9;
	}
}

void normalPressed() {
	switch (status) {
		case NORMAL_PRESS:
			if(isButton1Pressed() == 1){
				counter = 0;
				display7SEG(counter);
			}
			if(isButton2Pressed() == 1){
				setTimer1(COUNTER_COUNT_DOWN);
				counter++;
				modifyCounter();
				display7SEG(counter);
			}
			if(isButton3Pressed() == 1){
				setTimer1(COUNTER_COUNT_DOWN);
				counter--;
				modifyCounter();
				display7SEG(counter);
			}
//			change into count down status
			if(timer1_flag == 1){
				timer1_flag = 0;
				status = COUNT_DOWN;
			}
//			change into long press status
			if(longPressedBtn2 == 1 || longPressedBtn3 == 1){
				status = LONG_PRESS;
			}
		break;
		case LONG_PRESS:

            //longPressedBtn2: tích cực khi INC button ấn giữ đủ một khoảng INTERVAL_LONG_PRESS (3s) và timerY_flag = 1
			if(longPressedBtn2 == 1 && timerY_flag == 1){
				  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
//					nhấn giữ
					if (KeyReg6 == PRESSED_STATE){
						setTimerY(100);
						setTimer1(COUNTER_COUNT_DOWN);
						counter++;
						modifyCounter();
						display7SEG(counter);
					}
//					thả button
					else{
						longPressedBtn2 = 0;
						TimeOutForKeyPress2 = INTERVAL_LONG_PRESS;
					}
				  }
			}
			if(longPressedBtn3 == 1 && timerY_flag == 1){
				if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
//					nhấn giữ
					if (KeyReg10 == PRESSED_STATE){
						setTimerY(100);
						setTimer1(COUNTER_COUNT_DOWN);
						counter--;
						modifyCounter();
						display7SEG(counter);
					}
//					thả button
					else{
						longPressedBtn3 = 0;
						TimeOutForKeyPress3 = INTERVAL_LONG_PRESS;
					}
				  }
			}
//			change into normal state
			if(isButton1Pressed() == 1){
				status = NORMAL_PRESS;
//				để đi vào được các câu lệnh if của button
				button1_flag = 1;
				}
			if(isButton2Pressed() == 1){
				status = NORMAL_PRESS;
				button2_flag = 1;
			}
			if(isButton3Pressed() == 1){
				status = NORMAL_PRESS;
				button3_flag = 1;
			}
			if(longPressedBtn2 == 1 || longPressedBtn3 == 1){
				status = LONG_PRESS;
			}
//			change into count down status
			if(timer1_flag == 1){
				status = COUNT_DOWN;
			}
			break;
		case COUNT_DOWN:
			if(timer1_flag == 1 && counter >= 0){
				setTimer1(INTERVAL_COUNT_DOWN);
				counter--;
				display7SEG(counter);
			}
			if(counter < 0){
				counter = 0;
			}
//			change into normal state
			if(isButton1Pressed() == 1){
				status = NORMAL_PRESS;
//				để đi vào được các câu lệnh if của button
				button1_flag = 1;
				}
			if(isButton2Pressed() == 1){
				status = NORMAL_PRESS;
				button2_flag = 1;
			}
			if(isButton3Pressed() == 1){
				status = NORMAL_PRESS;
				button3_flag = 1;
			}
//			change into long press status
			if(longPressedBtn2 == 1 || longPressedBtn3 == 1){
				status = LONG_PRESS;
			}
			break;
		default:
			break;
	}
}

