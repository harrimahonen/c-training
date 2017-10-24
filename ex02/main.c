/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_1_Start();
    
    float sal = 1238.75;
    float tax = 17.0;
    float taxPay = sal / 100.0 * tax;
    float use = sal-taxPay;
    float raise = 150.0;
    
    printf("My salary is %.2f \n", sal);
    printf("My tax percentage is %.2f percent. \n", tax);
    printf("I have to pay %.2f euros tax.\n", taxPay);
    printf("I have %.2f euros to spend or save.\n", use);
    printf("My boss raises my salary by %.2f euros.\n", raise);
    sal = sal+raise;
    taxPay = sal / 100.0 * tax;
    use = sal-taxPay;
    printf("My new salary is %.2f euros.\n", sal);
    printf("After taxes I have %.2f euros. \n", use);
    
    for(;;)
    {
        /* Place your application code here. */
    }
}
int _write(int file, char *ptr, int len)
{
    (void)file; /* Parameter is not used, suppress unused argument warning */
	int n;
	for(n = 0; n < len; n++) {
        if(*ptr == '\n') UART_1_PutChar('\r');
		UART_1_PutChar(*ptr++);
	}
	return len;
}

int _read (int file, char *ptr, int count)
{
    int chs = 0;
    char ch;
 
    (void)file; /* Parameter is not used, suppress unused argument warning */
    while(count > 0) {
        ch = UART_1_GetChar();
        if(ch != 0) {
            UART_1_PutChar(ch);
            chs++;
            if(ch == '\r') {
                ch = '\n';
                UART_1_PutChar(ch);
            }
            *ptr++ = ch;
            count--;
            if(ch == '\n') break;
        }
    }
    return chs;
}
/* [] END OF FILE */
