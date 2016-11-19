#include <stdio.h>
#include <stdlib.h>

#define _HUMAN_PLAYER_

int ReadKey()
{
	while (1)
	{
		int ch = getchar();
		if (ch == 'w')//up
		{
			setbuf(stdin, NULL);
			return 1;
		}
		else
		{
			if (ch == 'z')//down
			{
				setbuf(stdin, NULL);
				return 2;
			}
			else
			{
				if (ch == 'a')//left
				{
					setbuf(stdin, NULL);
					return 3;
				}
				else
				{
					if (ch == 's')//right
					{
						setbuf(stdin, NULL);
						return 4;
					}
					else
					{
						printf("-----Invalid Input!-----\n-----Please type again!-----\n");
						setbuf(stdin, NULL);
					}
				}
			}
		}
	}
}
