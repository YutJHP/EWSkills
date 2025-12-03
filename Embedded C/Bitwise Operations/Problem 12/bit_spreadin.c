#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    // Your logic here
    uint16_t spread = 0;

    for(int i = 7; i > -1; i--){
        if(val & (1 << i)){
            spread |= (1 << i*2);
        }
    }
    return spread;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}