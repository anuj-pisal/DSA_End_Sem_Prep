#include<iostream>
using namespace std;

bool isPowerofTwo(int n) {
    if(n==1)
        return true;
    if(n%2 == 1)
        return false;
    return isPowerofTwo(n/2);
}

bool isPowerOfTwoBitwise(int n) {
    return (n & (n>>1)) == 0;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    if(isPowerofTwo(n)) {
        cout << "It is a power of two !" << endl;
    }
    else {
        cout << "It is not a power of 2 !!" << endl;
    }

    if(isPowerOfTwoBitwise(n)) {
        cout << "It is a power of two !" << endl;
    }
    else {
        cout << "It is not a power of 2 !!" << endl;
    }

    return 0;
}