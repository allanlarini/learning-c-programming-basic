#include <stdio.h>

int main(){
	int multip_cent;
	float num_metros;
	setbuf(stdout, NULL);

	printf("Inserir tamanho em metros.");
	scanf("%f", &num_metros);

	multip_cent= num_metros*100;

	printf("A medida em centimetros eh de: %d", multip_cent);


}
