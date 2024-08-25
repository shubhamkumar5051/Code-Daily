#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if(a==0 && b==0)
    {
        return 0;
    }
    int ans=1;
    for (int i = 1; i <= min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans = i;
        }
    }
    return ans;
    
}
void code()
{
   //hcf and lcm
   // lcm * hcf = a * b 
   // 6 and 36
   // 6= 1,2,3,6
   // 36= 1,2,3,4,6,9,12,18,36

   int a = 6;
   int b = 36;

   int ans = gcd(a,b);
   cout<<ans;

}

void code1(int *a, int *b)
{
    //swap numbers
    *a= *a + *b; 
    *b= *a-*b;
    *a= *a-*b;
    cout<<"a : "<<*a<<endl;
    cout<<"b : "<<*b<<endl;

}

void code2(int a, int b)
{
    //swap numbers

    a= a*b; // 2*4 = 8
    b = a/b; // 2
    a= a/b;



    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

}
void code3(string str)
{
   
  unordered_map<char, int> mp;

//   for (int i = 0; i < str.length(); i++)
//   {
//     if(str[i]==' ')
//     {
//         continue;
//     }
//     mp[str[i]]++;
//   }

  for(auto c : str)
  {
    mp[c]++;
  }

  for(auto a: mp)
  {
    cout<<a.first<<" "<<a.second<<endl;
  }
  
}


void code4(int num)
{
   int max=num%10;
   int min=num%10;
   
   while (num)
   {
      int last_digit = num%10;
      if(last_digit>max)
      {
        max = last_digit;
      }

      if(last_digit < min)
      {
        min = last_digit;
      }

      num=num/10;
   }
   cout<<max<<" "<<min;
}

void code5(int num)
{
    long long int ans=1;

    for (int i = num; i > 0 ; i--)
    {
        ans= ans * i;
    }
    cout<<ans;
}
int fact(int num)
{
    if(num == 2 || num == 1)
    {
        return num;
    }

    return num*fact(num-1);
}
int main()
{
    //code();
    int a = 2;
    int b =4;
    //code2(a,b);
    //cout<<"in main function"<<endl;
    //cout<<a<<" "<<b;

    string str = "shubham kumar";
    //code3(str);
    int num = 2354;
    //code4(num);

    int num1=3;
    //code5(num1);

    cout<<fact(num1);
    return 0;
}