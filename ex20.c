void troca(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permuta(char *str, int l, int r) {
    if (l == r)
        printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            troca(&str[l], &str[i]);
            permuta(str, l + 1, r);
            troca(&str[l], &str[i]);
        }
    }
}