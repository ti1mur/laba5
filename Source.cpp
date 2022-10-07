#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n, x, i_start, i_end, i_start_max, i_end_max, len, lenmax;
	cout << "Введите желаемое кол-во элементов: ";
	cin >> n;
	int* massiv = new int[n];
	cout << "Введите последовательность элементов: ";
	for (int i = 0; i < n; i++) {
		cin >> x;
		massiv[i] = x;
	}
	i_start = 0;
	len = 0;
	lenmax = 0;
	i_start_max = 0;
	i_end_max = 0;
	for (i_end = 0; i_end < n; i_end++) {
		len = i_end - i_start + 1;
		if (len > lenmax) {
			lenmax = len;
			i_start_max = i_start;
			i_end_max = i_end;
		}
		if (massiv[i_end] <= 0){
			len = i_end - i_start + 1;
			i_start = i_end + 1;
		}
		if ((i_end == n - 1) && (len = lenmax) && (massiv[i_end] > 0)) {
			i_end_max += 1;
		}
	}
	for (int shet = i_start_max; shet < i_end_max; shet++) {
		cout << massiv[shet] << " ";
	}
}
