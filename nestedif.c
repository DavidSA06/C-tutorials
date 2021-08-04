#include <stdio.h>

int opt1 = 0;
int opt2 = 2;

int main(){
    printf("welcome to the store :\n");
    printf("option 0 for beverages \n");
    printf("option 1 for meals \n");
    printf("option 2 for desserts \n");

    // This program generates menus according to what the user chooses. 
    if(opt1 == 0){
        printf("you chose option 0, you will see our beverages menu, choose one:\n");
        printf("option 0 for hamburger \n");
        printf("option 1 for cola normal \n");
        printf("option 2 for pina colada \n");

        if (opt2 == 0)
            printf("you chose one hamburger");
        else if (opt2 == 1)
            printf("you chose one hotdog");
        else if (opt2 == 2)
            printf("you chose one pina colada");
        else 
            printf("invalid option");
    }
    else if(opt1 ==1){
        printf("you chose option 1, you will see our meals menu, choose one:\n");
        printf("option 0 for hamburger \n");
        printf("option 1 for hotdog \n");
        printf("option 2 for french fries \n");

        if (opt2 == 0)
            printf("you chose one hamburger");
        else if (opt2 == 1)
            printf("you chose one hotdog");
        else if (opt2 == 2)
            printf("you chose one french fries");
        else 
            printf("invalid option");
    }
    else if(opt1 ==2){
        printf("you chose option 2, you will see our desserts menu, choose one:\n");
        printf("option 0 for pie \n");
        printf("option 1 for jelly \n");
        printf("option 2 for cake \n");

        if (opt2 == 0)
            printf("you chose one pie");
        else if (opt2 == 1)
            printf("you chose one jelly");
        else if (opt2 == 2)
            printf("you chose one cake");
        else 
            printf("invalid option");
    }
    else {
        printf("invalid option");
    }

    return 0;
}
