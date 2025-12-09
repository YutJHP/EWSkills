#include <stdio.h>
#include <stdint.h>

uint32_t extract_even_bits(uint32_t reg) {
    // My solution
    uint32_t builder = 0;
    for(int i = 0; i < 16; i++){
        if((reg % 2) == 1){
            builder <<= 1;
            builder |= 1;
        }else{
           // builder <<= 1;
        }
        reg >>= 2;
    }
    return builder;

    /*
        //O(1) solution
    uint32_t even_bits = reg & 0x55555555;
    even_bits = (even_bits | (even_bits >> 1)) & 0x33333333;
    even_bits = (even_bits | (even_bits >> 2)) & 0x0F0F0F0F;
    even_bits = (even_bits | (even_bits >> 4)) & 0x00FF00FF;
    even_bits = (even_bits | (even_bits >> 8)) & 0x0000FFFF;
    return even_bits;
    
    
     */
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    printf("%u", extract_even_bits(reg));
    return 0;
}