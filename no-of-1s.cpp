#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter N: ";
    cin>>N;

    int c=0;
    while(N)
    {
        if((N&1)==1)
            c++;
        
        N>>=1;
    }

    cout<<"No of 1's: "<<c<<endl;
    return 0;
}