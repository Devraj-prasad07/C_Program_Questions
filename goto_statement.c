#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18)
        goto eligible;
    else
        goto notEligible;
eligible:
    printf("you are eligible");
    return;
notEligible:
    printf("You are not eligible");
    return;
}