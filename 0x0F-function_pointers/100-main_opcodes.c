#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, o;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (o = 0; o < bytes; o++)
	{
		if (o == bytes - 1)
		{
			printf("%02hhx\n", arr[o]);
			break;
		}
		printf("%02hhx ", arr[o]);
	}
	return (0);
}
