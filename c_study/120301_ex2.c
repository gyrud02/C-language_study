#include <stdio.h>
#include <string.h>

// 문자열 처리 함수 정리
// strstr, strupr, strlwr, toupper, tolower

main()
{
	char str1[] = "c langage is a interesting";
	char str2[] = "interesting";
	char cnt1[] = "         1         2         3";
	char cnt2[] = "123456789012345678901234567890";
	char *pdest;
	int  result;
	char string1[] = "Seoul Is a Big City In Korea";
	char *string2, *string3;
	char *msg = "Over The Rainbow";
	char Ustr[100];
	char Lstr[100];
	int i = 0;

	// --------------------------------------------
	// strstr 원형
	// char *strstr(const char *str1, const *str2);
	// str1 : searched string
	// str2 : string to search for
	// --------------------------------------------
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
	// ------------------------------------------------------------------------
	// char *strupr( char *string);       문자열을 대문자로 변환
	// char *strlwr(char *string); 	      문자열을 소문자로 변환
	// char *strdup(const char *string);  문자열 처리를 위해 메모리에 문자열을 
	//	                                  임시로 복사해 두는 함수 
	// int toupper(int c); 	              입력된 문자를 대문자로 변환
	// int tolower(int c);  	          입력된 문자를 소문자로 변환 
	//
	// strdup() 함수를 이용하여 문자열 저장을 위한
	// 공간을 마련하고 저장한 후 strupr() 수행
	// 원래의 문자열은 변하지 않음
	// ------------------------------------------------------------------------
	string2 = strupr(strdup(string1));
	string3 = strlwr(strdup(string1));

	printf("origin = %s \n", string1);
	printf("upper  = %s \n", string2);
	printf("lower  = %s \n\n", string3);

	// 문자열 배열 NULL 초기화 
	memset(Ustr, 0x00, sizeof(Ustr));
	memset(Lstr, 0x00, sizeof(Lstr));

	printf("orgin = %s \n", msg);

	while (*msg != NULL) {
		Ustr[i] = toupper(*msg);
		Lstr[i] = tolower(*msg);
		msg++;
		i++;
	}
	printf("upper = %s \n", Ustr);
	printf("lower = %s \n\n", Lstr);

}