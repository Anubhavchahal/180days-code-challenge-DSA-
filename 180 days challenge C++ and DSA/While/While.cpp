#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n: ";
    cin>>n;
   
    

    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        continue;
            

        cout<<i<<endl;
    }
}