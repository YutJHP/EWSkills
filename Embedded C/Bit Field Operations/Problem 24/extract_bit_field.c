#include <stdio.h>
#include <stdint.h>

uint8_t extract_field(uint16_t reg) {
    // Your logic here
    uint8_t field = 0;
    field = (reg >> 4) & 0x1F;
    return field;
}

int main() {
    uint16_t reg;
    scanf("%hx", &reg);
    printf("%u", extract_field(reg));
    return 0;
}