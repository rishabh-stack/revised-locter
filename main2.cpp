#include<bits/stdc++.h>
using namespace std;
bool isPowerOf2(long long int n) {
    if(n == 0) return 0;
    return !(n & (n-1));
}
int main() {
    long long int a = 16;
    if(isPowerOf2(a)) {
        cout << "Yes" << "\n";
    }
    else {
        cout << "No" << "\n";
    }
    return 0;
}
