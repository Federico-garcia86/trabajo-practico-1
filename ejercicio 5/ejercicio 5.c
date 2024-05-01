/*Crea un programa que, dados dos valores para a y b, los intercambie.*/
#include<stdio.h>

int main(void)
{
    int a,b,aux;
    printf("\t\t ejercicio 4\a");
    printf("\nIngresar un valor para a: ");
    scanf("%d",&a);
    printf("\nIngresar un valor para b: ");
    scanf("%d",&b);
    aux=a;// usar valor aux para guardar el valor de a
    a=b;  // aca se cambian los valores
    b=aux; // aca el valor de a (que estaba en aux) se guarda en b
    printf("\nEl valor de a ahora vale %d",a);
    printf("\nEl valor de b ahora vale %d",b);

    return 0;
}
