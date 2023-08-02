// grade a 80 garde b 60 grade c 40 grade d below 40
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    if (marks >= 80)
        printf("Grade A");
    else
    {
        if (marks >= 60 && marks <= 80)
            printf("Grade B");
            else
            {
                if(marks >= 40 && marks <= 60)
                printf("Grade c");
                else
                printf("Grade d");
            }

    }
}