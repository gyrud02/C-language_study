#include <stdio.h>
#include <string.h>

main()
{
	char str1[] = "Seoul Is a Big City In Korea";
	char *str2, *str3;

	// strdup() �Լ��� �̿��Ͽ� ���ڿ� ������ ����
	// ������ �����ϰ� ������ �� strupr() ����
	// ������ ���ڿ��� ������ ����
	str2 = strupr(strdup(str1));
	str3 = strlwr(strdup(str1));

	printf("origin = %s \n", str1);
	printf("upper  = %s \n", str2);
	printf("lower  = %s \n\n", str3);
}