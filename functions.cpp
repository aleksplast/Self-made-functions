    #include <stdio.h>

#include "header.h"

int my_puts (const char* s)
{
    while (*s != '\0')
    {
        if (putchar(*s) == EOF)
        {
            return EOF;
        }
        else
            s++;
    }

    printf("\n");

    return 0;
}

size_t my_strlen(const char* s)
{
    const char* start = s;

    while (*s != '\0')
    {
        s++;
    }

    return (s - start);
}

char* my_strcpy(char* dest, const char* source)
{
    char* start = dest;

    while ((*dest++ = *source++) != '\0'){}

    return start;
}

char* my_strncpy (char* dest, const char* source, size_t n)
{
    char* start = dest;
    int counter = 0;

    while ((*dest++) = (*source++) != '\0' && counter < n)
    {
        counter++;
    }

    return start;
}

char* my_strcat(char* dest, const char* source)
{
    char* start = dest;

    dest = dest + my_strlen(dest);

    while (*source != '\0')
    {
        *dest++ = *source++;
    }

    return start;
}

int my_strcmp(const char* str1, const char* str2)
{
    for( ; *str1 == *str2; str1++, str2++)
    {
        if (*str1 == '\0')
            return 0;
    }
    if (*str1 > *str2)
        return 1;
    else
        return -1;
}

char* my_strchr(char* str, int ch)
{
    char* start = str;

    while (*str != ch && *str != '\0')
    {
        str++;
    }
    if (*str == ch)
        return str;
    else
        return NULL;
}
