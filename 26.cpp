#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int arr1[] = {2,4,1,5,2};
    int arr2[] = {2,1,3,9,2};
    unordered_map<int, int> map;

    for(int i : arr1) {
        if(map.count(i) == 0) {
            map[i] = 1;
        }
    }

    for(int i : arr2) {
        map[i] = map[i] + 1;
    }

    cout << "Intersected values : ";
    for(auto pair : map) {
        if(pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    
    return 0;
}