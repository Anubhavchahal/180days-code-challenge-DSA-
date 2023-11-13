#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1;row<=50;row++)
    {
        char name='a'+ (row-1);
        for(col=1;col<=50-(row-1);col++) 
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}