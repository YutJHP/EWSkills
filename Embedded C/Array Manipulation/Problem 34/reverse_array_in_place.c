#include <stdio.h>

void reverse_array(int arr[], int n) {
    // Your logic here
    for(int i = 0; i < n/2; i++){
        arr[i] ^= arr[n-i-1];
        arr[n-i-1] ^= arr[i];
        arr[i] ^= arr[n-i-1];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n-1){
        	printf(" ");
        }
    }
    return 0;
}