#include <stdio.h>
int main(){ 
	int año;
	printf("Ingrese un año: \n");
	scanf("%d", &año);
	if ((año %4 ==0 )&& (año %100  !=0|| año %400 ==0))
	 { 
		printf("Este año es bisiesto \n");

	}else { 
	
		printf("Este año no es bisiesto \n");
	}

	return 0; 

 } 
