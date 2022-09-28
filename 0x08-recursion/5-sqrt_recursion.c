#include "holberton.h"

/**
  * sqrt_helper - Used in method below to find square root
  * @n: Number whose square root is require
  * @i: Integer to be multiplied by self
  * Return: Sqaure root of n
*/
int sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
/**
  * _sqrt_recursion - Finds the natural square root of a number
  * @n: Number whose square root is required
  * Return: Square root of n
*/

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
