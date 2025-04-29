#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Funções Recursivas do Nível Mestre
void bispoRecursivo (int passos){
    if (passos > 0) {
        printf("Cima Direita\n");
        bispoRecursivo(passos - 1);
    }
}

void torreRecursivo (int passos){
    if (passos > 0) {
        printf("Direita\n");
        torreRecursivo(passos - 1);
    }
}
void rainhaRecursivo (int passos){
    if (passos > 0) {
        printf("Esquerda\n");
        rainhaRecursivo(passos - 1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispoMovimento = 5;
    int torreMovimento = 5;
    int rainhaMovimento = 8;
  

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    int bispoPassos = bispoMovimento;

    while (bispoPassos > 0) {
        printf("Cima Direita\n");
        bispoPassos--;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < torreMovimento; i++){
        printf("Direita\n");
    }
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    int rainhaPassos = rainhaMovimento;
    do
    {
        printf("Esquerda\n");
        rainhaPassos--;
    } while (rainhaPassos > 0);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nMovimentação do Cavalo:\n");
    int cavaloHorizontal = 0; //Guarda o valor para movimento perpendicular
    int cavaloVertical = 2; //Guarda o valor para movimento do cavalo vertical
    
    while (!cavaloHorizontal){ 
        for (int i = 0; i < cavaloVertical; i++){
            printf("Baixo\n");
        }
        //Só executa o movimento horizontal após os dois movimentos verticais
        printf("Esquerda\n");
        cavaloHorizontal++; //Torna a condição while falsa para sair do loop
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
  
    printf("\nMovimentação do Bispo Recursiva:\n");
    bispoRecursivo(bispoMovimento); //Chamando a função recursiva do bispo com a variável de movimento

    printf("\nMovimentação da Torre Recursiva:\n"); 
    torreRecursivo(torreMovimento);
    
    printf("\nMovimentação da Rainha Recursiva:\n");
    rainhaRecursivo(rainhaMovimento);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nMovimentação do Cavalo com Loops Aninhados:\n");
    for (int cima = 0, direita = 0; cima < 2 || direita < 1; ) {
        while (cima < 2) {
            printf("Cima\n");
            cima++;
            if (direita < 1 && cima == 2) {
                printf("Direita\n");
                direita++;
                break; // encerra após o movimento em L completo
            }
            continue;
        }
        
    }

    return 0;
}
