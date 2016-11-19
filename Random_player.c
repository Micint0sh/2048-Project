#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "functions.h"

int random_player(int map[][4])
{
	int tmpmap[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tmpmap[i][j] = map[i][j];
		}
	}
	srand((unsigned)time(NULL));
	while (1)
	{
		int direction = rand() % 4;
		int tmp;
		switch (direction)
		{
		case 0://up
			tmp = ActionUp(tmpmap);
			if (tmp == 0) return direction;
			break;
		case 1://down
			tmp = ActionDown(tmpmap);
			if (tmp ==0) return direction;
			break;
		case 2://left
			tmp = ActionLeft(tmpmap);
			if (tmp ==0) return direction;
			break;
		case 3://right
			tmp = ActionRight(tmpmap);
			if (tmp == 0) return direction;
			break;
		default:
			break;
		}
	}
}
