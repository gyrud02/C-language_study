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
		printf("�������� �����Ͻʽÿ� (1:���ָ��� ~ 5:���ֺҸ�) :  ");
		scanf("%d", &isSatisfy);

		switch (isSatisfy) {
			case 1:
			case 2:
				printf("������ ��ǥ �߰��մϴ�. : �� %d ǥ\n ", ++itsAgree);
				participants++;
				break;
			case 3:
				printf("���뿡 ��ǥ �߰��մϴ�. : �� %d ǥ\n ", ++itsNormal);
				participants++;
				break;
			case 4:
			case 5:
				printf("�Ҹ��� ��ǥ �߰��մϴ�. : �� %d ǥ\n ", ++itsOpposite);
				participants++;
				break;
			default:
				printf("1 ~ 5 ������ �� �������ּ��� : �Է°�(%d)\n", isSatisfy);
				break;

		}
		printf("\n\n��������� ��ǥ����� ������ �� %d ���߿��� \n���� : %d �� ���� : %d ��  �Ҹ� %d �� �Դϴ�.\n\n",
			    participants, itsAgree, itsNormal, itsOpposite);
	}
}

