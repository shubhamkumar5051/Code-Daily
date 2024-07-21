#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name = "shubham123321_@123";

    unordered_map<char, int> mp;

    for(auto c : name)
    {
        mp[c]++;
    }

    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}