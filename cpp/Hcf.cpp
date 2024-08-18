#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

   int num1=14;
   int num2=8;
   int gcd = 0;
   int range = min(num1,num2);
   for (int i = range ; i > 0; i--)
   {
      if(num1%i == 0 && num2%i == 0)
      {
        gcd = i;
        break;
      }
   }

   cout<<"gcd is "<<gcd;
   return 0;
}