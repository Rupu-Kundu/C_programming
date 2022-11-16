#include<stdio.h>
int main()
{
    /*
    Take three integer number as input and show the summation of these three numbers.
    example:
    input : 10, 20, 30
    output : 60
    */
    int a,b,c;
    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a+b+c;
    printf("The summation is : %d", sum);

    /*
     Take two integer value and find out the bigger integer. If the both number is equal then print -1;
     example-1:
     input : 10, 20
     output : 20
     example-2:
     input : 20, 20
     output : -1

    */
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("The bigger number is : %d", a);
    }
    else if (b>a)
    {
        printf("The bigger number is : %d", b);
    }
    else
    {
        printf("-1");
    }

    /*
     Take two numbers as input and interchange the values and print them.
     example-1:
     input : 10 20
     output : 20 10
    */

    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("%d %d",b,a);
}
