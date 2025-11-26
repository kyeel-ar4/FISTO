void remove_int(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) arr[i] = 0;
    }
}