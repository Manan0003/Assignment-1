#include <iostream>
using namespace std;
int main() {
 int size;
 cout << "Enter the size of the array: ";
 while (!(cin >> size) || size <= 0) {
 cin.clear();
 cin.ignore(10000, '\n');
 cout << "Invalid size! Enter again: ";
 }
 int arr[size];
 cout << "Enter the elements: ";
 for (int i = 0; i < size; i++) {
 while (!(cin >> arr[i])) {
 cin.clear();
 cin.ignore(10000, '\n');
 cout << "Invalid input! Enter again: ";
 }
 }
 int start = 0, end = size - 1;
 while (start < end) {
 int temp = arr[start];
 arr[start] = arr[end];
 arr[end] = temp;
 start++;
 end--;
 }
 cout << "Reversed array: ";
 for (int i = 0; i < size; i++) cout << arr[i] << " ";
 cout << endl;
 return 0;
}

//(B)
#include <iostream>
using namespace std;
int main() {
 int row1, col1, row2, col2;
 cin >> row1 >> col1;
 cin >> row2 >> col2;
 if (col1 != row2) {
 cout << "Multiplication not possible";
 return 0;
 }
 int mat1[100][100], mat2[100][100], mat3[100][100];
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col1; j++) {
 cin >> mat1[i][j];
 }
 }
 for (int i = 0; i < row2; i++) {
 for (int j = 0; j < col2; j++) {
 cin >> mat2[i][j];
 }
 }
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col2; j++) {
 mat3[i][j] = 0;
 for (int k = 0; k < col1; k++) {
 mat3[i][j] += mat1[i][k] * mat2[k][j];
 }
 }
 }
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col2; j++) {
 cout << mat3[i][j] << " ";
 }
 cout << "\n";
 }
 return 0;
}
//(C)
#include <iostream>
using namespace std;
int main() {
 int rows, cols;
 cout << "Enter rows and columns: ";
 cin >> rows >> cols;
 int mat[100][100];
 cout << "Enter matrix elements:\n";
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 cin >> mat[i][j];
 }
 }
 cout << "Transpose of the matrix:\n";
 for (int i = 0; i < cols; i++) {
 for (int j = 0; j < rows; j++) {
 cout << mat[j][i] << " ";
 }
 cout << "\n";
 }
 return 0;
}