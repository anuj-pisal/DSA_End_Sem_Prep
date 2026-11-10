#include<iostream>
using namespace std;

int trailingZeros(int n) {
    if(n < 5) 
        return 0;
    return (n/5) + trailingZeros(n/5);
}

int main()
{
    int n;
    cout << "Enter n : " << endl;
    cin >> n;
    cout << "No. of trailing zeros of " << n << "! is : " << trailingZeros(n) << endl;
    return 0;
}