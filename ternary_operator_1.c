#include<stdio.h>
// Write a C program that uses the ternary operator to find the maximum of two integers entered by the user.
int main()
{
    int num1;
    int num2;
    printf("Enter the Number A: \n");
    scanf("%d",&num1);
    printf("Enter the Number B: \n");
    scanf("%d",&num2);
    if (num1<=num2 && num2>=num1)
    {
        printf("the entered num : %d",num1);
    }
    
   return 0;
}