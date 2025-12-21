#include <stdio.h>
#include <stdint.h>

// Complete the function
const char* is_power_of_two(uint32_t n) {
    // Your logic here
    if (n != 0 && (n & (n - 1)) == 0){
        return "YES";
    }
    return "NO";
}

int main() {
    uint32_t n;
    scanf("%u", &n);

    const char* result = is_power_of_two(n);
    printf("%s", result);
    return 0;
}