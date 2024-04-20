//Programa que calcula el Area y el Perimetro de un cuadrado.
//Autor: Joel Tapia_Jxel117
#include <stdio.h>
#include <stdlib.h>
	
int main(){
	system("@cls");
	int lado;
	int perimetro, area;
	printf("Ingrese el lado del cuadrado: ");
	scanf("%i",&lado);
	getchar();
	perimetro = 4 * lado;
	area= lado * lado;

	printf("El perimetro del cuadrado es: %i\n", perimetro);
	printf("El area del cuadrado es: %i\n", area);

	printf("Pulsa cualquier tecla para cerrar: ");
	getchar();
return 0;
}