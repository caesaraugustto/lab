#include <stdio.h>
int main () {
	float nota1,nota2,nota3,nota4;
	printf("Digite as quatro notas bimestrais:\n");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	scanf("%f",&nota4);
	printf("A media das notas informadas e: %.2f",((nota1+nota2+nota3+nota4)/4));
}
