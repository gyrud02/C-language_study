#include <stdio.h>
#include <string.h>

// person ����ü ����
struct person {
	char name[20];
	char phone[20];
	int age;
};

struct point {
	int xpos;
	int ypos;
};

// typedef �� �̿��� �ڷ��� ���̸� ����
typedef struct position {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("[%d  %d] \n\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void) {
	Point cen;
	printf("Input Current pos : ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	// -------------------------------------------------------
	// struct ���� ����
	// -------------------------------------------------------
	struct person man;
	struct person human[3];
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point *pptr = &pos1;
	
	strcpy(man.name, "������");
	strcpy(man.phone, "010-3333-4444");
	man.age = 25;

	printf("�̸� = %s \n", man.name);
	printf("��ȭ = %s \n", man.phone);
	printf("���� = %d \n\n", man.age);
	// -------------------------------------------------------
	// struct �迭 Ȱ�� �⺻��
	// -------------------------------------------------------
	for (int i = 0; i < 3; i++) {
		printf("�̸�, ��ȭ, ���� �Է� : ");
		scanf("%s %s %d", human[i].name, human[i].phone, &human[i].age);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("�̸� = %s \n", human[i].name);
		printf("��ȭ = %s \n", human[i].phone);
		printf("���� = %d \n\n", human[i].age);
	}
	printf("\n");
	// -------------------------------------------------------
	// struct ����ü ������ �̿�
	// -------------------------------------------------------
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	// ����ü �����͸� �����ϴ� ����� �ݵ��
	// ������ �� - ���󵵰� �ſ� ����
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	printf("\n");
	// -------------------------------------------------------
	// typedef �� �̿��� ����ü �̿�
	// -------------------------------------------------------
	Point curPos = GetCurrentPosition();

	ShowPosition(curPos);
}