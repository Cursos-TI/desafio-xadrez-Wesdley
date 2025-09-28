#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torreMove (int torre) {
    if (torre > 0 ) {
        printf("Direita\n");
        torreMove(torre - 1); // Chamada recursiva com decremento
    } else if (torre == 0) {
        printf("Torre parou\n\n\n");
    }
}

void bispoMove (int bispo) {
    if ( bispo > 0) {
        printf("Cima Direita\n");
        bispoMove(bispo - 1); // Chamada recursiva com decremento
    }
}

void rainhaMove (int rainha) {
    if ( rainha > 0) {
        printf("Esquerda\n");
        rainhaMove( rainha - 1); // Chamada recursiva com decremento
    } else if ( rainha == 0) {
        printf("Rainha parou\n\n\n");
    }
}

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

    // int quantidadeTorre = 5, quantidadeRainha = 8; podemos colocar um valor fixo no void
    // int torre = 1, bispo = 1, rainha = 1, cavalo = 1; // peças do tabuleiro
    // torre 5 casas para a direita
    // bispo 5 casas cima direita tendo que imprimir cima direita
    // rainha move para todas as direções, mas tem que mover 8 casas para a esquerda
    // cavalo move 2 para baixo e depois esquerda para fazer o L

    torreMove(5); // torre move 5 casas para direita

    for (int i = 1; i <= 1; i++) { // bispo move 5 casas para cima direita
        for (int j = 1; j <= 5; j++) {
            bispoMove(1);
        }
        printf("Bispo parou\n\n\n");
    }

    rainhaMove(8);

    for ( int cavalo = 1; cavalo <= 1; cavalo++) { // cavalo move 2 casas e depois a esquerda para fazer o L
        for (int i = 1; i <= 3; i++) {
            if ( i < 3 ) {
                printf("Cima\n");
                continue;
            } else {
                printf("Direita\n");
                printf("Cavalo parou\n\n\n");
                break;
            }
        }
    }
    
    return 0;
}
