#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	// -------------------------------------------------------------
	// �� ������ ����ü ������ ���(node)�� ����
	// -------------------------------------------------------------
	struct EMP {
		char name[20];
		int age;
		char comAddr[40];
	} *ptr;

	// -------------------------------------------------------------
	// ����ü EMP ũ���� ���(node)�� �����ϸ�
	// (struct EMP *) ��  �̿��Ͽ� cast �����ش�.
	// -------------------------------------------------------------
	ptr = (struct EMP*)malloc(sizeof(struct EMP)); //�޸� �Ҵ��û

	if (ptr == NULL)
	{
		printf("Heap���� �Ҵ����! \n");
		exit(1);
	}

	printf("\n���� ? (�Է�����:end) ");
	gets(ptr->name);
	printf("���� ? ");
	scanf("%d%*c", &ptr->age);
	printf("�ּ� ? ");
	gets(ptr->comAddr);

	printf("\n%s, %d, %s \n\n", ptr->name, ptr->age, ptr->comAddr);
	free(ptr); //�޸� ����
}