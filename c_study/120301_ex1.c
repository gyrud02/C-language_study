#include <stdio.h>
#include <string.h>

// 문자열 처리 함수 정리
// strcpy, strcat, strlen, strcmp

main()
{
	char buf1[50] = "this is a best book ";
	char buf2[50] = "in the world";
	char buf[100] = "";
	char tmp[50];

	// strlen 원형
	// size_t strlen(const char *s)	
	printf("strlen bu1 = %d \n\n", strlen(buf1));

	// strcpy 원형
	// char *strcpy(char *dest, const char *src)	
	strcpy(buf, buf1);
	printf("strcpy = %s \n\n", buf);

	// strcat 원형
	// char *strcpy(char *dest, const char *src)	
	strcat(buf, buf2);
	printf("strcat = %s \n\n", buf);

	// strcmp 원형
	// char *strcmp(const char *s1, const char *s2)
	// 아스키 코드 기준으로 비교가 이루어짐
	// s1 > s2 : +
	// s1 = s2 : 0
	// s2 < s2 : -
	// 즉, 0이 반환되면 동일한 문자열, 0이 아닌값이 반환되면
	// 동일하지 않은 문자열이다.
	// (!strcmp(buf1, buf2)) 는 참이 아니라면
	// 이라는 의미로 많이 사용됨 (즉 0 이라면의 의미)
	
	if (!strcmp(buf1, buf2)) printf("buf1과 buf2는 같음 \n\n");
	else printf("buf1과 buf2는 같지않음 \n\n");
	
	// int atoi(const char *str);
	// int atol(const char *str);
	// int atof(const char *str);
	printf("atoi src =  ");
	scanf("%s", tmp);
	printf("atoi result = %d \n\n", atoi(tmp));
}