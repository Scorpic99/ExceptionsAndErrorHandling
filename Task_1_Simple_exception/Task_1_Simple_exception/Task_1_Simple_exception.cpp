#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length)
		throw "Вы ввели слово запретной длины! До свидания";
	return str.length()	;

}

double Sqrt(double x) {
	if (x < 0) throw "x is negative";
	else
		return sqrt(x);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int forbidden_length = 0, result;
	std::string justText = "eerteg";
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (true)
	{
		std::cout << "Введите слово: ";
		std::cin >> justText;
		//int A = justText.length();
		//double x = -16; double result = 0;
		//std::cerr << A << std::endl;


		try
		{
			result = function(justText, forbidden_length);
			std::cout << "Длина слова \"" << justText << "\" равна " << result << std::endl;

		}
		catch (const char* err)
		{
			std::cerr << err << std::endl;

		}
	}


}

