#include <stdio.h>

#define PRICE	 10

main()
{
	/* -----------------------------------------------
	   �ǸŰ��� ���ϴ� ���α׷� �ۼ��ϱ�
	   -----------------------------------------------*/
	   // �Է� : �����ֹ����� - �� ������ �ּ� 10���̻�
	   // �ǸŰ��� ���� ���
	   // �Ǹű��شܰ��� 100��
	   // ������ 100�� �̻��̸�  10% DC
	   // ������ 70��  �̻��̸�   7% DC
	   // ������ 50��  �̻��̸�   5% DC
	   // ������ 10���̻��̸�     3% DC
	   // --------------------------------------------------

	int order_num;

	while (1)
	{

		printf("�ֹ��Ͻ� ��ǰ�� ������ �Է��Ͻʽÿ� (10���̻�) ");
		scanf("%d", &order_num);

		if (order_num < 10) {
			printf("�ֹ������� �ּ� 10���̻��� �Ǿ�� �մϴ�.\n\n");
		}
		else if ((order_num >= 10) && (order_num < 50)) {
			printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.97);
		}
		else if ((order_num >= 50) && (order_num < 70)) {
			printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.95);
		}
		else if ((order_num >= 70) && (order_num < 100)) {
			printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.93);
		}
		else if (order_num >= 100) {
			printf("�ǸŰ��� = %lf \n\n", PRICE * order_num * 0.9);
		}
			

	}
}
	
