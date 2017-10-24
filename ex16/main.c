#include "stdio.h"

float point(float *a, float *b){
    float avg = (*a + *b) / 2 ;
    *a = *a - avg;
    *b =  *b - avg;
    return avg;
}

int main()
{
    float a;
    float b;

    printf("Enter 1. number: ");
    scanf("%f", &a);

    printf("Enter 2. number: ");
    scanf("%f", &b);

    float c = point(&a, &b);

    printf("Average value is: %.3f\n", c);
    printf("1. deviation: %.3f\n", a);
    printf("2. deviation: %.3f\n", b);

    return 0;

};
