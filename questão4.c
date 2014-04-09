#include <stdio.h>
#include <string.h>
int main () {
	char carac;
	printf("Digite um caracter:\n");
	scanf("%c",&carac);
	printf("O caracter informado foi: %c\n",carac);
	printf("e o codigo ASCII correspondente e: %d",carac);	
	return(0);	
}
