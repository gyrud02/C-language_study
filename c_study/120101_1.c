#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	strcpy(str2, str1);
	puts(str2);

	//strncpy 함수는 문자열을 단순하게
	//복사한다. 5개의 문자를 복사하라고 하면
	//앞에서부터 딱 5개의 문자만 복사한다.
	//마지막문자가 null 인지 체크않는다.
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	// sizeof(str3)-1 = 4 4개의 수 복사
	strncpy(str3, str1, sizeof(str3) - 1);
	// index 4 즉 마지막에 NULL 값 넣어줌
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}