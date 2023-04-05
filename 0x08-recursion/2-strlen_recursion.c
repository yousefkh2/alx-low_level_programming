#include "main.h"

/**
 * _strlen_recursion caluculates the lengths of a string
 * @s is the string to count
 *
 * Returns the integer value
 */
int _strlen_recursion(char *s)
{
	if (*s=='\0')
	{
		return(0);
	}
	
	s++;
	return (_strlen_recursion(s) + 1);
}
