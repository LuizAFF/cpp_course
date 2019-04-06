#include <iostream>
#include <vector>

void fib_up_to(unsigned short n)
{
	auto f1 = 0;
	auto f2 = 1;

	for (auto i = 0; i <= n; ++i)
	{
		std::cout << f1 << "\n";

		auto aux = f1 + f2;
		f1 = f2;
		f2 = aux;

	}

}

void fib_less_than_or_eq(unsigned short n)
{
	auto f1 = 0;
	auto f2 = 1;

	while (f1 <= n)
	{
		std::cout << f1 << "\n";

		auto aux = f1 + f2;
		f1 = f2;
		f2 = aux;

	}

}

int main()
{
	fib_up_to(10);
	fib_less_than_or_eq(1024);

}