// Code to find frequency of elements in a given array in O(1) time complexity.


#include <iostream>
#include <map>

using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
