#include<iostream>
using namespace std;

int main()
{
    int mat[][3] = {{34,1,4}, {3,4,2}, {3,66,4}, {23,44,32}};
    int cols = 3, rows = 4; 
    int maxCol = 0;
    int maxEven = 0;

    for(int i=0; i<rows; i++) {
        maxEven = maxEven + (mat[i][0] % 2 == 0 ? 1 : 0);
    }
    
    for(int j=1; j<cols; j++) {
        int curr = 0;
        for(int i=0; i<rows; i++) {
            curr = curr + (mat[i][j] % 2 == 0 ? 1 : 0);
        }
        if(curr > maxEven) {
            maxEven = curr;
            maxCol = j;
        }
    }

    cout << "[" << maxCol << ", " << maxEven << "]";

    return 0;
}