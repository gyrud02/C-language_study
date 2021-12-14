#include <stdio.h>

// int (*compare) (int n1, int n2) 형태로 함수 포인터를 받고
// 호출을 한다. 함수 선언부분을 잘 익혀둘 것
int WhatIsBigger(int num1, int num2, int (*compare) (int n1, int n2))
{
	return compare(num1, num2);
}

int Bigger(int num1, int num2)
{
	if (num1 > num2) return num1;
	else if (num1 < num2) return num2;
	else return 0;
}

main()
{
	int num1, num2;
	int big_nbr;

	printf("두값 입력 =  ");
	scanf("%d  %d", &num1, &num2);

	// 함수포인터 변수 호출 Bigger
	big_nbr = WhatIsBigger(num1, num2, Bigger);
	
	if (big_nbr == 0) printf("%d 와 %d 는 같은수이다. \n\n", num1, num2);
	else printf("%d 와 %d 두수 중 큰 수는 %d 이다.\n\n", num1, num2, big_nbr);
}