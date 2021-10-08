#include<bits/stdc++.h>
using namespace std;
unsigned countSetBits(int);
int main() {
    int num = 10;
    cout << countSetBits(num);
    return 0;
}
unsigned countSetBits(int num) {
    unsigned count = 0;
    while(num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
