#include <stdio.h>

main()
{
	char ch, *cp;
	int num, *ip;
	float f_num, *fp;
	double d_num, *dp;

	// 변수의 크기
	printf("변수의 크기 = %3d %3d %3d %3d \n",
		sizeof(ch), sizeof(num),
		sizeof(f_num), sizeof(d_num));

	// 포인터 변수의 크기
	printf("포인터 변수의 크기 = %3d %3d %3d %3d \n",
		sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));

	d_num = 17.5;
	// 자료형이 다른 변수의 주소 대입
	cp = &d_num;
	// d_num 은 double 형으로 8바이트가 할당
	// 되어 있으며, 실제 데이터는 제일 끝쪽에
	// 위치하므로 제일 앞쪽에 1 바이트를 참조
	// 하면 0.000000 을 가져오게 된다.
	printf("\ncp 가 참조한 값 = %lf \n\n", *cp);
}