#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void findMissing(int* arr, int n, int low, int high) {
    set<int> values;
    for (int i=0; i<n; i++) {
        values.insert(arr[i]);
    }
    for (int i=low; i<high; i++) {
        if (values.find(i) == values.end()) {
            cout << i << " ";
        }
    }

}


int main() {
    int n = 4;
    int low = 10;
    int high = 15;
    int arr[n] = {10,12,11,15};
    findMissing(arr, n, low, high);
    return 0;

}