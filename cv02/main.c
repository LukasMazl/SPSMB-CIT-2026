#include <stdio.h>

void print_ip(int ip) {
    int mask = 0b11111111;
    int ip4 =  ip & mask;
    ip = ip >> 8;
    int ip3 = ip & mask;
    ip = ip >> 8;
    int ip2 = ip & mask;
    ip = ip >> 8;
    int ip1 = ip & mask;
    printf("%d.%d.%d.%d", ip1, ip2, ip3, ip4);
}

int build_ip(int a, int b, int c, int d) {
    int ip = 0;
    ip = a;
    ip = ip << 8;
    ip = ip | b;
    ip = ip << 8;
    ip = ip | c;
    ip = ip << 8;
    ip = ip | d;
    return ip;
}

int main()
{
    char a = 127; // vypiste v binarce
    char mask = 0b10000000;
    for(int i = 0; i < 8; i++) {
        if (a & mask) {
            printf("1");
        }
        else {
            printf("0");
        }
        a = a << 1;
    }
    return 0;
}