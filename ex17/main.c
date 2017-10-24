#include "stdio.h"

float exchange(float _rate, float *_arr, int size){
    if (_rate == 0){
        return 0;
    }
    for (int i = 0; i<size; i++){
        _arr[i] = _arr[i] * _rate;
        // _arr[i] = _arr[i] * ((_rate / 100 ) + 1 ); // for percentage
    }
}

int main()
{
    int n = 5;
    float rate = -1;
    float arr[n];
    while ( rate < 0){
        printf("Enter exchange rate: ");
        scanf("%f", &rate);
        if (rate < 0 ){
            printf("No negative rates!\n");
        }
    }
    for (int i = 0; i<n; i++){

        printf("Enter %d. amount: ",i+1);
        scanf("%f", &arr[i]);

        if (arr[i] < 0 ){
            printf("No negative numbers.\n");
            i--;
        }
    }

    exchange(rate, &arr, n); // func

    for (int i = 0; i < n; i++){
        printf("%d: %*.2f \n",i+1 ,8 ,arr[i]);
    }

    return 0;

};
