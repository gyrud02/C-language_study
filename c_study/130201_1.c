#include <stdio.h>

// 함수밖에 구조체 선언시 이하 모든 함수에서 사용 가능
struct point
{
	int xpos;
	int ypos;
}; 

main()
{
	struct point pos[3];

	for (int i = 0; i < 3; i++) {
		printf("x, y 좌표 입력 : ");
		scanf("%d %d", &pos[i].xpos, &pos[i].ypos);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("x = %d y = %d \n", pos[i].xpos, pos[i].ypos);
	}
	printf("\n");
}
