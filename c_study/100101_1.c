#include <stdio.h>

main()
{
	// ����Ʈ ���� ���� �� Ȱ��
	// �ڷ��� *������; (��) int *pnum;

	int num1 = 100, num2 = 100;
	int *pnum;

	// pnum �� num1 �� �ּҸ� ����Ų��.
	pnum = &num1;
	// (*pnum) --> pnum �ּ��� �������� ..
	// pnum �ּ��� ���뿡 30�� ���� pnum �� �����Ѵ�.
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1 = %d num2 = %d \n\n", num1, num2);

}