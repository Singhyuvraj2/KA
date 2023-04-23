// Print first letter of every word in the string
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("First characters of words: ");

    if (str[0] != ' ')
    {
        printf("%c", str[0]);
    }

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i - 1] == ' ')
        {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}
