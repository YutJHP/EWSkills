#include <stdio.h>

void rotate_left(int arr[], int n, int k) {
    // Your logic here
    if(n <= 1 || k < 1 || k == n) return;

    k %= n;
    int temp = 0;
    for(int i = 0; i < k; i++){

        temp = arr[0];

        for(int j = 0; j < n-1; j++){
            arr[j] = arr[j+1];
        }

        arr[n-1] = temp;

    }

}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[100];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rotate the array
    rotate_left(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n-1){
        	printf(" ");
        }
    }

    return 0;
}