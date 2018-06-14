/*
** create tab with different function and call with affectation
*/

#include <stdio.h>

typedef char *funct(void);

char *f1()
{
	printf("Fonction 1\n");
	return 0;
}

char *f2()
{
	printf("Fonction 2\n");
	return 0;
}

static void *coucou[2][2] = {{&f1, "md5"}, {&f2, "sha256"}};

int main()
{
	int c;
	funct *test;

	c = 0;
	while (c < 2)
	{
		printf("%s\n", coucou[c][1]);
		test = coucou[c][0];
		test();
		c++;
	}
	return (1);
}
