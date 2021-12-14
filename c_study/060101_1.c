#include <stdio.h>

main()
{
	int num;

	while (1) 
	{
		printf("당신의 나이는 얼마입니까 ? ");
		scanf("%d",&num);

		if (num <= 19) {
			printf("당신의 미성년자이므로 입장하실 수 없습니다.\n");
			printf("안녕히 가십시오 !!\n\n");
			break;
		}
		else {
			printf("어서오십시오 반갑습니다.\n\n");
		}
	}
}