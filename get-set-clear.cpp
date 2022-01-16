#include<iostream>
using namespace std;


int getBit(int N, int i)
{
    return ((N&(1<<i))!=0);
}

int setBit(int N,int i)
{
    return (N|(i<<i));
}

int clearBit(int N,int i)
{
    int mask=~(1<<i);
    return (N&(mask));
}

int main()
{
    cout<<"BIT: ";
    cout<<getBit(8,2)<<endl;

    cout<<"SET:"<<setBit(8,1)<<endl;

    cout<<"CLEAR:"<<clearBit(6,1)<<endl;
    return 0;


}