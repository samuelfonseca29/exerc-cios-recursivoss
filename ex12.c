int soma_array(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + soma_array(arr, n - 1);
}