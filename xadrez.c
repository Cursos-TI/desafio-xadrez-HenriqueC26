
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

    #include <stdio.h>

    int main(){
            //Movimentação da torre 5 casas para a direita.
            printf("Movimentação da Torre.\n");
            for (int i = 0; i < 5; i++)
            {
            printf("Direita\n");
        }
    
            //Movimentação do Rainha 8 casas para a esquerda.
    
            int i = 1;
            printf("Movimentação da Rainha.\n");
            while( i <= 8)
            {
                printf("Esquerda\n", i);
                i++;
            }
    
            //Movimentação do bispo 5 casas na diagonal para cima e à direita.
    
            int b = 1;
            printf("Movimentação do Bispo.\n");
    
        do {
            printf("Cima, Direita\n", b);
            b++;
    
        } while( b <= 5);
    
        return 0;
    }