#include <stdio.h>

int Factorial(int n);

// Factorial
// n! = n * (n-1) * (n-2) * ... * 2 * 1
// ���ȣ��� �ڱ��ڽ��� �ٽ� ȣ���Ѵ�.

main()
{
	int num;

	while (1) {
		printf("factorial nbr =  ");
		scanf("%d", &num);

		printf("\n%d! = %d \n\n", num, Factorial(num));
	}
}

int Factorial(int n)
{
	printf("n = %d \n", n);

	if (n == 0) return 1;
	else
		return n * Factorial(n - 1);
}