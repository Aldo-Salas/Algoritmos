#include<stdio.h>

void qs(int vector_entrada[], int limite_izq, int limite_der) {
    int izq, der, temp, pivote;

    izq = limite_izq;
    der = limite_der;
    pivote = vector_entrada[(izq + der) / 2];

    do{
        while(vector_entrada[izq] < pivote && izq < limite_der)
            izq++;
        while(pivote < vector_entrada[der] && der > limite_izq)
            der--;
        if(izq <= der) {
            temp = vector_entrada[izq];
            vector_entrada[izq] = vector_entrada[der];
            vector_entrada[der] = temp;
            izq++;
            der--;
        }
    } while(izq <= der);
    if(limite_izq < der) {
        qs(vector_entrada, limite_izq, der);
    }
    if(limite_der > izq) {
        qs(vector_entrada, izq, limite_der);
    }
}

void quickSort(int vector_entrada[], int n) {
    qs(vector_entrada, 0, n - 1);
}

void printArray(int vector_entrada[], int n) 
{ 
   int i; 
   for (i=0; i < n; i++) 
       printf("\n%d", vector_entrada[i]); 
   printf("\nFin del ordenamiento"); 
}

int main(int argc, char const *argv[])
{ 
    int vector_entrada[] = {3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23,
    78, 25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41,
    32, 58, 19, 99, 60, 74, 48, 80, 44, 25, 68, 1, 89, 77, 60,
    25, 99, 30, 76, 32, 57, 82, 52, 44, 72, 87, 34, 87, 65, 30,
    54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9, 98, 28, 86, 69,
    3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74, 56,
    65, 79, 50, 26, 67, 100, 24, 67, 38, 57};
    int n = sizeof(vector_entrada) / sizeof(int);
 
    quickSort(vector_entrada, n);
    printArray(vector_entrada, n);
 
    return 0;
}