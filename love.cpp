#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
    int temp;
    while ((n2!=0))
    {
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    return n1;
}
int main()
{
    int x=7,y=13;
    cout<<gcd(x,y);
}