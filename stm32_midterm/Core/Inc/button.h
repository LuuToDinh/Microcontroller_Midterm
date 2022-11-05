/*
 * button.h
 *
 *  Created on: Sep 23, 2022
 *      Author: dell
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;


extern int TimeOutForKeyPress2;
extern int TimeOutForKeyPress3;

extern int KeyReg4;
extern int KeyReg5;
extern int KeyReg6;
extern int KeyReg7;

extern int KeyReg8;
extern int KeyReg9;
extern int KeyReg10;
extern int KeyReg11;

void getKeyInput();
#endif /* INC_BUTTON_H_ */
