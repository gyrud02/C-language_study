#include <stdio.h>
dummy_cnt;

dummy_func()
{
	printf("dummy_call (%d) \n\n", dummy_cnt++);
}

main()
{
	/* -------------------------------------------------- */
	// Debug Ȱ���ϱ�
	/* -------------------------------------------------- */
	// Ctrl+F5       : ����� ���� ����
	// F5            : ����� ���� ����
	// F9            : �ߴ���(breakpoint) ����/����
	// F10           : ���ν��� ���� ����
	// F11           : ���δ��� ����
	// Shift+F5      : �������� ����� ����
	// Ctrl+Shift+F5 : ����� �����
	// Ctrl+F10      : ���� Ŀ������ ����� ����
	int i = 10, j = 20, sum = 0;

	dummy_cnt = 0; // �������� �ʱ�ȭ

	i++;
	dummy_func();

	++j;
	dummy_func();

	sum += i + j++;  // sum = sum + i + j++
	dummy_func();

	// sum �� ���� �ָ��� ������ 
	printf("i=%d j=%d sum=%d \n\n", i, j, sum);
	dummy_func();
}

