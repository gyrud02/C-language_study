#include <stdio.h>

main()
{
	// iData 배열을 초기화하고, 
	// 배열에 요소들을 모두 더한 값을
	// 구하기 예제
	int iData[5] = { 1,2,3,4,5 };
	int i, sum = 0;

	for (i = 0; i < 5; i++)
		sum += iData[i];
	
	printf("sum = %d \n\n", sum);	
}