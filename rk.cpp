#include <iostream>
#include <cmath>

int main()
{
	auto f = [](int n) -> double
	{
		return std::exp(-n);
	};
	double sum = f(1);
	std::cout << "First five elements: " << sum;
	for (int n = 2; n <= 5; n++)
	{
		double r = f(n);
		sum += r;
		std::cout << ", " << r;
	}
	std::cout << "\nSum of first five elements: " << sum << std::endl;
	return 0;
}