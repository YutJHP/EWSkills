#include <stdio.h>
#include <stdint.h>

uint32_t set_baud_rate(uint32_t reg, uint8_t baud) {
    // Your code here
    reg &= ~(((1 << 4) - 1) << 8);

    return reg | (baud << 8);
}

int main() {
    uint32_t reg;
    uint8_t baud;
    scanf("%u %hhu", &reg, &baud);
    printf("%u", set_baud_rate(reg, baud));
    return 0;
}