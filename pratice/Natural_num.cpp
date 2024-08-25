#include<bits/stdc++.h>

using namespace std;


//1st way - using loop
int Natural_num(int num)
{
   long long ans=0;

   for(int i=1; i<=num; i++)
   {
     ans+=i;
   }

   return ans;
}

//2nd way - formulae
int Natural_num1(int num)
{
   long long ans=0;

   ans = num*(num+1)/2;
}


//3rd way - Recursion
int Natural_num2(int num)
{
   long long int ans = 0;
   if(num == 0)
   {
    return 0;
   }
   return num + Natural_num2(num-1);
}

int main()
{
    int num=5;
    long long int ans = Natural_num(num);
    long long int ans1 = Natural_num1(num);
    long long int ans2 = Natural_num2(num);
    cout<<ans<<" "<<ans1<<" "<<ans2;
    return 0;
}