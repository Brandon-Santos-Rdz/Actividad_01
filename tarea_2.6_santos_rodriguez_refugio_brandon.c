#include <stdio.h>

//Escriba un programa que lea dos valores y que realice la division: a/b

int main (){
	
	float a;
	float b;
	
	printf("Division de: \n");
	scanf("%f", &a);
	printf("Entre: \n");
	scanf("%f", &b);
	
//en este caso la variable b no puede ser identica a cero, si lo es, debe de indicar error y no realizar la operacion.
	if (b==0){
		printf("ERROR, NO SE PUEDE DIVIDIR ENTRE CERO \n");
  	}
	
	else {
		printf("El resultado es: %.2f \n", a/b);
	}
	
	printf("Fin del programa");
}
