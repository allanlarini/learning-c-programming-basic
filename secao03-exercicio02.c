#include <stdio.h>

int main(){
	int qtd_min, qtd_max;
	float estoque_medio;

	setbuf(stdout, NULL);

	printf("Informe a quantidade minima: ");
	scanf("%d", &qtd_min);
	printf("Informe a quantidade maxima: ");
	scanf("%d", &qtd_max);

	estoque_medio=(qtd_min+qtd_max)/2;

	printf("O estoque medio eh de %.2f:", estoque_medio);

}
