#include <iostream>

using namespace std;

int triangle(int a, int b, int c) {
	if ((a > 0) && (b > 0) && (c > 0)) {
		if ((a < b + c) && (b < c + a) && (c < a + b)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}
int main() {
	int m[10] = { 1, 2, 3, 4, -5, 6, 0, 7, -1000, 10};
	for (int shet1 = 0; shet1 < sizeof(m)/4 - 2; shet1++) {
		for (int shet2 = shet1 + 1; shet2 < sizeof(m) / 4 - 1; shet2++) {
			for (int shet3 = shet2 + 1; shet3 < sizeof(m) / 4 ; shet3++) {
				if (triangle(m[shet1], m[shet2], m[shet3]) == 1) {
					cout << m[shet1] << "  " << m[shet2] << "  " << m[shet3] << endl;
				}
			}
		}
	}
	return 0;
}
