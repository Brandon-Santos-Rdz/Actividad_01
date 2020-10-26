#include <stdio.h>
#include <math.h>

//Escriba un programa que lea los valores del radio de un circulo y que imprima los valores del area y el perimetro.

int main (){
	
	float radio, area, perimetro;
	float pi=3.14;
	
	printf("De un valor al radio: \n");
	scanf("%f", &radio);
	
	area = pi * pow(radio,2);
	perimetro = 2 * pi * radio;
	
	printf("El area del circulo es: %.2f \n", area);
	printf("El perimetro del circulo es: %.2f \n", perimetro);
}
