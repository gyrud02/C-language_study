#include <stdio.h>

// -------------------------------------------------
//����ü ���� 
// -------------------------------------------------
typedef union ubox    // ����ü ubox�� ����
{
	// ����ü�� ����� ���� ū���� �������� �Ҵ��
	// Ubox ����ü�� 8 byte �Ҵ��
	int mem1;         // 4byte
	int mem2;         // 4byte
	double mem3;      // 8byte
} UBox;

int main(void)
{
	UBox ubx;    // 8����Ʈ �޸� �Ҵ�
	// mem1 �� mem2 �� ���� 4 byte �����ϹǷ�
	// ������ 4byte�� �ִ� ���� ���� ����
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	// �� 8byte �̹Ƿ� ���� 4byte + ���� 4 byte
	// ��� ����ϰ� ��
	ubx.mem3 = 7.15;
	// ��ü 8 byte�� ���ļ� �Ǽ��� �����Ͽ����Ƿ�
	// ���� 4 byte�� ������ �� �� ���� ���� ��µ�
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}