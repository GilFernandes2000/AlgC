#include <math.h>
#include <stdio.h>

int main(void)
{
	printf("i i*i raiz(i)\n");
	for(int i = 1; i <= 12; i++)
	{
		int qua = i*i;
		double raiz = sqrt(i);
		printf("%d %d %4.2lf\n",i,qua,raiz);
	}
	return 0;
}