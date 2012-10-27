/*
 * startup.c
 *
 *  Created on: 28.10.2012
 *      Author: pyro
 */
void __attribute__((weak)) Reset_Handler(void);
void __attribute__((weak)) NMI_Handler(void);
void __attribute__((weak)) HardFault_Handler(void);
void __attribute__((weak)) MemManage_Handler(void);
void __attribute__((weak)) BusFault_Handler(void);
void __attribute__((weak)) UsageFault_Handler(void);
void __attribute__((weak)) SVC_Handler(void);
void __attribute__((weak)) DebugMon_Handler(void);
void __attribute__((weak)) PendSV_Handler(void);
void __attribute__((weak)) SysTick_Handler(void);

/* External Interrupts */
void __attribute__((weak)) WWDG_IRQHandler(void); /* Window WatchDog              */
void __attribute__((weak)) PVD_IRQHandler(void); /* PVD through EXTI Line detection */
void __attribute__((weak)) TAMP_STAMP_IRQHandler(void); /* Tamper and TimeStamps through the EXTI line */
void __attribute__((weak)) RTC_WKUP_IRQHandler(void); /* RTC Wakeup through the EXTI line */
void __attribute__((weak)) FLASH_IRQHandler(void); /* FLASH                        */
void __attribute__((weak)) RCC_IRQHandler(void); /* RCC                          */
void __attribute__((weak)) EXTI0_IRQHandler(void); /* EXTI Line0                   */
void __attribute__((weak)) EXTI1_IRQHandler(void); /* EXTI Line1                   */
void __attribute__((weak)) EXTI2_IRQHandler(void); /* EXTI Line2                   */
void __attribute__((weak)) EXTI3_IRQHandler(void); /* EXTI Line3                   */
void __attribute__((weak)) EXTI4_IRQHandler(void); /* EXTI Line4                   */
void __attribute__((weak)) DMA1_Stream0_IRQHandler(void); /* DMA1 Stream 0                */
void __attribute__((weak)) DMA1_Stream1_IRQHandler(void); /* DMA1 Stream 1                */
void __attribute__((weak)) DMA1_Stream2_IRQHandler(void); /* DMA1 Stream 2                */
void __attribute__((weak)) DMA1_Stream3_IRQHandler(void); /* DMA1 Stream 3                */
void __attribute__((weak)) DMA1_Stream4_IRQHandler(void); /* DMA1 Stream 4                */
void __attribute__((weak)) DMA1_Stream5_IRQHandler(void); /* DMA1 Stream 5                */
void __attribute__((weak)) DMA1_Stream6_IRQHandler(void); /* DMA1 Stream 6                */
void __attribute__((weak)) ADC_IRQHandler(void); /* ADC1, ADC2 and ADC3s         */
void __attribute__((weak)) CAN1_TX_IRQHandler(void); /* CAN1 TX                      */
void __attribute__((weak)) CAN1_RX0_IRQHandler(void); /* CAN1 RX0                     */
void __attribute__((weak)) CAN1_RX1_IRQHandler(void); /* CAN1 RX1                     */
void __attribute__((weak)) CAN1_SCE_IRQHandler(void); /* CAN1 SCE                     */
void __attribute__((weak)) EXTI9_5_IRQHandler(void); /* External Line[9:5]s          */
void __attribute__((weak)) TIM1_BRK_TIM9_IRQHandler(void); /* TIM1 Break and TIM9          */
void __attribute__((weak)) TIM1_UP_TIM10_IRQHandler(void); /* TIM1 Update and TIM10        */
void __attribute__((weak)) TIM1_TRG_COM_TIM11_IRQHandler(void); /* TIM1 Trigger and Commutation and TIM11 */
void __attribute__((weak)) TIM1_CC_IRQHandler(void); /* TIM1 Capture Compare         */
void __attribute__((weak)) TIM2_IRQHandler(void); /* TIM2                         */
void __attribute__((weak)) TIM3_IRQHandler(void); /* TIM3                         */
void __attribute__((weak)) TIM4_IRQHandler(void); /* TIM4                         */
void __attribute__((weak)) I2C1_EV_IRQHandler(void); /* I2C1 Event                   */
void __attribute__((weak)) I2C1_ER_IRQHandler(void); /* I2C1 Error                   */
void __attribute__((weak)) I2C2_EV_IRQHandler(void); /* I2C2 Event                   */
void __attribute__((weak)) I2C2_ER_IRQHandler(void); /* I2C2 Error                   */
void __attribute__((weak)) SPI1_IRQHandler(void); /* SPI1                         */
void __attribute__((weak)) SPI2_IRQHandler(void); /* SPI2                         */
void __attribute__((weak)) USART1_IRQHandler(void); /* USART1                       */
void __attribute__((weak)) USART2_IRQHandler(void); /* USART2                       */
void __attribute__((weak)) USART3_IRQHandler(void); /* USART3                       */
void __attribute__((weak)) EXTI15_10_IRQHandler(void); /* External Line[15:10]s        */
void __attribute__((weak)) RTC_Alarm_IRQHandler(void); /* RTC Alarm (A and B) through EXTI Line */
void __attribute__((weak)) OTG_FS_WKUP_IRQHandler(void); /* USB OTG FS Wakeup through EXTI line */
void __attribute__((weak)) TIM8_BRK_TIM12_IRQHandler(void); /* TIM8 Break and TIM12         */
void __attribute__((weak)) TIM8_UP_TIM13_IRQHandler(void); /* TIM8 Update and TIM13        */
void __attribute__((weak)) TIM8_TRG_COM_TIM14_IRQHandler(void); /* TIM8 Trigger and Commutation and TIM14 */
void __attribute__((weak)) TIM8_CC_IRQHandler(void); /* TIM8 Capture Compare         */
void __attribute__((weak)) DMA1_Stream7_IRQHandler(void); /* DMA1 Stream7                 */
void __attribute__((weak)) FSMC_IRQHandler(void); /* FSMC                         */
void __attribute__((weak)) SDIO_IRQHandler(void); /* SDIO                         */
void __attribute__((weak)) TIM5_IRQHandler(void); /* TIM5                         */
void __attribute__((weak)) SPI3_IRQHandler(void); /* SPI3                         */
void __attribute__((weak)) UART4_IRQHandler(void); /* UART4                        */
void __attribute__((weak)) UART5_IRQHandler(void); /* UART5                        */
void __attribute__((weak)) TIM6_DAC_IRQHandler(void); /* TIM6 and DAC1&2 underrun errors */
void __attribute__((weak)) TIM7_IRQHandler(void); /* TIM7                         */
void __attribute__((weak)) DMA2_Stream0_IRQHandler(void); /* DMA2 Stream 0                */
void __attribute__((weak)) DMA2_Stream1_IRQHandler(void); /* DMA2 Stream 1                */
void __attribute__((weak)) DMA2_Stream2_IRQHandler(void); /* DMA2 Stream 2                */
void __attribute__((weak)) DMA2_Stream3_IRQHandler(void); /* DMA2 Stream 3                */
void __attribute__((weak)) DMA2_Stream4_IRQHandler(void); /* DMA2 Stream 4                */
void __attribute__((weak)) ETH_IRQHandler(void); /* Ethernet                     */
void __attribute__((weak)) ETH_WKUP_IRQHandler(void); /* Ethernet Wakeup through EXTI line */
void __attribute__((weak)) CAN2_TX_IRQHandler(void); /* CAN2 TX                      */
void __attribute__((weak)) CAN2_RX0_IRQHandler(void); /* CAN2 RX0                     */
void __attribute__((weak)) CAN2_RX1_IRQHandler(void); /* CAN2 RX1                     */
void __attribute__((weak)) CAN2_SCE_IRQHandler(void); /* CAN2 SCE                     */
void __attribute__((weak)) OTG_FS_IRQHandler(void); /* USB OTG FS                   */
void __attribute__((weak)) DMA2_Stream5_IRQHandler(void); /* DMA2 Stream 5                */
void __attribute__((weak)) DMA2_Stream6_IRQHandler(void); /* DMA2 Stream 6                */
void __attribute__((weak)) DMA2_Stream7_IRQHandler(void); /* DMA2 Stream 7                */
void __attribute__((weak)) USART6_IRQHandler(void); /* USART6                       */
void __attribute__((weak)) I2C3_EV_IRQHandler(void); /* I2C3 event                   */
void __attribute__((weak)) I2C3_ER_IRQHandler(void); /* I2C3 error                   */
void __attribute__((weak)) OTG_HS_EP1_OUT_IRQHandler(void); /* USB OTG HS End Point 1 Out   */
void __attribute__((weak)) OTG_HS_EP1_IN_IRQHandler(void); /* USB OTG HS End Point 1 In    */
void __attribute__((weak)) OTG_HS_WKUP_IRQHandler(void); /* USB OTG HS Wakeup through EXTI */
void __attribute__((weak)) OTG_HS_IRQHandler(void); /* USB OTG HS                   */
void __attribute__((weak)) DCMI_IRQHandler(void); /* DCMI                         */
void __attribute__((weak)) CRYP_IRQHandler(void); /* CRYP crypto                  */
void __attribute__((weak)) HASH_RNG_IRQHandler(void); /* Hash and Rng                 */
void __attribute__((weak)) FPU_IRQHandler(void); /* FPU                          */


 void __attribute__((weak)) Spurious_Handler(void);

 /*----------------------------------------------------------------------------
 * weak aliases for each Exception handler to the Spurious_Handler.
 * Any function with the same name will override these definitions.
 */

