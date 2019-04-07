#include <iostream>
#include <vector>
#include <string>


short int count_occurences(char letter, std::string word)
{
	auto counter = 0;

	for (auto l: word){
		if (l == letter){
			counter++;
		}
	}

	return counter;

}

int main()
{
	using namespace std::string_literals;

	const auto word = "evidentemente"s;
	const auto letter = 'e';
	std::cout << "number of " << letter << " in "
	<< word << ": " << count_occurences(letter, word) << std::endl;

}