#include "stdio.h"

struct Months {
    int number;
    char name[20];
};


void printMonth(struct Months a){
    printf("%d. %s\n", a.number, a.name);
    return;
};

int main()
{
    struct Months month1;
    struct Months month2;
    printf("Enter information about first month of year:\n");

    while(month1.number < 1 || month1.number > 12) {
        printf("Enter month number:\n");
        scanf("%d", &month1.number);
        if(month1.number < 1 || month1.number > 12){
            printf("Month number must be in range 1-12!\n");
        }
    }
    printf("Enter name of month number %d:\n", month1.number);
    scanf("%s", &month1.name);

    printf("Enter information about last month of year:\n");

    while(month2.number < 1 || month2.number > 12) {
        printf("Enter month number:\n");
        scanf("%d", &month2.number);
        if(month2.number < 1 || month2.number > 12){
            printf("Month number must be in range 1-12!\n");
        }
    }
    printf("Enter name of month number %d:\n", month2.number);
    scanf("%s", &month2.name);

    printMonth(month1);
    printMonth(month2);

    return 0;
};