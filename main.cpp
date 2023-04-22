#include <iostream>
#include <string>
#include <string.h>

int IsKPeriodic(const std::string& str, int k)
{
	for (int i = 0; str.length() - k; i++)
	{
		if (str[i] == str[i + k])
		{
			std::cout << "Строка кратна К." << std::endl;
			return true;
		}
		else {
			std::cout << "Строка не кратна К." << std::endl;
			return false;
		}
	}
}

int main()
{
	setlocale(LC_ALL, ""); // Подключаем русский язык
	std::string str;

	int k;

	std::cout << "Введите вашу строку:" << std::endl;

	std::cin >> str;

	std::cout << "Введите К для проверки кратности строки:" << std::endl;

	std::cin >> k;

	IsKPeriodic(str, k); // Вывод, кратна строка или не кратна.
	
	return 0;
}
