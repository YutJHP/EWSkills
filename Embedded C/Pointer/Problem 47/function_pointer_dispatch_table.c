#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int execute_command(int a, int b, int cmd) {
    // Your logic here using function pointer array
    switch(cmd){
        case 0:
            return add(a, b);
        case 1:
            return sub(a, b);
        case 2:
            return mul(a, b);
        case 3:
            return divide(a, b);
        default:
            return -1;
    }
    return -1;
}

int main() {
    int a, b, cmd;
    scanf("%d %d %d", &a, &b, &cmd);

    int result = execute_command(a, b, cmd);
    printf("%d", result);

    return 0;
}