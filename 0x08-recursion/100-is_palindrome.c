#include "holberton.h"

/**
  * _strlen - find length of string
  * @s: Pointer to string
  * Return: lenggth of s
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_helper - Used in method below to check
  * if a string is a palindrome
  * @s: Pointer to string to be check
  * @len: Length of s
  * Return: 1 if palindrome, otherwsie 0
*/
int palindrome_helper(char *s, int len)
{
	if (len < 1)
		return (1);

	if (*s == *(s + len))
		return (palindrome_helper(s + 1, len - 2));

	return (0);

}
/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: Pointer to check
  * Return: 1 if s is a palindrome, otherwise 0
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	return (palindrome_helper(s, len - 1));
}
