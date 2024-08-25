#include<iostream>
using namespace std;


// void print_fibonacci(int num)
// {
//    //-1 1 0 1 1 2 3 5 8 13

//    int first = -1;
//    int second = 1;
//    int third;

//    for(int i=0;i<=num;i++)
//    {
//     third = first+second;
//     cout<<third<<" ";
//     first = second;
//     second = third;
//    }
// }


int print_fibonacci(int num)
{
   //-1 1 0 1 1 2 3 5 8 13

  if(num == 0)
  {
    return 0;
  }

  return print_fibonacci(num-1) + print_fibonacci(num-2);
}


int main()
{
    int num=4;
    cout<<print_fibonacci(num);
}