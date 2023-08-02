#include<stdio.h>
// Write a program to check if a no is divisible by 2 or not
int main()
// if the no is even then 1 will be print
// if the no is odd 0 will print
{
    int A;
    printf("Enter your no: ");
    scanf("%d",&A);
    printf("%d",A%2==0);
    return 0;
}