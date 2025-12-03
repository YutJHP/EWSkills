#include <stdio.h>
#include <stdint.h>

// Define macros here
#define ENABLE(enable)  ((enable & 0x01))
#define MODE(mode)      ((mode & 0x03) << 1)
#define SPEED(speed)    ((speed & 0x07) << 3)

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    // Use macros to set fields
    uint16_t reg = 0;
    reg |= ENABLE(enable);
    reg |= MODE(mode);
    reg |= SPEED(speed);

    return reg;
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}