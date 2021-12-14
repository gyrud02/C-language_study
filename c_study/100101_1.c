#include <stdio.h>

main()
{
	// 포인트 변수 선언 및 활용
	// 자료형 *변수명; (예) int *pnum;

	int num1 = 100, num2 = 100;
	int *pnum;

	// pnum 이 num1 의 주소를 가르킨다.
	pnum = &num1;
	// (*pnum) --> pnum 주소의 내용으로 ..
	// pnum 주소의 내용에 30을 더해 pnum 에 저장한다.
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1 = %d num2 = %d \n\n", num1, num2);

}