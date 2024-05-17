#include<stdio.h>

/* Ingresar un valor en segundos e indicar a cuántos días, horas, minutos y segundos
   equivale */
int main(void)
{
    long long int seg = 0, dias = 0, horas = 0, minutos = 0, segundos = 0, total = 0;
    printf("\t\t Ejercicio 10\n");
    printf("\nIngresar una cantidad de segundos para ver los dias, las horas, los minutos y los segundos: ");
    scanf("%lld", &seg);

    total = seg; // Almacena el valor total de segundos

    // Calcula los días
    dias = seg / (24 * 3600);
    seg = seg % (24 * 3600);

    // Calcula las horas
    horas = seg / 3600;
    seg = seg % 3600;

    // Calcula los minutos
    minutos = seg / 60;

    // Calcula los segundos restantes
    segundos = seg % 60;

    // Imprime el resultado
    printf("\nEl total de %lld segundos es %lld dias, %lld horas, %lld minutos y %lld segundos\n", total, dias, horas, minutos, segundos);

    return 0;
}
