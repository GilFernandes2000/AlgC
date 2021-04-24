#include <stdio.h>

int main (void) 
{
	char name[50]; //tamanho do array de caracteres name
	puts("What is your name?"); //imprime a frase
	scanf("%[^\n]", name); //usar desta maneira
	// scanf("%s",name) se só le ate ao primeiro espaço 
	printf("Hello %s !! \n",name); //imprime o nome do pessoa
	return 0;
}