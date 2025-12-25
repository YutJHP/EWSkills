#include <stdio.h>

void sliding_window_sum(int arr[], int n, int k) {
    // Your logic here
    for(int i = 0; i < n-k+1; i++){
        int sum = 0;
        for(int x = i; x < i+k; x++){
            sum += arr[x];
        }
        printf("%d ", sum);
    }
}

int main() {
    int n, k, arr[100];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    sliding_window_sum(arr, n, k);
    return 0;
}