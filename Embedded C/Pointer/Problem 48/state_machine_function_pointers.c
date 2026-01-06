#include <stdio.h>

void state_init()    { printf("Init"); }
void state_load()    { printf("Load"); }
void state_execute() { printf("Execute"); }
void state_exit()    { printf("Exit"); }

void (* fun[])() = {state_init, state_load, state_execute, state_exit};

// Your logic here
void run_state_sequence(int start) {
    // Implement using function pointer array
    for(int i = start; i < start+4-1; i++){
        fun[i%4]();
        printf("\n");
    }
}

int main() {
    int start;
    scanf("%d", &start);
    run_state_sequence(start);
    return 0;
}