#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    
    if(num%2 == 0)
    {
        printf(" It is the even number");
    }
    else
    {
        printf("It is a odd number");
    }
}