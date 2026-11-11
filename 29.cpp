#include<iostream>
using namespace std;

int main()
{
    int mat[][3] = {{34,1,4}, {3,4,2}, {3,66,4}, {23,44,32}};
    int cols = 3, rows = 4; 
    int maxRow = 0;
    int maxSum = 0;

    for(int j=0; j<cols; j++) {
        maxSum += mat[0][j];
    }    

    for(int i=1; i<rows; i++) {
        int curr = 0;
        for(int j=0; j<cols; j++) {
            curr += mat[i][j];
        }
        if(curr > maxSum) {
            maxSum = curr;
            maxRow = i;
        }
    }

    cout << "[" << maxRow << ", " << maxSum << "]";
    
    return 0;
}