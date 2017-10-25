#include "stdio.h"
#include "string.h"

#define BUFFERSIZE 25

void fmt(char *q, char *a, int len){
    printf("%s", q);
    fgets(a, len , stdin);
    a[strcspn(a, "\n")] = 0;
    return;
};

int main()
{

    char q1[BUFFERSIZE] = "Enter your name: ";
    char q2[BUFFERSIZE] = "Enter your address: ";
    char q3[BUFFERSIZE] = "Enter postal code: ";
    char a1[BUFFERSIZE];
    char a2[BUFFERSIZE];
    char a3[BUFFERSIZE];
    fmt(q1, a1, BUFFERSIZE);
    fmt(q2, a2, BUFFERSIZE);
    fmt(q3, a3, BUFFERSIZE);

    printf("\nYour address is:\n%s\n%s\n%s", a1, a2, a3);
};
