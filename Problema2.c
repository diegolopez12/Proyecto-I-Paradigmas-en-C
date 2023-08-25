/*   Programa 2
Transformar en código el pseudocódigo que se muestra a continuación, correspondiente a
proporcionar el precio medio de un producto, calculado a partir del precio de este en tres
establecimientos distintos. Los precios para el cálculo son introducidos por el usuario.
1. Inicio
2. Mostrar “Introduzca el precio del producto en el establecimiento número 1, en euros” : Pedir
precio1
3. Mostrar “Introduzca el precio del producto en el establecimiento número 2, en euros” : Pedir
precio2
4. Mostrar “Introduzca el precio del producto en el establecimiento número 3, en euros” : Pedir
precio3
5. media = (precio1 + precio2 + precio3) / 3
6. Mostrar “El precio medio del producto es”, media, “Euros”
7. Fin  */


#include <stdio.h>

int main() {
    float precio1, precio2, precio3, media;

    // Pedir precios en tres establecimientos
    printf("Introduzca el precio del producto en el establecimiento número 1, en euros: ");
    scanf("%f", &precio1);

    printf("Introduzca el precio del producto en el establecimiento número 2, en euros: ");
    scanf("%f", &precio2);

    printf("Introduzca el precio del producto en el establecimiento número 3, en euros: ");
    scanf("%f", &precio3);

    // Calcular el precio medio
    media = (precio1 + precio2 + precio3) / 3;

    // Mostrar el precio medio
    printf("El precio medio del producto es %.2f Euros\n", media);

    return 0;
}