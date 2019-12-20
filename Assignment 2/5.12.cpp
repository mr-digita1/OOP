#include<iostream>
using namespace std;
int main()
{
    int product=1;
    for(int i=3;i<=50;i++)
    {
        if(i%3==0)
        {
            product=product*i;
        }
    }
    cout<<product;
    return 0;
}
