#include "stdio.h"

int main()
{
    int hh;
    int mm;
    int _hh;
    int _mm;
    int h;
    int m;

    printf("Enter current time (hh:mm): ");
    scanf("%d:%d", &hh, &mm);

    if ( hh > 23 || mm > 59){
        printf("Invalid time format");
        return 0;
    }

    printf("How long do you want to sleep (h:mm): ");
    scanf("%d:%d", &_hh, &_mm);

    if ( _hh > 23 ||_mm > 59){
        printf("Invalid time format");
        return 0;
    }

    h = hh + _hh;
    m = mm + _mm;

    if ( m > 60){
        m -= 60;
        h += 1;
    }
    if ( h >= 24 ){
        h -= 24;
    }

    printf("If you go to bed now you must wake up at %d:%d", h, m);

};