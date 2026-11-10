#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h) {
    int temp[h-l+1];
    int i=l, j=mid+1, k=0;

    while(i<=mid && j <= h) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid) {
        temp[k++] = arr[i++];
    }

    while(j <= h) {
        temp[k++] = arr[j++];
    }

    for(int x=0; x<(h-l+1); x++) {
        arr[l + x] = temp[x];
    }
}

void mergeSort(int arr[], int l, int h) {
    if(l < h) {
        int mid = l + (h-l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
}

int main()
{
    int arr[] = {21,4,6,85,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n-1;

    mergeSort(arr, l, h);
    cout << "Sorted Array :\n";
    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}