#include <stdio.h>
#include <string.h>

//�Է¹��� ���ڿ� ������

main()
{
	char voca[100];
	int len = 0, i;
	char tmp;

	printf("input voca = ");

	scanf("%s",voca);

	len = strlen(voca);
	printf("string length is = %d \n\n", len);

	// ���ܾ� ������ �ݿ� �ش��ϴ� 
	// ����ŭ �ι��ڸ� �ٲٴ� ���� ��ħ
	for (i = 0; i < len/2; i++) {
		tmp = voca[i];
		voca[i] = voca[(len - i) - 1];
		voca[(len - i) - 1] = tmp;
	}

	printf("reverse voca = %s \n\n", voca);
}