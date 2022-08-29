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
    char str3[80] = "123123";
    char str4[40] = "987";
    char str5[80] = "we";
    char str6[40] = "ABO\0BA";

    printf("---Testing my_strlen---\n");
    OkTests += test_my_strlen(str2, &counter);
    OkTests += test_my_strlen(str4, &counter);
    OkTests += test_my_strlen(str6, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strcmp---\n");
    OkTests += test_my_strcmp(str1, str2, &counter);
    OkTests += test_my_strcmp(str3, str4, &counter);
    OkTests += test_my_strcmp(str5, str6, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strchr---\n");
    OkTests += test_my_strchr(str1, 66, &counter);
    OkTests += test_my_strchr(str3, 51, &counter);
    OkTests += test_my_strchr(str5, 65, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strcpy---\n");
    OkTests += test_my_strcpy(str1, str2, &counter);
    OkTests += test_my_strcpy(str3, str4, &counter);
    OkTests += test_my_strcpy(str5, str6, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strncpy---\n");
    OkTests += test_my_strncpy(str1, str2, 5, &counter);
    OkTests += test_my_strncpy(str3, str4, 2, &counter);
    OkTests += test_my_strncpy(str5, str6, 1, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

    counter = 0;
    OkTests = 0;

    printf("---Testing my_strcat---\n");
    OkTests += test_my_strcat(str1, str2, &counter);
    OkTests += test_my_strcat(str3, str4, &counter);
    OkTests += test_my_strcat(str5, str6, &counter);
    printf("%d succesfull tests out of 3\n", OkTests);

}

int test_my_strlen(const char* str, int* counter)
{
    *counter += 1;

    if (my_strlen(str) == strlen(str))
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   my_strlen = %d\nExpected: strlen = %d\n", *counter, my_strlen, strlen);
        return 0;
    }
}

int test_my_strcpy(char* dest, const char* source, int* counter)
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
        printf("Test #%d\nFAILED:   strcmp = %d\nExpected: strlen = %d\n", *counter, strcmp(temp1, temp2), 0);
        return 0;
    }
}

int test_my_strncpy(char* dest, const char* const source, size_t n, int* counter)
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
        \rExpected: strncmp = %d\n",               \
        *counter, strncmp(temp1, temp2, n), 0);
        return 0;
    }
}

int test_my_strcat(char* dest, const char* const source, int* counter)
{
    *counter += 1;

    char* temp1 = dest;
    char* temp2 = dest;

    my_strcat(temp1, source);

    strcat(temp2, source);

    if (strcmp(temp1, temp2) == 0)
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   strcmp = %d    \
        \rExpected: strcmp = %d",               \
        *counter, strcmp(temp1, temp2), 0);
        return 0;
    }
}

int test_my_strcmp(const char* str1, const char* str2, int* counter)
{
    *counter += 1;

    const char* temp1 = str1;
    const char* temp2 = str2;

    if (strcmp(temp1, temp2) == my_strcmp(temp1,temp2))
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   my_strcmp = %d\nExpected: strcmp = %d\n", *counter, my_strcmp(temp1, temp2), strcmp(temp1,temp2));
        return 0;
    }
}

int test_my_strchr(char* str1, int ch, int* counter)
{
    *counter += 1;

    char* temp1 = str1;

    if (strchr(temp1, ch) == my_strchr(temp1, ch))
    {
        printf("Test #%d succesfull\n", *counter);
        return 1;
    }
    else
    {
        printf("Test #%d\nFAILED:   my_strchr = %d\nExpected: strchr = %d", *counter, my_strchr(temp1, ch), strchr(temp1,ch));
        return 0;
    }
}
