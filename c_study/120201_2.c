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
}