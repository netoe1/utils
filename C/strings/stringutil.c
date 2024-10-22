#ifndef STRINGUTIL_C
#define STRINGUTIL_C
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#pragma region INTERFACE
bool isValidString(const char *str); // Verify if the buffer is a valid string to manipulate.
void toLowerString(char *str);     // Put a string to lowerCase
void toUpperString(char *str);     // Put a string to uppercase
char *trim(char *str);             // Do a trim in a string

#pragma endregion INTERFACE

#pragma region IMPLEMENTATION

bool isValidString(const char *str)
{
    if (str == NULL || str[0] == "\0")
    {
        return false;
    }

    return true;
}
void toLowerString(char *str)
{
    if (isValidString(str))
    {
        static int i = 0;

        for (i = 0; i < strlen(str) + 1; i++)
        {
            str[i] = tolower(str);
        }
    }
}
void toUpperString(char *str)
{

    if (isValidString(str))
    {
        static int i = 0;

        for (i = 0; i < strlen(str) + 1; i++)
        {
            str[i] = toupper(str);
        }
    }
}
char *trim(char *str)
{
    char *end;

    // Trim do início (remover espaços à esquerda)
    while (isspace((unsigned char)*str))
    {
        str++;
    }

    // Se a string for só de espaços, retorna uma string vazia
    if (*str == '\0')
    {
        return str;
    }

    // Trim do final (remover espaços à direita)
    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end))
    {
        end--;
    }

    // Coloca o caractere nulo após o último caractere não-espaço
    *(end + 1) = '\0';

    return str;
}

#pragma endregion IMPLEMENTATION
#endif