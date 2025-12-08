#include <stdio.h>
#include <stdint.h>

uint32_t extract_field(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    // assumption: len is never larger than 7
    // if len could be larger than 7 then use uint_32 for mask
    uint8_t mask = (1 << len) - 1;
    reg >>= pos;
    return reg&mask;
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", extract_field(reg, pos, len));
    return 0;
}