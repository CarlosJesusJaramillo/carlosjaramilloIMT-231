#include <stdio.h>
int main(){
	int numero;
	printf("Ingrese un numero entero \n"); 
	scanf("%d", &numero);
	if( numero > 0){
	printf("El numero ingresado es positivo \n"); 
	 }else if(numero < 0) {
		printf("El numero ingresado es negativo \n"); 
	
	 }else{
		printf("El numero ingresado es igual a 0 \n");

	 }
	return 0; 


 }
