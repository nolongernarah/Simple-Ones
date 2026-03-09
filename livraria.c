#include <stdio.h>

int main(){
	
	float valor, desconto, valorfinal;
	char estante;
	printf("Digite o valor do livro:\n");
	scanf("%f", &valor);
	printf("Informe a estante:\n");
	scanf(" %c", &estante);
	
	
	switch(estante){
		case 'A':
			desconto = valor * 0.1;
	    	valorfinal = valor - desconto;
	    	printf("o livro custa %f, a estante e a %c, o desconto e %f e o preco final é %f\n", valor, estante, desconto, valorfinal);
	    	break;
	    	
	    	case 'B':
			desconto = valor * 0.15;
	    	valorfinal = valor - desconto;
	    	printf("o livro custa %f, a estante e a %c, o desconto e %f e o preco final é %f\n", valor, estante, desconto, valorfinal);
	    	break;
	    	
	    	case 'C':
			desconto = valor * 0.2;
	    	valorfinal = valor - desconto;
	    	printf("o livro custa %f, a estante e a %c, o desconto e %f e o preco final e %f\n", valor, estante, desconto, valorfinal);
	    	break;
	}
	
	
	
	return 0;
}
