#include<iostream>
using namespace std;

int main(){

    int row,col;
    
    cout << "Enter the rows number: ";
    cin >> row;

    cout << "Enter the coloms number: ";
    cin >> col;

    for (int i = row; i >= 1; i--)
    {
        for (int j = col; j >= i; j--)
        { 
            cout << j << " ";
        }
         cout <<  endl;
    }

    return 0;
}