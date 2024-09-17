#include <stdio.h>

void decimalBinario(int n){
    if (n==0)
    {
        return;
    }
    decimalBinario (n/2);
    printf("%d", n%2);
}

int main(){

    int num;
    printf("Ingrese el numero a convertir: ");
    scanf("%d",&num);
    //%d--> es un dato de tipo entero
    
    if (num<0)
    {
        printf("Ingresar un numero positivo ");
    }
    
    else{
        printf("La representacion binaria de %d es: ",num);
        decimalBinario(num);
        printf("\n");
    }

    return 0;
}