#include <stdio.h>

//전역변수
char name[30];

char *ReadUserName()
{
	// 지역변수
	// char name[30];
	printf("input name = ");
	scanf("%s", name);

	return name;
}

main()
{
	char *name1;
	char *name2;

	name1 = ReadUserName();
	printf("name1 = %s \n", name1);

	name2 = ReadUserName();
	printf("name2 = %s \n", name2);

	printf("name1 = %s \n", name1);
	printf("name2 = %s \n\n", name2);
}

