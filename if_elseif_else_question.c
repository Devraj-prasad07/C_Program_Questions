#include<stdio.h>
// WAP to find if a character entered by user is upercase letter or lowercase letter
int main()
{
char ch;
printf("Enter the character: ");
scanf("%s",&ch);
if (ch >= 'a' && ch <= 'z')
{
    printf("LOWERCASE LETTER");
}
 else if (ch >= 'A' && ch <= 'Z')
{
     printf("UPPERCASE LETTER");
}
 else
 {
    printf("Not a Valid Input");
 }
return 0;
}