//Этот проект создан с помощью классического шаблона
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
	char arr[5]{ ' ', '.', ',', '!', '?' };
	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < 5; j++)
			if (str[i] == arr[j])
				counter++;
	return counter;
}


char find(std::string str, char x) {
	char a;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != x)
			a = '!';
		return a;
	}	
	int m = str.rfind(x);
	str.substr(m);

	for (int i = str.rfind(x); i < str.length(); i++) {
		std::string ret;
		std::cout << str[i];
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");


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
	std::cout << "Введите слово: \n";
	std::cin >> palindrom;
	to_lower(palindrom);
	
	if (is_palindrom(palindrom))
		std::cout << "Введенное слово " << palindrom << " - палиндром" << ".\n";
	else
		std::cout << "Введенное слово " << palindrom << " не палиндром" << ".\n";


	std::cout << "Task 3.\n";
	std::string str1;
	std:: cout << "Введите фразу с символами: ";
	
	std::cin >> str1;
	
	std::cout << "Количество не буквенных символов в фразе равно: " << count_sym(str1) << ".\n";

	

	std::cout << "Task 4.\n";
	std::string str2 = "Hello world!";
	char sym2 = 'o';
	std::cout << find(str2, sym2);












	return 0;
}