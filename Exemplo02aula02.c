/*EXEMPLO 02:Escreva um programa que leia o n�mero de chuteiras de uma lojadeesporte.
Osvalores dever�o ser inseridos por meio do teclado. 
Como sa�da, oprogramadeveapresentar o n�mero de chuteiras e suas marcas (marca A, marca BemarcaC).

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int marcaA=0,marcaB=0,marcaC=0;
	
	//inserindo os dados das marcas
	printf("\tDigite a quantidade de chuteiras em estoque: \n");
	printf("\nQuantidade da Marca(A):");	
	scanf("%i", &marcaA);
	printf("\nQuantidade da Marca(B):");
	scanf("%i", &marcaB);
	printf("\nQuantidade da Marca(C):");
	scanf("%i", &marcaC);
	printf("\n\n");	
	
	system("cls");
	
	
	printf("\tQunatidade de chuteiras em estoque:\n\n");
	printf("\tQuantidade da Marca(A): ");
	printf("\tQuantidade da Marca(B): ");
	printf("\tQuantidade da Marca(C):\n");
	printf("\t\t\t%i",marcaA );	
	printf("\t\t\t\t%i",marcaB );	
	printf("\t\t\t\t%i",marcaC );	

	
}
