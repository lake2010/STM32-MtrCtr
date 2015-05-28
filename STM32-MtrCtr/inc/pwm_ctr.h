/*
 * pwm_ctr.h
 *
 *  Created on: May 21, 2015
 *      Author: patels
 */

#ifndef PWM_CTR_H_
#define PWM_CTR_H_

#include <stm32f4xx.h>
#include <stm32f4xx.h>
#include <misc.h>
#include <stm32f4xx_usart.h>
#include "stm32f4_discovery.h"
#include <stdio.h>
#include <stdint.h>

TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
TIM_OCInitTypeDef  TIM_OCInitStructure;

uint16_t CCR1_Val = 1;
uint16_t CCR2_Val = 233;
uint16_t CCR3_Val = 116;
uint16_t CCR4_Val = 58;
uint16_t PrescalerValue = 0;

int buff = 55 ;
int dataRX;
int offset = 0 ;
int MSBdataRX = 0;
int dataAdd = 0;
int i = 0 ;


int pwm_initconfig(void);
int setpwm_freq_dutycycle(int,int);


#endif /* PWM_CTR_H_ */
