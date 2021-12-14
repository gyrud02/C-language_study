#include <stdio.h>

main()
{
	// 배열변수는 포인터상수이다. 따라서 배열변수 자신의
	// 시작주소를 변경하는 것을 허용하지 않는다.

	char str[50] = "yeungjin cyber";
	char *ptr;

	// 배열의 시작주소 대입
	ptr = str;

	while (*ptr) {
		printf("%c ", *ptr++);
		// 오류 - 배열변수는 포인터 상수이므로
		// 주소를 변경할 수 없음
		// printf("%c ", *str++);
	}
	printf("\n\n");
}