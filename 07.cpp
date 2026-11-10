#include<iostream>
using namespace std;

void display(int arr[], int len) {
    cout << "Index : \t";
    for(int i=0; i<len; i++) {
        cout << i << "\t\t";
    }
    cout << "\nAddress : \t";
    for(int i=0; i<len; i++) {
        cout << (arr + i) << "\t";
    }
    cout << "\narr[i] : \t";
    for(int i=0; i<len; i++) {
        cout << arr[i] << "\t\t";
    }
}
 
int main()
{
    int len;
    cout << "Enter len : ";
    cin >> len;
    
    int arr[len];
    cout << "Enter elements : \n";

    for(int i=0; i<len; i++) {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }

    display(arr, len);

}