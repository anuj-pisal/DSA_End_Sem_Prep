#include<iostream>
#include<map>
using namespace std;

void sort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    map<int, int> m;
    int arr[] = {1,4,5,2,3};
    int n = 5;

    for(int i=0; i<n; i++) {
        m[arr[i]] = i;
    }

    sort(arr, n);
    
    string res[n];
    int curr = 1;

    for(int i=n-1; i>=0; i--) {
        int index = m[arr[i]];
        if(curr == 1) {
            res[index] = "GOLD Medal";
        }
        else if(curr == 2) {
            res[index] = "SILVER Medal";
        }
        else if(curr == 3) {
            res[index] = "BRONZE Medal";
        }
        else {
            res[index] = to_string(curr); 
        }

        curr++;
    }

    for(string s : res) {
        cout << s << "\t";
    }

    return 0;
}