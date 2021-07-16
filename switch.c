#include <stdio.h>

int opt1 = 0;
int opt2 = 0;

int main()
{
    printf("welcome to the store:\n");
    printf("option 0 for beverages \n");
    printf("option 1 for meals \n");
    printf("option 2 for desserts \n");
    switch (opt1 ){

        case 0:
            printf("you chose option 0, you will see our beverages menu, choose one:\n");
            printf("option 0 for unsweetened cola \n");
            printf("option 1 for regular cola \n");
            printf("option 2 for pina colada \n");
            switch (opt2)
            {
                case 0:
                    printf("you chose one unsweetened cola");
                    break;
                case 1:
                    printf("you chose one regular cola");
                    break;
                case 2:
                    printf("you chose one pina colada");
                    break;
                default:
                    break;
            }
                break;
        case 1:
            printf("you chose option 1, you will see our meals menu, choose one:\n");
            printf("option 0 for hamburger \n");
            printf("option 1 for hotdog \n");
            printf("option 2 for french fries \n");
            switch (opt2)
            {
                case 0:
                    printf("you chose one hamburger");
                    break;
                case 1:
                    printf("you chose one hotdog");
                    break;
                case 2:
                    printf("you chose one french fries");
                    break;
                default:
                    break;
            break;
        case 2:
            printf("you chose la option 1, you will see our desserts menu, elija uno:\n");
            printf("option 0 for pie \n");
            printf("option 1 for jelly \n");
            printf("option 2 for cake \n");
            switch (opt2)
            {
                case 0:
                    printf("you chose one pie");
                    break;
                case 1:
                    printf("you chose one jelly");
                    break;
                case 2:
                    printf("you chose one cake");
                    break;
                default:
                    break;
            break;
        default:
            break;
    }
    return 0;
}