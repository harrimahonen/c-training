#include "stdio.h"

int main()
{
    int runApp = 1;
    int in = 0;
    int op[2];
    while (runApp == 1){
        printf("Select operation:\n"
                       "1) enter operands\n"
                       "2) multiply operands\n"
                       "3) add operands\n"
                       "4) quit\n");
        scanf("%d", &in);
        switch (in){
            case 1 :
                for (int i = 0; i < 2; i++){
                    printf("Enter operand %d: ", i+1);
                    scanf("%d", &op[i]);
                }
                printf("\n");

                break;
            case 2 :
                printf("Result = %d", op[0]*op[1]);
                printf("\n");
                break;
            case 3 :
                printf("Result = %d", op[0]+op[1]);
                printf("\n");
                break;
            case 4 :
                return 0;
        }
    }
};
