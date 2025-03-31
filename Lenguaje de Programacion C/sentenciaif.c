#include <stdio.h>

int main(void) {
	int numberA=0;
	int numberB=0;
	printf("Ingrese un numero\n");
	 printf("Ingrese el primer numero: ");
    	scanf("%d", &numberA);
    	 printf("Ingrese el segundo numero: ");
    	scanf("%d", &numberB);
	if (numberA > numberB){
		printf("El numero mayor es %d\n", numberA);
	} else{
		printf("el numero mayor es %d\n", numberB);
	}
		if (numberA == numberB){
			printf("Los numeros ingresados son iguales\n");
		}else{
			printf("Los numeros ingresados no son iguales\n"); 
		} 
	return  0; 
}
    

