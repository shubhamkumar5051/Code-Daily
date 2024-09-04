#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {13,2,24,52,20,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<=size ;i++)
    {
        int temp = arr[i];
        
        for(int j = i-1; j>=0; j--)
        {
            if(temp < arr[j])
            {
                arr[j+1]= arr[j];
                arr[j] = temp;
            }
        }
    }


    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}