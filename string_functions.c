#include "shell.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}

/**
 * _strlen - function that returns length of string
 * @s: string input
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strncmp - function that compares two strings in n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: difference between the two strings
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strchr - function that finds a character in a string
 * @s: string input
 * @c: character to locate
 *
 * Return: pointer to first character or NULL if empty
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
