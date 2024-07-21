#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
  int largest = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] > largest)
    {
        largest = arr[i];
    }
  }
  
  //2nd largest

  int sec_largest = -1;

  for (int i = 0; i < n; i++)
  {
    if(arr[i]!= largest)
    {
        if(arr[i]== -1 || arr[i] > sec_largest)
        {
            sec_largest = arr[i];
        }
    }
  }
  return sec_largest;
}

int main()
{

    int arr[]= {45,45,45};
    int length = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, length);
    ans==-1?cout<<"no second largest element exist":cout<<ans; 
    return 0;
}