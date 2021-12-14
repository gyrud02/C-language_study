#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("[%d  %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void) {
	Point cen;
	printf("Input Current pos : ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

main()
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
}