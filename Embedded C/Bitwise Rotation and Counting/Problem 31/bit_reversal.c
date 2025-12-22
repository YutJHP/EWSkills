#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t val) {
    // Your logic here
    uint8_t reverse = 0;
    for(int i = (sizeof(val)*8); i > 0 ; i--){
        reverse |= ((1 & val) << i-1);
        val >>= 1;
    }

    return reverse;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint8_t result = reverse_bits(val);
    printf("%u", result);
    return 0;
}