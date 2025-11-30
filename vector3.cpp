#include <iostream>
#include <vector>

using namespace std;

class Matrix {
    int rows;
    int cols;

    vector<vector<int>> data;

public:

    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, vector<int>(cols, 0));
    }


    int getRows() const { return rows; }
    int getCols() const { return cols; }

    Matrix operator+(const Matrix& other) {

        if (rows != other.rows || cols != other.cols) {
            cout << "[Error] Dimension Mismatch for Addition!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);

        // 3. Add element by element
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }


    Matrix operator*(const Matrix& other) {
        // 1. Validation
        if (cols != other.rows) {
            cout << "[Error] Invalid Dimensions: Cols of A != Rows of B" << endl;
            return Matrix(0, 0);
        }

        // 2. Result Matrix size is (Rows of A) x (Cols of B)
        Matrix result(rows, other.cols);

        // 3. Matrix Math Logic (Row vs Column dot product)
        for (int i = 0; i < rows; i++) {              // Iterate A's rows
            for (int j = 0; j < other.cols; j++) {    // Iterate B's cols
                for (int k = 0; k < cols; k++) {      // Iterate the common dimension
                    result.data[i][j] += this->data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // --- OPERATOR == (Equality Check) ---
    // Syntax: if (A == B) ...
    bool operator==(const Matrix& other) {
        // If dimensions don't match, they can't be equal
        if (rows != other.rows || cols != other.cols) return false;

        // Check every single number
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (this->data[i][j] != other.data[i][j]) {
                    return false; // Found a mismatch
                }
            }
        }
        return true; // Everything matched
    }

    // --- FRIEND FUNCTIONS (Input/Output) ---
    // These allow us to use 'cin >> matrix' and 'cout << matrix'
    // They are 'friends' so they can access the private 'data' variable.
    
    friend istream& operator>>(istream& input, Matrix& m);
    friend ostream& operator<<(ostream& output, const Matrix& m);
};

// Definition of Input Operator (>>)
istream& operator>>(istream& input, Matrix& m) {
    cout << "Enter " << m.rows * m.cols << " values for " 
         << m.rows << "x" << m.cols << " matrix:" << endl;
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            input >> m.data[i][j];
        }
    }
    return input; // Return 'input' to allow chaining (cin >> A >> B)
}

// Definition of Output Operator (<<)
ostream& operator<<(ostream& output, const Matrix& m) {
    for (int i = 0; i < m.rows; i++) {
        output << "| "; // Cosmetic border
        for (int j = 0; j < m.cols; j++) {
            output << m.data[i][j] << "\t"; // \t is a tab space
        }
        output << "|" << endl;
    }
    return output;
}

// --- MAIN MENU PROGRAM ---
int main() {
    int r, c;

    cout << "--- Setup Matrix A ---" << endl;
    cout << "Enter Rows and Cols: "; cin >> r >> c;
    Matrix A(r, c);
    cin >> A; // Uses our overloaded >>

    cout << "\n--- Setup Matrix B ---" << endl;
    cout << "Enter Rows and Cols: "; cin >> r >> c;
    Matrix B(r, c);
    cin >> B; // Uses our overloaded >>

    int choice;
    do {
        cout << "\n=== MATRIX MENU ===" << endl;
        cout << "1. Add (A + B)" << endl;
        cout << "2. Multiply (A * B)" << endl;
        cout << "3. Check Equality (A == B)" << endl;
        cout << "4. View Matrices" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                cout << "\n[Result: Addition]" << endl;
                Matrix C = A + B; // Calls operator+
                cout << C;        // Calls operator<<
                break;
            }
            case 2: {
                cout << "\n[Result: Multiplication]" << endl;
                Matrix C = A * B; // Calls operator*
                cout << C;
                break;
            }
            case 3: {
                if (A == B) cout << "\nMatrices are EQUAL." << endl;
                else cout << "\nMatrices are DIFFERENT." << endl;
                break;
            }
            case 4: {
                cout << "\nMatrix A:" << endl << A;
                cout << "\nMatrix B:" << endl << B;
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Option!" << endl;
        }

    } while (choice != 5);

    return 0;
}