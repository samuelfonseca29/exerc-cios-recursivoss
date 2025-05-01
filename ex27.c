int contar_caminhos(int x, int y, int m, int n) {
    if (x == m - 1 && y == n - 1) return 1;
    if (x >= m || y >= n) return 0;
    return contar_caminhos(x + 1, y, m, n) + contar_caminhos(x, y + 1, m, n);
}