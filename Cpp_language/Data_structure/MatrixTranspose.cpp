#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << ("Enter no. of rows: ");
    cin >> rows;
    cout << ("Enter no. of columns: ");
    cin >> cols;

    int A[10][10], T[10][10]; //A = original, T = transpose

    //input
    cout << ("Enter elements of matrix: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> A[i][j]; 
        }
    }

    //transpose
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            T[j][i] = A[i][j]; //logic
        }
    }

    //Display Original
    cout << ("\nOriginal Matrix: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    //Display Transpose
    cout << ("\nTranspose Matrix: \n");
     for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}