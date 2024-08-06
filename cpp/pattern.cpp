#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int largest = INT_MIN;
    int sec_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }else{
            if(arr[i]!= largest)
            {
                if(arr[i]>sec_largest){
                    sec_largest = arr[i];
                }
            }
        }
    }

    cout <<"largest : "<<largest <<"  "<<"2nd largest "<<sec_largest<<endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 67, 67};
    int len = sizeof(arr) / sizeof(arr[0]);

    solve(arr, len);
    return 0;
}