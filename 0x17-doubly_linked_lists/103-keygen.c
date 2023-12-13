#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - it will generate a key depending 
 * on a username for crackme5
 * @argc: the number of arguments that will be
 * passed
 *
 * @argv: the arguments passed to the main
 * Return: this wil return 0 on success, 
 * 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int k, a;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (k = 0, add = 0; k < len; k++)
		add += argv[1][k];
	p[1] = l[(add ^ 79) & 63];
	for (k = 0, a = 1; k < len; k++)
		a *= argv[1][k];
	p[2] = l[(a ^ 85) & 63];
	for (a = argv[1][0], k = 0; k < len; k++)
		if ((char)a <= argv[1][k])
			a = argv[1][k			];
	srand(a ^ 14);
	p[3] = l[rand() & 63];
	for (a = 0, k = 0; k < len; k++)
		a += argv[1][k] * argv[1][k];
	p[4] = l[(a ^ 239) & 63];
	for (a = 0, k = 0; (char)k < argv[1][0]; k++)
		a = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
