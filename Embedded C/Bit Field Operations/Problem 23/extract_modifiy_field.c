#include <stdio.h>
#include <stdint.h>

uint32_t update_register(uint32_t reg) {
    // Your logic here
    uint8_t field = 0;
    field = (reg >> 10) & 0x1F;

    if(field < 31) {
        field++;
    } 

    return reg & ~(0x1F << 10) | (field << 10);
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    uint32_t updated = update_register(reg);
    printf("%u", updated);
    return 0;
}