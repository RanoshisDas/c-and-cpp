// C program to find the length of string
#include <stdio.h>
#include <string.h>


int main()
{
	char str[1000];
	int i;

	printf("Enter the String:");
	fgets(str,1000,stdin);

	for (i = 0; str[i] != '\0'; i++);

	printf("Length of Str is %d", --i);

	return 0;
}

