/*Una empresa paga sueldos calculando el valor del sueldo b�sico por la cantidad de
horas trabajadas y un plus por antig�edad que corresponde al 2% por cada a�o
trabajado. El sueldo b�sico es de $4500. Se desea ingresar la cantidad de horas
trabajadas, la antig�edad y obtener el sueldo neto.*/
#include<stdio.h>

int main(void)
{
    float horas, antiguedad, sueldo_neto;
    printf("\t\tEjercicio 11\n\n");
    printf("Ingresar la cantidad de horas trabajadas: ");
    scanf("%f", &horas);
    printf("Ingresar cantidad de a�os trabajados: ");
    scanf("%f", &antiguedad);
    sueldo_neto = horas * 4500;
    sueldo_neto += 4500 * (antiguedad * 0.2);
    printf("El total a cobrar es de $%.2f", sueldo_neto);
    return 0;
}

