#include <stdio.h>

// ��������
// int total = 0;

int AddTotal(int num);

main()
{
	int i, num;

	for (i = 0; i < 3; i++) {
		printf("�Է� %d =   ", i + 1);
		scanf("%d", &num);

		printf("���� = %d \n\n", AddTotal(num));
	}
}

int AddTotal(int num) {
	// ���������� ���ִ� ���
	static int total = 0;

	total += num;
	return total;
}