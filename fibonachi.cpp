#include<iostream>
using namespace std;

int main(){

    int n;
    int num1 = 0;
    int num2 = 1;
    int num3;
    cout << "Enter your nunmber: ";
    cin >> n;
    cout << num1 << " " << num2 << " ";
     for (int i = 1; i <= n; i++)
    {
      num3 = num1 + num2;
      cout << num3 << " ";
      num1 = num2;
      num2 = num3;

    }

    return 0;
}