/**
  ******************************************************************************
  * @file  adc.h
  * @author  
  * @version
  * @date     
  * @brief
  * @partnumber 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013</center></h2>
  *
  *
  ******************************************************************************
  */
#ifndef ADC_H
#define ADC_H

void MX_TIM1_Init(void);
void MX_ADC1_Init(void);


#define NUM_ADC_CHANNELS  4
#define CH_5V     0
#define CH_I5V    1
#define CH_TEMP   2
#define CH_VREF   3


#define __VOLTAGE uint16_t
#define __CURRENT uint16_t
#define CONVERT_FLOAT_TO_VOLTAGE(X)     (__VOLTAGE)(X * 256.0f)
#define VREFCAL (uint16_t*)(0x1FFF75AA)

extern __IO   uint16_t   aADCxConvertedData[NUM_ADC_CHANNELS];




#endif 