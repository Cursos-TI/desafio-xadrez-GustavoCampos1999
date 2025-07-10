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


    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    

    printf("Movimentação do bispo\n");
    for (int i = 1; i <= bispo; i++) {
        printf("Passo %d: Movendo em diagonal\n", i);
    }

    printf("===============================\n");

     printf("Movimentação da torre\n");
    for (int i = 1; i <= torre; i++) {
        printf("Passo %d: Movendo para direita\n", i);
    }

    printf("===============================\n");

    printf("Movimentação da rainha\n");
    for (int i = 1; i <= rainha; i++) {
        printf("Passo %d: Movendo para esquerda\n", i);
    }

    printf("===============================\n");

     // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("Movimentação do cavalo\n");
    for (int cavalo = 1; cavalo <= 2; cavalo++) {
    if (cavalo == 1) {
        int mov1 = 0;
        do {
            mov1++;
            printf("Passo %d: Movendo para cima\n", mov1);
        } while (mov1 < 3);
    } 
    else {
        int mov2 = 3;
        do {
            mov2++;
            printf("Passo %d: Movendo para direita\n", mov2);
        } while (mov2 < 5); 
    }
    }

    return 0;
}


   

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  