#include <stdio.h>

main()
{
	// 간접 참조 연산자와 증감 연산자 예제

	int num = 10;
	int *pnum = &num;

	printf("초기값 num=%d, pnum=%p \n\n", num, pnum);

	/*
	// 주소는 바뀌지 않고 내용만 바뀐다.
	(*pnum)++;
	printf("(*pnum)++ 수행 후 : num=%d, pnum=%p \n\n", num, pnum);

	// 내용은 바뀌지 않고 주소만 바뀐다.
	*++pnum;
	printf("*++pnum 수행 후 : num=%d, pnum=%p \n\n", num, pnum);
	*/

	// 주소는 바뀌지 않고 내용만 바뀐다.
	++*pnum;
	printf("++*pnum 수행 후 : num=%d, pnum=%p \n\n", num, pnum);

	/*
	// 내용은 바뀌지 않고 주소만 바뀐다.
	*pnum++;
	printf("*pnum++ 수행 후 : num=%d, pnum=%p \n\n", num, pnum);
	*/
}