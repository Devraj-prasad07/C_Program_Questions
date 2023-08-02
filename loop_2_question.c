#include<stdio.h>
// Print reverse of the table for a number N.
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n",x * i);
    }
    return 0;
}