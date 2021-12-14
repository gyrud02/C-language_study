#include <stdio.h>
#include <string.h>

// ���ڿ� ó�� �Լ� ����
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
	// strstr ����
	// char *strstr(const char *str1, const *str2);
	// str1 : searched string
	// str2 : string to search for
	// --------------------------------------------
	printf("[search string is interesting] \n\n");
	printf("%s \n", str1);
	printf("%s \n", cnt1);
	printf("%s \n\n", cnt2);

	// ���ʷ� ���ڿ��� �߰ߵ� ��ġ�� return
	pdest = strstr(str1, str2);

	printf("pdest = %s \n", pdest);

	// interesting �̳��� ù��° ��ġ����
	// ��ü ���ڿ��� ���۵Ǵ� ó����ġ(0) �� ����
	// 1�� ���Ͽ� ���°�� �ִ����� ã�´�.
	result = pdest - str1 + 1;

	if (pdest != NULL)
		printf("%s is searched at position %d \n\n", str2, result);
	else
		printf("%s not found \n\n", str2);
	// ------------------------------------------------------------------------
	// char *strupr( char *string);       ���ڿ��� �빮�ڷ� ��ȯ
	// char *strlwr(char *string); 	      ���ڿ��� �ҹ��ڷ� ��ȯ
	// char *strdup(const char *string);  ���ڿ� ó���� ���� �޸𸮿� ���ڿ��� 
	//	                                  �ӽ÷� ������ �δ� �Լ� 
	// int toupper(int c); 	              �Էµ� ���ڸ� �빮�ڷ� ��ȯ
	// int tolower(int c);  	          �Էµ� ���ڸ� �ҹ��ڷ� ��ȯ 
	//
	// strdup() �Լ��� �̿��Ͽ� ���ڿ� ������ ����
	// ������ �����ϰ� ������ �� strupr() ����
	// ������ ���ڿ��� ������ ����
	// ------------------------------------------------------------------------
	string2 = strupr(strdup(string1));
	string3 = strlwr(strdup(string1));

	printf("origin = %s \n", string1);
	printf("upper  = %s \n", string2);
	printf("lower  = %s \n\n", string3);

	// ���ڿ� �迭 NULL �ʱ�ȭ 
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