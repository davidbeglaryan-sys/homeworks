#include <iostream>
#include <string>
#include <iomanip>

template<class T, int n, int m>

class Matrix{
  
private:
    T matrix[n][m];
    
public:
    Matrix(){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j] = T();
            }
        }
    }
   
   
   void SetMatrix(int row, int col, T value){
       if(row>=0 && row < n && col>=0 && col < m ){
           matrix[row][col] = value;
       }
   }
   
   T GetMatrix(int row, int col){
       if(row>=0 && row < n && col>=0 && col < m ){
           return matrix[row][col];
       }
   }

   void print() const {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << std::setw(6) << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    
    Matrix<T, n, m> operator+(const Matrix<T, n, m>& other) const {
        Matrix<T, n, m> result;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                result.matrix[i][j] = this->matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
    
};




int main(){
   Matrix<int, 2, 3> m1, m2;
    m1.SetMatrix(0, 0, 1); m1.SetMatrix(0, 1, 2); m1.SetMatrix(0, 2, 3);
    m1.SetMatrix(1, 0, 4); m1.SetMatrix(1, 1, 5); m1.SetMatrix(1, 2, 6);

    m2.SetMatrix(0, 0, 10); m2.SetMatrix(0, 1, 20); m2.SetMatrix(0, 2, 30);
    m2.SetMatrix(1, 0, 40); m2.SetMatrix(1, 1, 50); m2.SetMatrix(1, 2, 60);

    std::cout << "Матрица 1 (int):" << std::endl;
    m1.print();
    std::cout << "Матрица 2 (int):" << std::endl;
    m2.print();

    auto m3 = m1 + m2;
    std::cout << "Сумма (int):" << std::endl;
    m3.print();

   

}