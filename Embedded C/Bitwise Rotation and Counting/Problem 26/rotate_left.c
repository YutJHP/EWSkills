#include <stdio.h>
#include <stdint.h>

uint8_t rotate_left(uint8_t reg, uint8_t n) {
    // Your code here
    n %= 8;
    reg = (reg << n) | (reg >> (8-n));
    return reg &= 0xFF;
}

int main() {
    uint8_t reg, n;
    scanf("%hhu %hhu", &reg, &n);
    printf("%u", rotate_left(reg, n));
    return 0;
}