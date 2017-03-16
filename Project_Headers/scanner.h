//************************************************************************************************************
// FILE: scanner.h
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#ifndef SCANNER_H_
#define SCANNER_H_

#include "global.h"
#include "led.h"

extern led_logic_t led_logic;

void systick_callback();
void scanner_next();
#endif
