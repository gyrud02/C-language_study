#include <stdio.h>

main()
{
	int age;
	int room_no;

	age = 40;


	if (age == 40) printf("���̰� %d���� �����ϴ�.\n\n", age);

	// �񱳿����� == ��� ���Կ����� = �� ������
	// �̹����� age=40 ���Թ��� �켱 ����ǰ�,
	// if ���� 0 �� �ƴϸ� (������ �ƴϸ�) ������ �ǹǷ�,
	// ���������� printf���� ����ȴ�.
	if (age = 40) printf("���̰� %d���� �����ϴ�.\n\n", age);

	while (1) {
		printf("�����Ϸ��� ȸ�ǽǹ�ȣ�� �Է��Ͻÿ� (1~5) :  ");
		scanf("%d", &room_no);

		printf("\n\n");

		// �� case ������ break�� ������ �Ǹ� ?
		switch (room_no) {
			case 1: printf("%d ȸ�ǽ��� ����Ǿ����ϴ�.\n", room_no);
			case 2: printf("%d ȸ�ǽ��� ����Ǿ����ϴ�.\n", room_no);
			case 3: printf("%d ȸ�ǽ��� ����Ǿ����ϴ�.\n", room_no);
			case 4: printf("%d ȸ�ǽ��� ����Ǿ����ϴ�.\n", room_no);
			case 5: printf("%d ȸ�ǽ��� ����Ǿ����ϴ�.\n", room_no);
			default: printf("ȸ�ǽ��� 1~5 ������ �� �������ּ��� : �Է°�  %d\n", room_no);
		}

		printf("\n\n");
	}

	/* �ƽ��Ե� C ����� switch ��������
	���̺�� ���ڻ���� ���ڻ������ �����ϴ�
	�׷��Ƿ� �Ʒ��� ���� ����� �Ұ��ϴ�.
	�׷��Ƿ� ���� ������ ���� ������ ��Ÿ����
	���ǽ��� if ~ else ���� ����Ͽ��� �Ѵ�.*/

	/* -- ���Ұ� ---
	switch (order_num) {

		case order_num < 10 :
		printf("�ֹ������� �ּ� 10���̻��� �Ǿ�� �մϴ�.\n\n");
		break;
		case  ((order_num >= 10) && (order_num < 50)) :
		printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.97);
		break;
		case  ((order_num >= 50) && (order_num < 70)) :
		printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.95);
		break;
		case ((order_num >= 70) && (order_num < 100)) :
		printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.93);
		break;
		default :
		printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.9);
		break;
	}
	*/
}