#include <stdio.h>
#include <stdlib.h>

int main() {

float Celsius, Farenheit;
printf("Informe uma temperatura em Graus Farenheit:\n");
scanf("%f", &Farenheit);
Celsius=(5*(Farenheit-32)/9);
printf("A temperatura %.2f graus Farenheit corresponde a %.2f graus Celsius.", Farenheit, Celsius);	//A nota��o %.2f imprime apenas dois valores ap�s a virgula do n�mero real e aproxima de acordo com os n�meros restantes!


return 0;
}
