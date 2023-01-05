# UART Driver for PIC16F877A
 
## Functions:

 - void UART_TInit(void); 
  - Initialize the preph. as transmiter

 - void UART_Write(uint8_t);  void UART_Write_char(char *); void UART_Write_String(char *);
  - Used to write character ,byte and String

 - void UART_RInit(void); 
  - Initialize the preph. as receiver

 - char UART_Read_char(void); void UART_Read_String(uint8_t *Output, uint16_t length);
  - Read character String

# There is no need to test library already used in this project
 
:point_down:

https://github.com/Rabie45/smart-home-PIC16f877a

 