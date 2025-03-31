#include <stdio.h>
int main(){ 
	int n;
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
	if (n <= 0){
		printf("ERROR : el numero ingresado no tiene valor para este ejercicio \n");

	}else{ 
		for(int i= 1; i <= n; i++){
		printf("%d", i);
		}
	printf("\n");
	} 

	return 0; 

 } 
