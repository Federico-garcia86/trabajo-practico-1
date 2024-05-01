/*Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
división (para esta última suponer divisor distinto de cero)*/
#include<stdio.h>

int main(void)
{
     ;
    float res,valor1,valor2;
    printf("\t\tEjercicio 7\n\a");
    printf("\nIngrese el primer valor:");
    scanf("%f",&valor1);
    printf("\nIngrese el segundo valor dintinto de 0:");
    scanf("%f",&valor2);
    res=valor1+valor2;
    printf("\n %.f + %.f = %.2f",valor1,valor2,res);
    res=valor1-valor2;
    printf("\n %.f - %.f = %.2f",valor1,valor2,res);
    res=valor1*valor2;
    printf("\n %.f x %.f = %.2f",valor1,valor2,res);
    res=valor1/valor2;
    printf("\n %.f / %.f = %.2f",valor1,valor2,res);
    return 0;
}
