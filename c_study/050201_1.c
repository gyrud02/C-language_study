#include <stdio.h>

main()
{
	int num;

	
	printf("홀수와 짝수 판별 : ");
	scanf("%d", &num);

	(num % 2) == 0 ? printf("짝수입니다. \n\n") : printf("홀수입니다. \n\n");
	
}