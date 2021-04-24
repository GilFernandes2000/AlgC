#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char filename[100];
	printf("Qual é o nome do ficheiro");
	int maxGraus = 180;
	double seno, coss;
	for(double grau = 0; grau <= maxGraus; grau += 5)
	{
		seno = sin(grau);
		coss = cos(grau);
	}
}

//	ACABARRRRR