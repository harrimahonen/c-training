#include "stdio.h"

int main()
{
    int n = 12; // length
    int arr[n];
    int in;

    printf("Enter starting number: ");
    scanf("%d", &in);
    printf("The array values are:\n");

    for (int i = 0; i < n; i++){
        arr[i] = in+i;
    }

    for ( int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
};