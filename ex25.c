int busca_binaria(int arr[], int esq, int dir, int x) {
    if (esq > dir) return -1;
    int meio = (esq + dir) / 2;
    if (arr[meio] == x) return meio;
    if (arr[meio] > x) return busca_binaria(arr, esq, meio - 1, x);
    return busca_binaria(arr, meio + 1, dir, x);
}