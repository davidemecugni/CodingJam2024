/*
x,y,w,z
M=xy-1
e=wM+x
d=zM+y
n= (ed-1) / M

*/
#include <stdio.h>

int main() {
    unsigned long long e_f = 17459243613;
    unsigned long long n_f = 66624478857659;
    unsigned long long x, y, w, z, M, d, e, n;

    for (x = 1024; x < 4096; x++) {
        printf("x");
        for (y = 1024; y < 4096; y++) {
            for (w = 1024; w < 4096; w++) {
                for (z = 1024; z < 4096; z++) {
                    M = x * y - 1;
                    e = w * M + x;
                    d = z * M + y;
                    n = (e * d - 1) / M; // Note: 'd' variable is not defined in your snippet
                    if (e == e_f && n == n_f) {
                        printf("\nx: %llu, y: %llu, w: %llu, z: %llu, M: %llu, e: %llu, n: %llu\n", x, y, w, z, M, e, n);
                    }
                }
            }
        }
    }

    return 0;
}

