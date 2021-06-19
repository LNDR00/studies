#include <stdio.h>
#include <string.h>

main () {
	//variaveis
	char nome[55];
	int idade,resfriado,alimentado;
	float peso;
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	printf("Digite o peso (kg): ");
	scanf("%f", &peso);
	printf("Esta bem alimentado? (1) Sim ; (2) Nao : ");
	scanf("%d", &alimentado);
	printf("Esta resfriado? (1) Sim ; (2) Nao : ");
	scanf("%d", &resfriado);
	
	if (idade>=16 && idade<=69 && peso>=50 && alimentado==1 && resfriado==2) {
		printf("\n%s, voce esta APTO!\n", nome);
	}else {
		printf("\n%s, voce NAO esta apto!\n", nome);
	}
}
