#include<iostream>
using namespace std;

int main (){
       int num;
       int prod = 1;
       int sum = 0;
       cout << "Enter your number:";
       cin >> num;

       while (num != 0)
       {
        int digit = num%10;
         prod = prod * digit;
         sum = sum + digit;
         num = num / 10;
       }
       int answer = prod - sum ;
       cout << answer << endl;
    
    return 0;
}