#include <stdio.h>

int find_duplicate(int arr[], int n) {
    // Your logic here
    int value = 0;
    for(int i = 0; i < n; i++){
        for(int k = i+1; k < n; k++){
            if(arr[i] == arr[k]) return arr[i];
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = find_duplicate(arr, n);
    printf("%d", result);
    return 0;
}