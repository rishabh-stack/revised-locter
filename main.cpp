#include<bits/stdc++.h>
using namespace std;
// Function that return the count of flipped number
int flippedCount(int a, int b) {
    int XOR = a ^ b;
    int cnt = 0;
    while(XOR) {
        cnt += (XOR & 1);
        XOR >>= 1;
    }
    return cnt;
}
int main() {
    int a = 10;
    int b = 20;
    cout << flippedCount(a, b) << "\n";
    return 0;
}
