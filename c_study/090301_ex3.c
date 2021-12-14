#include <stdio.h>
#include <string.h>

//입력받은 문자열 뒤집기

main()
{
	char voca[100];
	int len = 0, i;
	char tmp;

	printf("input voca = ");

	scanf("%s",voca);

	len = strlen(voca);
	printf("string length is = %d \n\n", len);

	// 영단어 길이의 반에 해당하는 
	// 수만큼 두문자를 바꾸는 과정 거침
	for (i = 0; i < len/2; i++) {
		tmp = voca[i];
		voca[i] = voca[(len - i) - 1];
		voca[(len - i) - 1] = tmp;
	}

	printf("reverse voca = %s \n\n", voca);
}