#include <stdio.h>
// -------------------------------------------------------------
// ���������� ���������� �ذ���� �ʴ� ��Ȳ
// -------------------------------------------------------------

// �������� 
char name[30];

char * ReadUserName(void)
{
	//char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

main()
{
	char * name1;
	char * name2;
	
	// ReadUserName() �Լ����� ���÷� ������ �迭�� �Էµ� ����
	// �Լ� ���� �� �Բ� �Ҹ��
	name1 = ReadUserName();
	printf("name1: %s \n", name1);

	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	
	// �������� Ȱ���ϴ� �κ�
	printf("\n-----------------------\n");
	printf("name1: %s \n", name1);
	printf("name2: %s \n\n", name2);
}