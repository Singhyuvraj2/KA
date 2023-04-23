// Count Uppercase, Lowercase letters in string
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int upper_count = 0, lower_count = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            upper_count++;
        else if (islower(str[i]))
            lower_count++;
    }

    printf("Number of uppercase letters: %d\n", upper_count);
    printf("Number of lowercase letters: %d\n", lower_count);

    return 0;
}
