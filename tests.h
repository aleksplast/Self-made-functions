#ifndef TESTS_H
#define TESTS_H

int test_my_strlen(const char* str, int* counter);

int test_my_strcpy(char* dest, const char* source, int* counter);

int test_my_strncpy(char* dest, const char* source, size_t n, int* counter);

int test_my_strcat(char* dest, const char* source, int* counter);

int test_my_strchr(char* str1, int ch, int* counter);

int test_my_strcmp(const char* str1, const char* str2, int* counter);

#endif ///TESTS_H

