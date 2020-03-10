## Data Structures ##

### struct   XMC_GPIO_CONFIG_t ### 
***
XMC_GPIO_INPUT_HYSTERESIS_t  input_hysteresis     
XMC_GPIO_MODE_t  mode    
XMC_GPIO_OUTPUT_LEVEL_t  output_level 
***
> #### XMC_GPIO_INPUT_HYSTERESIS_t  input_hysteresis ####
***
**enum XMC_GPIO_INPUT_HYSTERESIS_t**  
*XMC_GPIO_INPUT_HYSTERESIS_STANDARD* - Standard hysteresis   
*XMC_GPIO_INPUT_HYSTERESIS_LARGE* - Large hysteresis  
***
Configures input hysteresis mode of pin. Use type XMC_GPIO_INPUT_HYSTERESIS_t for this enum. Selecting the appropriate pad hysteresis allows optimized pad oscillation behavior for touch-sensing applications.

Настраивает режим входного гистерезиса вывода. Используйте тип XMC_GPIO_INPUT_HYSTERESIS_t для этого перечисления. Выбор подходящего гистерезиса pad позволяет оптимизировать поведение колебаний pad для сенсорных приложений.

> #### XMC_GPIO_MODE_t  mode ##### 
***
**enum XMC_GPIO_MODE_t**   
*XMC_GPIO_MODE_INPUT_TRISTATE* - No internal pull device active   
*XMC_GPIO_MODE_INPUT_PULL_DOWN* - Internal pull-down device active   
*XMC_GPIO_MODE_INPUT_PULL_UP* - Internal pull-up device active   
*XMC_GPIO_MODE_INPUT_SAMPLING* - No internal pull device active  
*XMC_GPIO_MODE_INPUT_INVERTED_TRISTATE* - Inverted no internal pull device active   
*XMC_GPIO_MODE_INPUT_INVERTED_PULL_DOWN* - Inverted internal pull-down device active   
*XMC_GPIO_MODE_INPUT_INVERTED_PULL_UP* - Inverted internal pull-up device active  
*XMC_GPIO_MODE_INPUT_INVERTED_SAMPLING* - Inverted no internal pull device active 
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL* - Push-pull general-purpose output  
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN* - Open-drain general-purpose output   
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT1* - Push-pull alternate output function 1 
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT2* - Push-pull alternate output function 2  
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3* - Push-pull alternate output function 3  
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT4* - Push-pull alternate output function 4  
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT5* - Push-pull alternate output function 5 
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT6* - Push-pull alternate output function 6 
*XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT7* - Push-pull alternate output function 7 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT1* - Open drain alternate output function 1 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT2* - Open drain alternate output function 2 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT3* - Open drain alternate output function 3 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT4* - Open drain alternate output function 4 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT5* - Open drain alternate output function 5  
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT6* - Open drain alternate output function 6 
*XMC_GPIO_MODE_OUTPUT_OPEN_DRAIN_ALT7* - Open drain alternate output function 7 
 
 ***
Defines the direction and characteristics of a pin. Use type XMC_GPIO_MODE_t for this enum. For the operation with alternate functions, the port pins are directly connected to input or output functions of the on-chip periphery.

Определяет направление и характеристики pin. Используйте тип XMC_GPIO_MODE_t для этого перечисления. Для работы с альтернативными функциями контакты портов напрямую подключаются к функциям ввода или вывода периферийных устройств.

> #### XMC_GPIO_OUTPUT_LEVEL_t  output_level ##### 
***
**enum XMC_GPIO_OUTPUT_LEVEL_t**   
*XMC_GPIO_OUTPUT_LEVEL_LOW*  - Reset bit  
*XMC_GPIO_OUTPUT_LEVEL_HIGH* -  Set bit 
***
Defines output level of a pin. Use type XMC_GPIO_OUTPUT_LEVEL_t for this enum.  
Определяет уровень вывода пина. Используйте тип XMC_GPIO_OUTPUT_LEVEL_t для этого перечисления.  
