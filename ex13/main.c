#include "stdio.h"
#include <stdlib.h>
#include <time.h>


void hashln(int a){
    for (int i = 0; i <= a; i++){
        printf("#");
    }
    printf("\n");

}

int main()
{
    int lineHeight = 10;
    srand(time(NULL));
    printf("Random lines:\n");
    for (int i = 0; i < lineHeight; i++){
        int a = rand() & 20 + 1;
        hashln(a);
    }
    return 0;
};
