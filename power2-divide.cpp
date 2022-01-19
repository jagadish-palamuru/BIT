#include<iostream>
using namespace std;

bool bitDivide(int n,int p)
{
    return ((n&((1<<p)-1))==0);
}
int main()
{
    int n,p;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>p;

    bitDivide(n,p)?cout<<"Power of 2":cout<<"Not a power of 2"<<endl;


    return 0;
}