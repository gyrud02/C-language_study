#include <stdio.h>

main()
{
	// ��� �� ���������ڿ� ���� �����Ѵ�.
	// ���� �� �������ڿ� ���� �����Ѵ�.
	// ��Ʈ�����ڿ� 3�׿������� ������ ���� �����Ѵ�.

	int num1, num2, sum;

	num1 = 10; 	num2 = 20;
	sum = 0;

	// ���������
	printf("\n���������\n");
	printf("num1 = %d num2 = %d \n", num1, num2);
	printf("num1 + num2 = %d \n", num1 + num2);
	printf("num1 += num2 --> %d \n", num1 += num2);

	// ���������� 
	printf("\n����������\n");
	printf("num1 = %d \n", num1);
	printf("++num1 = %d \n", ++num1);
	printf("num1 = %d \n", num1);
	printf("num1++ = %d \n", num1++);
	printf("num1 = %d \n", num1);
	
	// �켱����
	printf("\n�켱���� ����\n");
	printf("num1=%d num2=%d \n", num1, num2);
	printf("num1=%d num2=%d, ��������=%d \n", num1, num2, (++num1 + num2++));

	// ��Ʈ����
	printf("\n��Ʈ������\n");
	num1 = 5, num2 = 6;

	// num1 = 0000 0101 (5)
	// num2 = 0000 0110 (6)
	// num1 & num2 
	// 0000 0101 (5)
	// 0000 0110 (6)
	// ---------
	// 0000 0100 (4)
	printf("num1 & num2 = %d \n", num1&num2);

	// 3�׿�����
	printf("\n3�׿�����\n");
	printf("num1 = %d \n", num1);
	printf("num1�� ���� 10���� ������ ? : %c \n", num1 < 10 ? 'Y' : 'N');
	
}