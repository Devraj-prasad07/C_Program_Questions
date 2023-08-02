#include<stdio.h>
int main()
{
    int marks;
    printf("Enter youer marks: ");
    scanf("%d",&marks);
    if("marks > 90")
    printf("Grade A");
    if(marks > 70 && marks < 90)
    printf("Grade B");
    if(marks > 40 && marks < 70)
    printf("Grade C");
    if(marks > 00 && marks < 40)
    printf("Grade D");
}