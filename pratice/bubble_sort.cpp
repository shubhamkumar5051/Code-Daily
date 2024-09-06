#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {13,46,24,52,20,9};
    // 13,46,24,52,20,9
    // 13,46,24,52,20,9 -> 5 compare
    // 13
    int count = sizeof(arr)/sizeof(arr[0]);

    for (int j = 0; j <count-1; j++)
    {
       
       for (int i = 0; i < count-j-1; i++)
       {
        /* code */
        if(arr[i]>arr[i+1])
       {
         //swap
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
       }
       }
       
    }


    for (int i = 0; i < count; i++)
    {
      /* code */
      cout<<arr[i]<<" ";
    }
    
    

    return 0;
}