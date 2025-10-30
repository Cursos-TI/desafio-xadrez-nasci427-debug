#include <stdio.h>

//Simulação de movimento no tabuleiro de xadrez!!!

int main() {
   
    const int bispo = 5;           /*Numero de casas que o bisp se move*/
    const int torre = 5;           /*numero de casas que a torre se move*/
    const int rainha = 8;          /*numero de casas que a rainha se move*/
    const int cavalobaixo = 2;     /*Número de casas que o cavalo se move para baixo*/
    const int cavaloesquerda = 1;  /*Numero de casas que o calavo se move para esquerda*/


    int i, j;                         /*Variáveis de auxilio para repetições*/
    
    //Movimentação do Bispo utilizando (While)

    printf("##### Movimento do Bispo ####\n");
    printf("O bispo se movimenta na diagonal: \n ");
    printf("Movimento de %d casas para diagonal superior direta:\n", bispo);

    i = 1;
while (i <= bispo){
    printf("Casa %d: Cima, Direita\n", i);  //Numero de casa + combinação de direções de movimento
    i++;
}

    printf("\n");

    //Movimentação da Torre utilizando (For)

    printf("#### Movimento da Torre ####\n");
    printf("A torre se movimenta para direita na diagonal\n");
    printf("Movimento de %d casas para a direta:\n", torre);


    for ( i = 1; i <= torre; i++)
    {
        printf("Casa %d: Direita\n", i);     //Número de casas + direção do movimento
    }
    
    printf("\n");

    //Movimentação da Rainha utilizando (Do-while)

    printf("#### Movimento da Rainha ####\n");
    printf("A rainha se movimenta para todas as direções\n");
    printf("Movimento de %d casas para a esquerda:\n\n", rainha);

    i = 1;
    do
    {
       printf("Casa %d: Esquerda\n", i);       //Número de casa + direção de movimento
       i++;

    } while ( i <= rainha);
    
    printf("\n");

    //Movimentação do Cavalo utilizando loops aninhados (for e while)

    printf("#### Movimentação do Cavalo ####\n");
    printf("O cavalo se movimenta em padrão 'L'\n");
    printf("Movimento de 2 casas para baixo e 1 casa para esquerda\n");

    for (i = 1; i <= cavalobaixo; i++)    /*Loop externo com a função de movimento para baixo*/
    {  
        printf("Casa %d: Baixo\n", i);
    
        if (i == cavalobaixo) {
            j = 1;                        /*Loop interno com a função de movimento para esquerda*/
            while (j <= cavaloesquerda) {
                printf("Casa %d: Esquerda\n", cavalobaixo + j);
                j++;
            }
        }
    }    

    return 0;
}
