#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "abcd_12_defg_34_hjs_21";
    string temp_str="";
    int sum=0;
    for(auto c : str)
    {
        if(isdigit(c))
        {
            temp_str= temp_str+c;
           
        }else{
            if(temp_str != "")
            {
                sum = sum + stoi(temp_str);
                temp_str = "";
            }
        }
    }

    if(temp_str!="")
    {
        sum+= stoi(temp_str);
    }

    cout<<"sum is : "<<sum;
    return 0;
}