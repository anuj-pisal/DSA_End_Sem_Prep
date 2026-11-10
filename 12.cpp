#include<iostream>
using namespace std;

int smallest(int arr[], int n) {
    int min = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] < min) 
            min = arr[i];
    }
    return min;
}

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > max) 
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {32,11,5,76,23,31,89};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max : " << largest(arr, n) << endl;
    cout << "Min : " << smallest(arr, n);
    return 0;
}