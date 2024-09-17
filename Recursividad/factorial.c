#include <stdio.h>

int factorial(int i, int resultado, int num) {
    if (i > num) {
        return;
    }
    resultado *= i;
    factorial(i+1, resultado, num);
}

int main() {
    long int num = 0;
    printf("Ingrese un numero : ");
    scanf("%d", &num);
    printf("el factorial de %d es: %d\n", num, factorial(1,1,num));
    return 0;
}