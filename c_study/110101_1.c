#include <stdio.h>

swap(int , int );

// Call-By-Value 예제
// 매개변수로 값을 넣어주면 값을 복사만 된다.

main()
{
	int num1 = 10;
	int num2 = 20;

	printf("before swap num1=%d num2=%d \n\n", num1, num2);

	// 두개의 값을 바꾸기 위해 함수 호출
	swap(num1, num2);
	printf("after  swap num1=%d num2=%d \n\n", num1, num2);
}

swap(int num1, int num2)
{
	int tmp;

	tmp = num1;
	num1 = num2;
	num2 = tmp;
	printf("inner  swap num1=%d num2=%d \n\n", num1, num2);
}