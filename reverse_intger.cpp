#include<iostream>
using namespace std;

int main(){
    int num;
   int reverse = 0;

   cout << "Enter your intger: ";
   cin >> num;

   while (num != 0)
   {
    int last_number = num % 10;
    reverse = (reverse * 10)+last_number;
    num = num / 10;
   }
   cout << "The reverse intger is: " << reverse << endl;

      return 0;
}