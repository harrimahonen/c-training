#include "stdio.h"
#include <string.h>


int main()
{
    char first[25] = "";
    char last[25] = "";
    char full[51];

    while (strlen(first) > 25 || strlen(first) == 0 ) {
        printf("Enter your first name: ");
        scanf("%s", first);
        if (strlen(first) > 25){
            printf("Name length limit: 25\n");
        }
    }

    while (strlen(last) > 25 || strlen(last) == 0 ) {
        printf("Enter your last name: ");
        scanf("%s", last);
        if (strlen(last) > 25){
            printf("Name length limit: 25\n");
        }
    }

    if (strlen(first)+strlen(full)+1 <= 50) {
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
