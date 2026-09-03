#include<iostream.h>
using namespace std;

int Bintodecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal of " << n << " = " << Bintodecimal
    (n);

       return 0;
}