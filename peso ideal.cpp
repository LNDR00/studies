#include <stdio.h>
#include <string.h>

main () {
	//variaveis
	float peso,altura;
	char sexo[3];
	
	//entrada
	printf("Qual a altura (m)? ");
	scanf("%f", &altura);
	printf("Qual o sexo? M-Masculino ; F-Feminino : ");
	scanf("%s", &sexo);
	
	//processamento e saida
	if (strcmp(sexo,"M") || strcmp(sexo,"m")){
		peso=(72.7*altura)-58;
		printf("\nResultado do peso ideal: %0.2f kg",peso);
	}else if (strcmp(sexo,"F")|| strcmp(sexo,"f")){
		peso=(62.1*altura)-44.7;
		printf("\nResultado do peso ideal: %0.2f kg",peso);
	}else {
		printf("\nOpcao invalida!");
	}
}
