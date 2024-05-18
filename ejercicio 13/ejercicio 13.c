//Dado un número entero de tres cifras mostrar sus cifras por separado.
#include<stdio.h>

int main(void)
{
    int num ,num2 , cif1,cif2, cif3;
    printf("\t\tEjercio 13\n");
    printf("Ingresar un numero de tres cifras ");
    scanf("%d",&num);
    num2=num;
    cif1=num%10;
    num=num/10;
    cif2=num%10;
    num=num/10;
    cif3=num%10;
    printf("\nEl numero %d su ultima cifra es %d su segunda cifra es %d y su tercera cifra es %d",num2,cif1,cif2,cif3);
    return 0;
}
