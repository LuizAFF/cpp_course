#include <iostream>

//por que acusa warning nos autos da função swap?

void swap(auto& a, auto& b)
{
	auto c = a;
	a = b;
	b = c;

}

int main()
{
    auto i = 2, j = 3;
    swap(i, j);
    std::cout << i << "\n"; // deve imprimir 3
    std::cout << j << "\n"; // deve imprimir 2
}
