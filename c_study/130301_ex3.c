#include <stdio.h>

// -------------------------------------------------
//공용체 개념 
// -------------------------------------------------
typedef union ubox    // 공용체 ubox의 정의
{
	// 공용체는 멤버중 가장 큰것을 기준으로 할당됨
	// Ubox 공용체는 8 byte 할당됨
	int mem1;         // 4byte
	int mem2;         // 4byte
	double mem3;      // 8byte
} UBox;

int main(void)
{
	UBox ubx;    // 8바이트 메모리 할당
	// mem1 과 mem2 는 같이 4 byte 공유하므로
	// 상위의 4byte에 있는 같은 값을 가짐
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	// 총 8byte 이므로 상위 4byte + 하위 4 byte
	// 모두 사용하게 됨
	ubx.mem3 = 7.15;
	// 전체 8 byte에 걸쳐서 실수를 저장하였으므로
	// 상위 4 byte를 읽으면 알 수 없는 값이 출력됨
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}