#include <stdio.h>

// 1���� �迭�� �����ͷ� ����
main()
{
	int count[6] = { 100, 200, 300, 400, 500 };
	int i;
	int *ptr;

	// �迭�� �����ּ� ����
	ptr = count;
		
	printf("�迭�� �����ּ� = %p %p %p \n\n",
		count, &count[0], ptr);

	printf("÷�ڸ� �̿��� ���\n");
	for (i = 0; i < 5; i++) printf("%d, ", count[i]);
	printf("\n\n");

	printf("�迭������ �̿��� ������ ���� \n");
	for (i = 0; i < 5; i++) printf("%d, ", *(count + i));
	printf("\n\n");

	printf("������ ������ �̿��� ������ ����\n");
	for (i = 0; i < 5; i++) printf("%d, ", *(ptr + i));
	printf("\n\n");
}