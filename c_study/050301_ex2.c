#include <stdio.h>

main()
{

	int isSatisfy = 0;
	int participants = 0;
	int itsAgree = 0;
	int itsNormal = 0;
	int itsOpposite = 0;

	while (1)
	{
		printf("만족도를 선택하십시오 (1:아주만족 ~ 5:아주불만) :  ");
		scanf("%d", &isSatisfy);

		switch (isSatisfy) {
			case 1:
			case 2:
				printf("만족에 한표 추가합니다. : 총 %d 표\n ", ++itsAgree);
				participants++;
				break;
			case 3:
				printf("보통에 한표 추가합니다. : 총 %d 표\n ", ++itsNormal);
				participants++;
				break;
			case 4:
			case 5:
				printf("불만에 한표 추가합니다. : 총 %d 표\n ", ++itsOpposite);
				participants++;
				break;
			default:
				printf("1 ~ 5 사이의 값 선택해주세요 : 입력값(%d)\n", isSatisfy);
				break;

		}
		printf("\n\n현재까지의 투표결과는 참석자 총 %d 명중에서 \n만족 : %d 명 보통 : %d 명  불만 %d 명 입니다.\n\n",
			    participants, itsAgree, itsNormal, itsOpposite);
	}
}

