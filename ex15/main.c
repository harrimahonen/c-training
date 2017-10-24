#include "stdio.h"

void point(float *a, float *b){
    if (*a < *b){
        *a = *a / *b;
        *b = 1.0;
    } else if (*a > *b){
        *b = *b / *a;
        *a = 1.0;
    }
}

int main()
{
    float a = -1;
    float b = -1;

    while (a < 0){
        printf("Enter 1. number: ");
        scanf("%f", &a);
        if (a<0){
            printf("Number must be positive!\n");
        }
    }
    while (b < 0){
        printf("Enter 2. number: ");
        scanf("%f", &b);
        if (a<0){
            printf("Number must be positive!\n");
        }
    }

    point(&a, &b);

    printf("Scaled values are:\n");
    printf("1: %.5f\n", a);
    printf("2: %.5f\n", b);

    return 0;
};
