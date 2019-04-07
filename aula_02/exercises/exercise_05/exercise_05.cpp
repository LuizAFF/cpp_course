#include <vector>
#include <iostream>
#include <string>

void remove_duplicates(std::vector<int>& nums)
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

	nums = new_str;
}

int main()
{
    auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

    remove_duplicates(ints);

    for (auto i: ints) {
        std::cout << i << '\n';
    }
}
