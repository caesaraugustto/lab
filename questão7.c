#include <stdio.h>
int main () {
	float num,num2;
	printf("Digite dois numeros quaisquer para serem somados:\n");
	scanf("%f",&num);
	scanf("%f",&num2);
	printf("A soma dos numeros informados e: %.2f",(num+num2));	
	return(0);	
}
