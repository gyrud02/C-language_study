#include <stdio.h>

main()
{
	// �Ʒ��� ���� �����ϴ� A�� Z�� ���ϴ� ���α׷� �ۼ�
	//    A   Z
	// +  Z   A
	// -----------
	//    9   9

	int A, Z;
	int result;

	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			// A�� Z�� ���� ���ٸ� for�� �ٽ� ����
			if (A == Z) continue;
			// A, Z �� ���ڸ�, �����ڸ��� �ְ� ����Ѵ�.
			result = (A * 10 + Z) + (Z * 10 + A);
			// printf("A = %d Z = %d result = %d \n", A, Z, result);
			// ���� ���� 99�� �Ǹ� ȭ�鿡 ����Ʈ �Ѵ�.
			if (result == 99)
				printf("%d%d + %d%d = %d \n\n", A, Z, Z, A, result);
		}
	}
}