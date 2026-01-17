#include <iostream>
#include <bitset>

using namespace std;

// Swap bits at positions i and j in n
long swapBits(long n, int i, int j) {
    int bit_i = (n >> i) & 1;
    int bit_j = (n >> j) & 1;

    if (bit_i != bit_j) {
        long mask = (1L << i) | (1L << j);
        n ^= mask;
    }

    return n;
}

int main() {
    // Test 1: Different bits
    long n = 11;
    cout << "Test 1: " << bitset<8>(n) << " -> ";
    n = swapBits(n, 0, 2);
    cout << bitset<8>(n) << endl;

    // Test 2: Same bits (no change)
    n = 7;
    cout << "Test 2: " << bitset<8>(n) << " -> ";
    n = swapBits(n, 0, 1);
    cout << bitset<8>(n) << endl;

    // Test 3: Different bits
    n = 2;
    cout << "Test 3: " << bitset<8>(n) << " -> ";
    n = swapBits(n, 1, 4);
    cout << bitset<8>(n) << endl;

    // Test 4: All zeros
    n = 0;
    cout << "Test 4: " << bitset<8>(n) << " -> ";
    n = swapBits(n, 0, 5);
    cout << bitset<8>(n) << endl;

    // Test 5: All ones
    n = 255;
    cout << "Test 5: " << bitset<8>(n) << " -> ";
    n = swapBits(n, 1, 7);
    cout << bitset<8>(n) << endl;

    return 0;
}
