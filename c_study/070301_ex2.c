#include <stdio.h>

int Factorial(int n);

// Factorial
// n! = n * (n-1) * (n-2) * ... * 2 * 1
// 재귀호출로 자기자신을 다시 호출한다.

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