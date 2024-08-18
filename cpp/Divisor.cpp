#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 36;

    //brute force approach

    // for(int i=1; i<=num; i++)
    // {
    //     if(num%i==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }


    //optimal solution

    //divisor of 36
    /*
    1*36
    2*18
    3*12
    4*9
    6*6   ------------- sqrt of 36
    36*1
    18*2
    12*3
    9*4
    */


    for (int i = 1; i <=sqrt(num); i++)
    {
        if(num%i==0)
        {
        if(i == num/i)
        {
          cout<<i<<endl;
        }else{
        cout<<i<<" "<<num/i<<endl;
        }
        }
    }
    
    return 0;
}