#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,0,2,4,0,1,5,0,0};
    int i=0, j=0;
    int n = sizeof(arr) / sizeof(arr[0]);

    while(j < n) {
        if(arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
    
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}