int potencia(int x, int n) {
    if (n == 0) return 1;
    int half = potencia(x, n / 2);
    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}