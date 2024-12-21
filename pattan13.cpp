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
        for (int j = col; j <= i; j++)
        { 
            int n = (j * 2);
            n++;
            cout << n << " ";
        }
         cout <<  endl;
    }

    return 0;
}