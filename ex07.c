void inverte(char *str, int inicio, int fim) {
    if (inicio >= fim) return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverte(str, inicio + 1, fim - 1);
}