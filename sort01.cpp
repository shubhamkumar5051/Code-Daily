#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]={1,1,0,0,1,0,1,0,0,0};

    int n = sizeof(arr)/sizeof(arr[0]);
    int zero=0;
    for (int i = 0; i <n; i++)
    {
        if(arr[i] == 0)
        zero++;
    }

    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for(int i = zero ;i<n;i++)
    {
        arr[i] = 1;
    }

     for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}