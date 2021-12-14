#include <stdio.h>
// -------------------------------------------------------------
// 전역변수와 지역변수로 해결되지 않는 상황
// -------------------------------------------------------------

// 전역변수 
char name[30];

char * ReadUserName(void)
{
	//char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

main()
{
	char * name1;
	char * name2;
	
	// ReadUserName() 함수에서 로컬로 선언한 배열에 입력된 값이
	// 함수 종료 시 함께 소멸됨
	name1 = ReadUserName();
	printf("name1: %s \n", name1);

	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	
	// 전역변수 활용하는 부분
	printf("\n-----------------------\n");
	printf("name1: %s \n", name1);
	printf("name2: %s \n\n", name2);
}