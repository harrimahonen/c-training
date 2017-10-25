#include "stdio.h"

int range(int a, int b){
    int i = -1;
    int max;
    int min;
    if ( a > b ){
        max = a;
        min = b;
    } else if (a < b){
        max = b;
        min = a;
    }

    while (i < min || i > max) {
        printf("Enter a number [%d - %d]: ", min, max);
        scanf("%d", &i);
    }
    return i;
}

int main()
{
    int a = range(10, 20);
    int b = range(0, 5);
    int c = b * a;

    printf("%d is multiplied by %d is %d", b, a, c);

    return 0;
};