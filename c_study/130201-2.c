#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1={1, 2};
	struct point pos2={100, 200};
	struct point *pptr=&pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	// 구조체 포인터를 참조하는 방법을 반드시
	// 익혀둘 것 - 사용빈도가 매우 높음
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr=&pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	printf("\n");
}