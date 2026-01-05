#include <stdio.h>

int calculate_sum(int *ptr, int n) {
    // Your logic here
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += *ptr++;
    }
    
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = calculate_sum(arr, n);
    printf("%d", result);

    return 0;
}