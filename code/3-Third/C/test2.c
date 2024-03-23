#include <stdlib.h>
#include <stdio.h>
int main(void){
    int r = 1000000000;  //Numero di giri
    int k = 100;
    int P[] = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2};
   
    size_t index = 0;
    long long grams_of_pancetta = 0;
    for(size_t i = 0; i <= sizeof(P) / sizeof(int); ++i){
        int n_pulcini = 0;
       
        while (n_pulcini <= k){\\
           
            n_pulcini += P[index];
            index += 1;
            if (index >= sizeof(P) / sizeof(int)){
                index = 0;
            }
           

        if (index == 0){
            index = sizeof(P) / sizeof(int) - 1;
            n_pulcini -= P[index];
        }    
        else{
            index -= 1;
            n_pulcini -= P[index];
        }      
       

        grams_of_pancetta += n_pulcini;
        }
    }
       
       

    printf("%lld", grams_of_pancetta);
}