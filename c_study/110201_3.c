#include <stdio.h>

void Func(void);

main()
{
	int num = 20;
	void *ptr;

	ptr = &num;
	printf("%p \n", ptr);

	ptr = Func;
	printf("%p \n", ptr);
}

void Func(void)
{
	printf("I'm in the Func \n");
}