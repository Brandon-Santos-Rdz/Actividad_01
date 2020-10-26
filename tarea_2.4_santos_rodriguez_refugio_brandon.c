#include <stdio.h>
#include <math.h>

//Suponga que se requeiren encontar las ra´ices del polinomio de segundo orden, "ax^2 + bx + c = 0". Desarrolle un programa que lea las tres variables y que obtenga el valor de las raices

int main (){
	
int a;
int b;
int c;

float x1;
float x2;

	printf("De un valor para a: \n");
	scanf("%d", &a);
	printf("De un valor para b: \n");
	scanf("%d", &b);
	printf("De un valor para c: \n");
	scanf("%d", &c);
	
	x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

	x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
	
	printf("El valor de x1 es: %.2f \n", x1);
	printf("El valor de x2 es: %.2f", x2);

}
