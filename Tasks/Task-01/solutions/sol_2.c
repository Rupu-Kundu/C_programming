#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Enter the largest number:%d",a);
    }
    else if(b>a && b>c)
    {
        printf("Enter the largest number:%d",b);
    }
    else
    {
        printf("Enter the largest number:%d",c);

    }
    return 0;
}
