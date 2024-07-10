#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

void printVec(vector<int> v) {
    vector<int>::iterator i = v.begin();
    while (i != v.end()) {
        cout << *(i) << " ";
        i++;
    }
    cout << endl;
}

int main() {
    vector<int> v(5), v1(5);
    iota(v.begin(), v.end(), 1); // Initializes v with {1, 2, 3, 4, 5}
    iota(v1.begin(), v1.end(), 6); // Initializes v1 with {6, 7, 8, 9, 10}

    vector<int> result;
    // Computes the union of v and v1 and stores it in result
    set_union(v.begin(), v.end(), v1.begin(), v1.end(), inserter(result, result.begin()));
    printVec(result); // Output: 1 2 3 4 5 6 7 8 9 10

    vector<int> v2(4);
    iota(v2.begin(), v2.end(), 3); // Initializes v2 with {3, 4, 5, 6}

    vector<int> re;
    // Computes the intersection of v and v2 and stores it in re
    set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), inserter(re, re.begin()));
    printVec(re); // Output: 3 4 5

    vector<int> result1;
    // Computes the difference of v and v1 and stores it in result1
    set_difference(v.begin(), v.end(), v1.begin(), v1.end(), inserter(result1, result1.begin()));
    printVec(result1); // Output: 1 2 3 4 5
    // Removes common elements
    vector<int>result2;
    set_symmetric_difference(v.begin(), v.end(), v2.begin(), v2.end(), inserter(result2, result2.begin()));
    printVec(result2); //Output: 3 4 5
}
