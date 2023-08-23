#include "holberton.h"

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

int is_digit(char *a)
{
	int i;

	for (i = 0; i < a[i]; i++)
	{
		if (!(a[i] >= '0' && a[i] <= '9'))
			return (0);
	}
	return (1);
}

void print_error(void)
{
	int i = 0;
	char msg[] = "Error";

	while (msg[i] != '\0')
		_putchar(msg[i]), ++i;
	_putchar('\n');

	exit(98);
}

void mult(char *n1, char *n2)
{
	int len1 = 0, len2 = 0, lens = 0, num1, num2, res = 0, tmp, total, i;
	int *result = NULL;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	tmp = len2;
	lens = len1 + len2;

	result = malloc(sizeof(char) * (lens));
	if (!result)
		return;

	for (len1--; len1 >= 0; len1--)
	{
		num1 = n1[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			num2 = n2[len2] - '0';
			res += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			result[len1 + len2 + 1] = res % 10;
	}
	while (*result == 0)
		result++, lens--;
	for (i = 0; result[i] != '\0'; i++)
		printf("%i", result[i]);
	printf("\n");
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1], *n2 = argv[2];

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	mult(n1, n2);

	return (0);
}
