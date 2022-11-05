/*
 * button.c
 *
 *  Created on: Sep 23, 2022
 *      Author: dell
 */

#include "global.h"
#include "button.h"

//btn 1
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress1 = INTERVAL_LONG_PRESS;

int button1_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	button1_flag = 1;
}

//btn 2
int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int TimeOutForKeyPress2 = INTERVAL_LONG_PRESS;

int button2_flag = 0;

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess2(){
	button2_flag = 1;
}

//btn 3
int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

int TimeOutForKeyPress3 = INTERVAL_LONG_PRESS;

int button3_flag = 0;

int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess3(){
	button3_flag = 1;
}

void getKeyInput(){
//	btn 1
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress1 = INTERVAL_LONG_PRESS;
        subKeyProcess();
      }
    }
    else {
       TimeOutForKeyPress1--;
        if (TimeOutForKeyPress1 == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }

//  btn 2
  KeyReg6 = KeyReg5;
  KeyReg5 = KeyReg4;
  KeyReg4 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
    if (KeyReg6 != KeyReg7){
      KeyReg7 = KeyReg6;

      if (KeyReg7 == PRESSED_STATE){
    	  TimeOutForKeyPress2 = INTERVAL_LONG_PRESS;
    	  if(longPressedBtn2 == 0){
    		  subKeyProcess2();
    	  }
      }
    }
    else {
    	TimeOutForKeyPress2--;
        if (TimeOutForKeyPress2 == 0){
        	longPressedBtn2 = 1;
        }
    }
  }

//  btn 3
  KeyReg10 = KeyReg9;
  KeyReg9 = KeyReg8;
  KeyReg8 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
    if (KeyReg10 != KeyReg11){
      KeyReg11 = KeyReg10;

      if (KeyReg11 == PRESSED_STATE){
    	  TimeOutForKeyPress3 = INTERVAL_LONG_PRESS;
    	  if(longPressedBtn3 == 0){
    		  subKeyProcess3();
    	  }
      }
    }
    else {
    	TimeOutForKeyPress3--;
        if (TimeOutForKeyPress3 == 0){
        	longPressedBtn3 = 1;
        }
    }
  }
}



