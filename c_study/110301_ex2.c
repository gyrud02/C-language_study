#include <stdio.h>

// 포인터 변수에 저장된 두개의 값을 바꾸는 예제
// 2중 포인터 예제

void SwapIntPtr1(int *p1, int *p2)
{
int *temp = p1;
p1 = p2;
p2 = temp;
}

void SwapIntPtr2(int **dp1, int **dp2)
{
int *temp = *dp1;
*dp1 = *dp2;
*dp2 = temp;
}

main()
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n\n", *ptr1, *ptr2);

	// 잘못된 매개변수 전달 예
	// 값(포인터값)만 전달됨
	SwapIntPtr1(ptr1, ptr2);
	printf("SwapIntPtr1 = *ptr1, *ptr2: %d %d \n\n", *ptr1, *ptr2);

	// 수정된 매개변수 전달 예
	// 값(포인터값)의 주소가 전달됨
	SwapIntPtr2(&ptr1, &ptr2);
	printf("SwapIntPtr2 = *ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	printf("\n\n");
}