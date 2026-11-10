#include<iostream>
using namespace std;

char findKthChar(string str, int k) {
    int len = str.length();
    if(k <= len)
        return str[k-1];
    for(int i=0; i<len; i++) {
        char ch = str[i] == 'z' ? 'a' : (char)(str[i] + 1);
        str += ch;
    }
    return findKthChar(str, k);
}

int main()
{
    int k;
    cout << "Enter k : ";
    cin >> k;
    cout << k << "th char is : " << findKthChar("a", k);
    return 0;
}