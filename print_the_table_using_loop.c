#include<stdio.h>
// print the table of a number given by the user using loop statement
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
     for (int i = 1; i <= 10; i++){
        printf("%d \n",x*i);
     }
     return 0;
}
