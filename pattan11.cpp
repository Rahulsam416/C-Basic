#include<iostream>
using namespace std;

int main(){

    int row,col;
    char ch = 'A';
    
    cout << "Enter the rows number: ";
    cin >> row;

    cout << "Enter the coloms number: ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        { 
            cout << ch << " ";

            if ( ch < 'Z')
            {
                ch++;
            }else
            {
              ch = 'A';
            }
            
        }
         cout <<  endl;  
    }

    return 0;
}