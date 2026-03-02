#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year");
    scanf("%d", &year);
    
    if(year%100 == 0)
    {
        if(year%400 == 0)
        {
            printf("It is the Leap Year");
        }
        else
        {
            printf("It is not a Leap Year");
        }
    }
    else
    {
       if(year%4 == 0)
        {
            printf("It is the Leap Year");
        }
        else
        {
            printf("It is not a Leap Year");
        }
    }
}