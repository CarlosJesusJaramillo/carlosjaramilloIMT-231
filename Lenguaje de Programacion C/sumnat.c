#include <stdio.h>
int main(){ 
	int n;
	int suma = 0; 	
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
	if (n <= 0){
		printf("ERROR : el numero ingresado no tiene valor para este ejercicio \n");

	}else{ 
		for(int i= 1; i <= n; i++){
		suma += i;
		}
	printf("La suma entre los primeros numeros naturales de %d es : %d \n", n, suma);
	}
 

	return 0; 

 } 
