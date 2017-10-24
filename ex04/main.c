#include "stdio.h"

int main()
{
    int d;
    int m;
    int y;
    int _d;
    int _m;
    int _y;

    printf("Enter today's  date (d.m.y): ");
    scanf("%d.%d.%d" ,&d, &m, &y);
    if (m < 13 && m > 0 && d < 32 && d > 0 ) {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            if (d > 31) {
                invalid();
                return 0;
            }
        }
        if (m == 1 || m == 3 || m == 5 || m == 11) {
            if (d > 30) {
                invalid();
                return 0;
            }
        }
        if (m == 2) {
            if (d > 28) {
                invalid();
                return 0;
            }
        }
        if (m > 12) {
            invalid();
            return 0;
        }
        _d = d;
        _m = m;
        _y = y;

        if (d == 30) {
            _d = 1;
            _m++;
        } else if (d < 30) {
            _d++;
        }
        if (d == 30 && m == 12) {
            _m = 1;
            _y++;
        }

        printf("\nTomorrow is %d.%d.%d \n", _d, _m, _y);
        return 0;
    } else { invalid(); }
};

void invalid(){
    printf("Invalid date.\n");
};


