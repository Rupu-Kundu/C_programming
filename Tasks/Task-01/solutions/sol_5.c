#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("even is %d", num);

    else
        printf("odd is %d", num);
    return 0;
}
