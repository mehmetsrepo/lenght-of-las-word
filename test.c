#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>


int lengthOfLastWord(char* s) {
    int len = strlen(s)-1;
    int lastlen = 0;
    while(s[len] == ' ' && len > 0)
    {
        len--;
    }
    while(len > 0 && s[len] != ' ')
    {
        lastlen++;
        len--;
    }

    return lastlen;
}
int main()
{
    printf("%d", lengthOfLastWord("a"));
    return 0;
}