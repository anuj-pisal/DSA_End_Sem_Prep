#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    for(int i=digits.size()-1; i>=0; i--) {
        int sum = digits.at(i) + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
        if(carry == 0) break;
    }

    if(carry == 1) {
        digits.insert(digits.begin() + 0, 1);
    }

    return digits;
}

int main()
{
    vector<int> d;
    d.push_back(9);
    d.push_back(9);
    d.push_back(9);
    d = plusOne(d);

    for(int val : d) 
        cout << val;

    return 0;
}