#include <stdio.h>
#include <string.h>

main()
{
	// char�� �迭���� ���ڿ��� ������ �� �ִ�.
	// ���ڿ� ������ ���� char�� �迭
	// ����ÿ��� �׻� �������� \0(0x00, NULL) ����
	// ������ �� �ֵ��� �ּ� ���ڸ� �̻��� ��������
	// �� �ξ�� �Ѵ�.

	char str[100];
	int idx = 0;

	// gets�� �Է½� ���鹮�ڸ� ������ �� ������
	// ����, ��, Enter�� ���ڿ��� �����Ͽ� �����Ѵ�.
	// (��) my friend --> my friend �Էµ�
	printf("gets ���ڿ� �Է� :  ");
	gets(str);
	printf("\n�Է¹������ڿ� : %s \n\n", str);
	printf("���ڿ� ���� = %d \n\n", strlen(str));

	for (int i = 0; i < 100; i++) str[i] = 0x00;

	// scanf�� �Է½� ���鹮�ڸ� ������ �� ������
	// ����, ��, Enter�� ���ڿ��� �����Ͽ� �����Ѵ�.
	// (��) my friend --> my �� �Էµ�
	printf("scanf ���ڿ� �Է� :  ");
	scanf("%s", str); // ���ڿ��� �Է¹޾� �迭 str�� ����
	printf("\n�Է¹������ڿ� : %s \n\n", str);	
	printf("���ڿ� ���� = %d \n\n", strlen(str));
			
}