#include <stdio.h>
#include <stdint.h>

void convert_to_big_endian(uint32_t value, uint8_t arr[4]) {
    // Your code here
    arr[3] = value & 0xFF;
    arr[2] = (value >> 8) & 0xFF;
    arr[1] = (value >> 16) & 0xFF;
    arr[0] = (value >> 24) & 0xFF;

    // for(int i = 3; i >= 0; i--){
    //     arr[i] = value&0xFF;
    //     value >>= 8;
    // }
}

int main() {
    uint32_t value;
    uint8_t arr[4];
    scanf("%u", &value);
    convert_to_big_endian(value, arr);
    for (int i = 0; i < 4; i++) {
        printf("%u", arr[i]);
        if(i<3){
            printf(" ");
        }
    }
    return 0;
}