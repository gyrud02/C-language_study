#include <stdio.h>

main()
{
	// iData �迭�� �ʱ�ȭ�ϰ�, 
	// �迭�� ��ҵ��� ��� ���� ����
	// ���ϱ� ����
	int iData[5] = { 1,2,3,4,5 };
	int i, sum = 0;

	for (i = 0; i < 5; i++)
		sum += iData[i];
	
	printf("sum = %d \n\n", sum);	
}