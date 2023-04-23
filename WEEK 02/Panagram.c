// Check if given String is Pangram or not
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool checkPangram(char str[])
{
    bool mark[26];
    for (int i = 0; i < 26; i++)
        mark[i] = false;

    int index;

    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {

        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';

        else if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';

        else
            continue;

        mark[index] = true;
    }

    for (int i = 0; i <= 25; i++)
        if (mark[i] == false)
            return (false);
    return (true);
}

int main()
{
    char str[100];
    gets(str);
    if (checkPangram(str) == true)
        printf("%s is panagram", str);
    else
        printf("%s is not a pangram", str);
    return (0);
}
