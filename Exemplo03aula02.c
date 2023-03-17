/*EXEMPLO 03: Escreva um programa em C que apresente a tabuada de umnúmeroqualquer,apresentando a tela
*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int indice=0, numero, multiplicacao=0;
	
	//inserindo os dados 
	printf("\nDigite um número inteiro:");	
	scanf("%i", &numero);
	
	printf("\nTabuada de %i\n", numero);
	
	for(indice=0;indice<=10;indice++){
		
		multiplicacao=numero*indice;
		
		printf("%i X %i = %i\n", numero, indice, multiplicacao);
		
	}
}
