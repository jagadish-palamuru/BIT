#include<iostream>
using namespace std;

int main()
{
    int n,a[32];

    cout<<"N value: "<<endl;
    cin>>n;

    int i=0;
    while(n)
    {
        a[i++]=n%2;
        n=n/2;
    }

    for(int j=i-1;j>=0;j--)
        cout<<a[j];

    return 0;
}