#include<iostream>
using namespace std;

int main()
{
    int last, previous,current, n, i;
    cout<<"Enter the value of n: ";
    cin>>n;
    last = 0;
    previous = 1;
    if(n==1)
    {
        cout<<"The value is: "<<last;
    }
    else if (n==2)
    {
        cout<<"The value is: "<<previous;
    }
    else
    {
        for(i=3;i<=n;i=i+1)
        {
            current = previous + last;
            last = previous;
            previous = current;
            
         
        }
        cout<<"The value is: "<<current;
    }
}