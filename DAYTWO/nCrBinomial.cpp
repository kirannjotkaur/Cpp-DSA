#include <iostream>
using namespace std;

long long nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    long long result = 1;
    for (int i = 0; i < r; i++) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

int main() {
    int n, r;
    cout << "Enter values of n and r: ";
    cin >> n >> r;
    cout << "C(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    return 0;
}