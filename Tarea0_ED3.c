#include <stdio.h>
int main(){
    float parcial1, parcial2, promedio;
    printf("Ingrese la nota del primer parcial: ");
    scanf("%f", &parcial1);
    printf("Ingrese la nota del segundo parcial: ");
    scanf("%f", &parcial2);
    promedio = (parcial1 + parcial2) / 2;
    printf("La nota del primer parcial es: %.2f\n", parcial1);
    printf("La nota del segundo parcial es: %.2f\n", parcial2);
    printf("El promedio de los parciales es: %.2f", promedio);
    return 0;
}