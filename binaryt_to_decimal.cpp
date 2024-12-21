#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    int ans = 0;
    int i = 0;

    cout << "Enter your bits:";
    cin >> num;

    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans + pow(2,i);
        }
        num = num / 10;
        i++;
    }
    cout << "Answer is:" << ans << endl;

    return 0;
}
