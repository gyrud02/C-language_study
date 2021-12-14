#include <stdio.h>

main()
{
	char names[4][20];

	for (int i = 0; i < 4; i++) {
		printf("%d. ΌΊΈν = ", i + 1);
		gets(names[i]);
	}

	printf("\n");
	
	for (int i = 0; i < 4; i++) {
		printf("%d.%s \n", i + 1, names[i]);
	}
	printf("\n");
}