// copied from 'https://www.programiz.com/c-programming/examples/leap-year'
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a leap :");
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
    {
        printf("%d is leap year  ", year);
    }
    else
    {
        printf("%d is not a leap year  ", year);
    }

    return 0;
}
