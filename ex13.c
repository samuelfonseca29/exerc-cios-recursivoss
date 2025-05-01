int eh_primo_aux(int n, int i) {
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return eh_primo_aux(n, i + 1);
}
int eh_primo(int n) {
    if (n <= 1) return 0;
    return eh_primo_aux(n, 2);
}