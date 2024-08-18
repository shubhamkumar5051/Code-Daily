#include<bits/stdc++.h>
using namespace std;


int count_digit(int num)
{
  int temp = num;
  int count=0;
  while (temp)
  {
    count++;
    temp = temp/10;
  }
  return count;
}

bool check_armstrong(int num, int power)
{
    int temp_num = num;

    long long int ans=0;

    while(temp_num)
    {
        int last_digit = temp_num%10;
        int cube=1;
        for (int i = 0; i < power; i++)
        {
            cube = cube*last_digit;
        }
      
        ans = ans + cube;
        temp_num= temp_num/10;
    }

    if(num == ans)
    {
        return true;
    }else{
        return false;
    }

}
int main()
{

    int num = 1634;

    int counter = count_digit(num);

    bool ans = check_armstrong(num, counter);
    
    if(ans)
    {
        cout<<"Armstrong number";
    }else{
        cout<<"not an armstrong number";
    }
    return 0;
}