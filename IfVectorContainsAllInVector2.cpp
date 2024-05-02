#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for std::includes
using namespace std;

int main(){
    vector<int> v = {1, 6, 4, 7, 10, 11};
    vector<int> v1 = {1, 6, 4, 7,10};

    if (includes(v.begin(), v.end(), v1.begin(), v1.end())) {
        cout << "Contains all elements of vector 2 in vector 1";
    } else {
        cout << "Doesn't contain all elements of vector 2 in vector 1";
    }

    return 0;
}
