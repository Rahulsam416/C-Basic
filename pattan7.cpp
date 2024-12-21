#include<iostream>
using namespace std;

int main(){

    int row,col,count;
    
    cout << "Enter the rows number: ";
    cin >> row;

    cout << "Enter the coloms number: ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        { 
            count = i+j-1;
            cout << count <<" ";
        }
         cout <<  endl;
    }

    return 0;
}