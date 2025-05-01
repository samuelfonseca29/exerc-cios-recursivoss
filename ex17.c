int busca_array(int arr[], int n, int x) {
    if (n == 0) return 0;
    return (arr[n - 1] == x) || busca_array(arr, n - 1, x);
}