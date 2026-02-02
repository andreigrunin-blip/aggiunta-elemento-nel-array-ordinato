#include <stdio.h>

int main() {
    int dim, i, j, app;

    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &dim);

    int vet[dim + 1];  // spazio per nuovo elemento

    for (i = 0; i < dim; i++) {
        printf("Inserisci %d elemento del vettore: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Gli elementi del vettore:\n");
    for (i = 0; i < dim; i++) {
        printf("V[%d]=%d\n", i, vet[i]);
    }

    int elemento;
    printf("Inserisci elemento da aggiungere: ");
    scanf("%d", &elemento);

    vet[dim] = elemento;
    dim++;

    // Bubble sort
    for (i = 0; i < dim - 1; i++) {
        for (j = 0; j < dim - 1 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                app = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = app;
            }
        }
    }

    printf("Elementi in ordine crescente:\n");
    for (i = 0; i < dim; i++) {
        printf("V[%d]=%d\n", i, vet[i]);
    }

    return 0;
}

