#include <stdio.h>
#include <string.h>

char str1[] = "c langage is a interesting";
char str2[] = "interesting";
char cnt1[] = "         1         2         3";
char cnt2[] = "123456789012345678901234567890";

main()
{
	char *pdest;
	int  result;

	printf("[search string is interesting] \n\n");
	printf("%s \n", str1);
	printf("%s \n", cnt1);
	printf("%s \n\n", cnt2);

	// 최초로 문자열이 발견된 위치를 return
	pdest = strstr(str1, str2);

	printf("pdest = %s \n", pdest);

	// interesting 이나온 첫번째 위치에서
	// 전체 문자열이 시작되는 처음위치(0) 을 빼고
	// 1을 더하여 몇번째에 있는지를 찾는다.
	result = pdest - str1 + 1;

	if (pdest != NULL)
		printf("%s is searched at position %d \n\n", str2, result);
	else
		printf("%s not found \n\n", str2);
}