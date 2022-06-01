// Biblioteca normalmente presente nos códigos em linguagem C, responsável por entrada e saída de dados.
#include <stdio.h>

// Função principal.
int main() {
    // Declaração das variáveis que gerenciam as escolhas do usuário no menu do jogo.
    char escolha;
    int sair = 1;

    // Do while loop controlador do menu principal.
    do {
        // Função para limpar a tela no terminal.
        system("cls");

        // Saída do nome do jogo.
        printf(" ----------------------------\n");
        printf("|          ANAMNESE          |\n");
        printf(" ----------------------------\n");

        // Escrita das opções das quais o jogador deve escolher.
        printf("|     Escolha uma opção:     |");
        printf("\n|       [J] Jogar            |");
        printf("\n|       [R] Ranking          |");
        printf("\n|       [I] Instruçoes       |");
        printf("\n|       [C] Creditos         |");
        printf("\n|       [S] Sair             |\n");
        printf(" ----------------------------\n");
        // Leitura da variável escolha do usuário.
        scanf(" %c", &escolha);

        // Estrutura condicional switch case responsável pela exibição das escolhas do usuário.
        switch (escolha) {
            // Opção para executar o jogo.
            case 'J':
                // Do while loop controlador da exibição do jogo.
                do {
                    // Função para limpar a tela do terminal.
                    system("cls");
                    // Exibição do jogo (Ainda será implementado).
                    printf("\nJogo a ser implementado em versões futuras.\n");
                    // Escrita da opção para sair do jogo.
                    printf("\nDigite [1] para voltar ao menu: ");
                    // Leitura da variável controladora da exibição do jogo.
                    scanf("%d", &sair);
                } while (sair != 1);  

            break;

            // Opção para ver o ranking.
            case 'R':
                // Do while loop controlador da exibição do ranking.
                do {
                    // Função para limpar a tela do terminal.
                    system("cls");
                    // Exibição do ranking (Ainda será implementado).
                    printf("\nRanking a ser implementado em versões futuras.\n");
                    // Escrita da opção para sair do ranking.
                    printf("\nDigite [1] para voltar ao menu: ");
                    // Leitura da variável controladora da exibição do ranking.
                    scanf("%d", &sair);
                } while (sair != 1);
                
            break;

            // Opção para mostrar as instruções do jogo.
            case 'I':
                // Do while loop controlador da exibição das instruções.
                do {
                    // Função para limpar a tela no terminal.
                    system("cls");
                    // Exibição das instruções do jogo.
                    printf("----------------------------------------------------------------------------\n");
                    printf("                             INSTRUÇÕES\n");
                    printf("\n1. O jogador deve manter-se atento à sequência numérica exibida;\n");
                    printf("2. O jogador deve reproduzir a sequência de números na ordem correta;\n");
                    printf("3. A quantidade de números aumenta conforme o jogador acerta a sequência;\n");
                    printf("4. O jogo termina caso o jogador cometa um erro;\n");
                    printf("5. O jogador que memorizar a maior quantidade de números é o vencedor.\n");
                    printf("----------------------------------------------------------------------------\n");
                    // Escrita da opção para sair das instruções.
                    printf("\nDigite [1] para voltar ao menu: ");
                    // Leitura da variável controladora da exibição das instruções.
                    scanf("%d", &sair);
                } while (sair != 1);

            break;

            // Opção para visualizar os créditos.
            case 'C':
                // Do while loop controlador da exibição dos créditos.
                do {
                    // Função para limpar a tela no terminal.
                    system("cls");
                    // Exibição dos créditos aos criadores. 
                    printf("----------------------------------------------------------------------------------------------------\n");
                    printf("                                              CRÉDITOS\n");
                    printf("\nEste jogo foi criado em 2022 por: ");
                    printf("Huandy Calini de Camargo Silva, Letícia Vitória dos Santos,\n");
                    printf("Luara do Val Perilli e Luís Eduardo Damasceno, ");
                    printf("alunos da disciplina de Fundamentos de Programação, \n");
                    printf("e deve ser utilizado como ferramenta educacional e de entretenimento.\n");
                    printf("----------------------------------------------------------------------------------------------------\n");
                    // Escrita da opção para sair dos créditos.
                    printf("\nDigite [1] para voltar ao menu: ");
                    // Leitura da variável controladora da exibição dos créditos.
                    scanf("%d", &sair);
                } while (sair != 1);

            break;

            // Opção para sair do jogo.
            case 'S':
                // Função para limpar a tela no terminal.
                system("cls");
                // Exibição da mensagem que será exibida ao sair do jogo.
                printf("\nFechando jogo...");

            break;

            // Opção para quando o jogador teclar um caracter inválido.
            default:
                // Do while loop controldor da exibição da opção inválida.
                do {
                    // Função para limpar a tela no terminal.
                    system("cls");
                    // Exibição da mensagem que será exibida quando o usuário digitar uma opção inválida.
                    printf("-----------------\n");
                    printf(" Opção inválida\n");
                    printf("-----------------\n");
                    // Escrita da opção para sair da opço inválida.
                    printf("\nDigite [1] para voltar ao menu: ");
                    // Leitura da variável controladora da exibição da opção inválida.
                    scanf("%d", &sair);
                } while (sair != 1);
                
            break;

        }

    } while(escolha != 'S');

    return 0;

}