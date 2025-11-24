#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {

    if (reg == 0) return 0;
    /**    
    // My actual solution

    int count = 0;
    while(reg > 1){
        reg = reg >> 1;
        count++;
    }
    return reg << count;
    */

    /** 

    Cool Bit hack solution I learned after the fact

    reg |= reg >> 1;
    reg |= reg >> 2;
    reg |= reg >> 4;
    reg |= reg >> 8;
    return reg = reg - (reg >> 1);

    */

    // Giga fast apparently
    return 1u << (15 - __builtin_clz(reg) + (32 - 16));
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}