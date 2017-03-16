//************************************************************************************************************
// FILE: pushb.h
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#ifndef PUSHB_H_
#define PUSHB_H_

#include "global.h"
#include "systick.h"

#define PUSHB_LOGIC_POS	0
#define PUSHB_LOGIC_NEG	1

extern uint32_t	current_period_ms;

void pushb_init();
void pushb1_callback();
void pushb2_callback();
void pushb_portc_debounce(int p_pin);

#endif
