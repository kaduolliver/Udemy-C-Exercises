#include <stdio.h>
#include <locale.h>

char tabuleiro[3][3] = {{' ', ' ', ' '},
                      {' ', ' ', ' '},
                      {' ', ' ', ' '}};

// Função para imprimir o tabuleiro
void imprimir_tabuleiro() {
    printf("------------- \n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        printf("------------- \n");
    }
}

// Função para verificar se uma posição é válida
int posicao_valida(int linha, int coluna) {
    return linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ';
}

// Função para verificar se houve um vencedor
int verificar_vencedor(char jogador) {
    // Verificar linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
            return 1;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)
            return 1;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
        return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
        return 1;
    return 0;
}

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    char jogador = 'X';
    int linha, coluna;

    do {
        imprimir_tabuleiro();
        printf("Vez do jogador %c. Digite a linha e coluna (1-3): ", jogador);
        scanf("%d %d", &linha, &coluna);

        // Ajustar para índices da matriz (começando em 0)
        linha--;
        coluna--;

        if (posicao_valida(linha, coluna)) {
            tabuleiro[linha][coluna] = jogador;
            if (verificar_vencedor(jogador)) {
                printf("O jogador %c venceu!\n", jogador);
                break;
            }
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Posição inválida. Tente novamente.\n");
        }
    } while (1);

    imprimir_tabuleiro();

    return 0;
}