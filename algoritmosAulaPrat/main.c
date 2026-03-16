#include <stdio.h>

int primeira_funcao(){
	printf("chamada da função loco");
	return 0;
}

int func_aula_se() {
	
	int numA = 0;
	int numB = 0; 
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numA);
	printf("digite o segundo numero: ");
	scanf("%d", &numB);
	
	if(numA > numB){
		printf("Primeiro número maior\n");
	} else if(numA < numB){
		printf("segundo número maior fi\n");
	} else {
		printf("números iguais loco\n");
	}   
	if(numA % 2 == 0){
		printf("primeiro número par fi\n");
	} else if(numB % 2 == 0){
		printf("segundo número par fi\n");
	} else if(numA % 2 >= 1) {
		printf("primeiro número impar\n");
	} else if(numB % 2 >= 1){
		printf("segundo número impar\n");
 }
	
	
	return 0;
}
	 
int func_aula_switch() {
	int dia;
	
	printf("Deigite um número [1 à 3]: ");
	scanf("%d", &dia);
	
	switch(dia) {
		case 1:
			printf("Segunda-Feira\n");
			break;
		case 2:
			printf("Terça-Feira\n");
			break;
		case 3:
			printf("Quarta-Feira\n");
			break;
	}
	
	return 0;
}

int main(){
	
func_aula_se();

//func_aula_switch();


	
//	printf("Digite o primeiro número(tem que ser menor que o segundo): ");
//	scanf("%d", &numA);
//
//	printf("Digite o segundo número(tem que ser maior que o primeiro): ");
//	scanf("%d", &numB);
//	
//	if(numA < numB) {
//		printf("bom, vc tem um neuronio");
//	} else if(numA >= numB){
//		printf("eu falei que o segundo numero tem que ser maior ########");
//	} else{
//		printf("###########, SEGUE A ORIENTACAO");
//	}
		
	
	
	return 0;
}
