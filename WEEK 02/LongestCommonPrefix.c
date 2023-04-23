// Longest Common Prefix
#include <stdio.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    static char prefix[101];
    int i, j;

    if (strsSize == 0)
    {
        prefix[0] = '\0';
        return prefix;
    }

    int minLen = strlen(strs[0]);

    for (i = 1; i < strsSize; i++)
    {
        int len = strlen(strs[i]);

        if (len < minLen)
        {
            minLen = len;
        }
    }

    for (i = 0; i < minLen; i++)
    {
        char c = strs[0][i];

        for (j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != c)
            {
                break;
            }
        }

        if (j < strsSize)
        {
            break;
        }

        prefix[i] = c;
    }

    prefix[i] = '\0';

    return prefix;
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    char *ans = longestCommonPrefix(strs, strsSize);

    printf("Longest common prefix: %s\n", ans);

    return 0;
}
