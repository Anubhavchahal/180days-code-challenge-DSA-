#include<iostream>
using namespace std;

int countdigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;

}

bool armstrong(int num, int digit)
{
    int n = num , ans = 0, rem;
    while(n)
    {
        rem = n%10;
        n/=10;
        int pow=1;
        for(int i=1;i<=digit;i++)
        {
        pow = pow*rem; 
        }
        ans = ans + pow;
        

    }
    if(ans == num)
    return 1;
    else 
    return 0;
}

int main()
{
    int num;
    cin>>num;
    int digit = countdigit(num);
    cout<<armstrong(num,digit);

}
