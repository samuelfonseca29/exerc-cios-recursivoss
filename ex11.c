int conta_char(char *str, char c) {
    if (*str == '\0') return 0;
    return (*str == c) + conta_char(str + 1, c);
}