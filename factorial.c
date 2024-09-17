#include <stdio.h>
int factorial(int i,int resultado, int num){
    if(i>num){
        return resultado;
    }
    resultado *= i; //resultado es igual a resultado por i
    factorial(i+1,resultado, num);
}

int main() {
    long int num;

    printf("Ingrese el numero: ");
    scanf("%d",&num);

    printf("El factorial de %d es: %d\n", num, factorial(1,1,num));
    return 0;
}

//hacer el de fibonacci pero con la explicacion de que hace