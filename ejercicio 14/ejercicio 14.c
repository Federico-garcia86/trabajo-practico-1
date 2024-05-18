/*Determina la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus
dos catetos (tener en cuenta libreria math.h).*/
#include<stdio.h>
#include<math.h>

int main (void)
{
    float cateto1,cateto2,hipotenusa;
    printf("\t\tejercicio 14\n");
    printf("Ingresar el primer cateto del triangulo:");
    scanf("%f",&cateto1);
    printf("\nIngresar el segundo cateto del triangulo:");
    scanf("%f",&cateto2);
    hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
    printf("\nLos catetos son el primero %.2f y el segundo %.2f y la hipotenusa %.2f",cateto1,cateto2,hipotenusa);
    return 0;
}
