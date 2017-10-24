#include "stdio.h"

int main()
{
    float loan = -1;
    float rate = -1;
    float pay;

    while (loan < 0) {
        printf("How much do you want to borrow: ");
        scanf("%f", &loan);
        if ( loan < 0 ){
            printf("Loan cannot be a negative value\n");
        }
    }
    while (rate < 0) {
        printf("Enter interest rate (percent): ");
        scanf("%f", &rate);
        if ( rate < 0 ) {
            printf("Rate cannot be a negative value\n");
        }
    }
    while (loan > 0){
        printf("Enter payment: ");
        scanf("%f", &pay);
        if ( pay <= 0 ){
            printf("Payment cannot be a negative value or 0.\n");
        }
        if (pay > 0) {
            loan = loan * ((rate / 100) + 1);
            loan = loan - pay;
            if (loan > 0) {
                printf("You still owe %.2f \n", loan);
            }
        }
        if (loan <= 0) {
            printf("Loan is now paid. \n");
        }
    }
    return 0;
};
