#include<iostream>
using namespace std;

void secLargest(int arr[], int n) {
    int largest = max(arr[0], arr[1]);
    int sec_largest = min(arr[0], arr[1]);

    for(int i=2; i<n; i++) {
        if(arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    cout << "Second Largest : " << sec_largest;
}

void secSmallest(int arr[], int n) {
    int smallest = min(arr[0], arr[1]);
    int sec_smallest = max(arr[0], arr[1]);

    for(int i=2; i<n; i++) {
        if(arr[i] < smallest) {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < sec_smallest && arr[i] != smallest) {
            sec_smallest = arr[i];
        }
    }

    cout << "Second Largest : " << sec_smallest;
}

int main()
{
    int arr[] = {21,44,7,2,24,78,56};
    int n = sizeof(arr) / sizeof(arr[0]);

    secLargest(arr, n);
    cout << endl;
    secSmallest(arr, n);

    return 0;
}