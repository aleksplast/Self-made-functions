#include <stdio.h>
#include <string.h>

#include "header.h"

int main()
{
    char str[40] = "";
    char* s = str;
    s = gets(str);
    puts(s);

}

