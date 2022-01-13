#include <stdio.h>

int main(){
	int num1, num2, soma, multiplicacao;

	setbuf(stdout, NULL);

	//entrada
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1 );

	printf("Informe o segundo numero: ");
	scanf("%d", &num2 );

	//processamento
	soma=num1+num2;
	multiplicacao=soma*num1;

	//saida
	printf("O resultado da multiplicacao eh: ", multiplicacao);

}
