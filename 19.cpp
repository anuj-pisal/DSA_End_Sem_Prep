#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,3,2,3,2,2,3,3,3};
    int cand = arr[0];
    int votes = 1;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<n; i++) {
        if(arr[i] == cand) {
            votes++;
        }
        else {
            votes--;
        }
        if(votes < 0) {
            votes = 1;
            cand = arr[i];
        }
    }

    cout << "Candidate with more than n/2 votes : " << cand;
    return 0;
}