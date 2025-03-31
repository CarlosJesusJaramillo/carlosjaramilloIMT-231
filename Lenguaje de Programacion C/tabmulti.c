#include <stdio.h>
int main(){ 
	int n;
	int suma = 0; 	
	printf("Ingrese un numero para la tabla de multiplicar: \n");
	scanf("%d", &n);
	if (n <= 0){
		printf("ERROR : el numero ingresado no tiene valor para este ejercicio \n");

	}else{ 
		for(int i= 1; i <= 10; i++){
		printf("%d x %d = %d \n", n,i, n * i);
		}
	
	}
 

	return 0; 

 } 
