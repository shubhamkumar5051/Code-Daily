#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    // 13,46,24,52,20,9
    // 13,46,24,52,20,9 -> 5 compare
    // 13
    int count = sizeof(arr)/sizeof(arr[0]);

    for (int j = 0; j <count-1; j++)
    {
       bool didSwap = false;
       for (int i = 0; i < count-j-1; i++)
       { 
        cout<<arr[i]<<endl;
       if(arr[i]>arr[i+1])
       {
         //swap
         didSwap = true;
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
       }
       }
       
       if(didSwap == false)
       {
          break;
       }
    }


    for (int i = 0; i < count; i++)
    {
      /* code */
      cout<<arr[i]<<" ";
    }
    
    

    return 0;
}