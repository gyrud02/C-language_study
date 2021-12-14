#include <stdio.h>

/* -----------------------------------------------------
배열이 함수의 인자로 전달되면서의 포인터와의 관계 총정리
1) 배열을 함수의 인자로 전달 해야 할 경우 배열의 시작주소
   만 전달이 된다.
2) 배열을 함수로 전달하고자 하면 배열과 길이를 반드시 넘겨
   주어야 한다. (그렇지 않으면 받은쪽에서는 배열의 크기를
   계산할 수 없다.
3) 배열을 함수로 넘겨주기 위해서는 아래의 형식이 모두 가능하다.
   void arrFnc (int *param, int len)
   void arrFnc (int param[], int len)
-------------------------------------------------------- */

void func1(int *ptr);
void func2(int *ptr);

main()
{
	int count[5] = { 10,20,30,40,50 };

	printf("배열주소 = %p, 크기 = %d \n\n", count, sizeof(count));
	// 정확한 배열의 크기 = sizeof(count) / sizeof(int)
	printf("정확한 크기 = %d \n\n", sizeof(count) / sizeof(int));

	// 함수호출 1
	func1(count);
	//배열의 값
	printf("배열의 값= ");
	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
		printf("%d, ", count[i]);
	printf("\n\n");

	// 함수호출 2
	func2(count, sizeof(count) / sizeof(int));

	//배열의 값
	printf("배열의 값= ");
	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
		printf("%d, ", count[i]);
	printf("\n\n");
}

void func1(int *ptr)
{
	printf("1. 배열주소 = %p, 크기 = %d \n\n", ptr, sizeof(ptr));

	 for (int i=0; i<sizeof(ptr); i++)
		*(ptr + i) = *(ptr + i) + 50;
}

void func2(int *ptr, int len)
{
	printf("2. 배열주소 = %p, 크기 = %d \n\n", ptr, len);

	for (int i = 0; i < len; i++)
		*(ptr + i) = *(ptr + i) + 50;
}