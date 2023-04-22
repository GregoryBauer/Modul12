#include <iostream>
#include <string>
#include <string.h>

int IsKPeriodic(const std::string& str, int K)
{
	for (int i = 0; str.length() - K; i++)
	{
		if (str[i] == str[i + K])
		{
			std::cout << "Строка кратна К" << std::endl;
			return true;
		}
		else {
			std::cout << "Строка не кратна К" << std::endl;
			return false;
		}
	}
}

int main()
{
	setlocale(LC_ALL, ""); // Подключаем русский язык
	std::string str;

	int K;

	std::cout << "Введите вашу строку" << std::endl;

	std::cin >> str;

	std::cout << "Введите К для проверки строки" << std::endl;

	std::cin >> K;

	IsKPeriodic(str, K); // Вывод, кратна строка или не кратна.
	
	return 0;
}
