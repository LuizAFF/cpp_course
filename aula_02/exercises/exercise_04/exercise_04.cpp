#include <vector>
#include <iostream>
#include <string>

std::vector<int> remove_dupicates(std::vector<int> nums)
{
	auto new_str = std::vector<int>{};

	for (auto n: nums){
		if (new_str.empty()){
			new_str.push_back(n);
		}

		else if (n != new_str.back()) {
			new_str.push_back(n);
		}
	}

	return new_str;
}

int main()
{
	for (auto i: remove_dupicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
		std::cout << i << std::endl;
	}
}