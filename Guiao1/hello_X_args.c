#include <stdio.h>

int main (int argc, char* argv[]) 
{
	if((argc == 1) || (argc > 3))
	{
		printf("\n Usage: prog_name first_name \n\n");
		printf("OR: prog_name first_name family_name\n");
	}
	if(argc == 2)
	{
		printf("Hello %s\n", argv[1]);
	}
	if(argc == 3)
	{
		printf("Hello %s %s\n",argv[1], argv[2]);
	}
}