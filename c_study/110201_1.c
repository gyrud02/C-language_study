#include <stdio.h>

// double pointer ����

main()
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	// printf �ɼ�
	// %p = void * �������� �ּҰ�
	// %g = float, %G = double
	printf("%9p %9p \n", ptr, *dptr);  // num�� �ּҰ�
	printf("%9g %9g \n", num, **dptr); // num�� ��

	ptr2 = *dptr; // ptr2 = ptr�� ����
	*ptr2 = 10.99;

	printf("%9g %9g \n\n", num, **dptr);
}