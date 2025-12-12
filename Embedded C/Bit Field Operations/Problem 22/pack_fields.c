#include <stdio.h>
#include <stdint.h>

uint16_t pack_register(uint8_t mode, uint8_t speed, uint8_t status) {
    // Your logic here
    uint16_t reg = 0;
    reg |= (status & 0x3F) << 10;
    reg |= (speed & 0x1F) << 3;
    reg |= (mode & 0x07);
    return reg;
}

int main() {
    uint8_t mode, speed, status;
    scanf("%hhu %hhu %hhu", &mode, &speed, &status);

    uint16_t reg = pack_register(mode, speed, status);
    printf("%u", reg);
    return 0;
}