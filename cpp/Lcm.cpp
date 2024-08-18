#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

   int num1=10; //
   int num2=5; //
   
   //lcm = lowest common multiple
   // 10 20 30 40 50 60 70 80 90
   // 6 12 18 24 30 36 42 48 54 60


   for(int i=num1>num2?num1:num2 ; i<=num1*num2;i++)
   {
     cout<<i<<endl;
     if(i%num1 == 0 && i%num2 == 0)
     {
        cout<<i;
        break;
     }
   }
  

   
   return 0;
}