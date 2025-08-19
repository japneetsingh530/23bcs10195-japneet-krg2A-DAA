// Code implement power function in O(logn) time complexity.


#include <iostream>

using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    int half = power(base, exp / 2);
    if (exp % 2 == 0)
        return half * half;
    else
        return base * half * half;
}

int main() {
    int base = 2;
    int exp = 10;
    cout << power(base, exp) << endl;
    return 0;
}
