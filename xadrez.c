#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    void mov_torre(int mov_atual, int mov_total);
    void mov_bispo(int mov_atual, int mov_total);
    void mov_rainha(int mov_atual, int mov_total);

    int main() {
    printf("Movimentação do bispo\n");
    mov_bispo(1, 5);

    printf("===============================\n");

    printf("Movimentação da torre\n");
    mov_torre(1, 5);

    printf("===============================\n");

    printf("Movimentação da rainha\n");
    mov_rainha(1, 8);

    printf("===============================\n");

    printf("Movimentação do cavalo\n");
    for (int cavalo = 1; cavalo <= 3; cavalo++) {
        if (cavalo <= 2) {
            printf("Passo %d: Movendo para cima\n", cavalo);
        }
        else {
            printf("Passo %d: Movendo para direita\n", cavalo);
        }
    }
        return 0;
        }

void mov_torre(int mov_atual, int mov_total) {
if (mov_atual > mov_total){
    return;
}
printf("Passo %d: Movendo para direita\n", mov_atual);
mov_torre(mov_atual + 1, mov_total);
 }
 
 void mov_rainha(int mov_atual, int mov_total) {
if (mov_atual > mov_total){
    return;
}
printf("Passo %d: Movendo para esquerda\n", mov_atual);
mov_rainha(mov_atual + 1, mov_total);
 }

 void mov_bispo(int mov_atual, int mov_total) {
    if (mov_atual > mov_total) {
    return;
    }
    printf("Movimento diagonal %d:\n", mov_atual);
    printf("Movendo para cima\n");
    printf("Movendo para direita\n");
    mov_bispo(mov_atual + 1, mov_total);
 }