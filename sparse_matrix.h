#ifndef SPARSE_MATRIX_HPP
#define SPARSE_MATRIX_HPP

#include <ostream>
template <typename T>
class Matrix {
  private:
    T **matrix;
    int m;
    int n;
    Matrix();
  public:
    Matrix(int m, int n);
    ~Matrix();
    Matrix(const Matrix& m);
    bool operator=(const Matrix& m);
    Matrix operator*(const Matrix& b);
    friend std::ostream& operator<<(std::ostream& os, Matrix& m);
};

#endif // !SPARSE_MATRIX_HPP
