/*
 * 03_ButtonControl.c
 *
 * Created: 19.10.2022 14:57:09
 * Author : anton
 */ 

#include <avr/io.h>
#include "tb.h"
#include "dbLed.h"
#include "dbMc.h"
#include "dbBtn.h"
#include "dbLs.h"



void Stop();
void move_forward (uint8_t state);
void rotate_right (uint8_t state);
void rotate_left (uint8_t state);

void init()
{
	tb_init(TB_10MS, 10);
	dbLed_init();
	dbMc_init();
	dbBtn_init();
	dbLs_init();
	
	
	
	dbBtn_registerRedCallback(&rotate_left);
	dbBtn_registerBlueCallback(&rotate_right);
	dbBtn_registerGreenCallback(&move_forward);	
	
	
}


void move_forward(uint8_t state)
{
	
	if(!state)
		return;
	dbLed_setColor(DB_LED_BUTTON_GREEN, 0, 255, 255);
	dbMc_move(250, 50, &Stop);
	
}

void rotate_right(uint8_t state)
{
	if(!state)
		return;
	dbLed_setColor(DB_LED_BUTTON_GREEN, 0, 0, 255);	
	dbMc_rotate(90, 50, &Stop);
}
void rotate_left(uint8_t state)
{
	if(!state)
		return;;
	dbLed_setColor(DB_LED_BUTTON_GREEN, 255, 0, 0);
	dbMc_rotate(-90, 50, &Stop);
}
	
void Stop()
{
	dbLed_setColor(DB_LED_BUTTON_GREEN, 0, 0, 0);
}



int main(void)
{
    init();
	
    while (1) 
    {
		
    }
}

