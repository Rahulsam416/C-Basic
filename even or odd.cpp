#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter an integer:" << endl;
    cin >> num;
    
    if (num%2==0)
    {
        cout << "Number is even" << endl;
    }
    else
    cout << "Number is odd" << endl;

    return 0;
    
}
