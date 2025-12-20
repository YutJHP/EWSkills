#include <stdio.h>
#include <stdint.h>

uint32_t rotate_right(uint32_t reg, uint8_t n) {
    // Your code here
    n %= 32;
    reg = (reg >> n) | (reg << (32-n));

    return reg &= 0xFFFFFFFF;
}

int main() {
    uint32_t reg;
    uint8_t n;
    scanf("%u %hhu", &reg, &n);
    printf("%u", rotate_right(reg, n));
    return 0;
}