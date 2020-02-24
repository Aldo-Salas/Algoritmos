#include<stdio.h>

void cambiar_pos(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(vector_entrada[j] > vector_entrada[j + 1]) {
                cambiar_pos(&vector_entrada[j],&vector_entrada[j + 1]);
                printf("i = %d\n", i);
                printf("j = %d\n\n", j);
            }
        }
    }
}

int print_array(int vector_entrada[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d, ", vector_entrada[i]);
    }
    printf("\nFin del ordenamiento");
}

int main(int argc, char const *argv[])
{
    int vector_entrada[] = {10, 5, 3333, 3};
    int n = sizeof(vector_entrada) / sizeof(vector_entrada[0]); 

    bubbleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");

    return 0;
}
