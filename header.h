#ifndef HEADER_H
#define HEADER_H

//!-----------------------
//! @brief Writes every character from string and a new line symbol
//! @param[out] s String to be written
//! @return Not negative number on success, EOF and error on failure
//!-----------------------
int my_puts (const char* s);

//!-----------------------
//! @brief Counts the length of the string
//! @param[out] str String for counting
//! @return Length of the string
//!-----------------------
size_t my_strlen (const char* str);

//!-----------------------
//! @brief Copies one string to another one
//! @param[out] dest Destination string for copying
//! @param[out] dest Source string for copying
//! @return Copied string
//!-----------------------
char* my_strcpy(char* dest, const char* source);

//!-----------------------
//! @brief Copies first n symbols from one string to another one
//! @param[out] dest Destination string for copying
//! @param[out] dest Source string for copying
//! @param[in] n Number of symbols to copy
//! @return Copied string
//!-----------------------
char* my_strncpy (char* dest, const char* source, size_t n);

//!-----------------------
//! @brief Concatenates one string to another one
//! @param[out] dest Destination string for concatenation
//! @param[out] dest Source string for concatenation
//! @return Concatenated string
//!-----------------------
char* my_strcat(char* dest, const char* source);

//!-----------------------
//! @brief Compares one string to another one
//! @param[out] dest First string for comparison
//! @param[out] dest Second string for comparison
//! @return Negative value if str2 appears before str1 in lexicographical order, Zero if str1 and str2 compare equal, Positive value if str1 appears after str2 in lexicographical order.
//!-----------------------
int my_strcmp(const char* str1, const char* str2);

//!-----------------------
//! @brief Finds first occurence of the symbol in the string
//! @param[out] dest String for an analysis
//! @param[in] ch Character to be found
//! @return Pointer to the found character in str, or null pointer if no such character is found.
//!-----------------------
char* my_strchr(char* str, int ch);

#endif ///HEADER_H
