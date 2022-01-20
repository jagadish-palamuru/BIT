#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout<<"Enter N:  ";
    cin>>N;

    int v=0;
    int r,i=1;
    while(N>0)
    {
        r=N%2;
        N/=2;

        v+=r*i;
        i*=10;
    }

    cout<<v<<endl;

    return 0;
}