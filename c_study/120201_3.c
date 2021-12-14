#include <stdio.h>
#include <string.h>

main()
{
	char str1[] = "Seoul Is a Big City In Korea";
	char *str2, *str3;

	// strdup() 함수를 이용하여 문자열 저장을 위한
	// 공간을 마련하고 저장한 후 strupr() 수행
	// 원래의 문자열은 변하지 않음
	str2 = strupr(strdup(str1));
	str3 = strlwr(strdup(str1));

	printf("origin = %s \n", str1);
	printf("upper  = %s \n", str2);
	printf("lower  = %s \n\n", str3);
}