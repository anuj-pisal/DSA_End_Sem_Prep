#include<iostream>
using namespace std;

int main()
{
    int arr[] = {23,22,11,54,3,24,78,99,64,84};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int target;
    cout << "Enter target : " << endl;
    cin >> target;

    for(int i=0; i<len; i++) {
        if(target == arr[i]) {
            cout << "Target is present in the Array !" << endl;
            return 1;
        }
    }    
    
    cout << "Target is not there in the Array !!" << endl;

    return 0;
}