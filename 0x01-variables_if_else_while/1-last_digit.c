#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this runs ramdom results\^/s+\|\s+$//gs
 * Return: 0 will be the return
 */ 
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m - n % 10;
	if (m > 5)
		printf("last digit of%d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("last digit of %d is % and is zero", n, m);
	else if (m < 6 && n != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
