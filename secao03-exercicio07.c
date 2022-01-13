#include <stdio.h>

int main(){
	float altura, peso_ideal;
	setbuf(stdout, NULL);

	printf("Informe a sua altura, em metros: ");
	scanf("%f", &altura);

	peso_ideal = ((72.7*altura)-58);

	printf("O peso ideal eh de: %.2f", peso_ideal);
}
