#include <stdio.h>

unsigned char extractNibble(unsigned char reg, int pos) {
    // Write your code here
    return (pos==1) ? (reg>>4)&0x0F : reg&0x0F;
}

int main() {
    unsigned char reg;
    int pos;
    scanf("%hhu %d", &reg, &pos);
    printf("%d", extractNibble(reg, pos));
    return 0;
}