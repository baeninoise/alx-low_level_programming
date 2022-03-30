#include "main.h"
/**
 * _pow_recursion -  returns the value of x power y
 * @x: an argument passed to the function
 * @y: an argument passed to the function
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int j;

	if (y < 0)
	{
		return (-1);
	}
	_pow_recursion(x,y);
	j = x^y;
	return (j);
}
