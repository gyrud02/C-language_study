#include <stdio.h>

main()
{
	// 아래의 식을 만족하는 A와 Z를 구하는 프로그램 작성
	//    A   Z
	// +  Z   A
	// -----------
	//    9   9

	int A, Z;
	int result;

	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			// A와 Z의 값이 같다면 for문 다시 수행
			if (A == Z) continue;
			// A, Z 를 십자리, 일의자리에 넣고 계산한다.
			result = (A * 10 + Z) + (Z * 10 + A);
			// printf("A = %d Z = %d result = %d \n", A, Z, result);
			// 둘의 합이 99가 되면 화면에 프린트 한다.
			if (result == 99)
				printf("%d%d + %d%d = %d \n\n", A, Z, Z, A, result);
		}
	}
}