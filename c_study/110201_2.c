#include <stdio.h>

// int (*compare) (int n1, int n2) ���·� �Լ� �����͸� �ް�
// ȣ���� �Ѵ�. �Լ� ����κ��� �� ������ ��
int WhatIsBigger(int num1, int num2, int (*compare) (int n1, int n2))
{
	return compare(num1, num2);
}

int Bigger(int num1, int num2)
{
	if (num1 > num2) return num1;
	else if (num1 < num2) return num2;
	else return 0;
}

main()
{
	int num1, num2;
	int big_nbr;

	printf("�ΰ� �Է� =  ");
	scanf("%d  %d", &num1, &num2);

	// �Լ������� ���� ȣ�� Bigger
	big_nbr = WhatIsBigger(num1, num2, Bigger);
	
	if (big_nbr == 0) printf("%d �� %d �� �������̴�. \n\n", num1, num2);
	else printf("%d �� %d �μ� �� ū ���� %d �̴�.\n\n", num1, num2, big_nbr);
}