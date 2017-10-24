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

    int dd = 25;
    int mm = 12;
    int yy = 1990;
    int _dd = 24;
    int _mm = 10;
    int _yy = 2017;
    int diff;

    if (_mm >= mm) {
        diff = _yy - yy;
    }
    if (_mm < mm){
        diff = _yy - yy - 1;
    }
    printf("I was born on %d.%d.%d\n"
                   "Today is %d.%d.%d\n"
                   "I am %d years old.\n", dd,mm,yy,_dd,_mm,_yy, diff);
    return 0;
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
