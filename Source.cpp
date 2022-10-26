#include <iostream>

using namespace std;

int tr(int a, int b, int c) {
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
	int m[10] = { 1, 2, 3, 4, -5, 6, 0, 7, -1000, 10 };
	for (int i = 0; i < 8; i++) {
		for (int y = i + 1; y < 9; y++) {
			for (int x = y + 1; x < 10; x++) {
				if (tr(m[i], m[y], m[x]) == 1) {
					cout << m[i] << "  " << m[y] << "  " << m[x] << endl;
				}
			}
		}
	}
	return 0;
}
