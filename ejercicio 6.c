/*Ingresar por teclado un valor en Km y mostrarlo expresado en metros.*/
#include<stdio.h>

int main(void)
{
    int km,metros;
    printf("\t\tEjercicio 6\a\n");
    printf("Ingresar un valor en kilometros :");
    scanf("%d",&km);
    metros=km*1000;
    printf("\nEl valor de %d KM es igual a %d METROS",km,metros);
    return 0;
}
