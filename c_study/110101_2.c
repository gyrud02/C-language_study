#include <stdio.h>

arrDisp(int *arr, int len);

main()
{
	// 배열선언 및 초기값 할당
	int arr1[] = {1, 3, 5 };
	int arr2[] = {2, 4, 6 };

	// 매개변수 - 배열의 주소값 및 길이 
	arrDisp(arr1, sizeof(arr1) / sizeof(int));
	arrDisp(arr2, sizeof(arr2) / sizeof(int));
}

arrDisp(int *arr, int len)
{
	int i;

	// 배열을 포인터변수로 받아서
	// 활용시에는 배열형태도 가능
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}