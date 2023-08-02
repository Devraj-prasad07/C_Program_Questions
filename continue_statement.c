// wap and print 10 nos except 8
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i < 10; i++)
    {
        if(i==8)
        continue;
        printf("%d \n",i);
    }
    printf("continue statement executed",i);
    return 0;
}