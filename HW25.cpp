//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>






int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;

	std::cout << "������� 1.\n";
	std::string str = "Hello, world!";
	std::string sym = "o";
	std::string new_str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'o')
			new_str += sym;
	}
	std::cout << new_str << "\n";


	
















	return 0;
}