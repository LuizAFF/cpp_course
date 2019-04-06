#include <iostream>
#include <vector>

namespace vectors {

void zero_all(std::vector<int>& v)	{
	for (auto& i : v)	{
		i = 0;
	}
}

}


int main()
{

	auto v = std::vector<int>{4, 3, 124, 5};

	std::cout << "Before:" << std::endl;

	for (auto i: v)	{
		std::cout << i << std::endl;
	}
	vectors::zero_all(v);

	std::cout << "\nAfter: " << std::endl;

	for (auto i: v)	{
		std::cout << i << std::endl;
	}

}