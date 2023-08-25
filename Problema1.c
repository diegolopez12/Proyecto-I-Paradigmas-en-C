/*Una empresa que trabaja con vehículos desea calcular las necesidades de combustible (cantidad de
combustible necesario para llenar los depósitos de todos sus vehículos) para lo cual nos han
facilitado este esquema de cálculo. Se desea crear un programa para que puedan realizar el cálculo
de forma automatizada.
[ESQUEMA DE CÁLCULO PARA EL PROGRAMA]
1. Inicio
2. [Definición de vehículos]
3. Turismos = 32
4. Todoterrenos = 11
5. [Fin de definición de vehículos]
6. [Definición de capacidad de depósitos]
7. Capturismos = 40
8. Captodot = 65
9. [Fin de definición de capacidad de depósitos]
10. [Cálculo de necesidades de combustible]
11. Necesidadescom = Turismos * Capturismos + Todoterrenos * Captodot
12. [Fin de cálculo de necesidades de combustible]
13. Fin*/








#include <stdio.h>

int main() {
    // Definición de vehículos
    int turismos = 32;
    int todoterrenos = 11;

    // Definición de capacidad de depósitos
    int capturismos = 40;
    int captodot = 65;

    // Cálculo de necesidades de combustible
    int necesidadescom = turismos * capturismos + todoterrenos * captodot;

    // Mostrar el resultado
    printf("Necesidades de combustible: %d\n", necesidadescom);

    return 0;
}