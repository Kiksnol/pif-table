#include <iostream>

//#pragma warning(disable: )

void PrintPifTable(float fst, float step, float num)
{
	char buf[100];
	float maximum = (float)(pow(fst + step * (num - 1), 2));

	sprintf_s(buf, 100, "%f", maximum);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			std::cout.width(strlen(buf) / 3);
			std::cout.precision(3);
			std::cout << (fst + step * j) * (fst + step * i) << " ";
		}
		std::cout << "\n";
	}
}

int main(void)
{
	float fst, step, n;

	std::cout << "Input first number: ";
	std::cin >> fst;

	std::cout << "Input step value: ";
	std::cin >> step;

	std::cout << "Input number of rows and columns: ";
	std::cin >> n;

	PrintPifTable(fst, step, n);
}