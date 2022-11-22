#include <iostream>

using namespace std;

char* concatenation(const char* string1, const char* string2) {
	long long int lengh1 = 0, lengh2 = 0;
	int i = 0;
	while (string1[i] != '\0') {
		lengh1++;
		i++;
	}
	i = 0;
	while (string2[i] != '\0') {
		lengh2++;
		i++;
	}
	 long long int lengh = lengh1 + lengh2;
	char* result = new char[lengh + 1];
	for (int i = 0; i < lengh1; i++) {
		result[i] = string1[i];
	}
	for (int i = lengh1; i < lengh; i++) {
		result[i] = string2[i-lengh1];
	}
	result[lengh] = '\0';
	return result;
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Ведены строки: Hello, World" << endl;;
	char* s = concatenation("Hello", "World");
	int i = 0;
	cout << "Результат: ";
	while (s[i] != '\0') {
		cout << s[i];
		i++;
	}
	return 0;
}
