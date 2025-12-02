#include <stdio.h>
#include <stdint.h>

void decode_status(uint8_t status_reg) {
    // Your logic here
    if(status_reg & 0b00000001) printf("Power On\n");
    if(status_reg & 0b00000010) printf("Error\n");
    if(status_reg & 0b00000100) printf("Tx Ready\n");
    if(status_reg & 0b00001000) printf("Rx Ready\n");
    if(status_reg & 0b00010000) printf("Overheat\n");
    if(status_reg & 0b00100000) printf("Undervoltage\n");
    if(status_reg & 0b01000000) printf("Timeout\n");
    if(status_reg & 0b10000000) printf("Reserved\n");
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    decode_status(reg);
    return 0;
}