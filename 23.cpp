#include<iostream>
#include<set>
using namespace std;

bool twoSum(int arr[], int target, int n) {
    set<int> s;

    for(int i=0; i<n; i++) {
        int b = arr[i];
        if(s.count(target - b) > 0) {
            return true;
        }
        s.insert(b);
    }

    return false;
}

int main()
{
    int arr[] = {1,3,4,5,7,8,99,234};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 239;

    if(twoSum(arr, target, n)) {
        cout << "Pair Exists!";
    }
    else {
        cout << "Pair Doesn't exist !";
    }

    return 0;
}