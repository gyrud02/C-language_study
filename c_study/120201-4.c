#include <stdio.h>
#include <string.h>

main()
{
	char *msg = "Over The Rainbow";
	char Ustr[100];
	char Lstr[100];
	int i = 0;

	// ���ڿ� �迭 NULL �ʱ�ȭ 
	memset(Ustr, 0x00, sizeof(Ustr));
	memset(Lstr, 0x00, sizeof(Lstr));

	printf("orgin = %s \n", msg);

	while (*msg != NULL) {
		Ustr[i] = toupper(*msg);
		Lstr[i] = tolower(*msg);
		msg++; 
		i++;
	}	
	printf("upper = %s \n", Ustr);
	printf("lower = %s \n\n", Lstr);
}
