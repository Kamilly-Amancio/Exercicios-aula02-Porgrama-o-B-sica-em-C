/*EXEMPLO 04: Desenvolva um programa em C para calcular e escrever a áreaeoperímetrodeum quadrado.
 Dados de entrada: tamanho do lado (tipo da variável: numéricointeiro, valor em centímetros).
 Essa conversão deve ser feita por meiodafunção printf().
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float lado, areaQuadrado=0, perimetroQuadrdao=0;
	int opcao=0;
	
		
do{
		system("cls");		
		printf("\t MENU\n");
		printf("\t1 - AREA DO QUADRADO\n");
		printf("\t2 - PERIMETRO DO QUADRDAO \n");
		printf("\nOPCAO: ");
		scanf("%i", &opcao);
	
	switch(opcao)
	{
		case 1:
			
			system("cls");
			printf("AREA DO QUADRDADO ");
			printf("\nDigite o lado do quadrado: ");
   			 scanf("%f", &lado);
				
				areaQuadrado=pow(lado,2);
				
			    printf("A area do quadrdao %.2f", areaQuadrado);
			    printf("\n");
			    getch();
		break;
		case 2:
			system("cls");
			printf("PERIMETRO DO QUADRDADO ");
			printf("\nDigite o lado do quadrado: ");
   			 scanf("%f", &lado);
				
				perimetroQuadrdao=lado*4;
				
			    printf("A perimetro do quadrdao %.2f", perimetroQuadrdao);
			    printf("\n");
		break;
			
		
	}

}while(opcao!=2);

	
	return 0;
}
