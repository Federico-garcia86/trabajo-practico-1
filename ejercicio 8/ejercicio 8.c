#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Ingresar dos valores que corresponden a la base y altura de un triángulo y obtener: el
perímetro y la superficie.*/
int main(void)
{
    float base=0,altura=0 , hipotenusa=0 , perimetro=0, area=0;
    printf("\t\t Ejercicio 8\n");
    printf("\ningresar la base del triangulo :");
    scanf("%f",&base);
    printf("\nIngresar la atura del triangulo :");
    scanf("%f",&altura);
    hipotenusa=sqrt(pow(base,2)+pow(altura,2));
    perimetro=base+altura+hipotenusa;
    printf("\n\nEl perimetro del triangulo es %.2f cm\n",perimetro);
    area=(base*altura)/2;
    printf("\n\nEl area del triangulo es igual a %.2f cm^2 \n\n",area);
    return 0;
}
