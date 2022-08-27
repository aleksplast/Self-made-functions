#include <stdio.h>
#include <string.h>

#include "tests.h"
#include "header.h"

int main()
{
    int counter = 0;
    int OkTests = 0;

    char str1[80] = "ABONGOBABA";
    char str2[40] = "BACLOSOS";
    char str3[40] = "123123";
    char str4[40] = "987";
    char str5[40] = "we";
    char str6[40] = "ABO\0BA";

    printf("---Testing my_strlen---\n");
    OkTests += test_my_strlen(str2, &counter);
    OkTests += test_my_strlen(str4, &counter);
    OkTests += test_my_strlen(str6, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strcpy---\n");
    OkTests += test_my_strcpy(str1, str2, &counter);
    OkTests += test_my_strcpy(str3, str4, &counter);
    OkTests += test_my_strcpy(str5, str6, &counter);
    printf("%d succesfull tests out of 3", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strncpy---\n");
    OkTests += test_my_strncpy(str1, str2, 5, &counter);
    OkTests += test_my_strncpy(str3, str4, 2, &counter);
    OkTests += test_my_strncpy(str5, str6, 1, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);
}

int test_my_strlen(char* str, int* counter)
{
    *counter += 1;

    if (my_strlen(str) == strlen(str))
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   my_strlen = %d    \
        \rExpected: strlen = %d",               \
        *counter, my_strlen, strlen);
        return 0;
    }
}

int test_my_strcpy(char* dest, char* const source, int* counter)
{
    *counter += 1;

    char* temp1 = dest;
    char* temp2 = dest;

    my_strcpy(temp1, source);

    strcpy(temp2, source);

    if (strcmp(temp1, temp2) == 0)
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   strcmp = %d    \
        \rExpected: strlen = %d",               \
        *counter, strcmp(temp1, temp2), 0);
        return 0;
    }
}

int test_my_strncpy(char* dest, char* const source, size_t n, int* counter)
{
    *counter += 1;

    char* temp1 = dest;
    char* temp2 = dest;

    my_strncpy(temp1, source, n);

    strncpy(temp2, source, n);

    if (strncmp(temp1, temp2, n) == 0)
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   strncmp = %d    \
        \rExpected: strncmp = %d",               \
        *counter, strncmp(temp1, temp2, n), 0);
        return 0;
    }
}
