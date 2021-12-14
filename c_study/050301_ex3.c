#include <stdio.h>

main()
{
	int age;
	int room_no;

	age = 40;


	if (age == 40) printf("나이가 %d보다 많습니다.\n\n", age);

	// 비교연산자 == 대신 대입연산자 = 가 쓰였음
	// 이문장은 age=40 대입문이 우선 실행되고,
	// if 문은 0 이 아니면 (거짓이 아니면) 실행이 되므로,
	// 정상적으로 printf문이 수행된다.
	if (age = 40) printf("나이가 %d보다 많습니다.\n\n", age);

	while (1) {
		printf("예약하려는 회의실번호를 입력하시오 (1~5) :  ");
		scanf("%d", &room_no);

		printf("\n\n");

		// 각 case 문에서 break가 빠지게 되면 ?
		switch (room_no) {
			case 1: printf("%d 회의실이 예약되었습니다.\n", room_no);
			case 2: printf("%d 회의실이 예약되었습니다.\n", room_no);
			case 3: printf("%d 회의실이 예약되었습니다.\n", room_no);
			case 4: printf("%d 회의실이 예약되었습니다.\n", room_no);
			case 5: printf("%d 회의실이 예약되었습니다.\n", room_no);
			default: printf("회의실은 1~5 사이의 값 선택해주세요 : 입력값  %d\n", room_no);
		}

		printf("\n\n");
	}

	/* 아쉽게도 C 언어의 switch 문에서는
	레이블로 숫자상수와 문자상수만이 가능하다
	그러므로 아래와 같이 사용이 불가하다.
	그러므로 위의 예제와 같이 범위를 나타내는
	조건식은 if ~ else 문을 사용하여야 한다.*/

	/* -- 사용불가 ---
	switch (order_num) {

		case order_num < 10 :
		printf("주문수량은 최소 10개이상이 되어야 합니다.\n\n");
		break;
		case  ((order_num >= 10) && (order_num < 50)) :
		printf("판매가격 = %lf \n\n", PRICE * order_num * 0.97);
		break;
		case  ((order_num >= 50) && (order_num < 70)) :
		printf("판매가격 = %lf \n\n", PRICE * order_num * 0.95);
		break;
		case ((order_num >= 70) && (order_num < 100)) :
		printf("판매가격 = %lf \n\n", PRICE * order_num * 0.93);
		break;
		default :
		printf("판매가격 = %lf \n\n", PRICE * order_num * 0.9);
		break;
	}
	*/
}