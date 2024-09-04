#include<bits/stdc++.h>
using namespace std;


//using loop
void factorial1(int num)
{
    long long ans=1;

    for(int i=num ; i>=1; i--)
    {
        ans= ans * i;
    }
    cout<<ans;
}

//uisng recurssion
int factorial2(int num)
{
    if(num == 1)
    {
        return 1;
    }
    
    return num * factorial2(num-1);
}

int main()
{
    //factorial 5!=5*4*3*2*1
    int num = 5;
    //factorial1(num);
    long long ans = factorial2(num);
    cout<<ans;
    return 0;
}