#include<stdio.h>
int main()
{
    char b;
    printf("Enter the alphabet");
    scanf("%c",&b);
    if ((b >= 'a' && b <='z') || (b >='A' && b <='Z')){
        printf("%c is alphabet",b);}

    else
        printf("%c is not alphabet",b);
    return 0;
}
