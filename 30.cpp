#include<iostream>
using namespace std;

int main()
{
    int mat[][3] = {{34,1,4}, {3,4,2}, {3,66,4}, {23,44,32}};
    int cols = 3, rows = 4; 
    int maxCol = 0;
    int maxSum = 0;

    for(int i=0; i<rows; i++) {
        maxSum += mat[i][0];
    }
    
    for(int j=1; j<cols; j++) {
        int curr = 0;
        for(int i=0; i<rows; i++) {
            curr += mat[i][j];
        }
        if(curr > maxSum) {
            maxSum = curr;
            maxCol = j;
        }
    }

    cout << "[" << maxCol << ", " << maxSum << "]";

    return 0;
}