void combina(int arr[], int data[], int start, int end, int index, int k) {
    if (index == k) {
        for (int i = 0; i < k; i++)
            printf("%d ", data[i]);
        printf("\n");
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= k - index; i++) {
        data[index] = arr[i];
        combina(arr, data, i + 1, end, index + 1, k);
    }
}