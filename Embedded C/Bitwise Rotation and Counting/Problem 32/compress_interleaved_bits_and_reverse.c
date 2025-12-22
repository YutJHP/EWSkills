#include <stdio.h>
#include <stdint.h>

uint8_t compress_bits(uint16_t val) {
    // Your logic here
    uint8_t result = 0;
    for (int i = 0; i < (sizeof(result)*8); i++){
        result |= ((1 & val) << i);
        val >>= 2;
    }

    return result;
}

int main() {
    uint16_t val;
    scanf("%hu", &val);

    uint8_t result = compress_bits(val);
    printf("%u", result);
    return 0;
}