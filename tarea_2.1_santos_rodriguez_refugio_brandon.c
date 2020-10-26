#include <stdio.h>

//Desarrollar un programa que lea dos valores a y b, una vez que se hayan leido las variables, el programa debe de indicar cual es la variable mayor

int main (){
	
	int n1;
	int n2;
	
	printf("Inserte un numero: "); 
	scanf("%d",&n1);
	printf("Inserte otro numero: "); 
	scanf("%d",&n2);
	
	if (n1<n2){
		printf("El numero mayor es: %d",n2);
	}
	
	else {
		printf("El numero mayor es: %d",n1);
	}
}
