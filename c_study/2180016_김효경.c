#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

//(����)
//
// �Ʒ��� ���� 1���� 10������ ���ڰ� ���׹������� ���� �ֽ��ϴ�.
// �� ���ڸ� ���� ������ ū �� ������ ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͽ� �����Ͻø� �˴ϴ�.
// 7, 1, 3, 10, 9, 4, 5, 2, 6, 8
//
// (������)
//
// �� ������ : 7, 1, 3, 10, 9, 4, 5, 2, 6, 8
//
// ���ĵ����� : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//
// (����)
//
// ���α׷��� ������ �� �� �ֵ��� ������Ʈ�� * .zip ���Ϸ� ���� �� 
// ���ϸ� �й� - �̸�.zip ���� �����Ͻñ� �ٶ��ϴ�.
// ������������ ������������ �ϸ� �˴ϴ�. ^ ^

int compare(const void* a, const void* b);

int main(void) {

	int i;
	int arr[COUNT] = { 7, 1, 3, 10, 9, 4, 5, 2, 6, 8 };

	for (int j = 0; j < 10; j++) {
		printf("Before : %i \n", arr[j]);
	}


	qsort(arr, COUNT, sizeof(arr[0]), compare);

	for (i = 0; i < COUNT; i++)
	{
		printf("After : %d \n", i + 1, arr[i]);
	}
	printf("\n");

	return 0;
};

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)

		return 1;

	else if (*(int*)a < *(int*)b)

		return -1;

	else

		return 0;
};
