#include<iostream>
using namespace std;

int sum(int a, int b){
    int ans = a + b;
    return ans;
}

void fun()
{
    cout<<"Hello coder army"<<endl;

}

int main()
{
    int m, n;
    fun();
    
    cout<<"Enter the value of m and n: "<<endl;
    cin>>m>>n;
    cout<<sum(m,n);
    
}