#include <stdio.h>
#include <string.h>

// person ����ü ����
struct person {
	char name[20];
	char phone[20];
	int age;
};

int main(void)
{
	// person type ���� man ����
	struct person man;

	strcpy(man.name, "������");
	strcpy(man.phone, "010-3333-4444");
	man.age = 25;

	printf("�̸� = %s \n", man.name);
	printf("��ȭ = %s \n", man.phone);
	printf("���� = %d \n\n", man.age);

	return 0;
}