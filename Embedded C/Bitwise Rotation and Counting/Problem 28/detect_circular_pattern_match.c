#include <stdio.h>
#include <stdint.h>

uint8_t is_circular_match(uint16_t reg, uint16_t target) {
    // Your code here
    for (int i = 0; i < (sizeof(reg)*8); i++){
        if(reg == target){
            return 1;
        }
        reg = (reg << 1) | (reg >> (sizeof(reg)*8)-1);
        reg &= 0xFFFF;
    }
    return 0;
}

int main() {
    uint16_t reg, target;
    scanf("%hu %hu", &reg, &target);
    printf("%hhu", is_circular_match(reg, target));
    return 0;
}