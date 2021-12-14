#include <stdio.h>
#include <string.h>

// person 구조체 선언
struct person {
	char name[20];
	char phone[20];
	int age;
};

int main(void)
{
	// person type 변수 man 선언
	struct person man;

	strcpy(man.name, "현승일");
	strcpy(man.phone, "010-3333-4444");
	man.age = 25;

	printf("이름 = %s \n", man.name);
	printf("전화 = %s \n", man.phone);
	printf("나이 = %d \n\n", man.age);

	return 0;
}