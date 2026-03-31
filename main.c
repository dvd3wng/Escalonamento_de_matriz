#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void preencher_matriz(float *p, int i_max, int j_max){
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            printf("digite o elemento a%d%d da sua matriz: ", i, j);
            scanf("%f", &p[(i * j_max) + j]);
        }
    }
}

void printar_matriz(float *p, int i_max, int j_max){
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            if (j == 0)
                printf("| ");
            printf("%0.f ", p[(i * j_max) + j]);
        }
        puts("|");
    }
}

int verif_escalonavel(float *p, int i_max, int j_max){
    int nulos = 0;
    for (int i = 0; i < i_max; i++){
        for (int j = 0; j < j_max; j++){
            if (p[(i * j_max) + j] == 0){
                nulos++;
            }
        }
    }
    if (nulos == i_max * j_max)
        return 0;
    return 1;
}

int main(){
    int i_max, j_max;

    printf("digite o numero de linhas e colunas da sua matriz: ");
    scanf("%d %d", &i_max, &j_max);
    if (i_max < 1 || j_max < 1){
        printf("sua matriz nao existe!");
        return 0;
    }
    
    float matriz[i_max][j_max], *p = &matriz[0][0];
    preencher_matriz(p, i_max, j_max);
    printar_matriz(p, i_max, j_max);
    
    if (verif_escalonavel(p, i_max, j_max) == 0){
        printf("sua matriz nao eh escalonavel!");
        return 0;
    }

    return 0;
}