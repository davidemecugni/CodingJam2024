#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int index_of_split(int *P, int size, int k) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += P[i];
        if (s > k) {
            return i - 1;
        }
    }
}

int main() {
    int r = 1000000000; // Numero di giri
    int k = 100;        // Quanti ne stanno
    // r = 4;
    // k = 6;
    // int P[] = {1, 4, 2, 1};
    int P[] = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2};
    // int *P = P_test;
    clock_t t = 0;
    long long grams_of_pancetta = 0;

    for (int i = 0; i < r; i++) {
        int split_index = index_of_split(P, sizeof(P) / sizeof(P[0]), k);
        int can_fit[split_index + 1];
        int cannot_fit[sizeof(P) / sizeof(P[0]) - split_index - 1];

        for (int j = 0; j <= split_index; j++) {
            can_fit[j] = P[j];
            grams_of_pancetta += P[j];
        }
        // printf("Index of split: %d\n", split_index);
        for (int j = split_index + 1; j < sizeof(P) / sizeof(P[0]); j++) {
            cannot_fit[j - split_index - 1] = P[j];
        }
        /*
        printf("Can fit [");
        for(int j=0; j< sizeof(can_fit)/sizeof(int); j++){
            printf("%d ",can_fit[j]);
        }

        printf("]\n");
        printf("Cannot fit [");
        for(int j=0; j< sizeof(cannot_fit)/sizeof(int); j++){
            printf("%d ",cannot_fit[j]);
        }
        printf("]\n");
        printf("P [");
        for(int j=0; j< sizeof(P)/sizeof(int); j++){
            printf("%d ",P[j]);
        }
        printf("]\n"); */
        for (int j = 0; j < sizeof(cannot_fit) / sizeof(cannot_fit[0]); j++) {
            P[j] = cannot_fit[j];
        }

        for (int j = 0; j < sizeof(can_fit) / sizeof(can_fit[0]); j++) {
            P[j + sizeof(cannot_fit) / sizeof(cannot_fit[0])] = can_fit[j];
        }

        if (i % 1000000 == 0) {
            printf("ciclo\n");
            printf("Delta %f\n", (double)(clock() - t) / CLOCKS_PER_SEC);
            t = clock();
        }
    }
    printf("%lld\n", grams_of_pancetta);
    return 0;
}
