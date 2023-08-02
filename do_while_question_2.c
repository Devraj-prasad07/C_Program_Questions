#include<stdio.h>
// Keep taking number from the user as input until user ends at a odd number.
int main() 
{
   do
   {
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("%d \n",x);
    if (x % 2 != 0){
        break;
    } 
   } while (1);
   printf("You have entered wrong input");  
   return 0;
}
