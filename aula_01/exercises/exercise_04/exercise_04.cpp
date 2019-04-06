#include <iostream>
#include <string>

// implemente sua função aqui

std::string check_palindrome(std::string word)
{
	//using namespace std::string_literals;

	for ( auto i = 0; i < word.size() / 2; ++i)
	{

		if (word[i] != word[word.size() - 1 - i])
		{
			return("not a palindrome\n");
		}


	}

	return("a palindrome\n");

}


int main()
{
    using namespace std::string_literals;

    std::cout << "arara is "s << check_palindrome("arara"s);
    std::cout << "banana is "s << check_palindrome("banana"s);
}
