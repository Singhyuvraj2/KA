// C program to compare the two strings
#include <stdio.h>
#include <string.h>
int main(void)
{

    char str1[100], str2[100];

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Both are same.\n");
    }
    else
    {
        printf("Both are different.\n");
    }

    return 0;
}