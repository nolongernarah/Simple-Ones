#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("--- CARDÁPIO DA SEMANA ---\n");
    printf("1 - Segunda-feira\n");
    printf("2 - Terça-feira\n");
    printf("3 - Quarta-feira\n");
    printf("4 - Quinta-feira\n");
    printf("--------------------------\n");
    
    printf("Selecione o dia desejado: ");
    scanf("%d", &dia); 
    
    printf("\n>>> ");
    
	switch(dia){
		case 1:
			printf("Segunda: Hoje temos Frango Grelhado!");
			break;
			
			case 2:
			printf("Terça: Hoje temos Lasanha!");
			break;
			
			case 3:
			printf("Quarta: Hoje temos Feijoada!");
			break;
			
			case 4:
			printf("Quinta: Hoje temos Macarronada!");
			break;
			
			default:
				printf("Opção inválida! Escolha de 1 a 4.\n");
				break;
		
	}
}
