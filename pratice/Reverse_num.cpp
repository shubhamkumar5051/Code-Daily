#include<bits/stdc++.h>

using namespace std;


void print_array(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// using extra space
void reverse_array(int arr[], int size)
{
   int temp_array[size];

   for(int i=size; i > 0; i--)
   {
        temp_array[size - i] = arr[i-1];
   }
   print_array(temp_array, size);
   
}

//using two pointer
void reverse_array1(int arr[], int size)
{
    int i=0;
    int j= size-1;

    while(i<j)
    {
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    print_array(arr, size);
}

//using recurssion

void
int main()
{
    int n = 5;
    int arr[] = {5,4,3,2,1};

    //reverse_array(arr, n);
    //print_array(arr,n);
    reverse_array1(arr, n);
    return 0;
}