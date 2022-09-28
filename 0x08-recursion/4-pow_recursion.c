#include "holberton.h"

/**
  * _pow_recursion - Finds the value of a number raised to another number
  * @x: Base number
  * @y: The power
  * Return: X raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
