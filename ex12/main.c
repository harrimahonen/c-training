#include "stdio.h"

float exchangeRate(int a, int b){
    return ((float)a / 100) * ((float)b / 100);
}

int main()
{
    int eur;
    int usd;
    float rate;
    float sum;

    printf("Enter amount of euros: ");
    scanf("%d", &eur);
    printf("Enter amount of dollars: ");
    scanf("%d", &usd);
    rate = exchangeRate(eur, usd);
    printf("Exchange rate: %.4f\n", rate);

    printf("How many euros do you want to exchange: ");
    scanf("%f", &sum);
    sum = sum * rate;
    printf("You'll get %.2f dollars.\n", sum);


    return 0;
};
