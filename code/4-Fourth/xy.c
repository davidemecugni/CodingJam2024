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
        for (y = 1024; y < 4096; y++) {
            for (z = 1024; z < 4096; z++) {
                if( ((x*y-1)*n_f) == (e_f *( x*y*z -z+y) - 1)){
                    print(x); //3338
                    printf("\n");
                    print(y); //2866
                    printf("\n");
                    print(z); //3816
                    printf("\n");
                    print(z*(x*y-1)+y); //d = 36506556778
                    printf("\n");
                    // w = 1825
                    // M = 9566707
                    // d = 36506556778

                }
            }
        }
    }
    
    printf("\n");
    return 0;
}