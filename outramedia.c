#include <stdio.h>

int main(){
	
	float n1, n2;
	
	printf("Digite a sua primeira nota parcial:\n");
	scanf("%f", &n1);
	printf("Digite a sua segunda nota parcial:\n");
	scanf("%f", &n2);
	
	float media = (n1 + n2)/2;
	
	if(media == 10){
		printf("Aprovado com distinção");
	}
	
	else if(media >= 7){
		printf("Aprovado");
	}
	
	else{
		printf("Reprovado");
	}
	
	return 0;
}
