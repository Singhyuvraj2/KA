// Check if a string can be obtained by rotating another string 2 places
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len1, len2;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("The two strings are not of the same length.\n");
        return 0;
    }

    char new_str[200];
    strcpy(new_str, str1);
    strcat(new_str, str1);

    if (strstr(new_str + 2, str2) || strstr(new_str + (len1 - 2), str2))
    {
        printf("The second string can be obtained by rotating the first string by 2 places.\n");
    }
    else
    {
        printf("The second string cannot be obtained by rotating the first string by 2 places.\n");
    }

    return 0;
}
