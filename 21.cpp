#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int actualSum = 0;
    int expSum = n * (n+1) / 2;
    
    for(int x : arr) {
        actualSum += x;
    }
    
    cout << "Missing number : " << (expSum - actualSum);

    return 0;
}