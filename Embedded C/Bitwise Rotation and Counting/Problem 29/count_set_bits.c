#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg) {
    // Your code here
    int count = 0;
    while (reg) {
        count += (reg & 1);
        reg >>= 1;
    }
    return count;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", count_set_bits(reg));
    return 0;
}