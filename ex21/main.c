#include "stdio.h"

struct Student {
    char lname[25];
    char fname[25];
    int credit;
};

int main()
{
    int len = 4;
    struct Student arr[len];

    for (int i = 0; i <= len; i++) {
        struct Student stu;
        for (int n = 0; n < 3; n++) {
            if (n == 0){
                printf("Enter first name of student %d: ", i + 1);
                scanf("%s", stu.fname);
            }
            if (n == 1){
                printf("Enter last name of student %d: ", i + 1);
                scanf("%s", stu.lname);
            }
            if (n == 2){
                printf("Enter number of credits of student %d: ", i + 1);
                scanf("%d", &stu.credit);
            }
        }
        arr[i] = stu;
    }

    for (int i = 0; i <= len; i++){
        printf("%-10s\t%-10s\t%d\n",arr[i].fname,arr[i].lname,arr[i].credit);
    }
};
