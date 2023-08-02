#include<stdio.h>
int main()
{
    int i;
    for( i = 1;i < 20; i++)
    {
        printf("%d \n",i);
       if(i==8)
        break;
    }
    printf("break statement executed \n",i);
}