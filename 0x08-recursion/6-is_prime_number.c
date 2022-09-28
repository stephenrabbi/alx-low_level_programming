#include "holberton.h"

/**
  * prime_helper - Used in method below to find prime number
  * @n: Number whose square root is required
  * @i: Integer starting at 2 and to be incremented by 1
  * Return: 1 if prime, otherwsie 0
*/
int prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if ((i * i) > n)
		return (1);
	return (prime_helper(n, i + 1));
}
/**
  * is_prime_number - Checks if an integer is a prime number
  * @n: Number to check
  * Return: 1 if n is prime, otherwise 0
*/

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
