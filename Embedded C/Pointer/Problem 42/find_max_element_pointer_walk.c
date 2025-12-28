#include <stdio.h>

int find_max_element(int *ptr, int n) {
    // Your logic here
    int max = 0;

    for(int i = 0; i < n; i++){
        if(*(ptr+i) > *(ptr+max)){
            max = i;
        }
    }

    return *(ptr+max);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = find_max_element(arr, n);
    printf("%d", result);

    return 0;
}