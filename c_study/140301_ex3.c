#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	// -------------------------------------------------------------
	// 힙 영역에 구조체 형태의 노드(node)를 생성
	// -------------------------------------------------------------
	struct EMP {
		char name[20];
		int age;
		char comAddr[40];
	} *ptr;

	// -------------------------------------------------------------
	// 구조체 EMP 크기의 노드(node)를 생성하며
	// (struct EMP *) 를  이용하여 cast 시켜준다.
	// -------------------------------------------------------------
	ptr = (struct EMP*)malloc(sizeof(struct EMP)); //메모리 할당요청

	if (ptr == NULL)
	{
		printf("Heap영역 할당오류! \n");
		exit(1);
	}

	printf("\n성명 ? (입력종료:end) ");
	gets(ptr->name);
	printf("나이 ? ");
	scanf("%d%*c", &ptr->age);
	printf("주소 ? ");
	gets(ptr->comAddr);

	printf("\n%s, %d, %s \n\n", ptr->name, ptr->age, ptr->comAddr);
	free(ptr); //메모리 해제
}