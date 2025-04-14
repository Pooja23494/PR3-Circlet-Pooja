#include<iostream>
using namespace std;

int main()
{
    int k=11;
    for(int i = 11 ; i <= 14 ; i++)
    {
        for(int j = 11 ; j <= i ; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

 