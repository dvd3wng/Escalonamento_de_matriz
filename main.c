#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "escal.h"

int main(){
    int i_max, j_max;

    printf("digite o numero de linhas e colunas da sua matriz: ");
    scanf("%d %d", &i_max, &j_max);

    if (i_max < 1 || j_max < 1){
        printf("=== matriz inexistente! ===");
        return 0;
    }
    
    float matriz[i_max][j_max];
    preencher_matriz(i_max, j_max, matriz);
    puts("=== matriz digitada: ===");
    printar_matriz(i_max, j_max, matriz);
    
    if (matriz_nula(i_max, j_max, matriz) == 1){
        printf("=== matriz nao escalonavel! ===");
        return 0;
    }

    escalonar_matriz(i_max, j_max, matriz);
    puts("=== matriz escalonada ===");
    printar_matriz(i_max, j_max, matriz);
    return 0;
}