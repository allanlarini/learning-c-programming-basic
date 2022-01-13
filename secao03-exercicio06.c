#include <stdio.h>

int main(){
	float salario_hora, horas, total_mes;
	setbuf(stdout, NULL);

	printf("Qual o valor recebido por hora? ");
	scanf("%f", &salario_hora);

	printf("Qual o total de horas trabalhadas no mes? ");
	scanf("%f", &horas);

	total_mes = (salario_hora*horas);

	printf("Com %.2f horas trabalhadas e %.2f por hora o total no mes eh de: %.2f ! ", horas, salario_hora, total_mes);

}
