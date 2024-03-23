#include <iostream>
#include <vector>

using namespace std;

long long calculatePancetta(int r, int k, vector<int>& P) {
    long long grams_of_pancetta = 0;
    int n = P.size();
    
    for (int i = 0; i < r; ++i) {
        int space_left = k;
        int j = 0;

        while (j < n && space_left >= P[j]) {
            space_left -= P[j];
            j++;
        }

        grams_of_pancetta += (long long)(k - space_left);

        vector<int> new_order(P.begin() + j, P.end());
        new_order.insert(new_order.end(), P.begin(), P.begin() + j);

        P = new_order;
    }

    return grams_of_pancetta;
}

int main() {
    int r = 1000000000;  // Numero di giri
    int k = 100;
    vector<int> P = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2};
 
    long long result = calculatePancetta(r, k, P);

    cout << "Grammi di pancetta necessari: " << result << endl;

    return 0;
}
