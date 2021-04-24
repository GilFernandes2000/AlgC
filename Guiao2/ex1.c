#include<stdio.h>


unsigned int f1(unsigned int n)
{
	unsigned int i,j,r = 0;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			r +=1;
		}
	}
	return r;
}
unsigned int f2 (unsigned int n)
{
	unsigned int i, j, r = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			r += 1;
		}
	}
	return r;
}

unsigned int f3 (unsigned int n)
{
	unsigned int i, j, r = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			r += j;
		}
	}
	return r;
}

unsigned int f4 (unsigned int n)
{
	unsigned int i, j, r = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j >= 1; j /= 10)
		{
			r += i;
		}
	}
	return r;
}

int main(void)
{	
	unsigned int n = 30;
	unsigned int m = n*2;
	unsigned int res1 = f4(n);
	unsigned int res2 = f4(m);
	int res = res2/res1;
	printf("Resultado de f(%d) = %d\n", n, res1);
	printf("Resultado de f(%d) = %d\n", m, res2);
	printf("Resultado de f(%d)/f(%d) = %d\n",m, n, res);

}
