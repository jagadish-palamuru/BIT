#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout<<"Enter N: ";
    cin>>N;

    string bin="";
    while(N)
    {
        bin=(((N&1)==1)?'1':'0') + bin;

        N>>=1;
    }

    cout<<bin<<endl;
    return 0;
}