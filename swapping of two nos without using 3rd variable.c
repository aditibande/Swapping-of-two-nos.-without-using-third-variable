#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter two nos.");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping nos. are %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n and after swapping nos. are %d and %d",a,b);
    }
