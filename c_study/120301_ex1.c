#include <stdio.h>
#include <string.h>

// ���ڿ� ó�� �Լ� ����
// strcpy, strcat, strlen, strcmp

main()
{
	char buf1[50] = "this is a best book ";
	char buf2[50] = "in the world";
	char buf[100] = "";
	char tmp[50];

	// strlen ����
	// size_t strlen(const char *s)	
	printf("strlen bu1 = %d \n\n", strlen(buf1));

	// strcpy ����
	// char *strcpy(char *dest, const char *src)	
	strcpy(buf, buf1);
	printf("strcpy = %s \n\n", buf);

	// strcat ����
	// char *strcpy(char *dest, const char *src)	
	strcat(buf, buf2);
	printf("strcat = %s \n\n", buf);

	// strcmp ����
	// char *strcmp(const char *s1, const char *s2)
	// �ƽ�Ű �ڵ� �������� �񱳰� �̷����
	// s1 > s2 : +
	// s1 = s2 : 0
	// s2 < s2 : -
	// ��, 0�� ��ȯ�Ǹ� ������ ���ڿ�, 0�� �ƴѰ��� ��ȯ�Ǹ�
	// �������� ���� ���ڿ��̴�.
	// (!strcmp(buf1, buf2)) �� ���� �ƴ϶��
	// �̶�� �ǹ̷� ���� ���� (�� 0 �̶���� �ǹ�)
	
	if (!strcmp(buf1, buf2)) printf("buf1�� buf2�� ���� \n\n");
	else printf("buf1�� buf2�� �������� \n\n");
	
	// int atoi(const char *str);
	// int atol(const char *str);
	// int atof(const char *str);
	printf("atoi src =  ");
	scanf("%s", tmp);
	printf("atoi result = %d \n\n", atoi(tmp));
}