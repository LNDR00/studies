#include <stdio.h>
#include <string.h>

main(){
	//variaveis
	float peso,altura,imc;
	
	//entrada
	printf("Qual seu peso (kg)? ");
	scanf("%f",&peso);
	printf("Qual sua altura (m)? ");
	scanf("%f",&altura);
	
	//procesamento
	imc=peso/(altura*altura);
	
	//saida
	printf("\nSeu IMC: %0.2f kg/m2",imc);
}
