#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int torre = 1, bispo = 1, rainha = 1; // peças do tabuleiro
    // torre 5 casas para a direita
    // bispo 5 casas cima direita tendo que imprimir cima direita
    // rainha move para todas as direções, mas tem que mover 8 casas para a esquerda

    while (torre <= 5) { // torre move 5 casas para a direita
        printf("Direita\n");
        torre++;
    }

    do {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    } while (bispo <= 5); // bispo move 5 casas para cima direita

    

    for (rainha = 1; rainha <=9; rainha++) { // rainha move 8 casas para a esquerda
        printf("Esquerda\n");
    }
    
    return 0;
}
