void imprime_impares(int n) {
    if (n < 1) return;
    imprime_impares(n - 2);
    if (n % 2 == 1) printf("%d ", n);
}