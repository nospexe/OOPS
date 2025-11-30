#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    int rows, cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, vector<int>(c, 0));
    }

    // Operator + (Addition)
    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "[Error] Dimension mismatch!" << endl;
            return Matrix(0, 0);
        }
        Matrix res(rows, cols);
        for (int i=0; i<rows; i++)
            for (int j=0; j<cols; j++)
                res.data[i][j] = data[i][j] + other.data[i][j];
        return res;
    }

    // Operator * (Multiplication)
    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            cout << "[Error] Invalid dimensions (Cols A != Rows B)." << endl;
            return Matrix(0, 0);
        }
        Matrix res(rows, other.cols);
        for (int i=0; i<rows; i++) {
            for (int j=0; j<other.cols; j++) {
                for (int k=0; k<cols; k++) {
                    res.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return res;
    }

    // Operator == (Equality)
    bool operator==(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) return false;
        return data == other.data; // Vector supports automatic deep comparison
    }

    // Friend Functions for I/O
    friend ostream& operator<<(ostream& os, const Matrix& m) {
        for (const auto& row : m.data) {
            os << "| ";
            for (int val : row) os << val << " ";
            os << "|" << endl;
        }
        return os;
    }

    friend istream& operator>>(istream& is, Matrix& m) {
        cout << "Enter " << m.rows * m.cols << " values: ";
        for (int i=0; i<m.rows; i++)
            for (int j=0; j<m.cols; j++)
                is >> m.data[i][j];
        return is;
    }
};

int main() {
    int r, c;
    cout << "Matrix A (rows cols): "; cin >> r >> c;
    Matrix A(r, c); cin >> A;

    cout << "Matrix B (rows cols): "; cin >> r >> c;
    Matrix B(r, c); cin >> B;

    int choice;
    do {
        cout << "\n1. Add\n2. Multiply\n3. Check Equal\n4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) { Matrix S = A + B; cout << "Sum:\n" << S; }
        else if (choice == 2) { Matrix P = A * B; cout << "Product:\n" << P; }
        else if (choice == 3) cout << (A == B ? "Equal" : "Not Equal") << endl;
    } while (choice != 4);

    return 0;
}