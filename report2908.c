#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	for (int i=1; i<argc; i++)
	{
		printf("argc = %d, argv = %s \n", i, argv[i]);
		if (argv[i] = '-h') 
			printf("function key_print \n");
		if (argv[i] = '-f') 
			{if (argv[i+1] = '-m') printf("function one month \n");
				else printf("function one year \n");
			}
	}
	return 0;
}

