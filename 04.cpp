#include<iostream>
using namespace std;

int isPowerOf4(int n) {
    if(n==1)
        return true;
    if(n%4 != 0) 
        return false;
    return isPowerOf4(n/4);
}

int main()
{
    int n ;
    cout << "Enter a number : " << endl;
    cin >> n;

    isPowerOf4(n) ?
        cout << "It is a power of 4 !!" :
        cout << "It is not a power of 4 !";

    return 0;
}