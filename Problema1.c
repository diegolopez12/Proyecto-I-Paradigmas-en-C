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