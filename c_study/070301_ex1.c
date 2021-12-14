#include <stdio.h>

int cal_annual_salary(int salary, int num);
int cal_tax(int tot);

// call 한 함수에서 다시 함수를 call 하여 수행 후
// 결과값을 반환하는 예제

main()
{
	int salary;

	while (1) {
		printf("월급여를 입력하시오 :  ");
		scanf("%d", &salary);

		printf("월급여 = %d, 년급여 = %d, 세금 = %d \n\n", \
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