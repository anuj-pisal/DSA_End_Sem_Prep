#include<iostream>
using namespace std;

bool isSorted(int arr[], int len) {
    for(int i=0; i<len-1; i++) {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int a[] = {3,23,56,88,98};
    int size_a = sizeof(a) / sizeof(a[0]);

    int b[] = {32,5,11,23,7};
    int size_b = sizeof(b) / sizeof(b[0]);

    cout << "a is sorted ? --> " << (isSorted(a, size_a) ? "YES" : "NO") << endl;
    cout << "b is sorted ? --> " << (isSorted(b, size_b) ? "YES" : "NO");

    return 0;
}