/*
 * displayled7seg.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Dinh Luu
 */
#include "displayled7seg.h"

void display7SEG(int num){
  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L5_GPIO_Port , L5_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_SET );
  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_SET );
  if(num<=0){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L5_GPIO_Port , L5_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
  }
  else if(num==1){
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
  }
  else if(num==2){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L5_GPIO_Port , L5_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==3){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==4){
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==5){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==6){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L5_GPIO_Port , L5_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==7){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
  }
  else if(num==8){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L5_GPIO_Port , L5_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
  else if(num==9){
	  HAL_GPIO_WritePin( L1_GPIO_Port , L1_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L2_GPIO_Port , L2_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L3_GPIO_Port , L3_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L4_GPIO_Port , L4_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L6_GPIO_Port , L6_Pin ,GPIO_PIN_RESET );
	  HAL_GPIO_WritePin( L7_GPIO_Port , L7_Pin ,GPIO_PIN_RESET );
  }
}
