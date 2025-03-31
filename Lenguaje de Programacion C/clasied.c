#include <stdio.h>
int main(){ 
	int edad;
	printf("Ingrese su edad : \n");
	scanf("%d", &edad);
	if  (edad <= 0)
	 { 
		printf("ERROR: La edad ingresada no es valida para este ejercicio \n");

	}else if(edad <13){
		printf("Segun su edad ingresada, su rango etario es clasificado como Infancia \n");
  
	
	}else if(edad <= 17)
         { 

                printf("Segun su edad, su rango etario es clasificado como adolescencia \n");

	} else{ 
			printf("Segun su edad, su rango etario es clasificado como adulto \n");
			}

	return 0; 

 } 
