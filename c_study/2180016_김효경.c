#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

//(문제)
//
// 아래와 같이 1에서 10까지의 숫자가 뒤죽박죽으로 섞여 있습니다.
// 이 숫자를 작은 수부터 큰 수 순으로 화면에 출력하는 프로그램을 작성하여 제출하시면 됩니다.
// 7, 1, 3, 10, 9, 4, 5, 2, 6, 8
//
// (결과출력)
//
// 원 데이터 : 7, 1, 3, 10, 9, 4, 5, 2, 6, 8
//
// 정렬데이터 : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//
// (제출)
//
// 프로그램을 실행해 볼 수 있도록 프로젝트를 * .zip 파일로 묶은 후 
// 파일명 학번 - 이름.zip 으로 제출하시기 바랍니다.
// 과제물제출은 과제물란에서 하면 됩니다. ^ ^

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
