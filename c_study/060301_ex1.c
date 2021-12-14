#include <stdio.h>

main()
{
	// 구구단을 출력
	// 짝수단 (2단, 4단, 6단, 8단)만 출력
	// 또한 2단은 2*2 단까지, 4단은 4*4단까지 6단은 6*6단, 8단은 8*8단까지만 출력
	// continue 와 break 문에 유의 할것

	int i, j;

	for (i = 2; i < 10; i++) {
		// 짝수단만 출력하기 위하여 짝수단이 아닌 경우
		// 아래를 실행하지 않고 다시 바깥쪽 for문으로 이동한다.
		if (i % 2 != 0) continue;
		for (j = 1; j < 10; j++) {
			// 만약 i = 2이고, j=3 이면 위의 조건에서와 
			// 같이 더 이상수행하지 않고 for문을 마친다.
			// printf("i = %d j = %d \n", i, j);
			if (i < j) break;
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
}