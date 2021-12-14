#include <stdio.h>
#include <string.h>

// person 구조체 선언
struct person {
	char name[20];
	char phone[20];
	int age;
};

struct point {
	int xpos;
	int ypos;
};

// typedef 을 이용한 자료형 새이름 지정
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
	// struct 변수 선언
	// -------------------------------------------------------
	struct person man;
	struct person human[3];
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point *pptr = &pos1;
	
	strcpy(man.name, "현승일");
	strcpy(man.phone, "010-3333-4444");
	man.age = 25;

	printf("이름 = %s \n", man.name);
	printf("전화 = %s \n", man.phone);
	printf("나이 = %d \n\n", man.age);
	// -------------------------------------------------------
	// struct 배열 활용 기본형
	// -------------------------------------------------------
	for (int i = 0; i < 3; i++) {
		printf("이름, 전화, 나이 입력 : ");
		scanf("%s %s %d", human[i].name, human[i].phone, &human[i].age);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("이름 = %s \n", human[i].name);
		printf("전화 = %s \n", human[i].phone);
		printf("나이 = %d \n\n", human[i].age);
	}
	printf("\n");
	// -------------------------------------------------------
	// struct 구조체 포인터 이용
	// -------------------------------------------------------
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	// 구조체 포인터를 참조하는 방법을 반드시
	// 익혀둘 것 - 사용빈도가 매우 높음
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	printf("\n");
	// -------------------------------------------------------
	// typedef 을 이용한 구조체 이용
	// -------------------------------------------------------
	Point curPos = GetCurrentPosition();

	ShowPosition(curPos);
}