#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    int ans = 0;
    int i = 0;

    cout << "Enter your number:";
    cin >> num;

    while (num != 0)
    {
        int bit = num & 1;
        ans = (bit * pow(10,i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << "Answer is:" << ans << endl;

    return 0;
}
