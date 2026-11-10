#include<iostream>
using namespace std;

void display(int arr[], int len) {
    cout << "val : \t";
    for(int i=0; i<len; i++) {
        cout << arr[i] << "\t\t";
    }
    cout << endl;
}

int main()
{
    int arr[] = {32,11,5,65,97,31};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting : \n";
    display(arr, n);
    
    for(int i=0; i<n; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    cout << "\nAfter Sorting : \n";
    display(arr, n);

    return 0;
}