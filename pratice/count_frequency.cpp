#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "shubham";
    int arr[] = {2,2,3,4,4,2};
    map<int, int> mp;

    int size = sizeof(arr)/sizeof(arr[0]);
    

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    int smallest = INT_MAX;
    int smallest_num = 0;
    int greatest = INT_MIN;
    int greatest_num = 0;

    for(auto x : mp)
    {
        if(x.second < smallest)
        {
            smallest = x.second;
            smallest_num = x.first;
        }

        if(x.second > greatest)
        {
            greatest = x.second;
            greatest_num = x.first;
        }
    }

    cout<<"Greatest Frequency number "<< greatest_num<<endl;
    cout<<"Smallest Frequency number"<<  smallest_num<<endl;

    
    
    return 0;
}