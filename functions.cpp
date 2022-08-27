#include <stdio.h>

#include "header.h"

int my_puts (char* const s)
{
    char* temp = s;

    while (*temp != '\0')
    {
        putchar(*temp);
        temp++;
    }

    printf("\n");

    return 0;
}

size_t my_strlen(char* const s)
{
    char* temp = s;
    char* start = s;

    while (*temp != '\0')
    {
        temp++;
    }

    return (temp - start);
}

char* my_strcpy(char* dest, char* const source)
{
    char* temp = source;
    while (*dest != '\0')
    {
        *dest = *temp;
        dest++;
        temp++;
    }

    return dest;
}

char* my_strncpy (char* dest, char* const source, size_t n)
{
    char* temp = source;
    int counter = 0;
    while (*dest != '\0' && counter < n)
    {
        *dest = *temp;
        dest++;
        temp++;
        counter++;
    }

    return dest;
}
