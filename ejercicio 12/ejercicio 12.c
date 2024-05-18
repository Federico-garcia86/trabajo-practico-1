/*Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra.*/
#include<stdio.h>

int main(void)
{
    int num,ult_cif;
    printf("\t\tejercicio 12\n");
    printf("ingresar un numero mayor a 10 ");
    scanf("%d",&num);
    ult_cif= num/10;
    printf("la ultima cifra del numero ingresado es %d",ult_cif);
    return 0;
}
