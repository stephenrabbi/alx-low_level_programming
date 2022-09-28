#include "holberton.h"

/**
  * factorial - Finds factorial of a given number
  * @n: Number whose factorial is required
  * Return: Factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
