/*EXEMPLO 01: Escreva um programa em C para o Ministério da Saúde queoauxilienasinformações
 sobre a dengue em Manaus. Esse programa devereceberosdadossobre o número de casos suspeitos,
 o número de casos confirmados eonúmerodemortes, apresentando a tela

*/

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	int soma=0, casosSuspeitos,casosConfirmados,quantidadeMortes;
	
	
	//inserindo os dados dos casos
	printf("\tPreencha com as seguintes informações sobre a Dengue em Manaus: \n");
	printf("\nCasos Suspeitos:");	
	scanf("%i", &casosSuspeitos);
	printf("\nCasos Confirmados:");
	scanf("%i", &casosConfirmados);
	printf("\nQuantidade de Mortes:");
	scanf("%i", &quantidadeMortes);
	printf("\n\n");	
	
	//soma dos casos
	soma=((casosSuspeitos+casosConfirmados)+quantidadeMortes);
	
	printf("\tInformações sobre a dengue em Manaus: \n");
	printf("\nCasos Suspeitos: %i ",casosSuspeitos );
	printf("\n Casos Confirmados: %i ",casosConfirmados );
	printf("\nQuantidade de Mortes: %i \n",quantidadeMortes );	
	printf("\n Total de Dados: %i \n",soma );	
		
}

