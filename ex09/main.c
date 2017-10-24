#include "stdio.h"

int main()
{
    int n = 5; // length
    float arr[n];
    float min;


    printf("Enter five numbers:\n");
    //scan for num
    // init min to arr[0] value
    // override min with smaller number
    for (int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%f", &arr[i]);
        if (i == 0){
            min = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    //print min, exit
    printf("The smallest number that you entered was:  %.3f \n", min);
    return 0;
};