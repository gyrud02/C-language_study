#include <stdio.h>

//�Լ� ���� ����
int sum_total(int a[], int n);

main()
{
	int sum;
	int arr[10] = { 22,11,4,5,2,7,1,21,12,9 };

	//arr[] �迭�� ���ڷ� ����
	//arr�� �迭�� ù��° �ּҸ� ���� ������ ���
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