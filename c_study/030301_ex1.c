#include <stdio.h>
#include <limits.h>

main()
{	
	/* -------------------------------------------------------
	   ANSI/ISO C ǥ��
	   ------------------------------------------------------- */
	// short�� �ּ� 16bit �� �Ǿ�� �ϸ�, long �� ��� int ���ٴ� ũ��,
	// 32bit ���ٴ� ���� �ʾƾ� �Ѵ�.
	// short should be a at least 16bits and long should be at least 
	// as long as int, but not smaller than 32bits

	typedef long int Lint;                 
	typedef short int Sint;                
	typedef unsigned short int USint;      

	// ���� ���� ���ο� �ڷ����� �������Ͽ� ����� �� �ִ�.
	// long int �� long �� ���� ũ���� �ǹ��̸�,
	// short int �� short ��� ���� �Ͱ� ���� �ǹ��Դϴ�.

	printf("Lint = %d byte \n", sizeof(Lint));
	printf("Sint = %d byte \n", sizeof(Sint));
	printf("USint = %d byte \n", sizeof(USint));
	printf("int = %d byte \n", sizeof(int));
	printf("long = %d byte \n\n", sizeof(long));

	// ���� ���� sizeof �����ڸ� �̿��Ͽ� ���� �ý��ۿ��� �� �ڷ�����
	// ũ�⸦ �˾ƺ� �� �ִ�. (�Ʒ��� �Ϲ����� ������ ũ��)
	// 16bit cpu - short int (16), int (16), long int (32)
	// 32bit cpu - short int (16), int (32), long int (32)
	// 64bit cpu - short int (16), int (32), long int (64)

	Lint num1 = 10;
	Sint num2 = 20;
	// ������ ���� ����Ǵ� ��ġ�� �� �� �ִ�.
	printf("num1�� �ּ� = %p  ����� �� = %d \n\n", num1, num1);
	printf("num2�� �ּ� = %p  ����� �� = %d \n\n", num2, num2);
}  
