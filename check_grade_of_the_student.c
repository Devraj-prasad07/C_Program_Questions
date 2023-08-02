#include<stdio.h>
/* WAP to give grades to student 
   Marks < 30 is C
   30 <= Marks < 70 is B 
   70 <= Marks < 90 is A
   90 <= Marks <= 100 is A+ */
int main()
{
  int marks;
  printf("Enter your Marks: ");
  scanf("%d",&marks);
  if (marks < 30){
    printf("Your Grade is C");
  }
  else if (30 <= marks && marks < 70){
    printf("Your Grade is B");
  }
  else if (70 <= marks && marks < 90)
  {
    printf("Your Grade is A");
  }
  else if (90 <= marks && marks <= 100){
    printf("Your Grade is A+");
  }
  else {
  printf("Invalid input");
  }
  return 0;
}