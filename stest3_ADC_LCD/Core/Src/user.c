#include "user.h"
#include "lcd.h"
#include "stdio.h"
#include "adc.h"//用来获取adc2value

uint16_t adc2value[30];
uint8_t linestring[20]={0};//要改成uint8_t

void adc_lcd(void)
{
	LCD_DisplayStringLine(Line3,(unsigned char *)"        DATA        ");
	
	sprintf((char *)linestring,"     VR37:%.2fV",(adc2value[0]/4095.0)*3.3);//在这个函数要导入stdio.h
	LCD_DisplayStringLine(Line4,linestring);
}

