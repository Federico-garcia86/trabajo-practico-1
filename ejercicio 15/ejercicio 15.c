/* Una compañía de gaseosas comercializa tres productos: Cola, Naranja y limonada.
Realizar un programa que ingrese por teclado las ventas realizadas de cada producto y
su precio correspondiente, mostrar por pantalla un listado según el siguiente ejemplo:
PRODUCTO VENTAS PRECIO TOTAL
COLA       200    20   4000
NARANJA    500    10   5000
LIMONADA   550    30   1650
TOTAL                 10650  <- error es 25500*/
#include<stdio.h>

int main(void)
{
    printf("\t\tEjercicio 15\n");
    int precio_cola,precio_naranja,precio_limonada,cant_cola,cant_naranja,cant_limonada;
    int total_cola,total_naranja,total_limonada,total=0;
    printf("\nIngresar cantidad vendida de Cola:");
    scanf("%d",&cant_cola);
    printf("\nIngresar cantidad vendida de Naranja:");
    scanf("%d",&cant_naranja);
    printf("\nIngresar cantidad vendida de limonada:");
    scanf("%d",&cant_limonada);
    printf("\nIngresar precio de Cola vendida :");
    scanf("%d",&precio_cola);
    printf("\nIngresar precio de Naranja vendida :");
    scanf("%d",&precio_naranja);
    printf("\nIngresar precio de Limonada vendida :");
    scanf("%d",&precio_limonada);
    total_cola=precio_cola*cant_cola;
    total_naranja=precio_naranja*cant_naranja;
    total_limonada=precio_limonada*cant_limonada;
    total=total_cola+total_limonada+total_naranja;
    printf("\nPRODUCTO\tVENTAS\tPRECIO\tTOTAL");
    printf("\nCOLA\t\t%d\t%d\t%d",cant_cola,precio_cola,total_cola);
    printf("\nNARANJA\t\t%d\t%d\t%d",cant_naranja,precio_naranja,total_naranja);
    printf("\nLIMONADA\t%d\t%d\t%d",cant_limonada,precio_limonada,total_limonada);
    printf("\nTOTAL\t\t\t\t%d",total);
    return 0;
}
