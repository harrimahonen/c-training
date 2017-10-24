#include "stdio.h"

int mult(int *a, int *b){
    while ( *a < 10 || *a > 20) {
        printf("Enter a number [10 - 20]: ");
        scanf("%d", a);
    }

    while ( *b < 0 || *b > 5) {
        printf("Enter a number [0 - 5]: ");
        scanf("%d", b);
    }

    return *a * *b;
}

int main()
{
    int a = 0;
    int b = -1;
    int c = mult(&a, &b);

    printf("%d is multiplied by %d is %d", b, a, c);

    return 0;
};
