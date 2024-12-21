#include<iostream>
using namespace std;

int main(){
    int row,col;
    int count = 2;

   cout << "Enter the rows number: ";
   cin >> row;

   cout << "Enter the coloms number: ";
   cin >> col;

   for (int i = 1; i <= row; i++)
   {
    for (int j = 1; j <= col; j++)
    {
        cout << count << " " ;
        count = count + 2;
        
    }
         cout << endl;
   }
   
   return 0;
}