#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	strcpy(str2, str1);
	puts(str2);

	//strncpy �Լ��� ���ڿ��� �ܼ��ϰ�
	//�����Ѵ�. 5���� ���ڸ� �����϶�� �ϸ�
	//�տ������� �� 5���� ���ڸ� �����Ѵ�.
	//���������ڰ� null ���� üũ�ʴ´�.
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	// sizeof(str3)-1 = 4 4���� �� ����
	strncpy(str3, str1, sizeof(str3) - 1);
	// index 4 �� �������� NULL �� �־���
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}