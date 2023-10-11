#include <stdio.h>
#include <stdlib.h>

/**
 * main -this will print its own opcodes
 * @argc: it shows the number of arguments
 * @argv: this shows the array of arguments
 * Return: this will return nothing
 */
int main(int argc, char *argv[])
{
	int lam, p;
	char *kay;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	lam = atoi(argv[1]);

	if (lam < 0)
	{
		printf("Error\n");
		exit(2);
	}

	kay = (char *)main;

	for (p = 0; p < lam; p++)
	{
		if (p == lam - 1)
		{
			printf("%02hhx\n", kay[p]);
			break;
		}
		printf("%02hhx ", kay[p]);
	}
	return (0);
}
