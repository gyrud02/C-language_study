#include <stdio.h>

/* -----------------------------------------------------
�迭�� �Լ��� ���ڷ� ���޵Ǹ鼭�� �����Ϳ��� ���� ������
1) �迭�� �Լ��� ���ڷ� ���� �ؾ� �� ��� �迭�� �����ּ�
   �� ������ �ȴ�.
2) �迭�� �Լ��� �����ϰ��� �ϸ� �迭�� ���̸� �ݵ�� �Ѱ�
   �־�� �Ѵ�. (�׷��� ������ �����ʿ����� �迭�� ũ�⸦
   ����� �� ����.
3) �迭�� �Լ��� �Ѱ��ֱ� ���ؼ��� �Ʒ��� ������ ��� �����ϴ�.
   void arrFnc (int *param, int len)
   void arrFnc (int param[], int len)
-------------------------------------------------------- */

void func1(int *ptr);
void func2(int *ptr);

main()
{
	int count[5] = { 10,20,30,40,50 };

	printf("�迭�ּ� = %p, ũ�� = %d \n\n", count, sizeof(count));
	// ��Ȯ�� �迭�� ũ�� = sizeof(count) / sizeof(int)
	printf("��Ȯ�� ũ�� = %d \n\n", sizeof(count) / sizeof(int));

	// �Լ�ȣ�� 1
	func1(count);
	//�迭�� ��
	printf("�迭�� ��= ");
	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
		printf("%d, ", count[i]);
	printf("\n\n");

	// �Լ�ȣ�� 2
	func2(count, sizeof(count) / sizeof(int));

	//�迭�� ��
	printf("�迭�� ��= ");
	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
		printf("%d, ", count[i]);
	printf("\n\n");
}

void func1(int *ptr)
{
	printf("1. �迭�ּ� = %p, ũ�� = %d \n\n", ptr, sizeof(ptr));

	 for (int i=0; i<sizeof(ptr); i++)
		*(ptr + i) = *(ptr + i) + 50;
}

void func2(int *ptr, int len)
{
	printf("2. �迭�ּ� = %p, ũ�� = %d \n\n", ptr, len);

	for (int i = 0; i < len; i++)
		*(ptr + i) = *(ptr + i) + 50;
}