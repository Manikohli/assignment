#include<iostream>
using namespace std;

int main() {
    int arr1[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
    int arr2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
    int ansA[3][3] = {0}; // Initialize the resultant matrix with zeros

    // Matrix multiplication
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                ansA[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the resultant matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << ansA[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}