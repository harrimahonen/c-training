#include "stdio.h"

int main()
{
    int n = 10; // length
    int arr[n];
    int sum = 0;

    //initialize array values to 0
    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }
    //scan for num
    for (int i = 0; i < n; i++){
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);

        if(arr[i] < 0){
            printf("Value must be positive!\n");
            i--;
        }
    }
    //sum array
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    //print sum, exit
    printf("The sum of 10 numbers in your array is: %d \n", sum);
    return 0;
};