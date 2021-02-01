#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int num1 , num2 , maximum , minimum ;
    printf("Enter any two Number:\n");
    scanf("%d %d",&num1,&num2);
    maximum = (num1 , num2 );
    minimum = (num1 , num2);
    printf("maximum =%d:\n",maximum);
    printf("minimum =%d:\n",minimum);
    return 0;
}
int maximum (int num1 , int num2)
{
    return (num1>num2);
}
