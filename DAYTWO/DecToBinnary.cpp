#include<iostream.h>
using namespace std;

int decToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + 10 * decToBinary(n / 2);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Binary of " << n << " = " << decToBinary(n);
    return 0;
}