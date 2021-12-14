#include <stdio.h>

// 전역변수
// int total = 0;

int AddTotal(int num);

main()
{
	int i, num;

	for (i = 0; i < 3; i++) {
		printf("입력 %d =   ", i + 1);
		scanf("%d", &num);

		printf("누적 = %d \n\n", AddTotal(num));
	}
}

int AddTotal(int num) {
	// 전역변수를 없애는 방법
	static int total = 0;

	total += num;
	return total;
}