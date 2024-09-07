#include<iostream>
using namespace std;

int main()
{
    int arr[] = {13,2,24,52,20,9,1,998,234,0,-1};
    int arr1[] = {13,2,24,52,20,9};
    int count = sizeof(arr)/sizeof(arr[0]);


    //selection sort
    //what we select ? the smallest number and put them at start

    // for (int i = 0; i < count-1; i++)
    // {
    //     int min_index = i;

    //     for (int j = i+1; j < count; j++)
    //     {
    //         if(arr[j] < arr[min_index])
    //         {
    //             min_index = j;
    //         }
    //     }

    //     int temp = arr[i];
    //     arr[i] = arr[min_index];
    //     arr[min_index] = temp;
    // }






    // bubble sort
    // push the maximum to last by adjacent swaps

    // for (int i = 0; i < count-1; i++)
    // {
    //     for (int j = 0; j < count-i-1; j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
        
    // }
    



    // insertion sort
    // take every element and put it in correct order

    //int arr2[] = {13,2,24,52,10,9};
    for (int i = 1; i < count; i++)
    {
        int element = arr[i];
          for (int j = i-1; j >=0 ; j--)
          {
            if(arr[j] > element)
            {
                arr[j+1] = arr[j];
                arr[j] = element;
            }
          }
          
    }
    
    // 13 2 24 52 10 9
    // 2 13 24 52 10 9
    for(auto x : arr)
    {
            cout<<x<<" ";
    }
    


    return 0;
}