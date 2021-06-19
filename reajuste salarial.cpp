#include <stdio.h>
#include <string.h>

main () {
	//variaveis
	float salario,salarioCorrigido,reajuste;
	int codigo;
	
	//entrada
	printf("***** Super Contabil *****\n");
	printf("**************************\n");
	printf("Digite o salario: R$ ");
	scanf("%f", &salario);
	printf("Digite o codigo: " "\n(1) Auxiliar de escritorio \n(2) Secretario(a) \n(3) Cozinheiro(a) \n(4) Entregador(a) \n");
	scanf("%d", &codigo);
	
	//processamento
	if (codigo==1){
		reajuste=salario*0.07;
		salarioCorrigido=salario+reajuste;
		char cargo[50]="Auxiliar de escritorio";
	}else if (codigo==2){
		reajuste=salario*0.09;
		salarioCorrigido=salario+reajuste;
		char cargo[50]="Secretario(a)";
	}else if (codigo==3){
		reajuste=salario*0.05;
		salarioCorrigido=salario+reajuste;
		char cargo[50]="Cozinheiro(a)";
	}else if (codigo==4){
		reajuste=salario*0.12;
		salarioCorrigido=salario+reajuste;
		char cargo[50]="Entregador(a)";
	}else {
		printf("Codigo Invalido!!");
	}
		printf("Salario: R$ %0.2f\n", salario);
		printf("Reajuste: R$ %0.2f\n", reajuste);
		printf("Salario corrigido: R$ %0.2f\n", salarioCorrigido);
}
