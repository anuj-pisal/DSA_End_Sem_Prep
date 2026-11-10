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
    
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        } 
        arr[j+1] = temp;
    }

    cout << "\nAfter Sorting : \n";
    display(arr, n);

    return 0;
}