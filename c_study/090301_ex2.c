#include <stdio.h>

// ���̰� 5�� int �迭�� 5���� �Է¹���
// �Է°� �� �ִ밪, �ּҰ�, ���� ���ϱ�

main()
{
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("�Է� = ");
		//�迭��ҿ� Ư���� �Է¹��� �� & ������ �ٿ��� ��
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];

	//arr[0] (ù��° ��)�� max, min �̶� ����
	//sum ���� arr[0] �� �־��
	for (i = 1; i < 5; i++) {
		sum += arr[i];
		//max �� �Ǻ�
		if (max < arr[i]) max = arr[i];
		//min �� �Ǻ�
		if (min > arr[i]) min = arr[i];
	}
	printf("\n�ִ밪 = %d \n", max);
	printf("�ּҰ� = %d \n", min);
	printf("��  �� = %d \n\n", sum);
}
