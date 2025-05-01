void imprime_pares(int n) {
    if (n < 0) return;
    imprime_pares(n - 2);
    if (n % 2 == 0) printf("%d ", n);
}