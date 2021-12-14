#include <stdio.h>

// 길이가 5인 int 배열에 5개를 입력받음
// 입력값 중 최대값, 최소값, 총합 구하기

main()
{
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("입력 = ");
		//배열요소에 특정값 입력받을 시 & 연산자 붙여야 함
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];

	//arr[0] (첫번째 값)을 max, min 이라 가정
	//sum 에도 arr[0] 값 넣어둠
	for (i = 1; i < 5; i++) {
		sum += arr[i];
		//max 값 판별
		if (max < arr[i]) max = arr[i];
		//min 값 판별
		if (min > arr[i]) min = arr[i];
	}
	printf("\n최대값 = %d \n", max);
	printf("최소값 = %d \n", min);
	printf("총  합 = %d \n\n", sum);
}
