//prime number :- the number which has exactly two factors
// 1 and number itself

#include<iostream>
using namespace std;

bool check_prime(int num)
{

    bool ans=false;
    int count=0;

    if(num==1)
    {
        return false;
    }

    for(int i=1; i*i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
            if(num%(num/i)==0 && num/i!=i)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    if(count==2)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int num=36;

    bool ans=check_prime(num);
    if(ans)
    {
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}

// 36 
// 1*36
// 2*18
// 3*12
// 4*9
// 6*6
// 