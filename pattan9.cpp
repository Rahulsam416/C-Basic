#include<iostream>
using namespace std;

int main(){

    int row,col;
    
    cout << "Enter the rows number: ";
    cin >> row;

    cout << "Enter the coloms number: ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        { 
            cout << (char)(65+j-1) << " ";
        }
         cout <<  endl;
    }

    return 0;
}