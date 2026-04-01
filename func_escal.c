#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "escal.h"

void preencher_matriz(int i_max, int j_max, float matriz[i_max][j_max]){
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            printf("elemento a%d%d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void printar_matriz(int i_max, int j_max, float matriz[i_max][j_max]){
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            if (j == 0)
                printf("| ");
            printf("%.1f ", matriz[i][j]);
        }
        puts("|");
    }
}

int matriz_nula(int i_max, int j_max, float matriz[i_max][j_max]){
    int nula = 1;
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            if (matriz[i][j] != 0){
                nula = 0;
                break;
            }
        }
        if (nula == 0)
            break;
    }
    return nula;
}

void troca_linha(int j_max, float L1[j_max], float L2[j_max]){
    float aux;
    for (int i = 0; i < j_max; i++){
        aux = L1[i];
        L1[i] = L2[i];
        L2[i] = aux;
    }
}

void pivotear(int j_max, float L1[j_max], float L2[j_max], int casa_pivo){
    float pivo = L2[casa_pivo] / L1[casa_pivo];
    for (int i = 0; i < j_max; i++)
        L2[i] = L2[i] - (pivo * L1[i]);
}

void escalonar_matriz(int i_max, int j_max, float matriz[i_max][j_max]){
    int j = 0;
    for (int i = 0; i < i_max; i++){
        if (matriz[i][j] == 0 ){
            for (int next = i + 1; next < i_max; next++){
                if (matriz[next][j] != 0){
                    troca_linha(j_max, matriz[i], matriz[next]);
                    next = i_max;
                }
            }
        }
        for (int next = i + 1; next < i_max; next++)
            if (matriz[next][j] != 0)
                pivotear
            (j_max, matriz[i], matriz[next], i);
        j++;
    }
}