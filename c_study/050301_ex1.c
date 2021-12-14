#include <stdio.h>

#define PRICE	 10

main()
{
	/* -----------------------------------------------
	   판매가격 구하는 프로그램 작성하기
	   -----------------------------------------------*/
	   // 입력 : 도매주문개수 - 단 수량이 최소 10개이상
	   // 판매가격 산출 방식
	   // 판매기준단가는 100원
	   // 수량이 100개 이상이면  10% DC
	   // 수량이 70개  이상이면   7% DC
	   // 수량이 50개  이상이면   5% DC
	   // 수량이 10개이상이면     3% DC
	   // --------------------------------------------------

	int order_num;

	while (1)
	{

		printf("주문하실 제품의 개수를 입력하십시오 (10개이상) ");
		scanf("%d", &order_num);

		if (order_num < 10) {
			printf("주문수량은 최소 10개이상이 되어야 합니다.\n\n");
		}
		else if ((order_num >= 10) && (order_num < 50)) {
			printf("판매가격 = %lf \n\n", PRICE * order_num * 0.97);
		}
		else if ((order_num >= 50) && (order_num < 70)) {
			printf("판매가격 = %lf \n\n", PRICE * order_num * 0.95);
		}
		else if ((order_num >= 70) && (order_num < 100)) {
			printf("판매가격 = %lf \n\n", PRICE * order_num * 0.93);
		}
		else if (order_num >= 100) {
			printf("판매가격 = %lf \n\n", PRICE * order_num * 0.9);
		}
			

	}
}
	
