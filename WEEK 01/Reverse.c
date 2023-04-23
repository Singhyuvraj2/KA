// Reverse a String
#include <stdio.h.>
#include <string.h>

int main()
{

    char string[20] = "Hello World";
    int first = 0, last = strlen(string) - 1;

    while (first <= last)
    {
        char temp = string[first];
        string[first] = string[last];
        string[last] = temp;
        first++;
        last--;
    }

    printf("Rversed String: %s", string);

    return 0;
}