int soma_naturais(int n) {
    if (n == 0) return 0;
    return n + soma_naturais(n - 1);
}