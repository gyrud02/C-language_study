#include <stdio.h>

// �Լ��ۿ� ����ü ����� ���� ��� �Լ����� ��� ����
struct point
{
	int xpos;
	int ypos;
}; 

main()
{
	struct point pos[3];

	for (int i = 0; i < 3; i++) {
		printf("x, y ��ǥ �Է� : ");
		scanf("%d %d", &pos[i].xpos, &pos[i].ypos);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("x = %d y = %d \n", pos[i].xpos, pos[i].ypos);
	}
	printf("\n");
}
