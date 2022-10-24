//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>

bool is_palindrom(std::string str) {
	int len = str.length();
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) 
			return false;
		
	}
	return true;
}

void to_lower(std::string& str) {     
	for (int i = 0; i < str.length();i++)
		str[i] = tolower(str[i]);
}

int count_sym(std::string str) {
	int counter = 0;
	
	
	getline(std::cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			counter++;
	}
	return counter;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;

	std::cout << "Task 1.\n";
	std::string str = "Hello, world!";
	std::string sym = "o";
	std::string new_str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'o')
			new_str += sym;
	}
	std::cout << new_str << "\n";


	std::cout << "Task 2.\n";
	std::string palindrom;
	std::cout << "������� �����: \n";
	std::cin >> palindrom;
	to_lower(palindrom);
	
	if (is_palindrom(palindrom))
		std::cout << "��������� ����� " << palindrom << " - ���������" << ".\n";
	else
		std::cout << "��������� ����� " << palindrom << " �� ���������" << ".\n";


	std::cout << "Tasl 3.\n";
	std::string str1;
	std:: cout << "������� ����� � ���������: ";
	
	std::cin >> str1;
	
	std::cout << "���������� �� ��������� �������� � ����� �����: " << count_sym(str1) << ".\n";
















	return 0;
}