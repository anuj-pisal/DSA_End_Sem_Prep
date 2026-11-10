#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 9, 10, 14, 19, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n-1;
    int target;

    cout << "Enter target : ";
    cin >> target;

    while(l <= h) {
        int mid = l + (h-l) / 2;
        if(arr[mid] == target) {
            cout << "Target is found in Array !" << endl;
            return 1;
        }
        else if(arr[mid] < target) {
            l = mid+1;
        }
        else {
            h = mid-1;
        }
    }

    cout << "Target is not present in the array !!" << endl;

    return 0;
}