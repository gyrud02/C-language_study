#include <stdio.h>

int cal_annual_salary(int salary, int num);
int cal_tax(int tot);

// call �� �Լ����� �ٽ� �Լ��� call �Ͽ� ���� ��
// ������� ��ȯ�ϴ� ����

main()
{
	int salary;

	while (1) {
		printf("���޿��� �Է��Ͻÿ� :  ");
		scanf("%d", &salary);

		printf("���޿� = %d, ��޿� = %d, ���� = %d \n\n", \
				salary, \
				cal_annual_salary(salary, 1), \
				cal_annual_salary(salary, 2));
	}
}

int cal_annual_salary(int salary, int num)
{
	int tot_salary;

	tot_salary = salary * 12;

	if (num == 1) return tot_salary;
	else return (cal_tax(tot_salary));
}

int cal_tax(int tot)
{
	if (tot > 1000000) return 30000;
	else return 10000;
}