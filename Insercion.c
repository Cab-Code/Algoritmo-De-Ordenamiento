#include <stdio.h>
#include <stdlib.h>

void imprimirArreglo(int arreglo[], int TAM){
    int i;
    printf("[");
    for(i = 0; i < TAM; i++){
        printf("%d, ", arreglo[i]);
    }
    printf("]\n\n");
}

int main(){
    int lista[100] = {53, 45, 65, 20, 80, 40};
    int TAM = 0;
    int i = 0, j = 0;
    printf("\n\n");
    printf("¿Cuantos datos va a ingresar?\n");
        scanf("%d", &TAM);
    
    for(i = 0; i < TAM; i++){
        printf("Ingrese el dato [%d]: ", i);
            scanf("%d", &lista[i]);
    }
    printf("\n\n");
    int temp = 0;
    printf("EL AREGLO INICIAL ES:\n");
    imprimirArreglo(lista, TAM);
    //Ordena los datos
    for(i = 1; i < TAM; i++){
        temp = lista[i];
        j = i - 1;
        while((lista[j] > temp) && (i >= 0)){
            lista[j + 1] = lista[j];
            j--;    
        }
        lista[j + 1] = temp;
    }
    //Impreme la lista
    printf("EL AREGLO ORDENADO ES:\n");
    imprimirArreglo(lista, TAM);
    return 0;
}
