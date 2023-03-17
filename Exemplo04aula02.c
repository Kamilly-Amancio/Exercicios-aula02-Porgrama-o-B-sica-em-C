/*EXEMPLO 04: Escreva um programa em C que leia um número na base decimal 
e em seguida imprima esse mesmo número nas bases octal e hexadecimal.
*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int numero,j, auxiliar=0, indice=1, opcao=0, novoNumero=0;
	char hexadecimal_num[20];
	
do{
		system("cls");		
		printf("\t MENU\n");
		printf("\t1 - DECIMAL PARA OCTAL\n");
		printf("\t2 - DECIMAL PARA HEXADECIMAL \n");
		printf("\nOPCAO: ");
		scanf("%i", &opcao);
	
	switch(opcao)
	{
		
		case 1: 
			system("cls");
			printf("Digite um número decimal: ");
   			 scanf("%d", &numero);

  				  while (numero != 0) {
			        auxiliar = numero % 8;
	        			novoNumero += auxiliar * indice;
		        indice *= 10;
			    numero /= 8;
			    }
			    printf("O número em octal é: %d", novoNumero);
			    printf("\n");
		break;
	
		case 2: 
			system("cls");			    
			    printf("Digite um número em decimal: ");
  				scanf("%d", &numero);
		    sprintf(hexadecimal_num, "%x", numero);
		    printf("O número %d em hexadecimal é %s\n", numero, hexadecimal_num);
		break;

		

	}
		
}while(opcao!=2);

	
}
