/*
x,y,w,z
M=xy-1
e=wM+x
d=zM+y
n= (ed-1) / M

*/
#include <stdint.h>   // for uint64_t
#include <stdio.h>
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main() {
    __int128 e_f = 17459243613;
    __int128 n_f = 66624478857659;
    __int128 x, y, w, z, M, d, e, n;

    for (x = 1024; x < 4096; x++) {
        if(x%40 == 0){
            printf("x");
            // printf("%ld", sizeof(unsigned long long));
        }
        for (y = 1024; y < 4096; y++) {
            for (w = 1024; w < 4096; w++) {
                for (z = 1024; z < 4096; z++) {
                    M = x * y - 1;
                    e = w * M + x;
                    if( e != e_f){
                        continue;
                    }
                    d = z * M + y;
                    n = (e * d - 1) / M;
                    if (n == n_f) {
                        print(x);
                        print(y);
                        print(z);
                        print(w);
                        print(M);
                        // printf("\nx: %w128d, y: %w128d, w: %w128d, z: %w128d, M: %w128d, e: %w128d, n: %w128d, d: %w128d\n", x, y, w, z, M, e, n, d);
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}