void subconjuntos(int arr[], int n, int index, int data[], int d_index) {
    if (index == n) {
        printf("{");
        for (int i = 0; i < d_index; i++) {
            printf("%d", data[i]);
            if (i < d_index - 1) printf(", ");
        }
        printf("}\n");
        return;
    }
    subconjuntos(arr, n, index + 1, data, d_index);
    data[d_index] = arr[index];
    subconjuntos(arr, n, index + 1, data, d_index + 1);
}