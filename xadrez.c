#include <stdio.h>

//Movimento de peças no tabuleiro de xadrez!!!

//#### Funções Recursivas ####//

//Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // caso base: fim da recursão
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

//Função recursiva com loops aninhados para movimentar o Bispo
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // caso base: fim da recursão

    // Loop externo (movimento vertical)
    for (int i = 1; i <= 1; i++) {
        // Loop interno (movimento horizontal)
        for (int j = 1; j <= 1; j++) {
            printf("Casa %d: Cima, Direita\n", atual);
        }
    }

    moverBispo(casas, atual + 1); // chamada recursiva
}

//Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // caso base
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1); // chamada recursiva
}

//#### Função com loops complexos ####/

//Movimentação do Cavalo: duas casas para cima e uma para a direita
void moverCavalo() {
    const int movimentobaixo = 2;
    const int movimentoesquerda = 1;
    int i, j;

    printf("O cavalo se movimenta em padrão 'L'\n");
    printf("Movimento de 2 casas para baixo e 1 casa para esquerda \n\n");

    // Loop externo controla o movimento vertical
    for (i = 1; i <= movimentobaixo; i++) {

        if (i < 0)
            continue; // exemplo de controle de fluxo (não se aplica, apenas ilustrativo)

        printf("Casa %d: Baixo\n", i);

        // Quando termina o movimento vertical, inicia o horizontal
        if (i == movimentobaixo) {
            j = 1;

            // Loop interno controla o movimento horizontal
            while (j <= movimentoesquerda) {

                if (j > movimentoesquerda)
                    break; // sai do loop se exceder o limite

                printf("Casa %d: Esquerda\n", movimentobaixo + j);
                j++;
            }
        }
    }
}

//#### Função Principal ####//

int main() {
   
    const int bispo = 5;           /*Número de casas que o bispo se move*/
    const int torre = 5;           /*Número de casas que a torre se move*/
    const int rainha = 8;          /*Número de casas que a rainha se move*/

    //#### BISPO ####//
    printf("##### Movimento do Bispo ####\n");
    printf("O bispo se movimenta na diagonal:\n");
    printf("Movimento de %d casas para a diagonal superior direita:\n\n", bispo);
    moverBispo(bispo, 1);

    printf("\n");

    //#### TORRE ####//
    printf("#### Movimento da Torre ####\n");
    printf("A torre se movimenta para direita em linha reta\n");
    printf("Movimento de %d casas para a direita:\n\n", torre);
    moverTorre(torre, 1);

    printf("\n");

    //#### RAINHA ####//
    printf("#### Movimento da Rainha ####\n");
    printf("A rainha se movimenta para todas as direções\n");
    printf("Movimento de %d casas para a esquerda:\n\n", rainha);
    moverRainha(rainha, 1);

    printf("\n");

    //#### CAVALO ####//
    printf("#### Movimentação do Cavalo ####\n");
    moverCavalo();

    printf("\nMovimentos concluídos com sucesso.\n");

    return 0;
}
