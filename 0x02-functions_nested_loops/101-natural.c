#include <stdio.h>

/**
 * sum_multiples_3_or_5 - Computes the sum of multiples of 3 or 5 below a given limit
 * @limit: The upper limit (exclusive)
 *
 * Return: Sum of multiples of 3 or 5 below the limit
 */
int sum_multiples_3_or_5(int limit)
{
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	return (sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
int limit = 1024;
int result;

result = sum_multiples_3_or_5(limit);

printf("%d\n", result);

	return (0);
}

