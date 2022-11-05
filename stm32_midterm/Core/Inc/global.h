/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Dinh Luu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "timer_software.h"
#include "button.h"
#include "displayled7seg.h"

#define LED_TIME 100 	// thời gian LED chớp tắt (1s)
#define NORMAL_PRESS 0 	// state: nhấn thường (normal)
#define LONG_PRESS 1   	// state: nhấn giữ (long)
#define COUNT_DOWN 2	// state: đếm ngược (count down)
#define COUNTER_COUNT_DOWN 1000	// thời gian để chuyển sang trạng thái COUNT_DOWN khi không nhấn nút (10s)
#define	INTERVAL_COUNT_DOWN 100	// khoảng thời gian để counter giảm đi 1 đơn vị (1s)
#define INTERVAL_LONG_PRESS 300 // khoảng thời gian nhấn giữ active (3s)

extern int status;	// trạng thái hiện tại
extern int counter;	// bộ đém hiển thị LED 7SEG
extern int longPressedBtn2; // nút 2 nhấn đủ INTERVAL_COUNT_DOWN (3s) -> 1
extern int longPressedBtn3;	// nút 2 nhấn đủ INTERVAL_COUNT_DOWN (3s) -> 1

#endif /* INC_GLOBAL_H_ */
