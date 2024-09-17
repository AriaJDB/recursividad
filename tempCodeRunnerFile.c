#include <stdio.h>
//n sera el numero de discos

void hanoi(int discos, int inicio, int apoyo, int destino){
    
    if(discos==1){
        printf("Mueve el disco de la torre %d a la torre %d\n",inicio,destino);
    }
    else{
        hanoi(discos-1,inicio,destino,apoyo);
        printf("Mueve el disco de la torre %d a la torre %d\n",inicio,destino);
        hanoi(discos-1,apoyo,inicio,destino);
    }
}

int main() {
    int discos;

    printf("Ingrese el numero de discos: ");
    scanf("%d",&discos);
    if(discos>0){
        hanoi(discos,1,2,3);
    }
    else{
        printf("No hay discos que mover");
    }
}