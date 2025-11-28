void reverse_array(int arr[]) {
    int temp;
    for(int i = 0; i < 2; i++) {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}