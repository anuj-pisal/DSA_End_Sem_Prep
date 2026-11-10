#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,2,2,2,2,3,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i=1, j=1;
    while(j < n) {
        if(arr[j] != arr[j-1]) {
            arr[i] = arr[j];
            i++;
        }
        j++;
    }    

    while(i < n) arr[i++] = 0;

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}