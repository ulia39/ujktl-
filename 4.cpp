#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n;
	int i;
	int c;
	cout << "Введите число: ";
	cin >> n;
	for (i = 1; 10; i++) {
		cout << "Решите пример: " << n << "X" << i << endl << "Ответ: ";
		cin >> c;}
		if (c == n * i) {
			cout << "Пример решен правильно!" << endl;
		}
		else {
			cout << "Ошибка, пример решен неверно!";
			break;
		}

	}


	return 0;
}
