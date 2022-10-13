#include <stdarg.h>

/**
 * main - Writes a function that returns
 * the sum of all its parameters.
 * @n: the number of parameters to be summed
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int sum = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
