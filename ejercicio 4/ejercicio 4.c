/*El siguiente programa muestra por pantalla el resultado de la ecuación (a = b
2 + 1) para
distintos valores de b a saber (0, 2). ¿Es correcto? Si considera que no lo es, resuelvalo
correctamente.*/

#include <stdio.h>

int main()
{
    printf("\t\tEjercicio 4\a\n");
    int ecu, valor=0;
    ecu=valor*valor+1;
// ecu=pow(valor,2)+1; tambien hubiera sido correcto si tenia la libreria math.h
    printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);
    valor=2;
    ecu=valor*valor+1; // Faltaba esta ecuacion para que el valor "ecu" cambie a 5
    printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);
return 0;
}
