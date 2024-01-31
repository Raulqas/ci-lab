#include <stdio.h>
#include <ctype.h>
 
void foo(const char* str)
{
    const char* word = NULL;
    long n = 0;
    do
    {
        if (isalnum((unsigned char)*str))
        {
            if (!word)
                word = str;
        }
        else if (word)
        {
            if (n < str - word)
                putchar(word[n]);
            word = NULL;
            ++n;
        }
    } while (*str++);
}
 
int main()
{
    char buf[256];
    if (fgets(buf, sizeof buf, stdin))
    {
        foo(buf);
        putchar('\n');
    }
}