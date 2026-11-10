#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    cout << "After shifting left by 1 :" << endl;
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}