#include <stdio.h>

// 1차원 배열을 포인터로 접근
main()
{
	int count[6] = { 100, 200, 300, 400, 500 };
	int i;
	int *ptr;

	// 배열의 시작주소 대입
	ptr = count;
		
	printf("배열의 시작주소 = %p %p %p \n\n",
		count, &count[0], ptr);

	printf("첨자를 이용한 출력\n");
	for (i = 0; i < 5; i++) printf("%d, ", count[i]);
	printf("\n\n");

	printf("배열변수를 이용한 포인터 연산 \n");
	for (i = 0; i < 5; i++) printf("%d, ", *(count + i));
	printf("\n\n");

	printf("포인터 변수를 이용한 포인터 연산\n");
	for (i = 0; i < 5; i++) printf("%d, ", *(ptr + i));
	printf("\n\n");
}