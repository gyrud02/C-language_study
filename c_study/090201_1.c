#include <stdio.h>
#include <string.h>

main()
{
	// char형 배열에는 문자열을 저장할 수 있다.
	// 문자열 저장을 위한 char형 배열
	// 선언시에는 항상 마지막에 \0(0x00, NULL) 값을
	// 저장할 수 있도록 최소 한자리 이상의 여유공간
	// 을 두어야 한다.

	char str[100];
	int idx = 0;

	// gets는 입력시 공백문자를 포함할 수 있으며
	// 공백, 탭, Enter로 문자열을 구분하여 저장한다.
	// (예) my friend --> my friend 입력됨
	printf("gets 문자열 입력 :  ");
	gets(str);
	printf("\n입력받은문자열 : %s \n\n", str);
	printf("문자열 길이 = %d \n\n", strlen(str));

	for (int i = 0; i < 100; i++) str[i] = 0x00;

	// scanf는 입력시 공백문자를 포함할 수 없으며
	// 공백, 탭, Enter로 문자열을 구분하여 저장한다.
	// (예) my friend --> my 만 입력됨
	printf("scanf 문자열 입력 :  ");
	scanf("%s", str); // 문자열을 입력받아 배열 str에 저장
	printf("\n입력받은문자열 : %s \n\n", str);	
	printf("문자열 길이 = %d \n\n", strlen(str));
			
}