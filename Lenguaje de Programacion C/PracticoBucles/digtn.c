#include <stdio.h>
int main(){ 
	int n;
	int cont= 0; 	
	printf("Ingrese un numero para saber su numero de digitos que tenga: \n");
	scanf("%d", &n);
	if (n <= 0){
		printf("ERROR : el numero ingresado no tiene valor para este ejercicio \n");

	}else{ 
		while( n > 0){
			n /= 10;
			cont ++;
		}
	
	}
 	printf("El numero de digitos del numero %d son: \n", cont);

	return 0; 

 } 
