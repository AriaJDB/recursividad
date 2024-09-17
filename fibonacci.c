#include <stdio.h> //Esta línea incluye la librería estándar de entrada y salida de C, necesaria para funciones como

int fibonacci(int n) {//Esta función calcula el valor de Fibonacci en la posición n de forma recursiva:
    if (n == 0) {//Si n == 0, retorna 0, ya que el primer número en la serie de Fibonacci es 0.
        return 0;
    }
    else if (n == 1) {//Si n == 1, retorna 1, ya que el segundo número en la serie de Fibonacci es 1
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    printf("Ingrese el numero: ");
    scanf("%d",&num);

    printf("La serie Fibonacci en la posicion %d es: %d\n", num, fibonacci(num));
    return 0;
}