#include <stdio.h>

main()
{
	// ���� ���� �����ڿ� ���� ������ ����

	int num = 10;
	int *pnum = &num;

	printf("�ʱⰪ num=%d, pnum=%p \n\n", num, pnum);

	/*
	// �ּҴ� �ٲ��� �ʰ� ���븸 �ٲ��.
	(*pnum)++;
	printf("(*pnum)++ ���� �� : num=%d, pnum=%p \n\n", num, pnum);

	// ������ �ٲ��� �ʰ� �ּҸ� �ٲ��.
	*++pnum;
	printf("*++pnum ���� �� : num=%d, pnum=%p \n\n", num, pnum);
	*/

	// �ּҴ� �ٲ��� �ʰ� ���븸 �ٲ��.
	++*pnum;
	printf("++*pnum ���� �� : num=%d, pnum=%p \n\n", num, pnum);

	/*
	// ������ �ٲ��� �ʰ� �ּҸ� �ٲ��.
	*pnum++;
	printf("*pnum++ ���� �� : num=%d, pnum=%p \n\n", num, pnum);
	*/
}