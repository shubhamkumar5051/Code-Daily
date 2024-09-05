#include<iostream>
using namespace std;

int main()
{
    int arr[] = {13,2,24,52,20,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i]; // 2 13 24 52 20
                          // 2 13 24 20 52

        for(int j= i-1; j>=0 ;j--)
        {
            if(temp < arr[j]) // 20 < 24
            {
                arr[j+1]= arr[j];
                arr[j] = temp;
            }
        }

       


    }

     for(auto x : arr)
        {
            cout<<x<<" ";
        }
    


    return 0;
}