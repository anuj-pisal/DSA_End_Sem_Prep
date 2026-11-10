#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,0,0,1,1,1,1,0,0};
    int curr = 0, m = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++) {
        if(arr[i] == 1) {
            curr++;
        }
        else {
            curr = 0;
        }
        m = max(m, curr);
    }    

    cout << "Max : " << m;
    return 0;
}