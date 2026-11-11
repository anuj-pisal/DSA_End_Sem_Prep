#include<iostream>
using namespace std;

int main()
{
    int mat[][3] = {{0,0,0}, {1,0,1}, {1,1,1}};
    int rows = sizeof(mat) / sizeof(mat[0]);
    int cols = sizeof(mat[0]) / sizeof(mat[0][0]);

    int maxRow = 0, count = 0;
    for(int j=0; j<cols; j++) {
        count += mat[0][j];
    }   

    for(int i=1; i<rows; i++) {
        int curr = 0;
        for(int j=0; j<cols; j++) {
            curr += mat[i][j];
        }
        if(curr > count) {
            count = curr;
            maxRow = i;
        }
    }

    cout << "[" << maxRow << ", " << count << "]";
    
    return 0;
}