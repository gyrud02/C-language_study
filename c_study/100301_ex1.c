#include <stdio.h>

main()
{
	char ch, *cp;
	int num, *ip;
	float f_num, *fp;
	double d_num, *dp;

	// ������ ũ��
	printf("������ ũ�� = %3d %3d %3d %3d \n",
		sizeof(ch), sizeof(num),
		sizeof(f_num), sizeof(d_num));

	// ������ ������ ũ��
	printf("������ ������ ũ�� = %3d %3d %3d %3d \n",
		sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));

	d_num = 17.5;
	// �ڷ����� �ٸ� ������ �ּ� ����
	cp = &d_num;
	// d_num �� double ������ 8����Ʈ�� �Ҵ�
	// �Ǿ� ������, ���� �����ʹ� ���� ���ʿ�
	// ��ġ�ϹǷ� ���� ���ʿ� 1 ����Ʈ�� ����
	// �ϸ� 0.000000 �� �������� �ȴ�.
	printf("\ncp �� ������ �� = %lf \n\n", *cp);
}