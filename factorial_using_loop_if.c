#include<stdio.h>
// print the factorial of a number entered by the user.
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int fact = 1;
    for (int i=1;i<=x; i++)
    {
    fact= fact * i;
    }
    printf("The factorial no is:%d \n",fact);
    return 0;
}