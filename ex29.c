int direcoes[2][2] = {{0,1}, {1,0}};
int resolver_labirinto(int mat[10][10], int sol[10][10], int i, int j, int n, int m) {
    if (i == n - 1 && j == m - 1) {
        sol[i][j] = 1;
        return 1;
    }
    if (i >= n || j >= m || mat[i][j] == 1) return 0;
    sol[i][j] = 1;
    for (int d = 0; d < 2; d++) {
        if (resolver_labirinto(mat, sol, i + direcoes[d][0], j + direcoes[d][1], n, m))
            return 1;
    }
    sol[i][j] = 0;
    return 0;
}