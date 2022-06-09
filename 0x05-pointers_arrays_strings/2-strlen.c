#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
 */
int _strlen(char *s)

{

	int count, length;
	
	length = 0;

	for (count = 0; s[count] != '\0'; count++)
		length++;

	return (length);
}
