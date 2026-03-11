#include <stdio.h>
#include <iso646.h> // Permite usar o 'or', ao invés de usar o operador lógico 'ou' (pipe)
#include <ctype.h> // Biblioteca para o tolower(), transformando qualquer letra maiúscula em minúscula
#include <locale.h> // Biblioteca para acentuação

int main(){
      
      setlocale(LC_ALL, "Portuguese");
      
      char a;
      
      printf("Digite uma letra:\n");
      scanf(" %c", &a);
      
      char minuscula = tolower(a);
      
      if(minuscula == 'a' or minuscula == 'e' or minuscula == 'i' or minuscula == 'o' or minuscula == 'u'){
	  printf(" %c é uma vogal.\n", a);	
	  }
	  
	  else{
	  	printf(" %c é uma consoante.\n", a);
	  }
      
      return 0;
	
}

