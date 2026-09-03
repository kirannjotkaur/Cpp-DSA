#include <iostream>
using namespace std;

int SumDigits(int num){
    int DigSum = 0;
    while(num > 0){
        DigSum += num % 10;
        num /= 10;
    }
    return DigSum;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits of " << number << " is " << SumDigits(number) << endl;
    return 0;
}