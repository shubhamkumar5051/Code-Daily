#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 36;

    //brute force approach

    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }


    //optimal solution
    return 0;
}