## XMC1302-T038X0200AB 32-bit Microcontrollers with ARM® Cortex®-M0 ##

32-разрядные микроконтроллеры с ARM® Cortex®-M0 с акцентом на недорогие встроенные приложения и системы управления. XMC1000 - выбор номер один для вывода традиционных 32-разрядных микроконтроллеров на новый уровень, охватывающий широкий спектр приложений от типичных 32-разрядных приложений до управления двигателем. Семейство XMC1300 может интегрировать все функции управления и аналогового интерфейса, необходимые для датчиков управления (FOC), бесщеточных (BLDC), щеточных моторов постоянного тока.

### Средства разработки 
[Boot Kit XMC1300](https://www.infineon.com/cms/en/product/evaluation-boards/kit_xmc13_boot_001/)
Набор для ознакомления с микроконтроллером XMC1300. Основным вариантом использования этой платы является демонстрация общих возможностей устройства XMC1300, включая комплекс инструментальных средств. Микроконтроллер XMC1302 в корпусе TSSOP-38 с flash-памятью 200 КБ и полным набором периферийных устройств. Отделяемая плата SEGGER J-Link!!!

[XMC1302-T038X0200AB](https://www.infineon.com/cms/en/product/microcontroller/32-bit-industrial-microcontroller-based-on-arm-cortex-m/32-bit-xmc1000-industrial-microcontroller-arm-cortex-m0/xmc1302-t038x0200-ab/)

+ 200 KB Flash, 16 KB Ram
+ Supply voltage range: 2.0 – 5.5V
+ 2 channel USIC (configurable to SPI, UART, IIC, IIS)
+ 8 x 16-bit special purpose timers, dead time generation
+ Up to 3 x Comparators
+ 12 channel 12-bit ADC, 2 x parallel sampling
+ Peripherals Clock: 64 [MHZ]
+ Temperature sensor
+ Pseudo Random Number Generator
+ PG-TSSOP-38

### IDE
[Embedded Studio for ARM](https://www.segger.com/products/development-tools/embedded-studio/)
SEGGER Embedded Studio - это мощная среда разработки C / C ++ (интегрированная среда разработки) для микроконтроллеров. Он специально разработан для того, чтобы предоставить пользователям все необходимое для профессионального программирования и разработки на встроенном С.


#### Необходимо прочитать
[wiki.segger](https://wiki.segger.com/XMC1000)
Это приложение по применению содержит введение в режимы загрузки, доступные в серии микроконтроллеров XMC1000. Оно  включает советы по его использованию для пользователей, которые хотят изменить значение индекса загрузки (BMI) и загрузка из режима альтернативной загрузки (ABM)... если вы купили микроконтроллер , развели плату самостоятельно, как это сделал я, то вам перед началом работы с микроконтроллером необходимо поменять режим загрузки с ASC Bootstrap Load Mode (ASC_BSL) на User Mode (Debug) SWD0 (P0.14 & P0.15 used for SWD). Более подробное описание процесса AN_201511_PL30_005 - Boot mode handling for XMC1000.
Глава 2.3 Using DAVE - ‘BMI get set’ feature to change BMI value.
