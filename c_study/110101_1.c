#include <stdio.h>

swap(int , int );

// Call-By-Value ����
// �Ű������� ���� �־��ָ� ���� ���縸 �ȴ�.

main()
{
	int num1 = 10;
	int num2 = 20;

	printf("before swap num1=%d num2=%d \n\n", num1, num2);

	// �ΰ��� ���� �ٲٱ� ���� �Լ� ȣ��
	swap(num1, num2);
	printf("after  swap num1=%d num2=%d \n\n", num1, num2);
}

swap(int num1, int num2)
{
	int tmp;

	tmp = num1;
	num1 = num2;
	num2 = tmp;
	printf("inner  swap num1=%d num2=%d \n\n", num1, num2);
}