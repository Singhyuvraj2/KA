// Check if two strings are k-anagrams or not
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool areKAnagrams(char *str1, char *str2, int k)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return false;
    }

    int freq[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        freq[str1[i] - 'a']++;
    }

    for (int i = 0; i < len2; i++)
    {
        freq[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (abs(freq[i]) > k)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[] = "anagram";
    char str2[] = "agraman";
    int k = 2;

    if (areKAnagrams(str1, str2, k))
    {
        printf("The strings are %d-anagrams", k);
    }
    else
    {
        printf("The strings are not %d-anagrams", k);
    }

    return 0;
}
