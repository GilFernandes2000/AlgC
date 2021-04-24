#include <stdio.h>

int main (void) 
{
	char name[50]; //tamanho do array de caracteres name
	puts("What is your name?"); //imprime a frase
	fgets(name,50,stdin); //maneira segura para ler do teclado, tendo o limitador de chars
	printf("Hello %s !! \n",name); //imprime o nome do pessoa
	return 0;
}