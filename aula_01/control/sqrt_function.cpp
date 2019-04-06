#include <iostream>
#include <cmath>

double sqrt_function(double x)
{
	auto guess = 1.0;
	auto old = 0.0;

	while (guess != old){
		old = guess;
		guess = (guess + x/guess)/2;
	}

	return guess;
}

int main()
{
	auto x = 36;

	std::cout << sqrt_function(x) << "\n";
	std::cout << sqrt(x) << "\n";
}