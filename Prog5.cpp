#include<iostream>
using namespace std;

int main(){

    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int k = 5 ; k >= i ; k--)
        {
            cout<<"  ";
        }
        for(int j = 6 - i ; j <= 5  ; j++)
        {
            cout<<j<<" ";
        }
        for(int j = 4 ; j >= 6 - i  ; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
