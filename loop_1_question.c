#include<stdio.h>
// Print the sum of first N natural numbers.
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    
    int sum = 0;
    for (int i = 1; i <= x ; i++)
     sum = sum + i;
    {
      printf("The answer is:%d \n",sum);
    }
    return 0;
}