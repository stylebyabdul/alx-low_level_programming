#include "main.h"


/**
 * _sqrt_recursion - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * 
 * Return: If the number has a natural square root - the square root.
 *          If the number does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - return the natural square root of number
 * @n: test  number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _squrt(int n, imt x)
{
	if (n > X / 2)
		retun (-1);
	else if (n * n == x)
		return (n);
