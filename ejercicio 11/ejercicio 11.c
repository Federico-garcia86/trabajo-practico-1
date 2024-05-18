/*Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de
horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año
trabajado. El sueldo básico es de $4500. Se desea ingresar la cantidad de horas
trabajadas, la antigüedad y obtener el sueldo neto.*/
#include<stdio.h>

int main(void)
{
    float horas, antiguedad, sueldo_neto;
    printf("\t\tEjercicio 11\n\n");
    printf("Ingresar la cantidad de horas trabajadas: ");
    scanf("%f", &horas);
    printf("Ingresar cantidad de años trabajados: ");
    scanf("%f", &antiguedad);
    sueldo_neto = horas * 4500;
    sueldo_neto += 4500 * (antiguedad * 0.2);
    printf("El total a cobrar es de $%.2f", sueldo_neto);
    return 0;
}

