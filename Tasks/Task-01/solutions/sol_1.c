#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the numbers:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The largest number :%d", a);
    }
    else
    {
        printf("The largest number :%d", b);
    }
    return 0;
}
