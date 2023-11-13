#include<iostream>
using namespace std;

void Swap(int & a, int & b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void Swap(float & m, float & n)
{
    float k;
    k = m;
    m = n;
    n = k;
}

int main()
{
    int a,b;
    cout<<"Enter the values: "<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    float c,d;
    cout<<"Enter the values: "<<endl;
    cin>>c>>d;
    Swap(c,d);
    cout<<c<<" "<<d;


}