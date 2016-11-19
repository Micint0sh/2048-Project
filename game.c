#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "functions.h"


int main(void)
{
	int map[4][4];
	int tmp;
	int flag = 0;
	int seed = 0;
	printf("Please input random seed:");
	scanf("%d", &seed);
	setbuf(stdin, NULL);
	//srand((unsigned)time(NULL));
	srand(seed);
	Initialize(map);
	while (1)
	{
		int i, j;
		while (1)
		{
			i = rand() % 4;
			j = rand() % 4;
			if (map[i][j] == 0)
			{
				map[i][j] = 2;
				break;
			}
		}
		PrintMap(map);
		if (CheckLose(map) == 1)
		{
			printf("-------You Lose-------\n");
			int count = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					count += map[i][j];
				}
			}
			printf("-----Your Score is %d !-----\n", count);
			break;
		}
		while (1)
		{
			flag = 0;
			switch (ReadKey())
			{
			case 1://up

				tmp = ActionUp(map);
				if (tmp == 1)
				{
					printf("\n\nInvalid Input\n");
					flag = 1;
				}
				break;


			case 2://down


				tmp = ActionDown(map);
				if (tmp == 1)
				{
					printf("\n\nInvalid Input\n");
					flag = 1;
				}
				break;


			case 3://left


				tmp = ActionLeft(map);
				if (tmp == 1)
				{
					printf("\n\nInvalid Input\n");
					flag = 1;
				}
				break;


			case 4://right


				tmp = ActionRight(map);
				if (tmp == 1)
				{
					printf("\n\nInvalid Input\n");
					flag = 1;
				}
				break;


			default:
				break;
			}
			if (flag == 1)
			{
				continue;
			}
			else
			{
				break;
			}
			}
		}
	return 0;
	}
