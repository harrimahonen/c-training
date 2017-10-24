#include "stdio.h"

int main()
{
    float cm;
    float kg;
    float bmi;
    float m;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &kg);
    printf("How tall you are in centimeters: ");
    scanf("%f", &cm);

    m = cm / 100;
    bmi = kg / (m*m);

    printf("Your BMI is %.1f \n", bmi);

    if (bmi <= 18.5){
        printf("According to BMI you have underweight\n");
    } else if ( bmi > 18.5 && bmi < 25){
        printf("According to BMI you have normal weight\n");
    } else if ( bmi >= 25){
        printf("According to BMI you have overweight\n");
    }

    return 0;
};