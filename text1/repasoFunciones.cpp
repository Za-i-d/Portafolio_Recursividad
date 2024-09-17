#include <stdio.h> //Definicion de la funcion suma
int suma (int a, int b) {
    return a + b;
}

int cuadrado (int x) {
    return x * x;
}

void imprimirMensaje() {
    printf("Hola, esta es una funcion que no retorna nada \n");
}

int main() {
    int resultado = suma(5, 3); //Llamada a la funcion suma
    int cuadrada = cuadrado(4);
    printf ("La suma de 5 y 3 es: %d\n", resultado);
    printf("El cuadrado de 4 es: %d\n", cuadrada);
    imprimirMensaje();
    return 0;
}