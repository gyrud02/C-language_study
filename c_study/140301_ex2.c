#include <stdio.h>
#include <stdlib.h>

// malloc() �Լ� �̿�� <stdlib.h> �������־�� ��
// �����޸𸮸� �̿��Ͽ� ���ð� ���������� �ذ����
// �ʴ� ������ �ذ�
char * ReadUserName(void)
{
	// �������� �޸𸮸� �Ҵ��Ѵ�.
	// �Ҵ�� �޸𸮴� ���α׷��� ����ǰų� ���������
	// free() �� ���־�߸� ������ �ȴ�.
	char * name = (char *)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;

	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("\n-------------------------\n");
	printf("again name1: %s \n", name1);
	printf("again name2: %s \n\n", name2);
	// �ݵ�� ������ ����Ŀ��� ��������� 
	// free() ���־�߸� ������ �ȴ�.
	free(name1);
	free(name2);
}