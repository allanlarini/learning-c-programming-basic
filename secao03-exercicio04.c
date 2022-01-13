#include <stdio.h>

int main(){
	int num1, num2, soma;

	setbuf(stdout, NULL);

	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);

	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	soma=num1+num2;

	printf("A soma dos dois numeros eh: %d", soma);


}
