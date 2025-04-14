#include<iostream>
using namespace std;

int main(){

    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int k = i - 1 ; k >= 1  ; k--)
        {
            cout<<"  ";
        }
        for(int j = 1 ; j <= 6-i  ; j++)
        {
            j%2==0
                ? cout<<"0 "
                : cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}
