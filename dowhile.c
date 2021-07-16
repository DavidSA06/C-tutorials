#include <stdio.h>

int n = 10;
int main()
{
    do    
    {
        printf("n is equal to %d\n", n);
        n = n-1;
    } while (n > 10);
    printf("we left the loop because n is equal to o less than 10");
    return 0;
}