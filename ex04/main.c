#include "stdio.h"

int main()
{
    int d;
    int m;
    int y;
    int _d;
    int _m;
    int _y;

    int monthLength[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter today's  date (d.m.y): ");
    scanf("%d.%d.%d" ,&d, &m, &y);

    if (m < 13 && m > 0 && d < 32 && d > 0 ) {
        if (d > monthLength[m-1]) {
            invalid();
        }
        if (m > 12) {
            invalid();
        }
        _d = d;
        _m = m;
        _y = y;

        if (d == monthLength[m-1]) {
            _d = 1;
            _m++;
        } else {
            _d++;
        }
        if (d == monthLength[m-1] && m == 12) {
            _m = 1;
            _y++;
        }

        printf("\nTomorrow is %d.%d.%d \n", _d, _m, _y);
        return 0;

    } else { invalid(); }
};

int invalid(){
    printf("Invalid date.\n");
    return 0;
};