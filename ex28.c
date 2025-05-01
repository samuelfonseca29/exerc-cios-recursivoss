#define MAX 20
int tabuleiro[MAX];
int pode_colocar(int linha, int col) {
    for (int i = 0; i < linha; i++)
        if (tabuleiro[i] == col || abs(tabuleiro[i] - col) == abs(i - linha))
            return 0;
    return 1;
}
void resolver_nrainhas(int linha, int n) {
    if (linha == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf("%c ", tabuleiro[i] == j ? 'Q' : '.');
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < n; col++) {
        if (pode_colocar(linha, col)) {
            tabuleiro[linha] = col;
            resolver_nrainhas(linha + 1, n);
        }
    }
}