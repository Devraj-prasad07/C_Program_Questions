#include<stdio.h>
#include<math.h>
// WAP and check whether the no is natural no or not.
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num >= 0 && num<= 100000)
    {
      printf("Its a Natural number");
    }
    else{
        printf("Not a Natural number");
    }
    
}
