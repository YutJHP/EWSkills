#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here
const uint8_t set_seven_two = 0b10000100;
const uint8_t clear_three   = 0b11110111;
const uint8_t toggle_five   = 0b00100000;


uint8_t modify_register(uint8_t reg) {
    // Apply operations in order
    reg |= set_seven_two;
    reg &= clear_three;
    return reg ^= toggle_five;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}