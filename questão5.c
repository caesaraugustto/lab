#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char text1[30];
	char text2[30]; 
	printf("Digite duas palavras:\n");
	scanf("%s",&text1);
	scanf("%s",&text2);
	printf("As palavras digitadas foram: %s",text1);
	printf("A segunda letra da string e: %c\n",text1[1]);
	printf("%s\n",text2);	
	printf("A segunda letra da string e: %c\n",text2[1]);	 	
	return(0);	
}
