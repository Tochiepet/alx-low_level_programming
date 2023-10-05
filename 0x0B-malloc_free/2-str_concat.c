#include "main.h"

/**
 * *str_concat - to concatinate the two strings
 * @*s1: this is string 1
 * @*s2: and this, string 2
 * Return: return s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int p;
	char *gid;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (p = 0; s1[p] != '\0'; p++)
		s1len++;
	for (p = 0; s2[p] != '\0'; p++)
		s2len++;

	gid = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (gid == NULL)
		return (NULL);
	for (p = 0; s1[p] != '\0'; p++)
		gid[p] = s1[p];
	for (p = 0; s2[p] != '\0'; p++)
		gid[p] = s2[p];
	return (gid);
}
