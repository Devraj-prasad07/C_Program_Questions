#include<stdio.h>
//Perimeter of a Rectanagle
int main()
{
   int length;
   int breadth;
   //Printing Enter length command
   printf("Enter length :");
   scanf("%d", &length);
   //Printing enter breadth command
   printf("Enter breadth :");
   scanf("%d", &breadth);
   printf("The perimeter of a Rectangle is :%d",2*length+breadth);
   return 0; 
}