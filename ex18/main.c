#include "stdio.h"
#include <string.h>


int main()
{
    char first[50];
    char last[50];
    char full[50];

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);

    if (strlen(first)+strlen(full)+1 < 50) {
        strcpy(full, last);
        strcat(full, " ");
        strcat(full, first);

        int len = strlen(full) - 1;
        printf("Hello, %s \n", full);
        printf("Length of name = %d", len);

        return 0;
    } else {
        printf("Name is too long. Terminating. \n");
        return 0;
    }
};
