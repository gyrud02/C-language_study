#include <stdio.h>

main()
{
	// �迭������ �����ͻ���̴�. ���� �迭���� �ڽ���
	// �����ּҸ� �����ϴ� ���� ������� �ʴ´�.

	char str[50] = "yeungjin cyber";
	char *ptr;

	// �迭�� �����ּ� ����
	ptr = str;

	while (*ptr) {
		printf("%c ", *ptr++);
		// ���� - �迭������ ������ ����̹Ƿ�
		// �ּҸ� ������ �� ����
		// printf("%c ", *str++);
	}
	printf("\n\n");
}