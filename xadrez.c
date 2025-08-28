#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void printText(int tabuleiro[8][8]){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("========================================================\n");
}


int main() {
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n\n");
   printf("Entendo que foi pedido para realizar certos movimentos para as pecas\nPorem tomei a liberdade de mostrar suas movimentacoes possiveis\n\n");
    printf("-------------------------------------------------\n");
    printf("-------------------------------------------------\n");
    /*
    Rei: Pode se mover uma casa em qualquer direção (vertical, horizontal ou diagonal). 
    Dama (Rainha): Pode se mover quantas casas quiser em qualquer direção, combinando os movimentos da torre e do bispo (vertical, horizontal e diagonal). 
    Bispo: Pode se mover quantas casas quiser, mas apenas nas diagonais. 
    Torre: Pode se mover quantas casas quiser na horizontal ou na vertical. 
    Cavalo: O cavalo move-se sempre em "L": anda duas casas em uma direção (horizontal ou vertical) e depois uma casa em direção perpendicular. É a única peça que pode pular outras peças. 
    Peão: No seu primeiro movimento, um peão pode avançar uma ou duas casas. A partir daí, move-se apenas uma casa para a frente. A captura de um peão é feita uma casa na diagonal. 
    */
    #define PEAO 2
    #define TORRE 7 //devido ao tamanho ser 8 e a peça ocupar sempre 1 unidade
    #define CAVALO 3
    #define REI 1
    #define BISPO 7 //devido ao tamanho ser 8 e a peça ocupar sempre 1 unidade
    #define RAINHA 7 //devido ao tamanho ser 8 e a peça ocupar sempre 1 unidade

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int tabuleiro[8][8] = {0};

    printf("Movimento do Bispo em X: \n\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][i] = 1;
            tabuleiro[i][6 - i] = 1;
        }
    }
    printText(tabuleiro);


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int tabuleiro2[8][8] = {0};

    printf("\nMovimento da Torre em T com base no seu inicio no tabuleiro: \n\n");
    for (int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++){
            tabuleiro2[0][j] = 1;
            tabuleiro2[j][2] = 1;
        }
    }
    printText(tabuleiro2);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int tabuleiro3[8][8] = {0};
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            tabuleiro3[0][j] = 1;
            tabuleiro3[j][3] = 1;

            //Para não se repetir durante a parte de baixo do array
            if((i + 3) < 8){
                tabuleiro3[i][(i+3)] = 1;
            }
            tabuleiro3[3-i][i] = 1;
        }
    }

    printf("\nMovimento da Rainha em * com base no seu inicio no tabuleiro: \n\n");
    printText(tabuleiro3);


    int tabuleiro4[8][8] = {0};
    tabuleiro4[0][1] = 4;

    for(int x = 0; x < 1; x++){
        tabuleiro4[0][2+x] = 4;
        for(int y = 0; y < 3; y++){
            tabuleiro4[y][2+x] = 4;
        }
        
    }

    printf("\nMovimento do Cavalo em L com base no seu inicio no tabuleiro\n\n");
    printText(tabuleiro4);


    return 0;
}