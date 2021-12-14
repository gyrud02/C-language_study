#include <stdio.h>

//함수 원형 선언
int sum_total(int a[], int n);

main()
{
	int sum;
	int arr[10] = { 22,11,4,5,2,7,1,21,12,9 };

	//arr[] 배열을 인자로 전달
	//arr은 배열의 첫번째 주소를 갖는 포인터 상수
	sum = sum_total(arr, 10);
	printf("sum = %d \n\n", sum);
}

int sum_total(int a[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i];

	return sum;
}