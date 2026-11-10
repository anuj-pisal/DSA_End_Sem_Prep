#include<iostream>
#define MAX 100
using namespace std;

int fibonaccci[MAX];


int fibo(int n) {
    if(n==0) 
        return 0;
    if(n==1) 
        return 1;

    if(fibonaccci[n] != 0) {
        return fibonaccci[n];
    }

    return fibonaccci[n] = (fibo(n-1) + fibo(n-2));
}

int main() {
    int len;
    cout << "Enter len of fibo : " << endl;
    cin >> len;
    

    for(int i=0; i<len; i++) {
        cout << fibo(i) << " ";
    }

    return 0;
}