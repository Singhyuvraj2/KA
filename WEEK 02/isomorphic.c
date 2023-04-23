// Check if two given Strings are Isomorphic to each other
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool areIsomorphic(char *str1, char *str2)
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if (n1 != n2)
    {
        return false;
    }

    char map[256] = {0};
    bool marked[256] = {false};

    for (int i = 0; i < n1; i++)
    {
        if (map[str1[i]] == 0)
        {
            if (marked[str2[i]] == true)
            {
                return false;
            }

            marked[str2[i]] = true;
            map[str1[i]] = str2[i];
        }
        else if (map[str1[i]] != str2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);

    if (areIsomorphic(str1, str2))
    {
        printf("%s and %s are isomorphic\n", str1, str2);
    }
    else
    {
        printf("%s and %s are not isomorphic\n", str1, str2);
    }

    return 0;
}
