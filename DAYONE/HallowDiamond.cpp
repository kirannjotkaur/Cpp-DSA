#include <iostream>
using namespace std;

int main()
{
    //TOP PYRAMID
    int n= 4;
    for(int i=0;i<n;i++){
        //space2
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        //space1
        for(int j=0; j<2*i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //BOTTOM PYRAMID
    for(int i=n-1;i>=0;i--){
        //space2
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        //space1
        for(int j=0; j<2*i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}