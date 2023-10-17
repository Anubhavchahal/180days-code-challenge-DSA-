#include<iostream>
using namespace std;

int main() 
{
    int row, column, n, m;
    int alp;
    alp = 1;
    cout<<"Enter the number of row: ";
    cin>>n;
    cout<<"Enter the number of coulumns: ";
    cin>>m;

    for(row=1;row<=n;row=row+1)
    {
        for(column=1;column<=m;column=column+1)
        {
            cout<<alp<<" ";
            alp = alp + 1;
        }
        cout<<endl;
        
    
    }
}