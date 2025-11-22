#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    /** 
    1. Check the mode if it's a 1 or 0
    2. Start with a 1 which in binary is represented as 0000 0001
    3. Shift its position a number of times equal to the position
    4. depending on the mode, use the correct mask.
         if(mode == 1){
             // 0000 1000    MASK (3rd position) 
             // 0000 1010    REGISTER (int 10)
             // 0000 1010    RESULT OF (REGISTOR | MASK)
             return reg | (1 << pos);
         }
         else{ //(mode == 0)
             // 0000 1000    MASK (3rd position) 
             // 1111 0111    MASK after NOT
             // 0000 1010    REGISTER (int 10)
             // 0000 0010    RESULT OF (REGISTOR & NOT MASK)
             return reg & ~(1 << pos);    
         }
    */

    // The following is functionally identical to the above but written as a ternary operator
    return mode ? reg | (1 << pos) : reg & ~(1 << pos);
}

int main() {
    unsigned char reg;
    int pos, mode;
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}