

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero=0;
	int contador=0;
	float promedio;
	int acumulador=0;

    printf("Ingrese un n�mero: ");
	fflush(stdin);
	scanf("%d",&numero);
	while(numero!=999)
	{
		if(numero!=999)
		{
			acumulador=acumulador+numero;
			contador=contador+1;
		}
		else
		{
			break;
		}
	}

	promedio=acumulador/contador;
	printf("El promedio de los n�meros ingresados es:%f",promedio);
}
