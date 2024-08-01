#include <iostream>
#include <vector>
using namespace std;
void readMatrix(int rows, int cols, vector<vector<int>>& matrix) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        vector<int> row;
        for (int j = 0; j < cols; j++) {
            int element;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
}
vector<vector<int>> transposeMatrix(int rows, int cols, const vector<vector<int>>& matrix) {
    vector<vector<int>> transposed(cols, vector<int>(rows));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}
void printMatrix(int rows, int cols, const vector<vector<int>>& matrix) {
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    vector<vector<int>> matrix;
    readMatrix(rows, cols, matrix);
    vector<vector<int>> transposedMatrix = transposeMatrix(rows, cols, matrix);
    printMatrix(cols, rows, transposedMatrix);
    return 0;
}

