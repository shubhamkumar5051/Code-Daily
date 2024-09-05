#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {13,56,24,52,20,9};
    int count = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];

    for (int i = 0; i < count-1; i++)
    {
       int min = i; // 13
       int index = i;

       for(int j=i+1; j < count; j++)
       {
           if(arr[j] < arr[min])
           {
            min = j;
           }
       }
        //cout<< arr[min]<<endl;

       //swap(arr[min], arr[index]);
       int temp = arr[min];
       arr[min] = arr[index];
       arr[index] = temp;

    }

    // 13 46 24 52 20 9
    // 9 ->>>   9 46 24 52 20 13
    //print

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}