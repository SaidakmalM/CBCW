#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int rez=0;
	opterr=0;
	while ((rez=getopt(argc,argv,"hf:m:")) !=-1)
	{
		switch (rez)
		{
			case 'h': printf("found argument \"h\".\n"); break;
			case 'f': printf("found argument \"f = %s\".\n", optarg); break;
			case 'm': printf("found argument \"m = %s\".\n", optarg); break;
			case '?': printf("Error argument found!\n"); break;
		}
	}
	return 0;
}

