#include <iostream>
#include <bitset>

using namespace std;

int foldingMethod(long long n) {

    if (n) {
        n ^= n >> 32;
        cout << bitset<32>(n) << endl;
        n ^= n >> 16;
        cout << bitset<32>(n) << endl;
        n ^= n >> 8;
        cout << bitset<32>(n) << endl;
        n ^= n >> 4;
        cout << bitset<32>(n) << endl;
        n ^= n >> 2;
        cout << bitset<32>(n) << endl;
        n ^= n >> 1;
        cout << bitset<32>(n) << endl;

        return n & 1;
    }

    return n;
}
int main() {

    long long n = 13; // 1100
    int parity = foldingMethod(n);
    cout << parity << endl;
    return 0;
}