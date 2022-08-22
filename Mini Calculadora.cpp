#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dividendo, divisor, quociente, resto;
	printf("Digite o valor do dividendo:\n");
	scanf("%d", &dividendo);
	
	printf("Digite o valor do divisor:\n");
	scanf("%d", &divisor);
	
	quociente = dividendo/divisor;
	resto=dividendo%divisor;
	
	printf("Quociente da divisão: %d \n", quociente);
	printf("Resto da divisão: %d \n", resto);
		
}
