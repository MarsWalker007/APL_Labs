#include <termios.h>
#include <unistd.h>
#include <stdio.h>

int mygetch()
{
	struct termios oldt, newt;
	int c;
	tcgetattr ( STDIN_FILENO , & oldt );
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	c = getchar();
	tcsetattr (STDIN_FILENO, TCSANOW, &oldt) ;
	return c;
}
int main()
{
	int count = 0, hoard = 0, average = 0;
	unsigned char c;
	for (;;)
	{
		c = mygetch();
		if (c == 27)
		{
			c = mygetch();
			if (c == 79)
			{
				c = mygetch();
				if (c == 80)
					return 0;
			}
			else if (c == 91)
			{
				c = mygetch();
				if (c == 49)
				{
					c = mygetch();
					c = mygetch();
				}
				if (c >= 50 && c <= 54)
				{
					c = mygetch();
					if (c >= 48 && c <= 51)
						c = mygetch();
				}
			}
		}
		else
		{
			count++;
			hoard += (int) c;
			average = hoard / count;
		//	printf("Symbol %d: %c\n", count, c);
			printf("%c", average);
		}
	}
}
