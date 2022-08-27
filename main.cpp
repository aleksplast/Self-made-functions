#include <stdio.h>
#include <string.h>

#include "header.h"

int main()
{
    char str[40] = "";

    gets(str);

    char a[15] = "aBOAOFAAFE";
    char b[15] = "ABONGUS";

    char dest[120] = "";
    my_strcpy(a,b);
    printf("%s", a);
    my_strcpy(dest, str);
    printf("%s", dest);
}

