#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "shubham shubhham";
    //count the frequency

    map<char, int> mp;

   for(auto c : mp)
   {
      mp[c]++;
   }

    for(auto x : mp)
    {
        cout<<x.first<<"  "<<x.second<<endl;
    }


    
    return 0;
}