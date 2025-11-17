int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int i = 0, j = 0;
    int negatives[n], front = 0, rear = 0;

    while (j < n) {
        if (arr[j] < 0) negatives[rear++] = j;

        if (j - i + 1 == k) {
            if (front < rear) printf("%d ", arr[negatives[front]]);
            else printf("0 ");

            if (front < rear && negatives[front] == i) front++;
            i++;
        }
        j++;
    }
    return 0;
}