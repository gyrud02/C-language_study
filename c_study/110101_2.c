#include <stdio.h>

arrDisp(int *arr, int len);

main()
{
	// �迭���� �� �ʱⰪ �Ҵ�
	int arr1[] = {1, 3, 5 };
	int arr2[] = {2, 4, 6 };

	// �Ű����� - �迭�� �ּҰ� �� ���� 
	arrDisp(arr1, sizeof(arr1) / sizeof(int));
	arrDisp(arr2, sizeof(arr2) / sizeof(int));
}

arrDisp(int *arr, int len)
{
	int i;

	// �迭�� �����ͺ����� �޾Ƽ�
	// Ȱ��ÿ��� �迭���µ� ����
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}