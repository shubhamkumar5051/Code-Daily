#include<iostream>
using namespace std;


void print_fibonacci(int num)
{
   //-1 1 0 1 1 2 3 5 8 13

   int first = -1;
   int second = 1;
   int third;

   for(int i=0;i<=num;i++)
   {
    third = first+second;
    cout<<third<<" ";
    first = second;
    second = third;
   }
}


int main()
{
    int num=15;
    print_fibonacci(num);
}