#include <stdio.h>

//Desarrollar un programa que lea una variable de tipo entera value, indique si es un numero par o impar.
int main (){
	
	int a;
	printf("Introduce un numero: ");
	scanf("%d",&a);
	
	if (a%2==0){
		printf("El numero es par \n");
	}
	else {
		printf("El numero es impar \n");
	}
}
