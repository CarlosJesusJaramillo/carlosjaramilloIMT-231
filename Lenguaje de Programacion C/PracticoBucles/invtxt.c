#include <stdio.h>
int main(){ 
	char  text[30];
	int longtd= 0; 	
	printf("Ingrese una palabra: \n");
	scanf("%s", text);
	while(text[longtd ] != '\0' )
	{ 
		longtd++;
	}
 	printf("Palabra invertida: \n ");
	for(int i = longtd - 1;  i >= 0; i--)
	{ 
		printf("%c",text[i]);
	}
	printf("\n");
	return 0; 

 } 
