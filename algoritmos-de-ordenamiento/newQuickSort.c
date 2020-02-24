#include<stdio.h>

void cambiar_pos(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int division(int arr[], int inicio, int final) {
    int pivote = arr[final];
    int i = (inicio - 1);

    for(int j = inicio; j <= final - 1; j++ ) {
        if(arr[j] > pivote) {
            i++;
            cambiar_pos(&arr[i], &arr[j]);
        }
    }
    cambiar_pos(&arr[i + 1], &arr[final]);
    return (i + 1);
}

void quickSort(int arr[], int inicio, int final) {
    if(inicio < final) {
        int pi = division(arr, inicio, final);
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, final);       
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23, 78, 25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41, 32, 58, 19, 99, 60, 74, 48, 80, 44, 25, 68, 1, 89, 77, 60, 25, 99, 30, 76, 32, 57, 82, 52, 44, 72, 87, 34, 87, 65, 30, 54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9, 98, 28, 86, 69, 3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74, 56, 65, 79, 50, 26, 67, 100, 24, 67, 38, 57};

    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Lista Ordenada: \n");
    printArray(arr, n);

    return 0;
}