#include<iostream>
using namespace std;

int main()
{
    int mat[][3] = {{2,5,1}, {4,1,13}, {3,67,9}};
    int rows = 3, cols = 3;
    int target = 3;
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(mat[i][j] == target) {
                cout << "Target is in matrix !!" << endl;
                return 2;
            }
        }
    }

    cout << "Target is not there in matrix !" << endl;

    return 0;
}