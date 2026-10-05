#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("long --> %dB\n", sizeof(long long));
    printf("int --> %dB\n", sizeof(int));
    printf("short --> %dB\n", sizeof(short));
    printf("byte --> %dB\n", sizeof(char));

    
    printf("float --> %dB\n", sizeof(float));
    printf("double --> %dB\n", sizeof(double));

    printf("char* --> %dB\n", sizeof(char*));
    printf("long* --> %dB\n", sizeof(long*));
    printf("void* --> %dB\n", sizeof(void*));


    return 0;
}