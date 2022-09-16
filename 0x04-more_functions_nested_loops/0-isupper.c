#include "main.h"

#include <stdio.h>

/**
* _isupper - checks if upper
*
* @c: character
*
* Description: checks if uppercase
* Return: Always 0.
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
return (0);
}
