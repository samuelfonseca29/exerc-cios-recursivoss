int comprimento(char *str) {
    if (*str == '\0') return 0;
    return 1 + comprimento(str + 1);
}