#include <stdio.h>
#include <string.h>

int  main ()
{

	char one[25], two[25];


	scanf("%s %s", one, two);

	if (strcmp(one, two) > 0)
	{
		printf("%s\n", two);
		printf("%s\n", one);
	}
	else if (strcmp(one, two) < 0)
	{
		printf("%s\n", one);
		printf("%s\n", two);
	}
}
