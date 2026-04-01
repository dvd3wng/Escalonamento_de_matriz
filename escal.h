#ifndef ESCAL_H
#define ESCAL_H

//pergunta e preenche a matriz inteira com todos os seus elementos ditados
void preencher_matriz(int i_max, int j_max, float matriz[i_max][j_max]);

//printa a matriz toda
void printar_matriz(int i_max, int j_max, float matriz[i_max][j_max]);

//vai verificar caso a matriz inteira seja nula ou nao
int matriz_nula(int i_max, int j_max, float matriz[i_max][j_max]);

void troca_linha(int j_max, float L1[j_max], float L2[j_max]);

void pivotear(int j_max, float L1[j_max], float L2[j_max], int casa_pivo);

void escalonar_matriz(int i_max, int j_max, float matriz[i_max][j_max]);

#endif