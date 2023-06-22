#include "main.h"
#include <stdio.h>

/**
 * _isupper - The function that checks uppercases of a character
 * @c: character to check if its upper
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

