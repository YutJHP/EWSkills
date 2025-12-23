#include <stdio.h>

int validate_checksum(int *mem, int n) {
    // Write your XOR scan logic here
    if(n < 2 || mem == NULL){
        return 0;
    }

    /**
    int result = *mem;
    for (int i = 1; i < n-1; i++){
        result ^= *(mem+i); 
    }
    return result == *(mem+n-1);
    */
    int result = mem[0];
    for (int i = 1; i < n-1; i++){
        result ^= mem[i]; 
    }
    return result == mem[n-1];
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = validate_checksum(arr, n);
    printf("%d", result);

    return 0;
}