#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }
    return 0;
}
