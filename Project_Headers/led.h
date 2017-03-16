//************************************************************************************************************
// FILE: led.h
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#ifndef LED_H_
#define LED_H_

#include "global.h"

typedef enum
{
	led_logic_pos = 0,
	led_logic_neg = 1
} led_logic_t;

void led_on(led_logic_t, uint32_t);
void led_all_on(led_logic_t, uint32_t);
void led_off(led_logic_t, uint32_t);
void led_all_off(led_logic_t, uint32_t);

#endif
