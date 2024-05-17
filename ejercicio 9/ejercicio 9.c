#include<stdio.h>
#include<stdlib.h>

/* Ingresar un número que se corresponde con una cantidad de días e indicar a cuántos
   segundos equivalen. */

int main (void)
{
    int dias = 0;
    long long int segundos = 0;
    printf("\t\tEjercicio 9\n\n");
    printf("Ingresar la cantidad de dias que quiere saber los segundos: ");
    scanf("%d", &dias);
    segundos =(long long int) dias * 24 * 60 * 60; /* calculando la cantidad de segundos
    multiplicando los dias por las horas por los minutos por hora por los segundos por minutos*/
    printf("\n\nLa cantidad de segundos en %d dias es %lld segundos.\n", dias, segundos);

    return 0;
}
