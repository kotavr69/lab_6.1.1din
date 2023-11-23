/*Вариант 11
В заданиях на формирование матрицы предполагается,
что размер результирующей матрицы не превосходит 10×10.
Дана матрица размера M × N. Вывести ее элементы в следующем
порядке: первая строка слева направо, вторая строка справа налево, третья
строка слева направо, четвертая строка справа налево и т. д.
*/
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	size_t m, n;

	cout << "Введите размер матрицы m x n (m и n не больше 10)" << endl;
	cin >> m >> n;
	size_t** arr = new size_t* [m];

	for (int i = 0; i < n; i++) {
		arr[i] = new size_t[n];
	}

	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			cout << "Введите элемент: ";
			cin >> arr[i][j];
		}
	}

	for (size_t i = 0; i < m; i++) {
		if (i % 2 != 0) {
			for (size_t j = n - 1; j > 0; j--) {
				cout << arr[i][j] << "\t";
			}
			cout << arr[i][0];
		}
		else {
			for (size_t j = 0; j < n; j++) {
				cout << arr[i][j] << "\t";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	cout << endl;
	return 0;
}
