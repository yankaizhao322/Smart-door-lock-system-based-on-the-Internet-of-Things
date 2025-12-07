
/*-------------------------------------------------*/
/*                                                 */
/*              实现LED功能的源文件                */
/*                                                 */
/*-------------------------------------------------*/

#include "stm32f10x.h"  //包含需要的头文件
#include "led.h"        //包含需要的头文件

/*-------------------------------------------------*/
/*函数名：初始化LED函数                            */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void LED_Init(void)
{    	 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB, ENABLE);	 //??PB,PE????
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_7|GPIO_Pin_1|GPIO_Pin_5;				 //LED0-->PB.5 ????
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //????
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO????50MHz
 GPIO_Init(GPIOA, &GPIO_InitStructure);					 //?????????GPIOB.5
	 GPIO_ResetBits(GPIOA,GPIO_Pin_1);						 //PB.5 ???
 GPIO_ResetBits(GPIOA,GPIO_Pin_5);						 //PB.5 ???
 GPIO_ResetBits(GPIOA,GPIO_Pin_6);						 //PB.5 ???
 GPIO_ResetBits(GPIOA,GPIO_Pin_7);						 //PB.5 ???

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1;				 //LED0-->PB.5 ????
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //????
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO????50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //?????????GPIOB.5
	 GPIO_SetBits(GPIOB,GPIO_Pin_1);						 //PB.5 ???
 GPIO_SetBits(GPIOB,GPIO_Pin_0);						 //PB.5 ???


}

/*-------------------------------------------------*/
/*函数名：点亮所有LED                              */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void LED_AllOn(void)
{
	LED1_ON;
	LED2_ON;
	LED3_ON;
	LED4_ON;
}

/*-------------------------------------------------*/
/*函数名：熄灭所有LED                              */
/*参  数：无                                       */
/*返回值：无                                       */
/*-------------------------------------------------*/
void LED_AllOff(void)
{
	LED1_OFF;
	LED2_OFF;
	LED3_OFF;
	LED4_OFF;
}



