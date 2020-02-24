#include <stdio.h>

int main() {
    int factorial, i, resultado = 1;
    printf("Digite un numero para obtener el factorial: ");
    scanf("%d", &factorial);
    for(i = 1; i <= factorial; i++) {
        resultado *= i;
    }
    printf("El resultado es: %d", resultado);
    
    return 0;
}