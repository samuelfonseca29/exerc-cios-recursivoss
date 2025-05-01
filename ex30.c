void gerar_parenteses(char *str, int pos, int n, int abertos, int fechados) {
    if (fechados == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (abertos < n) {
        str[pos] = '(';
        gerar_parenteses(str, pos + 1, n, abertos + 1, fechados);
    }
    if (fechados < abertos) {
        str[pos] = ')';
        gerar_parenteses(str, pos + 1, n, abertos, fechados + 1);
    }
}