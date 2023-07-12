/*Faça um algoritmo (na Linguagem C) que calcule e imprima as Normas Coluna, Linha e Euclidiana
da matriz abaixo.
Crie e utilize três funções para o cálculo (uma para cada Norma). Cada função deve retornar o valor
calculado para a função main.
Obs.: Todas as matrizes utilizadas devem ser declaradas na função main.*/

//Aluno Felipe Muros

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 3

//Função para calcular a norma coluna
float normaColuna(int matriz[][TAM]){
    float soma = 0;
    float maior = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){ 
            soma += abs(matriz[j][i]);
        }
        if(soma > maior){
            maior = soma;
        }
        soma = 0;
    }
    return maior;
}

//Função para calcular a norma linha
float normaLinha(int matriz[][TAM]){
    float soma = 0;
    float maior = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){ 
            soma += abs(matriz[i][j]);
        }
        if(soma > maior){
            maior = soma;
        }
        soma = 0;
    }
    return maior;
}

//Função para calcular a norma euclidiana
float normaEuclidiana(int matriz[][TAM]){
    float soma = 0;    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){ 
            soma += pow(matriz[i][j], 2);
        }        
    }
    return sqrt(soma);
}

int main(){
    int matriz[TAM][TAM] = {{3, 7, 5}, {1, -4, 2}, {8, 3, -2}};
    printf("Norma Coluna: %.2f\n", normaColuna(matriz));
    printf("Norma Linha: %.2f\n", normaLinha(matriz));
    printf("Norma Euclidiana: %.2f\n", normaEuclidiana(matriz));
    return 0;
}