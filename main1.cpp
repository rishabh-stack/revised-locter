#include<bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    int quotient = 0;
    dividend = abs(dividend);
    divisor = abs(divisor);
    while(dividend >= divisor) {
        quotient++;
        dividend -= divisor;
    }
    return (sign * quotient);
}
int main() {
    int dividend = 10, divisor = 2;   // a/b=5
    cout << divide(dividend, divisor);
    return 0;
}
