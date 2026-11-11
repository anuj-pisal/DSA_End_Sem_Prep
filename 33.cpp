#include<iostream>
using namespace std;

// searching in O(log(n*m))

int main()
{
    int mat[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = 4;
    int i = 0, j = (n*n) - 1;
    int target = 11;

    while(i <= j) {
        int mid = (i + j) / 2;
        int row = mid / n;
        int col = mid % n;
        if(mat[row][col] == target) {
            cout << "Target is in the matrix at [" << row << ", " << col << "]" << endl;
            return 1;
        }
        else if(target < mat[row][col]) {
            j = mid - 1;
        }
        else {
            i = mid+1;
        }
    }

    cout << "Target is not there in matrix !" << endl;

    return 0;
}