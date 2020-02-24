#include<stdio.h>
#include<stdlib.h>

void mostrar(int array[],int cantidadEspacios){
    for(int i = 0;i < cantidadEspacios;i++){
        printf("[ %d ]",array[i]);
    }
}

void sort(int array[], int cantidadEspacios){
    int temp, pos;
    for(int i = 1; i < cantidadEspacios;i++){
            pos = i;
            temp = array[i];
         for(int j = i;j > 0;j--){
            if(temp < array[j-1]){
                array[j] = array[j - 1];
                array[j - 1] = temp;
                pos--;
            }
            printf("valor de j = %d\n\n", j);
    }
    printf("valor de i = %d\n", i);
}
  mostrar(array,cantidadEspacios);
}

int main(){
    int array[] = {24, 30, 20, 15};
    int cantidadEspacios = sizeof(array)/sizeof(array[0]);
    printf("\n");
    sort(array,cantidadEspacios);
    return 0;
}