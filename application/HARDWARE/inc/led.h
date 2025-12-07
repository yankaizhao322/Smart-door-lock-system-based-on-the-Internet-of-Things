/*-------------------------------------------------*/
/*            超纬电子STM32系列开发板              */
/*-------------------------------------------------*/
/*                                                 */
/*              实现LED功能的头文件                */
/*                                                 */
/*-------------------------------------------------*/

#ifndef __LED_H
#define __LED_H

#define LED1_OUT(x)   GPIO_WriteBit(GPIOB, GPIO_Pin_1, (BitAction)x)  //PB1控制LED1，设置PB1的电平，可以点亮熄灭LED1
#define LED2_OUT(x)   GPIO_WriteBit(GPIOB, GPIO_Pin_0, (BitAction)x)  //PB0控制LED2，设置PB0的电平，可以点亮熄灭LED2
#define LED3_OUT(x)   GPIO_WriteBit(GPIOC, GPIO_Pin_5, (BitAction)x)  //PC5控制LED3，设置PC5的电平，可以点亮熄灭LED3
#define LED4_OUT(x)   GPIO_WriteBit(GPIOC, GPIO_Pin_4, (BitAction)x)  //PC4控制LED4，设置PC4的电平，可以点亮熄灭LED4

#define LED1_IN_STA   GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_1) //PB1控制LED1,读取电平状态，可以判断LED1是点亮还是熄灭
#define LED2_IN_STA   GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_0) //PB0控制LED2,读取电平状态，可以判断LED2是点亮还是熄灭
#define LED3_IN_STA   GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_5) //PC5控制LED3,读取电平状态，可以判断LED3是点亮还是熄灭
#define LED4_IN_STA   GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_4) //PC4控制LED4,读取电平状态，可以判断LED4是点亮还是熄灭

#define LED1_ON       GPIO_ResetBits(GPIOB, GPIO_Pin_1)         //PB1控制LED1，共阳极，拉低PB1电平，点亮LED1
#define LED1_OFF      GPIO_SetBits(GPIOB, GPIO_Pin_1)           //PB1控制LED1，共阳极，拉高PB1电平，熄灭LED1
 
#define LED2_ON       GPIO_ResetBits(GPIOB, GPIO_Pin_0)         //PB0控制LED2，共阳极，拉低PB0电平，点亮LED2
#define LED2_OFF      GPIO_SetBits(GPIOB, GPIO_Pin_0)           //PB0控制LED2，共阳极，拉高PB0电平，熄灭LED2

#define LED3_ON       GPIO_ResetBits(GPIOC, GPIO_Pin_5)         //PC5控制LED3，共阳极，拉低PC5电平，点亮LED3
#define LED3_OFF      GPIO_SetBits(GPIOC, GPIO_Pin_5)           //PC5控制LED3，共阳极，拉高PC5电平，熄灭LED3

#define LED4_ON       GPIO_ResetBits(GPIOC, GPIO_Pin_4)         //PC4控制LED4，共阳极，拉低PC4电平，控制LED4
#define LED4_OFF      GPIO_SetBits(GPIOC, GPIO_Pin_4)           //PC4控制LED4，共阳极，拉高PC4电平，熄灭LED4

void LED_Init(void);               //初始化	
void LED_AllOn(void);              //点亮所有LED
void LED_AllOff(void);             //熄灭所有LED

#endif
