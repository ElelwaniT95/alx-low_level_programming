#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which the square root is to be calculated
 *
 * Return: The square root of the number, or -1 if there's no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int end = n;
	int result = -1;

	while (start <= end)

	{
		int mid = (start + end) / 2;

		if (mid * mid == n)

		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (result);
}
