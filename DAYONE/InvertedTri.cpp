#include <iostream>
using namespace std;

int main()
{
   int n=4;
   for(int i=0;i<n;i++){
     //spaces
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    //numbers
    for(int k=0; k<n-i; k++){
        cout<<i+1<<" ";
    }
    cout<<endl;
   }
    return 0;
}
