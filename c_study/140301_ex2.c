#include <stdio.h>
#include <stdlib.h>

// malloc() 함수 이용시 <stdlib.h> 포함해주어야 함
// 동적메모리를 이용하여 로컬과 전역변수로 해결되지
// 않던 문제를 해결
char * ReadUserName(void)
{
	// 힙영역에 메모리를 할당한다.
	// 할당된 메모리는 프로그램이 종료되거나 명시적으로
	// free() 를 해주어야만 해제가 된다.
	char * name = (char *)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;

	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("\n-------------------------\n");
	printf("again name1: %s \n", name1);
	printf("again name2: %s \n\n", name2);
	// 반드시 힙영역 사용후에는 명시적으로 
	// free() 해주어야만 해제가 된다.
	free(name1);
	free(name2);
}