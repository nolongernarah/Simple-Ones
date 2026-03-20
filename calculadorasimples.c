#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b;
	float resultado;
	char operacao;
	
	printf("Insira o primeiro número: ");
	scanf("%f", &a);
	printf("Insira o segundo número: ");
	scanf("%f", &b);
	
	printf("Digite a operação (+, -, *, /): ");
	scanf(" %c", &operacao);

	
	switch(operacao){
		case '+':
			resultado = a + b;
				printf("A soma desses números é %.2f", resultado);
				break;
				
				case '-':
					resultado = a - b;
					printf("A subtração desses números é %.2f", resultado);
					break;
					
					case '*':
						resultado = a * b;
						printf("A multiplicação desses números é %.2f", resultado);
						break;
						
						case '/':
							if(b != 0){
							resultado = a / b;
							printf("A divisão desses números é %.2f", resultado);
							}
							else{
								printf("Erro: Divisão por zero não existe");
							}
							break;
							
							default:
								printf("Operação inválida");
								break;
				
			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
