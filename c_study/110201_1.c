#include <stdio.h>

// double pointer 예제

main()
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	// printf 옵션
	// %p = void * 포인터의 주소값
	// %g = float, %G = double
	printf("%9p %9p \n", ptr, *dptr);  // num의 주소값
	printf("%9g %9g \n", num, **dptr); // num의 값

	ptr2 = *dptr; // ptr2 = ptr과 동일
	*ptr2 = 10.99;

	printf("%9g %9g \n\n", num, **dptr);
}