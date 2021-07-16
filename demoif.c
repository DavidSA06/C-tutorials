#include <stdio.h>

int n = -1;

int main()
{
    if(n > 10 && n < 20)
    printf("the number is greater than 10, but less than 20");
    else if (n == 10)
    printf("the number is ten");
    else if  (n > 20)
    printf("the number is greater than 20");
    else if(n < 10 && n >= 0)
    printf("the number is in the range of 0 to 9");
    else
    printf("error I do not want negative numbers");
    return 0;
}