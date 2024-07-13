#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> arr(4, vector<int>(3, 0)); // 4x3 vector initialized with 0s

    // Inserting elements using nested for loops
    int value = 1; // Starting value to insert
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            arr[i][j] = value++;
        }
    }

    // Display the 2D vector
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
