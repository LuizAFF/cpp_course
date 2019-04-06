#include <iostream>
#include <vectors>

int main()
{

	auto v = std::vector<int>{1, 2, 3, 4};	
	auto w = std::vector<int>{4, 3, 2, 1};

	std::cout << "v[0] = " << v[0] << ", w[2] = " << w[2] << "\n";
	std::cout << "v.size() = " << v.size() << "\n";
	std::cout << "v.front() = " << v.front() << "\n";
	std::cout << "v.back() = " << v.back() << "\n";

	v[1] = 42;

	

	std::vector<int> q = {};

	std::cout << "q.empty() = " << q.empty << "\n";

	if (q.empty()) {
		std::cout << "q is empty\n";

	} else {

	}
	
}