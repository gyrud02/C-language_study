#include <stdio.h>

buffer_clear()
{
	while (getchar() != '\n');
}

main()
{
	// getchar() : �ѹ��ڸ� �Է¹޴� �Լ�
	// gets()    : ���ڿ� �Է��Լ�
	// scanf()   : �پ��� �ڷ����� �Է¹޴� �Լ�

	char gender, married;
	int salary;

	printf("���� ? (����:w, ����:m)  ");
	gender = getchar();

	// getchar() ù��° ���� 
	// �Ʒ��� getchar() �� Enter Key (return ��)�� �о�鿩��
	// ���������� ������ ���� ���� 

	// �������� ������ ���ؼ��� �Է¹��ۿ� ������ ������ �о�鿩
	// ������ ������ clear ���ִ� ���� �ʿ��ϴ�.

	// buffer_clear();
	
	printf("��ȥ ? (��ȥ:y, ��ȥ:n)  ");
	married = getchar();

	printf("���� ?  ");
	scanf("%d", &salary);

	printf("\n���� = %c  ��ȥ = %c  ���� = %d \n\n", gender, married, salary);
}