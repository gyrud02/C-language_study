#include <stdio.h>

main()
{
	int num;

	while (1) 
	{
		printf("����� ���̴� ���Դϱ� ? ");
		scanf("%d",&num);

		if (num <= 19) {
			printf("����� �̼������̹Ƿ� �����Ͻ� �� �����ϴ�.\n");
			printf("�ȳ��� ���ʽÿ� !!\n\n");
			break;
		}
		else {
			printf("����ʽÿ� �ݰ����ϴ�.\n\n");
		}
	}
}