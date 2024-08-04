#include <stdio.h>
#include <conio.h>
# define N 6

int main(int argc, char **argv)
{
	FILE * open;
	char name[] = "temperature_small.csv";
	open = fopen(name, "r");
	if (open == NULL)
		return 1;
	int Y,M,D,H,Mt,T;
	int r,i=0,aver=0;
	char ch = 0;
	while((r=fscanf(open,"%d;%d;%d;%d;%d;%d;",&Y,&M,&D,&H,&Mt,&T))>0)
	{
		if (r<N)
		{
			do
			{
				putchar(ch);
				ch = fgetc(open);
			}
			while (ch != EOF && ch != '\n');
			ch = 0;
			printf("\n");
		}
		else
		{
			printf("%d = %d;%d;%d;%d;%d;%d\n",r,Y,M,D,H,Mt,T);
			i++;
			aver += T;
		}
	}
	aver = aver/i;
	printf("%d\n%d\n", i, aver);
	fclose(open);
	return 0;
}

