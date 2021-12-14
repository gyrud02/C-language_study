#include <stdio.h>

#define PRODUCT(X,Y) ((X)*(Y))

// C언어의 기본구조를 익히기 위한 예제입니다.
// 항상 main() 함수가 제일먼저 수행됩니다.
// 만약 main() 함수뒤에 수행되는 함수가 나오면 미리
// 그 원형을 선언해주어야 합니다.

// main() 함수 뒤쪽에 함수내용이 존재하므로 미리 함수원형을
// 선언해주어야 합니다.
void sprint();

int main(void)
{
	int i = 10, j = 20;

	// 매크로 전처리기 실행
	printf("i * j = %d\n\n", PRODUCT(i, j));

	// sprint 함수를 호출합니다.
	sprint();

	printf("C언어의 기본구조를 익히는 프로그램입니다.\n\n");

	return 0;
}

void sprint()
{
	printf("sprint 함수에서 출력했습니다.\n\n");
}